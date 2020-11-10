#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {
class yearLength {
public:
  static constexpr double mercury = 0.2408467;
  static constexpr double venus = 0.61519726;
  static constexpr double mars = 1.8808158;
  static constexpr double jupiter = 11.862615;
  static constexpr double saturn = 29.447498;
  static constexpr double uranus = 84.016846;
  static constexpr double neptune = 164.79132;
};

class space_age {
  long secondsIn;
  double secondsInAnEarthYear = 31557600.0;
  yearLength yearsInEarthYearsOf;

public:
  space_age(long secondsIn);
  long seconds() const { return secondsIn; }
  double on_earth() const { return seconds() / secondsInAnEarthYear; };
  double on_mercury() const {
    return on_earth() / yearsInEarthYearsOf.mercury;
  };
  double on_venus() const { return on_earth() / yearsInEarthYearsOf.venus; };
  double on_mars() const { return on_earth() / yearsInEarthYearsOf.mars; };
  double on_jupiter() const {
    return on_earth() / yearsInEarthYearsOf.jupiter;
  };
  double on_saturn() const { return on_earth() / yearsInEarthYearsOf.saturn; };
  double on_uranus() const { return on_earth() / yearsInEarthYearsOf.uranus; };
  double on_neptune() const {
    return on_earth() / yearsInEarthYearsOf.neptune;
  };
};
} // namespace space_age

#endif // SPACE_AGE_H
