type t = {
  id: int,
  name: string,
};

let decode = json =>
  Json.Decode.{
    id: json |> field("id", int),
    name: json |> field("name", string),
  };

let id = t => t.id;

let name = t => t.name;