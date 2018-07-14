  else if (util::str_compare_ci(value, "HecticAddCleave"))
  {
	  sim->fight_style = "HecticAddCleave";

	  sim->raid_events_str += "/adds,count=5,first=" + util::to_string(int(sim->max_time.total_seconds() * 0.05)) + ",cooldown=" + util::to_string(int(sim->max_time.total_seconds() * 0.075)) + ",duration=" + util::to_string(int(sim->max_time.total_seconds() * 0.05)) + ",last=" + util::to_string(int(sim->max_time.total_seconds() * 0.75)); //P1

	  sim->raid_events_str += "/movement,first=" + util::to_string(int(sim->max_time.total_seconds() * 0.05)) + ",cooldown=" + util::to_string(int(sim->max_time.total_seconds() * 0.075)) + ",distance=25,last=" + util::to_string(int(sim->max_time.total_seconds() * 0.75)); //move to new position of adds

	  sim->raid_events_str += "/movement,players_only=1,first=" + util::to_string(int(sim->max_time.total_seconds() * 0.03)) + ",cooldown=" + util::to_string(int(sim->max_time.total_seconds() * 0.04)) + ",distance=8"; //move out of stuff

  }

  // Look into " + util::to_string(int(sim->max_time.total_seconds() * 0.05)) + "