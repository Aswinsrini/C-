import React, { useState } from "react";
import SideBar from "./second";
import { DashboardContext } from "./context";

export interface User {
  name: string;
  present: boolean;
}
const Dashboard = () => {
  const [user] = useState<User>({ name: "aswin", present: true });
  return (
    <div>
      <DashboardContext.Provider value={user}>
        <SideBar />
      </DashboardContext.Provider>
    </div>
  );
};

export default Dashboard;
