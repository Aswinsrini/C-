"use client";
import React, { useState } from "react";
import { CldUploadWidget, CldImage } from "next-cloudinary";

interface Result {
  public_id: string;
}

const UploadPage = () => {
  const [publicId, setPublicId] = useState("");
  return (
    <>
      {publicId && (
        <CldImage src={publicId} width={250} height={250} alt="image" />
      )}
      <CldUploadWidget
        uploadPreset="oszv6yxc"
        onUpload={(result, widget) => {
          if (result.event !== "success") return;
          const info = result.info as Result;
          setPublicId(info.public_id);
        }}
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
