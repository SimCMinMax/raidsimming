  else if (util::str_compare_ci(value, "HelterSkelter") || util::str_compare_ci(value, "Helter_Skelter"))
  {
	  sim->fight_style = "HelterSkelter";
	  sim->raid_events_str = "casting,cooldown=30,duration=3,first=15";
	  sim->raid_events_str += "/movement,cooldown=30,distance=20";
	  sim->raid_events_str += "/stun,cooldown=60,duration=2";
	  sim->raid_events_str += "/invulnerable,cooldown=120,duration=3";
  }

  // Who even uses this? And more importantly why