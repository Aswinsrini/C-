"use client";
import React from "react";
import { CldUploadWidget } from "next-cloudinary";

const UploadPage = () => {
  return (
    <>
      <CldUploadWidget
        uploadPreset="oszv6yxc"
        onUpload={(result, widget) => console.log(result)}
      >
        {({ open }) => (
          <button
            className="bg-blue-500 border border-solid border-r-2"
            onClick={() => open()}
          >
            upload
          </button>
        )}
      </CldUploadWidget>
    </>
  );
};

export default UploadPage;
