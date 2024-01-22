import { createContext, useContext } from "react";
import { User } from "./first";

export const DashboardContext = createContext<User | undefined>(undefined);

//Use Customhooks to avoid the ? and undefined error
export const useUserContext = () => {
  const user = useContext(DashboardContext);
  if (user === undefined) {
    throw new Error(
      "useUsercontext is undefined. Must include the DashBoardContext"
    );
  }

  return user;
};
