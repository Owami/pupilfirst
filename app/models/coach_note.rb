class CoachNote < ApplicationRecord
  belongs_to :author, class_name: 'User', optional: true
  belongs_to :student, class_name: 'Founder'

  validates :note, presence: true
end
