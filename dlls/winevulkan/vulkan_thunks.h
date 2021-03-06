/* Automatically generated from Vulkan vk.xml; DO NOT EDIT!
 *
 * This file is generated from Vulkan vk.xml file covered
 * by the following copyright and permission notice:
 *
 * Copyright (c) 2015-2020 The Khronos Group Inc.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#ifndef __WINE_VULKAN_THUNKS_H
#define __WINE_VULKAN_THUNKS_H

#define WINE_VK_VERSION VK_API_VERSION_1_2

/* Functions for which we have custom implementations outside of the thunks. */
VkResult WINAPI wine_vkAcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR *pAcquireInfo, uint32_t *pImageIndex);
VkResult WINAPI wine_vkAcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t *pImageIndex);
VkResult WINAPI wine_vkAllocateCommandBuffers(VkDevice device, const VkCommandBufferAllocateInfo *pAllocateInfo, VkCommandBuffer *pCommandBuffers);
void WINAPI wine_vkCmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer *pCommandBuffers);
VkResult WINAPI wine_vkCreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkCommandPool *pCommandPool);
VkResult WINAPI wine_vkCreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkDevice *pDevice);
VkResult WINAPI wine_vkCreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkSwapchainKHR *pSwapchain);
void WINAPI wine_vkDestroyCommandPool(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks *pAllocator);
void WINAPI wine_vkDestroyDevice(VkDevice device, const VkAllocationCallbacks *pAllocator);
void WINAPI wine_vkDestroyInstance(VkInstance instance, const VkAllocationCallbacks *pAllocator);
void WINAPI wine_vkDestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks *pAllocator);
VkResult WINAPI wine_vkEnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const char *pLayerName, uint32_t *pPropertyCount, VkExtensionProperties *pProperties);
VkResult WINAPI wine_vkEnumeratePhysicalDeviceGroups(VkInstance instance, uint32_t *pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties *pPhysicalDeviceGroupProperties);
VkResult WINAPI wine_vkEnumeratePhysicalDeviceGroupsKHR(VkInstance instance, uint32_t *pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties *pPhysicalDeviceGroupProperties) DECLSPEC_HIDDEN;
VkResult WINAPI wine_vkEnumeratePhysicalDevices(VkInstance instance, uint32_t *pPhysicalDeviceCount, VkPhysicalDevice *pPhysicalDevices);
void WINAPI wine_vkFreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer *pCommandBuffers);
VkResult WINAPI wine_vkGetCalibratedTimestampsEXT(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoEXT *pTimestampInfos, uint64_t *pTimestamps, uint64_t *pMaxDeviation) DECLSPEC_HIDDEN;
PFN_vkVoidFunction WINAPI wine_vkGetDeviceProcAddr(VkDevice device, const char *pName);
void WINAPI wine_vkGetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue *pQueue);
void WINAPI wine_vkGetDeviceQueue2(VkDevice device, const VkDeviceQueueInfo2 *pQueueInfo, VkQueue *pQueue);
VkResult WINAPI wine_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(VkPhysicalDevice physicalDevice, uint32_t *pTimeDomainCount, VkTimeDomainEXT *pTimeDomains) DECLSPEC_HIDDEN;
void WINAPI wine_vkGetPhysicalDeviceExternalBufferProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo *pExternalBufferInfo, VkExternalBufferProperties *pExternalBufferProperties);
void WINAPI wine_vkGetPhysicalDeviceExternalBufferPropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo *pExternalBufferInfo, VkExternalBufferProperties *pExternalBufferProperties) DECLSPEC_HIDDEN;
void WINAPI wine_vkGetPhysicalDeviceExternalFenceProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo *pExternalFenceInfo, VkExternalFenceProperties *pExternalFenceProperties);
void WINAPI wine_vkGetPhysicalDeviceExternalFencePropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo *pExternalFenceInfo, VkExternalFenceProperties *pExternalFenceProperties) DECLSPEC_HIDDEN;
void WINAPI wine_vkGetPhysicalDeviceExternalSemaphoreProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo *pExternalSemaphoreInfo, VkExternalSemaphoreProperties *pExternalSemaphoreProperties);
void WINAPI wine_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo *pExternalSemaphoreInfo, VkExternalSemaphoreProperties *pExternalSemaphoreProperties) DECLSPEC_HIDDEN;
VkResult WINAPI wine_vkGetPhysicalDeviceImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 *pImageFormatInfo, VkImageFormatProperties2 *pImageFormatProperties);
VkResult WINAPI wine_vkGetPhysicalDeviceImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 *pImageFormatInfo, VkImageFormatProperties2 *pImageFormatProperties) DECLSPEC_HIDDEN;
void WINAPI wine_vkGetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties *pProperties);
void WINAPI wine_vkGetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 *pProperties);
void WINAPI wine_vkGetPhysicalDeviceProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 *pProperties) DECLSPEC_HIDDEN;
VkResult WINAPI wine_vkGetPhysicalDeviceSurfaceCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR *pSurfaceInfo, VkSurfaceCapabilities2KHR *pSurfaceCapabilities);
VkResult WINAPI wine_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR *pSurfaceCapabilities);
void WINAPI wine_vkGetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t *pData) DECLSPEC_HIDDEN;
VkResult WINAPI wine_vkGetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t *pSwapchainImageCount, VkImage *pSwapchainImages);
VkResult WINAPI wine_vkQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR *pPresentInfo);
VkResult WINAPI wine_vkQueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo *pSubmits, VkFence fence);
VkResult WINAPI wine_vkSetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t data) DECLSPEC_HIDDEN;

/* Private thunks */
VkResult thunk_vkGetPhysicalDeviceImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 *pImageFormatInfo, VkImageFormatProperties2 *pImageFormatProperties) DECLSPEC_HIDDEN;
VkResult thunk_vkGetPhysicalDeviceImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 *pImageFormatInfo, VkImageFormatProperties2 *pImageFormatProperties) DECLSPEC_HIDDEN;
void thunk_vkGetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties *pProperties) DECLSPEC_HIDDEN;
void thunk_vkGetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 *pProperties) DECLSPEC_HIDDEN;
void thunk_vkGetPhysicalDeviceProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 *pProperties) DECLSPEC_HIDDEN;
VkResult thunk_vkGetPhysicalDeviceSurfaceCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR *pSurfaceInfo, VkSurfaceCapabilities2KHR *pSurfaceCapabilities) DECLSPEC_HIDDEN;
VkResult thunk_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR *pSurfaceCapabilities) DECLSPEC_HIDDEN;

typedef struct VkAcquireNextImageInfoKHR_host
{
    VkStructureType sType;
    const void *pNext;
    VkSwapchainKHR swapchain;
    uint64_t timeout;
    VkSemaphore semaphore;
    VkFence fence;
    uint32_t deviceMask;
} VkAcquireNextImageInfoKHR_host;


typedef struct VkAcquireProfilingLockInfoKHR_host
{
    VkStructureType sType;
    const void *pNext;
    VkAcquireProfilingLockFlagsKHR flags;
    uint64_t timeout;
} VkAcquireProfilingLockInfoKHR_host;


typedef struct VkCommandBufferAllocateInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkCommandPool commandPool;
    VkCommandBufferLevel level;
    uint32_t commandBufferCount;
} VkCommandBufferAllocateInfo_host;


typedef struct VkDescriptorSetAllocateInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkDescriptorPool descriptorPool;
    uint32_t descriptorSetCount;
    const VkDescriptorSetLayout *pSetLayouts;
} VkDescriptorSetAllocateInfo_host;


typedef struct VkMemoryAllocateInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkDeviceSize allocationSize;
    uint32_t memoryTypeIndex;
} VkMemoryAllocateInfo_host;


typedef struct VkCommandBufferInheritanceInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkRenderPass renderPass;
    uint32_t subpass;
    VkFramebuffer framebuffer;
    VkBool32 occlusionQueryEnable;
    VkQueryControlFlags queryFlags;
    VkQueryPipelineStatisticFlags pipelineStatistics;
} VkCommandBufferInheritanceInfo_host;


typedef struct VkCommandBufferBeginInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkCommandBufferUsageFlags flags;
    const VkCommandBufferInheritanceInfo_host *pInheritanceInfo;
} VkCommandBufferBeginInfo_host;


typedef struct VkBindAccelerationStructureMemoryInfoKHR_host
{
    VkStructureType sType;
    const void *pNext;
    VkAccelerationStructureKHR accelerationStructure;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;
    uint32_t deviceIndexCount;
    const uint32_t *pDeviceIndices;
} VkBindAccelerationStructureMemoryInfoKHR_host;

typedef VkBindAccelerationStructureMemoryInfoKHR VkBindAccelerationStructureMemoryInfoNV;

typedef struct VkBindBufferMemoryInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkBuffer buffer;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;
} VkBindBufferMemoryInfo_host;

typedef VkBindBufferMemoryInfo VkBindBufferMemoryInfoKHR;

typedef struct VkBindImageMemoryInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkImage image;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;
} VkBindImageMemoryInfo_host;

typedef VkBindImageMemoryInfo VkBindImageMemoryInfoKHR;

typedef struct VkConditionalRenderingBeginInfoEXT_host
{
    VkStructureType sType;
    const void *pNext;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkConditionalRenderingFlagsEXT flags;
} VkConditionalRenderingBeginInfoEXT_host;


typedef struct VkRenderPassBeginInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkRenderPass renderPass;
    VkFramebuffer framebuffer;
    VkRect2D renderArea;
    uint32_t clearValueCount;
    const VkClearValue *pClearValues;
} VkRenderPassBeginInfo_host;


typedef struct VkGeometryTrianglesNV_host
{
    VkStructureType sType;
    const void *pNext;
    VkBuffer vertexData;
    VkDeviceSize vertexOffset;
    uint32_t vertexCount;
    VkDeviceSize vertexStride;
    VkFormat vertexFormat;
    VkBuffer indexData;
    VkDeviceSize indexOffset;
    uint32_t indexCount;
    VkIndexType indexType;
    VkBuffer transformData;
    VkDeviceSize transformOffset;
} VkGeometryTrianglesNV_host;


typedef struct VkGeometryAABBNV_host
{
    VkStructureType sType;
    const void *pNext;
    VkBuffer aabbData;
    uint32_t numAABBs;
    uint32_t stride;
    VkDeviceSize offset;
} VkGeometryAABBNV_host;


typedef struct VkGeometryDataNV_host
{
    VkGeometryTrianglesNV_host triangles;
    VkGeometryAABBNV_host aabbs;
} VkGeometryDataNV_host;


typedef struct VkGeometryNV_host
{
    VkStructureType sType;
    const void *pNext;
    VkGeometryTypeKHR geometryType;
    VkGeometryDataNV_host geometry;
    VkGeometryFlagsKHR flags;
} VkGeometryNV_host;


typedef struct VkAccelerationStructureInfoNV_host
{
    VkStructureType sType;
    const void *pNext;
    VkAccelerationStructureTypeNV type;
    VkBuildAccelerationStructureFlagsNV flags;
    uint32_t instanceCount;
    uint32_t geometryCount;
    const VkGeometryNV_host *pGeometries;
} VkAccelerationStructureInfoNV_host;


typedef struct VkBufferCopy_host
{
    VkDeviceSize srcOffset;
    VkDeviceSize dstOffset;
    VkDeviceSize size;
} VkBufferCopy_host;


typedef struct VkBufferImageCopy_host
{
    VkDeviceSize bufferOffset;
    uint32_t bufferRowLength;
    uint32_t bufferImageHeight;
    VkImageSubresourceLayers imageSubresource;
    VkOffset3D imageOffset;
    VkExtent3D imageExtent;
} VkBufferImageCopy_host;


typedef struct VkIndirectCommandsStreamNV_host
{
    VkBuffer buffer;
    VkDeviceSize offset;
} VkIndirectCommandsStreamNV_host;


typedef struct VkGeneratedCommandsInfoNV_host
{
    VkStructureType sType;
    const void *pNext;
    VkPipelineBindPoint pipelineBindPoint;
    VkPipeline pipeline;
    VkIndirectCommandsLayoutNV indirectCommandsLayout;
    uint32_t streamCount;
    const VkIndirectCommandsStreamNV_host *pStreams;
    uint32_t sequencesCount;
    VkBuffer preprocessBuffer;
    VkDeviceSize preprocessOffset;
    VkDeviceSize preprocessSize;
    VkBuffer sequencesCountBuffer;
    VkDeviceSize sequencesCountOffset;
    VkBuffer sequencesIndexBuffer;
    VkDeviceSize sequencesIndexOffset;
} VkGeneratedCommandsInfoNV_host;


typedef struct VkBufferMemoryBarrier_host
{
    VkStructureType sType;
    const void *pNext;
    VkAccessFlags srcAccessMask;
    VkAccessFlags dstAccessMask;
    uint32_t srcQueueFamilyIndex;
    uint32_t dstQueueFamilyIndex;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkDeviceSize size;
} VkBufferMemoryBarrier_host;


typedef struct VkImageMemoryBarrier_host
{
    VkStructureType sType;
    const void *pNext;
    VkAccessFlags srcAccessMask;
    VkAccessFlags dstAccessMask;
    VkImageLayout oldLayout;
    VkImageLayout newLayout;
    uint32_t srcQueueFamilyIndex;
    uint32_t dstQueueFamilyIndex;
    VkImage image;
    VkImageSubresourceRange subresourceRange;
} VkImageMemoryBarrier_host;


typedef struct VkDescriptorImageInfo_host
{
    VkSampler sampler;
    VkImageView imageView;
    VkImageLayout imageLayout;
} VkDescriptorImageInfo_host;


typedef struct VkDescriptorBufferInfo_host
{
    VkBuffer buffer;
    VkDeviceSize offset;
    VkDeviceSize range;
} VkDescriptorBufferInfo_host;


typedef struct VkWriteDescriptorSet_host
{
    VkStructureType sType;
    const void *pNext;
    VkDescriptorSet dstSet;
    uint32_t dstBinding;
    uint32_t dstArrayElement;
    uint32_t descriptorCount;
    VkDescriptorType descriptorType;
    const VkDescriptorImageInfo_host *pImageInfo;
    const VkDescriptorBufferInfo_host *pBufferInfo;
    const VkBufferView *pTexelBufferView;
} VkWriteDescriptorSet_host;


typedef struct VkPerformanceMarkerInfoINTEL_host
{
    VkStructureType sType;
    const void *pNext;
    uint64_t marker;
} VkPerformanceMarkerInfoINTEL_host;


typedef struct VkPerformanceOverrideInfoINTEL_host
{
    VkStructureType sType;
    const void *pNext;
    VkPerformanceOverrideTypeINTEL type;
    VkBool32 enable;
    uint64_t parameter;
} VkPerformanceOverrideInfoINTEL_host;


typedef struct VkAccelerationStructureCreateInfoNV_host
{
    VkStructureType sType;
    const void *pNext;
    VkDeviceSize compactedSize;
    VkAccelerationStructureInfoNV_host info;
} VkAccelerationStructureCreateInfoNV_host;


typedef struct VkBufferCreateInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkBufferCreateFlags flags;
    VkDeviceSize size;
    VkBufferUsageFlags usage;
    VkSharingMode sharingMode;
    uint32_t queueFamilyIndexCount;
    const uint32_t *pQueueFamilyIndices;
} VkBufferCreateInfo_host;


typedef struct VkBufferViewCreateInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkBufferViewCreateFlags flags;
    VkBuffer buffer;
    VkFormat format;
    VkDeviceSize offset;
    VkDeviceSize range;
} VkBufferViewCreateInfo_host;


typedef struct VkPipelineShaderStageCreateInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkPipelineShaderStageCreateFlags flags;
    VkShaderStageFlagBits stage;
    VkShaderModule module;
    const char *pName;
    const VkSpecializationInfo *pSpecializationInfo;
} VkPipelineShaderStageCreateInfo_host;


typedef struct VkComputePipelineCreateInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkPipelineCreateFlags flags;
    VkPipelineShaderStageCreateInfo_host stage;
    VkPipelineLayout layout;
    VkPipeline basePipelineHandle;
    int32_t basePipelineIndex;
} VkComputePipelineCreateInfo_host;


typedef struct VkDescriptorUpdateTemplateCreateInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkDescriptorUpdateTemplateCreateFlags flags;
    uint32_t descriptorUpdateEntryCount;
    const VkDescriptorUpdateTemplateEntry *pDescriptorUpdateEntries;
    VkDescriptorUpdateTemplateType templateType;
    VkDescriptorSetLayout descriptorSetLayout;
    VkPipelineBindPoint pipelineBindPoint;
    VkPipelineLayout pipelineLayout;
    uint32_t set;
} VkDescriptorUpdateTemplateCreateInfo_host;

typedef VkDescriptorUpdateTemplateCreateInfo VkDescriptorUpdateTemplateCreateInfoKHR;

typedef struct VkFramebufferCreateInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkFramebufferCreateFlags flags;
    VkRenderPass renderPass;
    uint32_t attachmentCount;
    const VkImageView *pAttachments;
    uint32_t width;
    uint32_t height;
    uint32_t layers;
} VkFramebufferCreateInfo_host;


typedef struct VkGraphicsPipelineCreateInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkPipelineCreateFlags flags;
    uint32_t stageCount;
    const VkPipelineShaderStageCreateInfo_host *pStages;
    const VkPipelineVertexInputStateCreateInfo *pVertexInputState;
    const VkPipelineInputAssemblyStateCreateInfo *pInputAssemblyState;
    const VkPipelineTessellationStateCreateInfo *pTessellationState;
    const VkPipelineViewportStateCreateInfo *pViewportState;
    const VkPipelineRasterizationStateCreateInfo *pRasterizationState;
    const VkPipelineMultisampleStateCreateInfo *pMultisampleState;
    const VkPipelineDepthStencilStateCreateInfo *pDepthStencilState;
    const VkPipelineColorBlendStateCreateInfo *pColorBlendState;
    const VkPipelineDynamicStateCreateInfo *pDynamicState;
    VkPipelineLayout layout;
    VkRenderPass renderPass;
    uint32_t subpass;
    VkPipeline basePipelineHandle;
    int32_t basePipelineIndex;
} VkGraphicsPipelineCreateInfo_host;


typedef struct VkImageViewCreateInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkImageViewCreateFlags flags;
    VkImage image;
    VkImageViewType viewType;
    VkFormat format;
    VkComponentMapping components;
    VkImageSubresourceRange subresourceRange;
} VkImageViewCreateInfo_host;


typedef struct VkIndirectCommandsLayoutTokenNV_host
{
    VkStructureType sType;
    const void *pNext;
    VkIndirectCommandsTokenTypeNV tokenType;
    uint32_t stream;
    uint32_t offset;
    uint32_t vertexBindingUnit;
    VkBool32 vertexDynamicStride;
    VkPipelineLayout pushconstantPipelineLayout;
    VkShaderStageFlags pushconstantShaderStageFlags;
    uint32_t pushconstantOffset;
    uint32_t pushconstantSize;
    VkIndirectStateFlagsNV indirectStateFlags;
    uint32_t indexTypeCount;
    const VkIndexType *pIndexTypes;
    const uint32_t *pIndexTypeValues;
} VkIndirectCommandsLayoutTokenNV_host;


typedef struct VkIndirectCommandsLayoutCreateInfoNV_host
{
    VkStructureType sType;
    const void *pNext;
    VkIndirectCommandsLayoutUsageFlagsNV flags;
    VkPipelineBindPoint pipelineBindPoint;
    uint32_t tokenCount;
    const VkIndirectCommandsLayoutTokenNV_host *pTokens;
    uint32_t streamCount;
    const uint32_t *pStreamStrides;
} VkIndirectCommandsLayoutCreateInfoNV_host;


typedef struct VkRayTracingPipelineCreateInfoNV_host
{
    VkStructureType sType;
    const void *pNext;
    VkPipelineCreateFlags flags;
    uint32_t stageCount;
    const VkPipelineShaderStageCreateInfo_host *pStages;
    uint32_t groupCount;
    const VkRayTracingShaderGroupCreateInfoNV *pGroups;
    uint32_t maxRecursionDepth;
    VkPipelineLayout layout;
    VkPipeline basePipelineHandle;
    int32_t basePipelineIndex;
} VkRayTracingPipelineCreateInfoNV_host;


typedef struct VkSwapchainCreateInfoKHR_host
{
    VkStructureType sType;
    const void *pNext;
    VkSwapchainCreateFlagsKHR flags;
    VkSurfaceKHR surface;
    uint32_t minImageCount;
    VkFormat imageFormat;
    VkColorSpaceKHR imageColorSpace;
    VkExtent2D imageExtent;
    uint32_t imageArrayLayers;
    VkImageUsageFlags imageUsage;
    VkSharingMode imageSharingMode;
    uint32_t queueFamilyIndexCount;
    const uint32_t *pQueueFamilyIndices;
    VkSurfaceTransformFlagBitsKHR preTransform;
    VkCompositeAlphaFlagBitsKHR compositeAlpha;
    VkPresentModeKHR presentMode;
    VkBool32 clipped;
    VkSwapchainKHR oldSwapchain;
} VkSwapchainCreateInfoKHR_host;


typedef struct VkMappedMemoryRange_host
{
    VkStructureType sType;
    const void *pNext;
    VkDeviceMemory memory;
    VkDeviceSize offset;
    VkDeviceSize size;
} VkMappedMemoryRange_host;


typedef struct VkAccelerationStructureMemoryRequirementsInfoNV_host
{
    VkStructureType sType;
    const void *pNext;
    VkAccelerationStructureMemoryRequirementsTypeNV type;
    VkAccelerationStructureNV accelerationStructure;
} VkAccelerationStructureMemoryRequirementsInfoNV_host;


typedef struct VkMemoryRequirements_host
{
    VkDeviceSize size;
    VkDeviceSize alignment;
    uint32_t memoryTypeBits;
} VkMemoryRequirements_host;


typedef struct VkMemoryRequirements2KHR_host
{
    VkStructureType sType;
    void *pNext;
    VkMemoryRequirements_host memoryRequirements;
} VkMemoryRequirements2KHR_host;


typedef struct VkBufferDeviceAddressInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkBuffer buffer;
} VkBufferDeviceAddressInfo_host;

typedef VkBufferDeviceAddressInfo VkBufferDeviceAddressInfoKHR;
typedef VkBufferDeviceAddressInfo VkBufferDeviceAddressInfoEXT;

typedef struct VkBufferMemoryRequirementsInfo2_host
{
    VkStructureType sType;
    const void *pNext;
    VkBuffer buffer;
} VkBufferMemoryRequirementsInfo2_host;

typedef VkBufferMemoryRequirementsInfo2 VkBufferMemoryRequirementsInfo2KHR;

typedef struct VkMemoryRequirements2_host
{
    VkStructureType sType;
    void *pNext;
    VkMemoryRequirements_host memoryRequirements;
} VkMemoryRequirements2_host;

typedef VkMemoryRequirements2 VkMemoryRequirements2KHR;

typedef struct VkDeviceMemoryOpaqueCaptureAddressInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkDeviceMemory memory;
} VkDeviceMemoryOpaqueCaptureAddressInfo_host;

typedef VkDeviceMemoryOpaqueCaptureAddressInfo VkDeviceMemoryOpaqueCaptureAddressInfoKHR;

typedef struct VkGeneratedCommandsMemoryRequirementsInfoNV_host
{
    VkStructureType sType;
    const void *pNext;
    VkPipelineBindPoint pipelineBindPoint;
    VkPipeline pipeline;
    VkIndirectCommandsLayoutNV indirectCommandsLayout;
    uint32_t maxSequencesCount;
} VkGeneratedCommandsMemoryRequirementsInfoNV_host;


typedef struct VkImageMemoryRequirementsInfo2_host
{
    VkStructureType sType;
    const void *pNext;
    VkImage image;
} VkImageMemoryRequirementsInfo2_host;

typedef VkImageMemoryRequirementsInfo2 VkImageMemoryRequirementsInfo2KHR;

typedef struct VkImageSparseMemoryRequirementsInfo2_host
{
    VkStructureType sType;
    const void *pNext;
    VkImage image;
} VkImageSparseMemoryRequirementsInfo2_host;

typedef VkImageSparseMemoryRequirementsInfo2 VkImageSparseMemoryRequirementsInfo2KHR;

typedef struct VkSubresourceLayout_host
{
    VkDeviceSize offset;
    VkDeviceSize size;
    VkDeviceSize rowPitch;
    VkDeviceSize arrayPitch;
    VkDeviceSize depthPitch;
} VkSubresourceLayout_host;


typedef struct VkImageFormatProperties_host
{
    VkExtent3D maxExtent;
    uint32_t maxMipLevels;
    uint32_t maxArrayLayers;
    VkSampleCountFlags sampleCounts;
    VkDeviceSize maxResourceSize;
} VkImageFormatProperties_host;


typedef struct VkImageFormatProperties2_host
{
    VkStructureType sType;
    void *pNext;
    VkImageFormatProperties_host imageFormatProperties;
} VkImageFormatProperties2_host;

typedef VkImageFormatProperties2 VkImageFormatProperties2KHR;

typedef struct VkMemoryHeap_host
{
    VkDeviceSize size;
    VkMemoryHeapFlags flags;
} VkMemoryHeap_host;


typedef struct VkPhysicalDeviceMemoryProperties_host
{
    uint32_t memoryTypeCount;
    VkMemoryType memoryTypes[VK_MAX_MEMORY_TYPES];
    uint32_t memoryHeapCount;
    VkMemoryHeap_host memoryHeaps[VK_MAX_MEMORY_HEAPS];
} VkPhysicalDeviceMemoryProperties_host;


typedef struct VkPhysicalDeviceMemoryProperties2_host
{
    VkStructureType sType;
    void *pNext;
    VkPhysicalDeviceMemoryProperties_host memoryProperties;
} VkPhysicalDeviceMemoryProperties2_host;

typedef VkPhysicalDeviceMemoryProperties2 VkPhysicalDeviceMemoryProperties2KHR;

typedef struct VkPhysicalDeviceLimits_host
{
    uint32_t maxImageDimension1D;
    uint32_t maxImageDimension2D;
    uint32_t maxImageDimension3D;
    uint32_t maxImageDimensionCube;
    uint32_t maxImageArrayLayers;
    uint32_t maxTexelBufferElements;
    uint32_t maxUniformBufferRange;
    uint32_t maxStorageBufferRange;
    uint32_t maxPushConstantsSize;
    uint32_t maxMemoryAllocationCount;
    uint32_t maxSamplerAllocationCount;
    VkDeviceSize bufferImageGranularity;
    VkDeviceSize sparseAddressSpaceSize;
    uint32_t maxBoundDescriptorSets;
    uint32_t maxPerStageDescriptorSamplers;
    uint32_t maxPerStageDescriptorUniformBuffers;
    uint32_t maxPerStageDescriptorStorageBuffers;
    uint32_t maxPerStageDescriptorSampledImages;
    uint32_t maxPerStageDescriptorStorageImages;
    uint32_t maxPerStageDescriptorInputAttachments;
    uint32_t maxPerStageResources;
    uint32_t maxDescriptorSetSamplers;
    uint32_t maxDescriptorSetUniformBuffers;
    uint32_t maxDescriptorSetUniformBuffersDynamic;
    uint32_t maxDescriptorSetStorageBuffers;
    uint32_t maxDescriptorSetStorageBuffersDynamic;
    uint32_t maxDescriptorSetSampledImages;
    uint32_t maxDescriptorSetStorageImages;
    uint32_t maxDescriptorSetInputAttachments;
    uint32_t maxVertexInputAttributes;
    uint32_t maxVertexInputBindings;
    uint32_t maxVertexInputAttributeOffset;
    uint32_t maxVertexInputBindingStride;
    uint32_t maxVertexOutputComponents;
    uint32_t maxTessellationGenerationLevel;
    uint32_t maxTessellationPatchSize;
    uint32_t maxTessellationControlPerVertexInputComponents;
    uint32_t maxTessellationControlPerVertexOutputComponents;
    uint32_t maxTessellationControlPerPatchOutputComponents;
    uint32_t maxTessellationControlTotalOutputComponents;
    uint32_t maxTessellationEvaluationInputComponents;
    uint32_t maxTessellationEvaluationOutputComponents;
    uint32_t maxGeometryShaderInvocations;
    uint32_t maxGeometryInputComponents;
    uint32_t maxGeometryOutputComponents;
    uint32_t maxGeometryOutputVertices;
    uint32_t maxGeometryTotalOutputComponents;
    uint32_t maxFragmentInputComponents;
    uint32_t maxFragmentOutputAttachments;
    uint32_t maxFragmentDualSrcAttachments;
    uint32_t maxFragmentCombinedOutputResources;
    uint32_t maxComputeSharedMemorySize;
    uint32_t maxComputeWorkGroupCount[3];
    uint32_t maxComputeWorkGroupInvocations;
    uint32_t maxComputeWorkGroupSize[3];
    uint32_t subPixelPrecisionBits;
    uint32_t subTexelPrecisionBits;
    uint32_t mipmapPrecisionBits;
    uint32_t maxDrawIndexedIndexValue;
    uint32_t maxDrawIndirectCount;
    float maxSamplerLodBias;
    float maxSamplerAnisotropy;
    uint32_t maxViewports;
    uint32_t maxViewportDimensions[2];
    float viewportBoundsRange[2];
    uint32_t viewportSubPixelBits;
    size_t minMemoryMapAlignment;
    VkDeviceSize minTexelBufferOffsetAlignment;
    VkDeviceSize minUniformBufferOffsetAlignment;
    VkDeviceSize minStorageBufferOffsetAlignment;
    int32_t minTexelOffset;
    uint32_t maxTexelOffset;
    int32_t minTexelGatherOffset;
    uint32_t maxTexelGatherOffset;
    float minInterpolationOffset;
    float maxInterpolationOffset;
    uint32_t subPixelInterpolationOffsetBits;
    uint32_t maxFramebufferWidth;
    uint32_t maxFramebufferHeight;
    uint32_t maxFramebufferLayers;
    VkSampleCountFlags framebufferColorSampleCounts;
    VkSampleCountFlags framebufferDepthSampleCounts;
    VkSampleCountFlags framebufferStencilSampleCounts;
    VkSampleCountFlags framebufferNoAttachmentsSampleCounts;
    uint32_t maxColorAttachments;
    VkSampleCountFlags sampledImageColorSampleCounts;
    VkSampleCountFlags sampledImageIntegerSampleCounts;
    VkSampleCountFlags sampledImageDepthSampleCounts;
    VkSampleCountFlags sampledImageStencilSampleCounts;
    VkSampleCountFlags storageImageSampleCounts;
    uint32_t maxSampleMaskWords;
    VkBool32 timestampComputeAndGraphics;
    float timestampPeriod;
    uint32_t maxClipDistances;
    uint32_t maxCullDistances;
    uint32_t maxCombinedClipAndCullDistances;
    uint32_t discreteQueuePriorities;
    float pointSizeRange[2];
    float lineWidthRange[2];
    float pointSizeGranularity;
    float lineWidthGranularity;
    VkBool32 strictLines;
    VkBool32 standardSampleLocations;
    VkDeviceSize optimalBufferCopyOffsetAlignment;
    VkDeviceSize optimalBufferCopyRowPitchAlignment;
    VkDeviceSize nonCoherentAtomSize;
} VkPhysicalDeviceLimits_host;


typedef struct VkPhysicalDeviceProperties_host
{
    uint32_t apiVersion;
    uint32_t driverVersion;
    uint32_t vendorID;
    uint32_t deviceID;
    VkPhysicalDeviceType deviceType;
    char deviceName[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE];
    uint8_t pipelineCacheUUID[VK_UUID_SIZE];
    VkPhysicalDeviceLimits_host limits;
    VkPhysicalDeviceSparseProperties sparseProperties;
} VkPhysicalDeviceProperties_host;


typedef struct VkPhysicalDeviceProperties2_host
{
    VkStructureType sType;
    void *pNext;
    VkPhysicalDeviceProperties_host properties;
} VkPhysicalDeviceProperties2_host;

typedef VkPhysicalDeviceProperties2 VkPhysicalDeviceProperties2KHR;

typedef struct VkPhysicalDeviceSurfaceInfo2KHR_host
{
    VkStructureType sType;
    const void *pNext;
    VkSurfaceKHR surface;
} VkPhysicalDeviceSurfaceInfo2KHR_host;


typedef struct VkPipelineExecutableInfoKHR_host
{
    VkStructureType sType;
    const void *pNext;
    VkPipeline pipeline;
    uint32_t executableIndex;
} VkPipelineExecutableInfoKHR_host;


typedef struct VkPipelineInfoKHR_host
{
    VkStructureType sType;
    const void *pNext;
    VkPipeline pipeline;
} VkPipelineInfoKHR_host;


typedef struct VkSparseMemoryBind_host
{
    VkDeviceSize resourceOffset;
    VkDeviceSize size;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;
    VkSparseMemoryBindFlags flags;
} VkSparseMemoryBind_host;


typedef struct VkSparseBufferMemoryBindInfo_host
{
    VkBuffer buffer;
    uint32_t bindCount;
    const VkSparseMemoryBind_host *pBinds;
} VkSparseBufferMemoryBindInfo_host;


typedef struct VkSparseImageOpaqueMemoryBindInfo_host
{
    VkImage image;
    uint32_t bindCount;
    const VkSparseMemoryBind_host *pBinds;
} VkSparseImageOpaqueMemoryBindInfo_host;


typedef struct VkSparseImageMemoryBind_host
{
    VkImageSubresource subresource;
    VkOffset3D offset;
    VkExtent3D extent;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;
    VkSparseMemoryBindFlags flags;
} VkSparseImageMemoryBind_host;


typedef struct VkSparseImageMemoryBindInfo_host
{
    VkImage image;
    uint32_t bindCount;
    const VkSparseImageMemoryBind_host *pBinds;
} VkSparseImageMemoryBindInfo_host;


typedef struct VkBindSparseInfo_host
{
    VkStructureType sType;
    const void *pNext;
    uint32_t waitSemaphoreCount;
    const VkSemaphore *pWaitSemaphores;
    uint32_t bufferBindCount;
    const VkSparseBufferMemoryBindInfo_host *pBufferBinds;
    uint32_t imageOpaqueBindCount;
    const VkSparseImageOpaqueMemoryBindInfo_host *pImageOpaqueBinds;
    uint32_t imageBindCount;
    const VkSparseImageMemoryBindInfo_host *pImageBinds;
    uint32_t signalSemaphoreCount;
    const VkSemaphore *pSignalSemaphores;
} VkBindSparseInfo_host;


typedef struct VkSemaphoreSignalInfo_host
{
    VkStructureType sType;
    const void *pNext;
    VkSemaphore semaphore;
    uint64_t value;
} VkSemaphoreSignalInfo_host;

typedef VkSemaphoreSignalInfo VkSemaphoreSignalInfoKHR;

typedef struct VkCopyDescriptorSet_host
{
    VkStructureType sType;
    const void *pNext;
    VkDescriptorSet srcSet;
    uint32_t srcBinding;
    uint32_t srcArrayElement;
    VkDescriptorSet dstSet;
    uint32_t dstBinding;
    uint32_t dstArrayElement;
    uint32_t descriptorCount;
} VkCopyDescriptorSet_host;



VkResult convert_VkDeviceCreateInfo_struct_chain(const void *pNext, VkDeviceCreateInfo *out_struct) DECLSPEC_HIDDEN;
void free_VkDeviceCreateInfo_struct_chain(VkDeviceCreateInfo *s) DECLSPEC_HIDDEN;
VkResult convert_VkInstanceCreateInfo_struct_chain(const void *pNext, VkInstanceCreateInfo *out_struct) DECLSPEC_HIDDEN;
void free_VkInstanceCreateInfo_struct_chain(VkInstanceCreateInfo *s) DECLSPEC_HIDDEN;

VkBufferMemoryBarrier_host *convert_VkBufferMemoryBarrier_array_win_to_host(const VkBufferMemoryBarrier *in, uint32_t count);
void free_VkBufferMemoryBarrier_array(VkBufferMemoryBarrier_host *in, uint32_t count);
VkImageMemoryBarrier_host *convert_VkImageMemoryBarrier_array_win_to_host(const VkImageMemoryBarrier *in, uint32_t count);
void free_VkImageMemoryBarrier_array(VkImageMemoryBarrier_host *in, uint32_t count);
/* For use by vkDevice and children */
struct vulkan_device_funcs
{
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkAcquireNextImage2KHR)(VkDevice, const VkAcquireNextImageInfoKHR_host *, uint32_t *);
#else
    VkResult (*p_vkAcquireNextImage2KHR)(VkDevice, const VkAcquireNextImageInfoKHR *, uint32_t *);
#endif
    VkResult (*p_vkAcquireNextImageKHR)(VkDevice, VkSwapchainKHR, uint64_t, VkSemaphore, VkFence, uint32_t *);
    VkResult (*p_vkAcquirePerformanceConfigurationINTEL)(VkDevice, const VkPerformanceConfigurationAcquireInfoINTEL *, VkPerformanceConfigurationINTEL *);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkAcquireProfilingLockKHR)(VkDevice, const VkAcquireProfilingLockInfoKHR_host *);
#else
    VkResult (*p_vkAcquireProfilingLockKHR)(VkDevice, const VkAcquireProfilingLockInfoKHR *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkAllocateCommandBuffers)(VkDevice, const VkCommandBufferAllocateInfo_host *, VkCommandBuffer *);
#else
    VkResult (*p_vkAllocateCommandBuffers)(VkDevice, const VkCommandBufferAllocateInfo *, VkCommandBuffer *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkAllocateDescriptorSets)(VkDevice, const VkDescriptorSetAllocateInfo_host *, VkDescriptorSet *);
#else
    VkResult (*p_vkAllocateDescriptorSets)(VkDevice, const VkDescriptorSetAllocateInfo *, VkDescriptorSet *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkAllocateMemory)(VkDevice, const VkMemoryAllocateInfo_host *, const VkAllocationCallbacks *, VkDeviceMemory *);
#else
    VkResult (*p_vkAllocateMemory)(VkDevice, const VkMemoryAllocateInfo *, const VkAllocationCallbacks *, VkDeviceMemory *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkBeginCommandBuffer)(VkCommandBuffer, const VkCommandBufferBeginInfo_host *);
#else
    VkResult (*p_vkBeginCommandBuffer)(VkCommandBuffer, const VkCommandBufferBeginInfo *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkBindAccelerationStructureMemoryNV)(VkDevice, uint32_t, const VkBindAccelerationStructureMemoryInfoKHR_host *);
#else
    VkResult (*p_vkBindAccelerationStructureMemoryNV)(VkDevice, uint32_t, const VkBindAccelerationStructureMemoryInfoKHR *);
#endif
    VkResult (*p_vkBindBufferMemory)(VkDevice, VkBuffer, VkDeviceMemory, VkDeviceSize);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkBindBufferMemory2)(VkDevice, uint32_t, const VkBindBufferMemoryInfo_host *);
#else
    VkResult (*p_vkBindBufferMemory2)(VkDevice, uint32_t, const VkBindBufferMemoryInfo *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkBindBufferMemory2KHR)(VkDevice, uint32_t, const VkBindBufferMemoryInfo_host *);
#else
    VkResult (*p_vkBindBufferMemory2KHR)(VkDevice, uint32_t, const VkBindBufferMemoryInfo *);
#endif
    VkResult (*p_vkBindImageMemory)(VkDevice, VkImage, VkDeviceMemory, VkDeviceSize);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkBindImageMemory2)(VkDevice, uint32_t, const VkBindImageMemoryInfo_host *);
#else
    VkResult (*p_vkBindImageMemory2)(VkDevice, uint32_t, const VkBindImageMemoryInfo *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkBindImageMemory2KHR)(VkDevice, uint32_t, const VkBindImageMemoryInfo_host *);
#else
    VkResult (*p_vkBindImageMemory2KHR)(VkDevice, uint32_t, const VkBindImageMemoryInfo *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkCmdBeginConditionalRenderingEXT)(VkCommandBuffer, const VkConditionalRenderingBeginInfoEXT_host *);
#else
    void (*p_vkCmdBeginConditionalRenderingEXT)(VkCommandBuffer, const VkConditionalRenderingBeginInfoEXT *);
#endif
    void (*p_vkCmdBeginQuery)(VkCommandBuffer, VkQueryPool, uint32_t, VkQueryControlFlags);
    void (*p_vkCmdBeginQueryIndexedEXT)(VkCommandBuffer, VkQueryPool, uint32_t, VkQueryControlFlags, uint32_t);
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkCmdBeginRenderPass)(VkCommandBuffer, const VkRenderPassBeginInfo_host *, VkSubpassContents);
#else
    void (*p_vkCmdBeginRenderPass)(VkCommandBuffer, const VkRenderPassBeginInfo *, VkSubpassContents);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkCmdBeginRenderPass2)(VkCommandBuffer, const VkRenderPassBeginInfo_host *, const VkSubpassBeginInfo *);
#else
    void (*p_vkCmdBeginRenderPass2)(VkCommandBuffer, const VkRenderPassBeginInfo *, const VkSubpassBeginInfo *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkCmdBeginRenderPass2KHR)(VkCommandBuffer, const VkRenderPassBeginInfo_host *, const VkSubpassBeginInfo *);
#else
    void (*p_vkCmdBeginRenderPass2KHR)(VkCommandBuffer, const VkRenderPassBeginInfo *, const VkSubpassBeginInfo *);
#endif
    void (*p_vkCmdBeginTransformFeedbackEXT)(VkCommandBuffer, uint32_t, uint32_t, const VkBuffer *, const VkDeviceSize *);
    void (*p_vkCmdBindDescriptorSets)(VkCommandBuffer, VkPipelineBindPoint, VkPipelineLayout, uint32_t, uint32_t, const VkDescriptorSet *, uint32_t, const uint32_t *);
    void (*p_vkCmdBindIndexBuffer)(VkCommandBuffer, VkBuffer, VkDeviceSize, VkIndexType);
    void (*p_vkCmdBindPipeline)(VkCommandBuffer, VkPipelineBindPoint, VkPipeline);
    void (*p_vkCmdBindPipelineShaderGroupNV)(VkCommandBuffer, VkPipelineBindPoint, VkPipeline, uint32_t);
    void (*p_vkCmdBindShadingRateImageNV)(VkCommandBuffer, VkImageView, VkImageLayout);
    void (*p_vkCmdBindTransformFeedbackBuffersEXT)(VkCommandBuffer, uint32_t, uint32_t, const VkBuffer *, const VkDeviceSize *, const VkDeviceSize *);
    void (*p_vkCmdBindVertexBuffers)(VkCommandBuffer, uint32_t, uint32_t, const VkBuffer *, const VkDeviceSize *);
    void (*p_vkCmdBindVertexBuffers2EXT)(VkCommandBuffer, uint32_t, uint32_t, const VkBuffer *, const VkDeviceSize *, const VkDeviceSize *, const VkDeviceSize *);
    void (*p_vkCmdBlitImage)(VkCommandBuffer, VkImage, VkImageLayout, VkImage, VkImageLayout, uint32_t, const VkImageBlit *, VkFilter);
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkCmdBuildAccelerationStructureNV)(VkCommandBuffer, const VkAccelerationStructureInfoNV_host *, VkBuffer, VkDeviceSize, VkBool32, VkAccelerationStructureKHR, VkAccelerationStructureKHR, VkBuffer, VkDeviceSize);
#else
    void (*p_vkCmdBuildAccelerationStructureNV)(VkCommandBuffer, const VkAccelerationStructureInfoNV *, VkBuffer, VkDeviceSize, VkBool32, VkAccelerationStructureKHR, VkAccelerationStructureKHR, VkBuffer, VkDeviceSize);
#endif
    void (*p_vkCmdClearAttachments)(VkCommandBuffer, uint32_t, const VkClearAttachment *, uint32_t, const VkClearRect *);
    void (*p_vkCmdClearColorImage)(VkCommandBuffer, VkImage, VkImageLayout, const VkClearColorValue *, uint32_t, const VkImageSubresourceRange *);
    void (*p_vkCmdClearDepthStencilImage)(VkCommandBuffer, VkImage, VkImageLayout, const VkClearDepthStencilValue *, uint32_t, const VkImageSubresourceRange *);
    void (*p_vkCmdCopyAccelerationStructureNV)(VkCommandBuffer, VkAccelerationStructureKHR, VkAccelerationStructureKHR, VkCopyAccelerationStructureModeKHR);
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkCmdCopyBuffer)(VkCommandBuffer, VkBuffer, VkBuffer, uint32_t, const VkBufferCopy_host *);
#else
    void (*p_vkCmdCopyBuffer)(VkCommandBuffer, VkBuffer, VkBuffer, uint32_t, const VkBufferCopy *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkCmdCopyBufferToImage)(VkCommandBuffer, VkBuffer, VkImage, VkImageLayout, uint32_t, const VkBufferImageCopy_host *);
#else
    void (*p_vkCmdCopyBufferToImage)(VkCommandBuffer, VkBuffer, VkImage, VkImageLayout, uint32_t, const VkBufferImageCopy *);
#endif
    void (*p_vkCmdCopyImage)(VkCommandBuffer, VkImage, VkImageLayout, VkImage, VkImageLayout, uint32_t, const VkImageCopy *);
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkCmdCopyImageToBuffer)(VkCommandBuffer, VkImage, VkImageLayout, VkBuffer, uint32_t, const VkBufferImageCopy_host *);
#else
    void (*p_vkCmdCopyImageToBuffer)(VkCommandBuffer, VkImage, VkImageLayout, VkBuffer, uint32_t, const VkBufferImageCopy *);
#endif
    void (*p_vkCmdCopyQueryPoolResults)(VkCommandBuffer, VkQueryPool, uint32_t, uint32_t, VkBuffer, VkDeviceSize, VkDeviceSize, VkQueryResultFlags);
    void (*p_vkCmdDispatch)(VkCommandBuffer, uint32_t, uint32_t, uint32_t);
    void (*p_vkCmdDispatchBase)(VkCommandBuffer, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
    void (*p_vkCmdDispatchBaseKHR)(VkCommandBuffer, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
    void (*p_vkCmdDispatchIndirect)(VkCommandBuffer, VkBuffer, VkDeviceSize);
    void (*p_vkCmdDraw)(VkCommandBuffer, uint32_t, uint32_t, uint32_t, uint32_t);
    void (*p_vkCmdDrawIndexed)(VkCommandBuffer, uint32_t, uint32_t, uint32_t, int32_t, uint32_t);
    void (*p_vkCmdDrawIndexedIndirect)(VkCommandBuffer, VkBuffer, VkDeviceSize, uint32_t, uint32_t);
    void (*p_vkCmdDrawIndexedIndirectCount)(VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, uint32_t, uint32_t);
    void (*p_vkCmdDrawIndexedIndirectCountAMD)(VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, uint32_t, uint32_t);
    void (*p_vkCmdDrawIndexedIndirectCountKHR)(VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, uint32_t, uint32_t);
    void (*p_vkCmdDrawIndirect)(VkCommandBuffer, VkBuffer, VkDeviceSize, uint32_t, uint32_t);
    void (*p_vkCmdDrawIndirectByteCountEXT)(VkCommandBuffer, uint32_t, uint32_t, VkBuffer, VkDeviceSize, uint32_t, uint32_t);
    void (*p_vkCmdDrawIndirectCount)(VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, uint32_t, uint32_t);
    void (*p_vkCmdDrawIndirectCountAMD)(VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, uint32_t, uint32_t);
    void (*p_vkCmdDrawIndirectCountKHR)(VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, uint32_t, uint32_t);
    void (*p_vkCmdDrawMeshTasksIndirectCountNV)(VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, uint32_t, uint32_t);
    void (*p_vkCmdDrawMeshTasksIndirectNV)(VkCommandBuffer, VkBuffer, VkDeviceSize, uint32_t, uint32_t);
    void (*p_vkCmdDrawMeshTasksNV)(VkCommandBuffer, uint32_t, uint32_t);
    void (*p_vkCmdEndConditionalRenderingEXT)(VkCommandBuffer);
    void (*p_vkCmdEndQuery)(VkCommandBuffer, VkQueryPool, uint32_t);
    void (*p_vkCmdEndQueryIndexedEXT)(VkCommandBuffer, VkQueryPool, uint32_t, uint32_t);
    void (*p_vkCmdEndRenderPass)(VkCommandBuffer);
    void (*p_vkCmdEndRenderPass2)(VkCommandBuffer, const VkSubpassEndInfo *);
    void (*p_vkCmdEndRenderPass2KHR)(VkCommandBuffer, const VkSubpassEndInfo *);
    void (*p_vkCmdEndTransformFeedbackEXT)(VkCommandBuffer, uint32_t, uint32_t, const VkBuffer *, const VkDeviceSize *);
    void (*p_vkCmdExecuteCommands)(VkCommandBuffer, uint32_t, const VkCommandBuffer *);
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkCmdExecuteGeneratedCommandsNV)(VkCommandBuffer, VkBool32, const VkGeneratedCommandsInfoNV_host *);
#else
    void (*p_vkCmdExecuteGeneratedCommandsNV)(VkCommandBuffer, VkBool32, const VkGeneratedCommandsInfoNV *);
#endif
    void (*p_vkCmdFillBuffer)(VkCommandBuffer, VkBuffer, VkDeviceSize, VkDeviceSize, uint32_t);
    void (*p_vkCmdNextSubpass)(VkCommandBuffer, VkSubpassContents);
    void (*p_vkCmdNextSubpass2)(VkCommandBuffer, const VkSubpassBeginInfo *, const VkSubpassEndInfo *);
    void (*p_vkCmdNextSubpass2KHR)(VkCommandBuffer, const VkSubpassBeginInfo *, const VkSubpassEndInfo *);
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkCmdPipelineBarrier)(VkCommandBuffer, VkPipelineStageFlags, VkPipelineStageFlags, VkDependencyFlags, uint32_t, const VkMemoryBarrier *, uint32_t, const VkBufferMemoryBarrier_host *, uint32_t, const VkImageMemoryBarrier_host *);
#else
    void (*p_vkCmdPipelineBarrier)(VkCommandBuffer, VkPipelineStageFlags, VkPipelineStageFlags, VkDependencyFlags, uint32_t, const VkMemoryBarrier *, uint32_t, const VkBufferMemoryBarrier *, uint32_t, const VkImageMemoryBarrier *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkCmdPreprocessGeneratedCommandsNV)(VkCommandBuffer, const VkGeneratedCommandsInfoNV_host *);
#else
    void (*p_vkCmdPreprocessGeneratedCommandsNV)(VkCommandBuffer, const VkGeneratedCommandsInfoNV *);
#endif
    void (*p_vkCmdPushConstants)(VkCommandBuffer, VkPipelineLayout, VkShaderStageFlags, uint32_t, uint32_t, const void *);
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkCmdPushDescriptorSetKHR)(VkCommandBuffer, VkPipelineBindPoint, VkPipelineLayout, uint32_t, uint32_t, const VkWriteDescriptorSet_host *);
#else
    void (*p_vkCmdPushDescriptorSetKHR)(VkCommandBuffer, VkPipelineBindPoint, VkPipelineLayout, uint32_t, uint32_t, const VkWriteDescriptorSet *);
#endif
    void (*p_vkCmdPushDescriptorSetWithTemplateKHR)(VkCommandBuffer, VkDescriptorUpdateTemplate, VkPipelineLayout, uint32_t, const void *);
    void (*p_vkCmdResetEvent)(VkCommandBuffer, VkEvent, VkPipelineStageFlags);
    void (*p_vkCmdResetQueryPool)(VkCommandBuffer, VkQueryPool, uint32_t, uint32_t);
    void (*p_vkCmdResolveImage)(VkCommandBuffer, VkImage, VkImageLayout, VkImage, VkImageLayout, uint32_t, const VkImageResolve *);
    void (*p_vkCmdSetBlendConstants)(VkCommandBuffer, const float[4]);
    void (*p_vkCmdSetCheckpointNV)(VkCommandBuffer, const void *);
    void (*p_vkCmdSetCoarseSampleOrderNV)(VkCommandBuffer, VkCoarseSampleOrderTypeNV, uint32_t, const VkCoarseSampleOrderCustomNV *);
    void (*p_vkCmdSetCullModeEXT)(VkCommandBuffer, VkCullModeFlags);
    void (*p_vkCmdSetDepthBias)(VkCommandBuffer, float, float, float);
    void (*p_vkCmdSetDepthBounds)(VkCommandBuffer, float, float);
    void (*p_vkCmdSetDepthBoundsTestEnableEXT)(VkCommandBuffer, VkBool32);
    void (*p_vkCmdSetDepthCompareOpEXT)(VkCommandBuffer, VkCompareOp);
    void (*p_vkCmdSetDepthTestEnableEXT)(VkCommandBuffer, VkBool32);
    void (*p_vkCmdSetDepthWriteEnableEXT)(VkCommandBuffer, VkBool32);
    void (*p_vkCmdSetDeviceMask)(VkCommandBuffer, uint32_t);
    void (*p_vkCmdSetDeviceMaskKHR)(VkCommandBuffer, uint32_t);
    void (*p_vkCmdSetDiscardRectangleEXT)(VkCommandBuffer, uint32_t, uint32_t, const VkRect2D *);
    void (*p_vkCmdSetEvent)(VkCommandBuffer, VkEvent, VkPipelineStageFlags);
    void (*p_vkCmdSetExclusiveScissorNV)(VkCommandBuffer, uint32_t, uint32_t, const VkRect2D *);
    void (*p_vkCmdSetFrontFaceEXT)(VkCommandBuffer, VkFrontFace);
    void (*p_vkCmdSetLineStippleEXT)(VkCommandBuffer, uint32_t, uint16_t);
    void (*p_vkCmdSetLineWidth)(VkCommandBuffer, float);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkCmdSetPerformanceMarkerINTEL)(VkCommandBuffer, const VkPerformanceMarkerInfoINTEL_host *);
#else
    VkResult (*p_vkCmdSetPerformanceMarkerINTEL)(VkCommandBuffer, const VkPerformanceMarkerInfoINTEL *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkCmdSetPerformanceOverrideINTEL)(VkCommandBuffer, const VkPerformanceOverrideInfoINTEL_host *);
#else
    VkResult (*p_vkCmdSetPerformanceOverrideINTEL)(VkCommandBuffer, const VkPerformanceOverrideInfoINTEL *);
#endif
    VkResult (*p_vkCmdSetPerformanceStreamMarkerINTEL)(VkCommandBuffer, const VkPerformanceStreamMarkerInfoINTEL *);
    void (*p_vkCmdSetPrimitiveTopologyEXT)(VkCommandBuffer, VkPrimitiveTopology);
    void (*p_vkCmdSetSampleLocationsEXT)(VkCommandBuffer, const VkSampleLocationsInfoEXT *);
    void (*p_vkCmdSetScissor)(VkCommandBuffer, uint32_t, uint32_t, const VkRect2D *);
    void (*p_vkCmdSetScissorWithCountEXT)(VkCommandBuffer, uint32_t, const VkRect2D *);
    void (*p_vkCmdSetStencilCompareMask)(VkCommandBuffer, VkStencilFaceFlags, uint32_t);
    void (*p_vkCmdSetStencilOpEXT)(VkCommandBuffer, VkStencilFaceFlags, VkStencilOp, VkStencilOp, VkStencilOp, VkCompareOp);
    void (*p_vkCmdSetStencilReference)(VkCommandBuffer, VkStencilFaceFlags, uint32_t);
    void (*p_vkCmdSetStencilTestEnableEXT)(VkCommandBuffer, VkBool32);
    void (*p_vkCmdSetStencilWriteMask)(VkCommandBuffer, VkStencilFaceFlags, uint32_t);
    void (*p_vkCmdSetViewport)(VkCommandBuffer, uint32_t, uint32_t, const VkViewport *);
    void (*p_vkCmdSetViewportShadingRatePaletteNV)(VkCommandBuffer, uint32_t, uint32_t, const VkShadingRatePaletteNV *);
    void (*p_vkCmdSetViewportWScalingNV)(VkCommandBuffer, uint32_t, uint32_t, const VkViewportWScalingNV *);
    void (*p_vkCmdSetViewportWithCountEXT)(VkCommandBuffer, uint32_t, const VkViewport *);
    void (*p_vkCmdTraceRaysNV)(VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, VkDeviceSize, VkBuffer, VkDeviceSize, VkDeviceSize, VkBuffer, VkDeviceSize, VkDeviceSize, uint32_t, uint32_t, uint32_t);
    void (*p_vkCmdUpdateBuffer)(VkCommandBuffer, VkBuffer, VkDeviceSize, VkDeviceSize, const void *);
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkCmdWaitEvents)(VkCommandBuffer, uint32_t, const VkEvent *, VkPipelineStageFlags, VkPipelineStageFlags, uint32_t, const VkMemoryBarrier *, uint32_t, const VkBufferMemoryBarrier_host *, uint32_t, const VkImageMemoryBarrier_host *);
#else
    void (*p_vkCmdWaitEvents)(VkCommandBuffer, uint32_t, const VkEvent *, VkPipelineStageFlags, VkPipelineStageFlags, uint32_t, const VkMemoryBarrier *, uint32_t, const VkBufferMemoryBarrier *, uint32_t, const VkImageMemoryBarrier *);
#endif
    void (*p_vkCmdWriteAccelerationStructuresPropertiesNV)(VkCommandBuffer, uint32_t, const VkAccelerationStructureKHR *, VkQueryType, VkQueryPool, uint32_t);
    void (*p_vkCmdWriteBufferMarkerAMD)(VkCommandBuffer, VkPipelineStageFlagBits, VkBuffer, VkDeviceSize, uint32_t);
    void (*p_vkCmdWriteTimestamp)(VkCommandBuffer, VkPipelineStageFlagBits, VkQueryPool, uint32_t);
    VkResult (*p_vkCompileDeferredNV)(VkDevice, VkPipeline, uint32_t);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkCreateAccelerationStructureNV)(VkDevice, const VkAccelerationStructureCreateInfoNV_host *, const VkAllocationCallbacks *, VkAccelerationStructureNV *);
#else
    VkResult (*p_vkCreateAccelerationStructureNV)(VkDevice, const VkAccelerationStructureCreateInfoNV *, const VkAllocationCallbacks *, VkAccelerationStructureNV *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkCreateBuffer)(VkDevice, const VkBufferCreateInfo_host *, const VkAllocationCallbacks *, VkBuffer *);
#else
    VkResult (*p_vkCreateBuffer)(VkDevice, const VkBufferCreateInfo *, const VkAllocationCallbacks *, VkBuffer *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkCreateBufferView)(VkDevice, const VkBufferViewCreateInfo_host *, const VkAllocationCallbacks *, VkBufferView *);
#else
    VkResult (*p_vkCreateBufferView)(VkDevice, const VkBufferViewCreateInfo *, const VkAllocationCallbacks *, VkBufferView *);
#endif
    VkResult (*p_vkCreateCommandPool)(VkDevice, const VkCommandPoolCreateInfo *, const VkAllocationCallbacks *, VkCommandPool *);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkCreateComputePipelines)(VkDevice, VkPipelineCache, uint32_t, const VkComputePipelineCreateInfo_host *, const VkAllocationCallbacks *, VkPipeline *);
#else
    VkResult (*p_vkCreateComputePipelines)(VkDevice, VkPipelineCache, uint32_t, const VkComputePipelineCreateInfo *, const VkAllocationCallbacks *, VkPipeline *);
#endif
    VkResult (*p_vkCreateDescriptorPool)(VkDevice, const VkDescriptorPoolCreateInfo *, const VkAllocationCallbacks *, VkDescriptorPool *);
    VkResult (*p_vkCreateDescriptorSetLayout)(VkDevice, const VkDescriptorSetLayoutCreateInfo *, const VkAllocationCallbacks *, VkDescriptorSetLayout *);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkCreateDescriptorUpdateTemplate)(VkDevice, const VkDescriptorUpdateTemplateCreateInfo_host *, const VkAllocationCallbacks *, VkDescriptorUpdateTemplate *);
#else
    VkResult (*p_vkCreateDescriptorUpdateTemplate)(VkDevice, const VkDescriptorUpdateTemplateCreateInfo *, const VkAllocationCallbacks *, VkDescriptorUpdateTemplate *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkCreateDescriptorUpdateTemplateKHR)(VkDevice, const VkDescriptorUpdateTemplateCreateInfo_host *, const VkAllocationCallbacks *, VkDescriptorUpdateTemplate *);
#else
    VkResult (*p_vkCreateDescriptorUpdateTemplateKHR)(VkDevice, const VkDescriptorUpdateTemplateCreateInfo *, const VkAllocationCallbacks *, VkDescriptorUpdateTemplate *);
#endif
    VkResult (*p_vkCreateEvent)(VkDevice, const VkEventCreateInfo *, const VkAllocationCallbacks *, VkEvent *);
    VkResult (*p_vkCreateFence)(VkDevice, const VkFenceCreateInfo *, const VkAllocationCallbacks *, VkFence *);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkCreateFramebuffer)(VkDevice, const VkFramebufferCreateInfo_host *, const VkAllocationCallbacks *, VkFramebuffer *);
#else
    VkResult (*p_vkCreateFramebuffer)(VkDevice, const VkFramebufferCreateInfo *, const VkAllocationCallbacks *, VkFramebuffer *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkCreateGraphicsPipelines)(VkDevice, VkPipelineCache, uint32_t, const VkGraphicsPipelineCreateInfo_host *, const VkAllocationCallbacks *, VkPipeline *);
#else
    VkResult (*p_vkCreateGraphicsPipelines)(VkDevice, VkPipelineCache, uint32_t, const VkGraphicsPipelineCreateInfo *, const VkAllocationCallbacks *, VkPipeline *);
#endif
    VkResult (*p_vkCreateImage)(VkDevice, const VkImageCreateInfo *, const VkAllocationCallbacks *, VkImage *);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkCreateImageView)(VkDevice, const VkImageViewCreateInfo_host *, const VkAllocationCallbacks *, VkImageView *);
#else
    VkResult (*p_vkCreateImageView)(VkDevice, const VkImageViewCreateInfo *, const VkAllocationCallbacks *, VkImageView *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkCreateIndirectCommandsLayoutNV)(VkDevice, const VkIndirectCommandsLayoutCreateInfoNV_host *, const VkAllocationCallbacks *, VkIndirectCommandsLayoutNV *);
#else
    VkResult (*p_vkCreateIndirectCommandsLayoutNV)(VkDevice, const VkIndirectCommandsLayoutCreateInfoNV *, const VkAllocationCallbacks *, VkIndirectCommandsLayoutNV *);
#endif
    VkResult (*p_vkCreatePipelineCache)(VkDevice, const VkPipelineCacheCreateInfo *, const VkAllocationCallbacks *, VkPipelineCache *);
    VkResult (*p_vkCreatePipelineLayout)(VkDevice, const VkPipelineLayoutCreateInfo *, const VkAllocationCallbacks *, VkPipelineLayout *);
    VkResult (*p_vkCreatePrivateDataSlotEXT)(VkDevice, const VkPrivateDataSlotCreateInfoEXT *, const VkAllocationCallbacks *, VkPrivateDataSlotEXT *);
    VkResult (*p_vkCreateQueryPool)(VkDevice, const VkQueryPoolCreateInfo *, const VkAllocationCallbacks *, VkQueryPool *);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkCreateRayTracingPipelinesNV)(VkDevice, VkPipelineCache, uint32_t, const VkRayTracingPipelineCreateInfoNV_host *, const VkAllocationCallbacks *, VkPipeline *);
#else
    VkResult (*p_vkCreateRayTracingPipelinesNV)(VkDevice, VkPipelineCache, uint32_t, const VkRayTracingPipelineCreateInfoNV *, const VkAllocationCallbacks *, VkPipeline *);
#endif
    VkResult (*p_vkCreateRenderPass)(VkDevice, const VkRenderPassCreateInfo *, const VkAllocationCallbacks *, VkRenderPass *);
    VkResult (*p_vkCreateRenderPass2)(VkDevice, const VkRenderPassCreateInfo2 *, const VkAllocationCallbacks *, VkRenderPass *);
    VkResult (*p_vkCreateRenderPass2KHR)(VkDevice, const VkRenderPassCreateInfo2 *, const VkAllocationCallbacks *, VkRenderPass *);
    VkResult (*p_vkCreateSampler)(VkDevice, const VkSamplerCreateInfo *, const VkAllocationCallbacks *, VkSampler *);
    VkResult (*p_vkCreateSamplerYcbcrConversion)(VkDevice, const VkSamplerYcbcrConversionCreateInfo *, const VkAllocationCallbacks *, VkSamplerYcbcrConversion *);
    VkResult (*p_vkCreateSamplerYcbcrConversionKHR)(VkDevice, const VkSamplerYcbcrConversionCreateInfo *, const VkAllocationCallbacks *, VkSamplerYcbcrConversion *);
    VkResult (*p_vkCreateSemaphore)(VkDevice, const VkSemaphoreCreateInfo *, const VkAllocationCallbacks *, VkSemaphore *);
    VkResult (*p_vkCreateShaderModule)(VkDevice, const VkShaderModuleCreateInfo *, const VkAllocationCallbacks *, VkShaderModule *);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkCreateSwapchainKHR)(VkDevice, const VkSwapchainCreateInfoKHR_host *, const VkAllocationCallbacks *, VkSwapchainKHR *);
#else
    VkResult (*p_vkCreateSwapchainKHR)(VkDevice, const VkSwapchainCreateInfoKHR *, const VkAllocationCallbacks *, VkSwapchainKHR *);
#endif
    VkResult (*p_vkCreateValidationCacheEXT)(VkDevice, const VkValidationCacheCreateInfoEXT *, const VkAllocationCallbacks *, VkValidationCacheEXT *);
    void (*p_vkDestroyAccelerationStructureNV)(VkDevice, VkAccelerationStructureKHR, const VkAllocationCallbacks *);
    void (*p_vkDestroyBuffer)(VkDevice, VkBuffer, const VkAllocationCallbacks *);
    void (*p_vkDestroyBufferView)(VkDevice, VkBufferView, const VkAllocationCallbacks *);
    void (*p_vkDestroyCommandPool)(VkDevice, VkCommandPool, const VkAllocationCallbacks *);
    void (*p_vkDestroyDescriptorPool)(VkDevice, VkDescriptorPool, const VkAllocationCallbacks *);
    void (*p_vkDestroyDescriptorSetLayout)(VkDevice, VkDescriptorSetLayout, const VkAllocationCallbacks *);
    void (*p_vkDestroyDescriptorUpdateTemplate)(VkDevice, VkDescriptorUpdateTemplate, const VkAllocationCallbacks *);
    void (*p_vkDestroyDescriptorUpdateTemplateKHR)(VkDevice, VkDescriptorUpdateTemplate, const VkAllocationCallbacks *);
    void (*p_vkDestroyDevice)(VkDevice, const VkAllocationCallbacks *);
    void (*p_vkDestroyEvent)(VkDevice, VkEvent, const VkAllocationCallbacks *);
    void (*p_vkDestroyFence)(VkDevice, VkFence, const VkAllocationCallbacks *);
    void (*p_vkDestroyFramebuffer)(VkDevice, VkFramebuffer, const VkAllocationCallbacks *);
    void (*p_vkDestroyImage)(VkDevice, VkImage, const VkAllocationCallbacks *);
    void (*p_vkDestroyImageView)(VkDevice, VkImageView, const VkAllocationCallbacks *);
    void (*p_vkDestroyIndirectCommandsLayoutNV)(VkDevice, VkIndirectCommandsLayoutNV, const VkAllocationCallbacks *);
    void (*p_vkDestroyPipeline)(VkDevice, VkPipeline, const VkAllocationCallbacks *);
    void (*p_vkDestroyPipelineCache)(VkDevice, VkPipelineCache, const VkAllocationCallbacks *);
    void (*p_vkDestroyPipelineLayout)(VkDevice, VkPipelineLayout, const VkAllocationCallbacks *);
    void (*p_vkDestroyPrivateDataSlotEXT)(VkDevice, VkPrivateDataSlotEXT, const VkAllocationCallbacks *);
    void (*p_vkDestroyQueryPool)(VkDevice, VkQueryPool, const VkAllocationCallbacks *);
    void (*p_vkDestroyRenderPass)(VkDevice, VkRenderPass, const VkAllocationCallbacks *);
    void (*p_vkDestroySampler)(VkDevice, VkSampler, const VkAllocationCallbacks *);
    void (*p_vkDestroySamplerYcbcrConversion)(VkDevice, VkSamplerYcbcrConversion, const VkAllocationCallbacks *);
    void (*p_vkDestroySamplerYcbcrConversionKHR)(VkDevice, VkSamplerYcbcrConversion, const VkAllocationCallbacks *);
    void (*p_vkDestroySemaphore)(VkDevice, VkSemaphore, const VkAllocationCallbacks *);
    void (*p_vkDestroyShaderModule)(VkDevice, VkShaderModule, const VkAllocationCallbacks *);
    void (*p_vkDestroySwapchainKHR)(VkDevice, VkSwapchainKHR, const VkAllocationCallbacks *);
    void (*p_vkDestroyValidationCacheEXT)(VkDevice, VkValidationCacheEXT, const VkAllocationCallbacks *);
    VkResult (*p_vkDeviceWaitIdle)(VkDevice);
    VkResult (*p_vkEndCommandBuffer)(VkCommandBuffer);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkFlushMappedMemoryRanges)(VkDevice, uint32_t, const VkMappedMemoryRange_host *);
#else
    VkResult (*p_vkFlushMappedMemoryRanges)(VkDevice, uint32_t, const VkMappedMemoryRange *);
#endif
    void (*p_vkFreeCommandBuffers)(VkDevice, VkCommandPool, uint32_t, const VkCommandBuffer *);
    VkResult (*p_vkFreeDescriptorSets)(VkDevice, VkDescriptorPool, uint32_t, const VkDescriptorSet *);
    void (*p_vkFreeMemory)(VkDevice, VkDeviceMemory, const VkAllocationCallbacks *);
    VkResult (*p_vkGetAccelerationStructureHandleNV)(VkDevice, VkAccelerationStructureKHR, size_t, void *);
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetAccelerationStructureMemoryRequirementsNV)(VkDevice, const VkAccelerationStructureMemoryRequirementsInfoNV_host *, VkMemoryRequirements2KHR_host *);
#else
    void (*p_vkGetAccelerationStructureMemoryRequirementsNV)(VkDevice, const VkAccelerationStructureMemoryRequirementsInfoNV *, VkMemoryRequirements2KHR *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkDeviceAddress (*p_vkGetBufferDeviceAddress)(VkDevice, const VkBufferDeviceAddressInfo_host *);
#else
    VkDeviceAddress (*p_vkGetBufferDeviceAddress)(VkDevice, const VkBufferDeviceAddressInfo *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkDeviceAddress (*p_vkGetBufferDeviceAddressEXT)(VkDevice, const VkBufferDeviceAddressInfo_host *);
#else
    VkDeviceAddress (*p_vkGetBufferDeviceAddressEXT)(VkDevice, const VkBufferDeviceAddressInfo *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkDeviceAddress (*p_vkGetBufferDeviceAddressKHR)(VkDevice, const VkBufferDeviceAddressInfo_host *);
#else
    VkDeviceAddress (*p_vkGetBufferDeviceAddressKHR)(VkDevice, const VkBufferDeviceAddressInfo *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetBufferMemoryRequirements)(VkDevice, VkBuffer, VkMemoryRequirements_host *);
#else
    void (*p_vkGetBufferMemoryRequirements)(VkDevice, VkBuffer, VkMemoryRequirements *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetBufferMemoryRequirements2)(VkDevice, const VkBufferMemoryRequirementsInfo2_host *, VkMemoryRequirements2_host *);
#else
    void (*p_vkGetBufferMemoryRequirements2)(VkDevice, const VkBufferMemoryRequirementsInfo2 *, VkMemoryRequirements2 *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetBufferMemoryRequirements2KHR)(VkDevice, const VkBufferMemoryRequirementsInfo2_host *, VkMemoryRequirements2_host *);
#else
    void (*p_vkGetBufferMemoryRequirements2KHR)(VkDevice, const VkBufferMemoryRequirementsInfo2 *, VkMemoryRequirements2 *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    uint64_t (*p_vkGetBufferOpaqueCaptureAddress)(VkDevice, const VkBufferDeviceAddressInfo_host *);
#else
    uint64_t (*p_vkGetBufferOpaqueCaptureAddress)(VkDevice, const VkBufferDeviceAddressInfo *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    uint64_t (*p_vkGetBufferOpaqueCaptureAddressKHR)(VkDevice, const VkBufferDeviceAddressInfo_host *);
#else
    uint64_t (*p_vkGetBufferOpaqueCaptureAddressKHR)(VkDevice, const VkBufferDeviceAddressInfo *);
#endif
    VkResult (*p_vkGetCalibratedTimestampsEXT)(VkDevice, uint32_t, const VkCalibratedTimestampInfoEXT *, uint64_t *, uint64_t *);
    void (*p_vkGetDescriptorSetLayoutSupport)(VkDevice, const VkDescriptorSetLayoutCreateInfo *, VkDescriptorSetLayoutSupport *);
    void (*p_vkGetDescriptorSetLayoutSupportKHR)(VkDevice, const VkDescriptorSetLayoutCreateInfo *, VkDescriptorSetLayoutSupport *);
    void (*p_vkGetDeviceGroupPeerMemoryFeatures)(VkDevice, uint32_t, uint32_t, uint32_t, VkPeerMemoryFeatureFlags *);
    void (*p_vkGetDeviceGroupPeerMemoryFeaturesKHR)(VkDevice, uint32_t, uint32_t, uint32_t, VkPeerMemoryFeatureFlags *);
    VkResult (*p_vkGetDeviceGroupPresentCapabilitiesKHR)(VkDevice, VkDeviceGroupPresentCapabilitiesKHR *);
    VkResult (*p_vkGetDeviceGroupSurfacePresentModesKHR)(VkDevice, VkSurfaceKHR, VkDeviceGroupPresentModeFlagsKHR *);
    void (*p_vkGetDeviceMemoryCommitment)(VkDevice, VkDeviceMemory, VkDeviceSize *);
#if defined(USE_STRUCT_CONVERSION)
    uint64_t (*p_vkGetDeviceMemoryOpaqueCaptureAddress)(VkDevice, const VkDeviceMemoryOpaqueCaptureAddressInfo_host *);
#else
    uint64_t (*p_vkGetDeviceMemoryOpaqueCaptureAddress)(VkDevice, const VkDeviceMemoryOpaqueCaptureAddressInfo *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    uint64_t (*p_vkGetDeviceMemoryOpaqueCaptureAddressKHR)(VkDevice, const VkDeviceMemoryOpaqueCaptureAddressInfo_host *);
#else
    uint64_t (*p_vkGetDeviceMemoryOpaqueCaptureAddressKHR)(VkDevice, const VkDeviceMemoryOpaqueCaptureAddressInfo *);
#endif
    void (*p_vkGetDeviceQueue)(VkDevice, uint32_t, uint32_t, VkQueue *);
    void (*p_vkGetDeviceQueue2)(VkDevice, const VkDeviceQueueInfo2 *, VkQueue *);
    VkResult (*p_vkGetEventStatus)(VkDevice, VkEvent);
    VkResult (*p_vkGetFenceStatus)(VkDevice, VkFence);
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetGeneratedCommandsMemoryRequirementsNV)(VkDevice, const VkGeneratedCommandsMemoryRequirementsInfoNV_host *, VkMemoryRequirements2_host *);
#else
    void (*p_vkGetGeneratedCommandsMemoryRequirementsNV)(VkDevice, const VkGeneratedCommandsMemoryRequirementsInfoNV *, VkMemoryRequirements2 *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetImageMemoryRequirements)(VkDevice, VkImage, VkMemoryRequirements_host *);
#else
    void (*p_vkGetImageMemoryRequirements)(VkDevice, VkImage, VkMemoryRequirements *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetImageMemoryRequirements2)(VkDevice, const VkImageMemoryRequirementsInfo2_host *, VkMemoryRequirements2_host *);
#else
    void (*p_vkGetImageMemoryRequirements2)(VkDevice, const VkImageMemoryRequirementsInfo2 *, VkMemoryRequirements2 *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetImageMemoryRequirements2KHR)(VkDevice, const VkImageMemoryRequirementsInfo2_host *, VkMemoryRequirements2_host *);
#else
    void (*p_vkGetImageMemoryRequirements2KHR)(VkDevice, const VkImageMemoryRequirementsInfo2 *, VkMemoryRequirements2 *);
#endif
    void (*p_vkGetImageSparseMemoryRequirements)(VkDevice, VkImage, uint32_t *, VkSparseImageMemoryRequirements *);
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetImageSparseMemoryRequirements2)(VkDevice, const VkImageSparseMemoryRequirementsInfo2_host *, uint32_t *, VkSparseImageMemoryRequirements2 *);
#else
    void (*p_vkGetImageSparseMemoryRequirements2)(VkDevice, const VkImageSparseMemoryRequirementsInfo2 *, uint32_t *, VkSparseImageMemoryRequirements2 *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetImageSparseMemoryRequirements2KHR)(VkDevice, const VkImageSparseMemoryRequirementsInfo2_host *, uint32_t *, VkSparseImageMemoryRequirements2 *);
#else
    void (*p_vkGetImageSparseMemoryRequirements2KHR)(VkDevice, const VkImageSparseMemoryRequirementsInfo2 *, uint32_t *, VkSparseImageMemoryRequirements2 *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetImageSubresourceLayout)(VkDevice, VkImage, const VkImageSubresource *, VkSubresourceLayout_host *);
#else
    void (*p_vkGetImageSubresourceLayout)(VkDevice, VkImage, const VkImageSubresource *, VkSubresourceLayout *);
#endif
    VkResult (*p_vkGetMemoryHostPointerPropertiesEXT)(VkDevice, VkExternalMemoryHandleTypeFlagBits, const void *, VkMemoryHostPointerPropertiesEXT *);
    VkResult (*p_vkGetPerformanceParameterINTEL)(VkDevice, VkPerformanceParameterTypeINTEL, VkPerformanceValueINTEL *);
    VkResult (*p_vkGetPipelineCacheData)(VkDevice, VkPipelineCache, size_t *, void *);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkGetPipelineExecutableInternalRepresentationsKHR)(VkDevice, const VkPipelineExecutableInfoKHR_host *, uint32_t *, VkPipelineExecutableInternalRepresentationKHR *);
#else
    VkResult (*p_vkGetPipelineExecutableInternalRepresentationsKHR)(VkDevice, const VkPipelineExecutableInfoKHR *, uint32_t *, VkPipelineExecutableInternalRepresentationKHR *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkGetPipelineExecutablePropertiesKHR)(VkDevice, const VkPipelineInfoKHR_host *, uint32_t *, VkPipelineExecutablePropertiesKHR *);
#else
    VkResult (*p_vkGetPipelineExecutablePropertiesKHR)(VkDevice, const VkPipelineInfoKHR *, uint32_t *, VkPipelineExecutablePropertiesKHR *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkGetPipelineExecutableStatisticsKHR)(VkDevice, const VkPipelineExecutableInfoKHR_host *, uint32_t *, VkPipelineExecutableStatisticKHR *);
#else
    VkResult (*p_vkGetPipelineExecutableStatisticsKHR)(VkDevice, const VkPipelineExecutableInfoKHR *, uint32_t *, VkPipelineExecutableStatisticKHR *);
#endif
    void (*p_vkGetPrivateDataEXT)(VkDevice, VkObjectType, uint64_t, VkPrivateDataSlotEXT, uint64_t *);
    VkResult (*p_vkGetQueryPoolResults)(VkDevice, VkQueryPool, uint32_t, uint32_t, size_t, void *, VkDeviceSize, VkQueryResultFlags);
    void (*p_vkGetQueueCheckpointDataNV)(VkQueue, uint32_t *, VkCheckpointDataNV *);
    VkResult (*p_vkGetRayTracingShaderGroupHandlesNV)(VkDevice, VkPipeline, uint32_t, uint32_t, size_t, void *);
    void (*p_vkGetRenderAreaGranularity)(VkDevice, VkRenderPass, VkExtent2D *);
    VkResult (*p_vkGetSemaphoreCounterValue)(VkDevice, VkSemaphore, uint64_t *);
    VkResult (*p_vkGetSemaphoreCounterValueKHR)(VkDevice, VkSemaphore, uint64_t *);
    VkResult (*p_vkGetShaderInfoAMD)(VkDevice, VkPipeline, VkShaderStageFlagBits, VkShaderInfoTypeAMD, size_t *, void *);
    VkResult (*p_vkGetSwapchainImagesKHR)(VkDevice, VkSwapchainKHR, uint32_t *, VkImage *);
    VkResult (*p_vkGetValidationCacheDataEXT)(VkDevice, VkValidationCacheEXT, size_t *, void *);
    VkResult (*p_vkInitializePerformanceApiINTEL)(VkDevice, const VkInitializePerformanceApiInfoINTEL *);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkInvalidateMappedMemoryRanges)(VkDevice, uint32_t, const VkMappedMemoryRange_host *);
#else
    VkResult (*p_vkInvalidateMappedMemoryRanges)(VkDevice, uint32_t, const VkMappedMemoryRange *);
#endif
    VkResult (*p_vkMapMemory)(VkDevice, VkDeviceMemory, VkDeviceSize, VkDeviceSize, VkMemoryMapFlags, void **);
    VkResult (*p_vkMergePipelineCaches)(VkDevice, VkPipelineCache, uint32_t, const VkPipelineCache *);
    VkResult (*p_vkMergeValidationCachesEXT)(VkDevice, VkValidationCacheEXT, uint32_t, const VkValidationCacheEXT *);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkQueueBindSparse)(VkQueue, uint32_t, const VkBindSparseInfo_host *, VkFence);
#else
    VkResult (*p_vkQueueBindSparse)(VkQueue, uint32_t, const VkBindSparseInfo *, VkFence);
#endif
    VkResult (*p_vkQueuePresentKHR)(VkQueue, const VkPresentInfoKHR *);
    VkResult (*p_vkQueueSetPerformanceConfigurationINTEL)(VkQueue, VkPerformanceConfigurationINTEL);
    VkResult (*p_vkQueueSubmit)(VkQueue, uint32_t, const VkSubmitInfo *, VkFence);
    VkResult (*p_vkQueueWaitIdle)(VkQueue);
    VkResult (*p_vkReleasePerformanceConfigurationINTEL)(VkDevice, VkPerformanceConfigurationINTEL);
    void (*p_vkReleaseProfilingLockKHR)(VkDevice);
    VkResult (*p_vkResetCommandBuffer)(VkCommandBuffer, VkCommandBufferResetFlags);
    VkResult (*p_vkResetCommandPool)(VkDevice, VkCommandPool, VkCommandPoolResetFlags);
    VkResult (*p_vkResetDescriptorPool)(VkDevice, VkDescriptorPool, VkDescriptorPoolResetFlags);
    VkResult (*p_vkResetEvent)(VkDevice, VkEvent);
    VkResult (*p_vkResetFences)(VkDevice, uint32_t, const VkFence *);
    void (*p_vkResetQueryPool)(VkDevice, VkQueryPool, uint32_t, uint32_t);
    void (*p_vkResetQueryPoolEXT)(VkDevice, VkQueryPool, uint32_t, uint32_t);
    VkResult (*p_vkSetEvent)(VkDevice, VkEvent);
    VkResult (*p_vkSetPrivateDataEXT)(VkDevice, VkObjectType, uint64_t, VkPrivateDataSlotEXT, uint64_t);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkSignalSemaphore)(VkDevice, const VkSemaphoreSignalInfo_host *);
#else
    VkResult (*p_vkSignalSemaphore)(VkDevice, const VkSemaphoreSignalInfo *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkSignalSemaphoreKHR)(VkDevice, const VkSemaphoreSignalInfo_host *);
#else
    VkResult (*p_vkSignalSemaphoreKHR)(VkDevice, const VkSemaphoreSignalInfo *);
#endif
    void (*p_vkTrimCommandPool)(VkDevice, VkCommandPool, VkCommandPoolTrimFlags);
    void (*p_vkTrimCommandPoolKHR)(VkDevice, VkCommandPool, VkCommandPoolTrimFlags);
    void (*p_vkUninitializePerformanceApiINTEL)(VkDevice);
    void (*p_vkUnmapMemory)(VkDevice, VkDeviceMemory);
    void (*p_vkUpdateDescriptorSetWithTemplate)(VkDevice, VkDescriptorSet, VkDescriptorUpdateTemplate, const void *);
    void (*p_vkUpdateDescriptorSetWithTemplateKHR)(VkDevice, VkDescriptorSet, VkDescriptorUpdateTemplate, const void *);
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkUpdateDescriptorSets)(VkDevice, uint32_t, const VkWriteDescriptorSet_host *, uint32_t, const VkCopyDescriptorSet_host *);
#else
    void (*p_vkUpdateDescriptorSets)(VkDevice, uint32_t, const VkWriteDescriptorSet *, uint32_t, const VkCopyDescriptorSet *);
#endif
    VkResult (*p_vkWaitForFences)(VkDevice, uint32_t, const VkFence *, VkBool32, uint64_t);
    VkResult (*p_vkWaitSemaphores)(VkDevice, const VkSemaphoreWaitInfo *, uint64_t);
    VkResult (*p_vkWaitSemaphoresKHR)(VkDevice, const VkSemaphoreWaitInfo *, uint64_t);
};

/* For use by vkInstance and children */
struct vulkan_instance_funcs
{
    VkResult (*p_vkCreateDevice)(VkPhysicalDevice, const VkDeviceCreateInfo *, const VkAllocationCallbacks *, VkDevice *);
    VkResult (*p_vkCreateHeadlessSurfaceEXT)(VkInstance, const VkHeadlessSurfaceCreateInfoEXT *, const VkAllocationCallbacks *, VkSurfaceKHR *);
    VkResult (*p_vkCreateWin32SurfaceKHR)(VkInstance, const VkWin32SurfaceCreateInfoKHR *, const VkAllocationCallbacks *, VkSurfaceKHR *);
    void (*p_vkDestroySurfaceKHR)(VkInstance, VkSurfaceKHR, const VkAllocationCallbacks *);
    VkResult (*p_vkEnumerateDeviceExtensionProperties)(VkPhysicalDevice, const char *, uint32_t *, VkExtensionProperties *);
    VkResult (*p_vkEnumerateDeviceLayerProperties)(VkPhysicalDevice, uint32_t *, VkLayerProperties *);
    VkResult (*p_vkEnumeratePhysicalDeviceGroups)(VkInstance, uint32_t *, VkPhysicalDeviceGroupProperties *);
    VkResult (*p_vkEnumeratePhysicalDeviceGroupsKHR)(VkInstance, uint32_t *, VkPhysicalDeviceGroupProperties *);
    VkResult (*p_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)(VkPhysicalDevice, uint32_t, uint32_t *, VkPerformanceCounterKHR *, VkPerformanceCounterDescriptionKHR *);
    VkResult (*p_vkEnumeratePhysicalDevices)(VkInstance, uint32_t *, VkPhysicalDevice *);
    VkResult (*p_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)(VkPhysicalDevice, uint32_t *, VkTimeDomainEXT *);
    VkResult (*p_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)(VkPhysicalDevice, uint32_t *, VkCooperativeMatrixPropertiesNV *);
    void (*p_vkGetPhysicalDeviceFeatures)(VkPhysicalDevice, VkPhysicalDeviceFeatures *);
    void (*p_vkGetPhysicalDeviceFeatures2)(VkPhysicalDevice, VkPhysicalDeviceFeatures2 *);
    void (*p_vkGetPhysicalDeviceFeatures2KHR)(VkPhysicalDevice, VkPhysicalDeviceFeatures2 *);
    void (*p_vkGetPhysicalDeviceFormatProperties)(VkPhysicalDevice, VkFormat, VkFormatProperties *);
    void (*p_vkGetPhysicalDeviceFormatProperties2)(VkPhysicalDevice, VkFormat, VkFormatProperties2 *);
    void (*p_vkGetPhysicalDeviceFormatProperties2KHR)(VkPhysicalDevice, VkFormat, VkFormatProperties2 *);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkGetPhysicalDeviceImageFormatProperties)(VkPhysicalDevice, VkFormat, VkImageType, VkImageTiling, VkImageUsageFlags, VkImageCreateFlags, VkImageFormatProperties_host *);
#else
    VkResult (*p_vkGetPhysicalDeviceImageFormatProperties)(VkPhysicalDevice, VkFormat, VkImageType, VkImageTiling, VkImageUsageFlags, VkImageCreateFlags, VkImageFormatProperties *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkGetPhysicalDeviceImageFormatProperties2)(VkPhysicalDevice, const VkPhysicalDeviceImageFormatInfo2 *, VkImageFormatProperties2_host *);
#else
    VkResult (*p_vkGetPhysicalDeviceImageFormatProperties2)(VkPhysicalDevice, const VkPhysicalDeviceImageFormatInfo2 *, VkImageFormatProperties2 *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkGetPhysicalDeviceImageFormatProperties2KHR)(VkPhysicalDevice, const VkPhysicalDeviceImageFormatInfo2 *, VkImageFormatProperties2_host *);
#else
    VkResult (*p_vkGetPhysicalDeviceImageFormatProperties2KHR)(VkPhysicalDevice, const VkPhysicalDeviceImageFormatInfo2 *, VkImageFormatProperties2 *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetPhysicalDeviceMemoryProperties)(VkPhysicalDevice, VkPhysicalDeviceMemoryProperties_host *);
#else
    void (*p_vkGetPhysicalDeviceMemoryProperties)(VkPhysicalDevice, VkPhysicalDeviceMemoryProperties *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetPhysicalDeviceMemoryProperties2)(VkPhysicalDevice, VkPhysicalDeviceMemoryProperties2_host *);
#else
    void (*p_vkGetPhysicalDeviceMemoryProperties2)(VkPhysicalDevice, VkPhysicalDeviceMemoryProperties2 *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetPhysicalDeviceMemoryProperties2KHR)(VkPhysicalDevice, VkPhysicalDeviceMemoryProperties2_host *);
#else
    void (*p_vkGetPhysicalDeviceMemoryProperties2KHR)(VkPhysicalDevice, VkPhysicalDeviceMemoryProperties2 *);
#endif
    void (*p_vkGetPhysicalDeviceMultisamplePropertiesEXT)(VkPhysicalDevice, VkSampleCountFlagBits, VkMultisamplePropertiesEXT *);
    VkResult (*p_vkGetPhysicalDevicePresentRectanglesKHR)(VkPhysicalDevice, VkSurfaceKHR, uint32_t *, VkRect2D *);
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetPhysicalDeviceProperties)(VkPhysicalDevice, VkPhysicalDeviceProperties_host *);
#else
    void (*p_vkGetPhysicalDeviceProperties)(VkPhysicalDevice, VkPhysicalDeviceProperties *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetPhysicalDeviceProperties2)(VkPhysicalDevice, VkPhysicalDeviceProperties2_host *);
#else
    void (*p_vkGetPhysicalDeviceProperties2)(VkPhysicalDevice, VkPhysicalDeviceProperties2 *);
#endif
#if defined(USE_STRUCT_CONVERSION)
    void (*p_vkGetPhysicalDeviceProperties2KHR)(VkPhysicalDevice, VkPhysicalDeviceProperties2_host *);
#else
    void (*p_vkGetPhysicalDeviceProperties2KHR)(VkPhysicalDevice, VkPhysicalDeviceProperties2 *);
#endif
    void (*p_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)(VkPhysicalDevice, const VkQueryPoolPerformanceCreateInfoKHR *, uint32_t *);
    void (*p_vkGetPhysicalDeviceQueueFamilyProperties)(VkPhysicalDevice, uint32_t *, VkQueueFamilyProperties *);
    void (*p_vkGetPhysicalDeviceQueueFamilyProperties2)(VkPhysicalDevice, uint32_t *, VkQueueFamilyProperties2 *);
    void (*p_vkGetPhysicalDeviceQueueFamilyProperties2KHR)(VkPhysicalDevice, uint32_t *, VkQueueFamilyProperties2 *);
    void (*p_vkGetPhysicalDeviceSparseImageFormatProperties)(VkPhysicalDevice, VkFormat, VkImageType, VkSampleCountFlagBits, VkImageUsageFlags, VkImageTiling, uint32_t *, VkSparseImageFormatProperties *);
    void (*p_vkGetPhysicalDeviceSparseImageFormatProperties2)(VkPhysicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2 *, uint32_t *, VkSparseImageFormatProperties2 *);
    void (*p_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)(VkPhysicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2 *, uint32_t *, VkSparseImageFormatProperties2 *);
    VkResult (*p_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)(VkPhysicalDevice, uint32_t *, VkFramebufferMixedSamplesCombinationNV *);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkGetPhysicalDeviceSurfaceCapabilities2KHR)(VkPhysicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR_host *, VkSurfaceCapabilities2KHR *);
#else
    VkResult (*p_vkGetPhysicalDeviceSurfaceCapabilities2KHR)(VkPhysicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR *, VkSurfaceCapabilities2KHR *);
#endif
    VkResult (*p_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)(VkPhysicalDevice, VkSurfaceKHR, VkSurfaceCapabilitiesKHR *);
#if defined(USE_STRUCT_CONVERSION)
    VkResult (*p_vkGetPhysicalDeviceSurfaceFormats2KHR)(VkPhysicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR_host *, uint32_t *, VkSurfaceFormat2KHR *);
#else
    VkResult (*p_vkGetPhysicalDeviceSurfaceFormats2KHR)(VkPhysicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR *, uint32_t *, VkSurfaceFormat2KHR *);
#endif
    VkResult (*p_vkGetPhysicalDeviceSurfaceFormatsKHR)(VkPhysicalDevice, VkSurfaceKHR, uint32_t *, VkSurfaceFormatKHR *);
    VkResult (*p_vkGetPhysicalDeviceSurfacePresentModesKHR)(VkPhysicalDevice, VkSurfaceKHR, uint32_t *, VkPresentModeKHR *);
    VkResult (*p_vkGetPhysicalDeviceSurfaceSupportKHR)(VkPhysicalDevice, uint32_t, VkSurfaceKHR, VkBool32 *);
    VkResult (*p_vkGetPhysicalDeviceToolPropertiesEXT)(VkPhysicalDevice, uint32_t *, VkPhysicalDeviceToolPropertiesEXT *);
    VkBool32 (*p_vkGetPhysicalDeviceWin32PresentationSupportKHR)(VkPhysicalDevice, uint32_t);
};

#define ALL_VK_DEVICE_FUNCS() \
    USE_VK_FUNC(vkAcquireNextImage2KHR) \
    USE_VK_FUNC(vkAcquireNextImageKHR) \
    USE_VK_FUNC(vkAcquirePerformanceConfigurationINTEL) \
    USE_VK_FUNC(vkAcquireProfilingLockKHR) \
    USE_VK_FUNC(vkAllocateCommandBuffers) \
    USE_VK_FUNC(vkAllocateDescriptorSets) \
    USE_VK_FUNC(vkAllocateMemory) \
    USE_VK_FUNC(vkBeginCommandBuffer) \
    USE_VK_FUNC(vkBindAccelerationStructureMemoryNV) \
    USE_VK_FUNC(vkBindBufferMemory) \
    USE_VK_FUNC(vkBindBufferMemory2) \
    USE_VK_FUNC(vkBindBufferMemory2KHR) \
    USE_VK_FUNC(vkBindImageMemory) \
    USE_VK_FUNC(vkBindImageMemory2) \
    USE_VK_FUNC(vkBindImageMemory2KHR) \
    USE_VK_FUNC(vkCmdBeginConditionalRenderingEXT) \
    USE_VK_FUNC(vkCmdBeginQuery) \
    USE_VK_FUNC(vkCmdBeginQueryIndexedEXT) \
    USE_VK_FUNC(vkCmdBeginRenderPass) \
    USE_VK_FUNC(vkCmdBeginRenderPass2) \
    USE_VK_FUNC(vkCmdBeginRenderPass2KHR) \
    USE_VK_FUNC(vkCmdBeginTransformFeedbackEXT) \
    USE_VK_FUNC(vkCmdBindDescriptorSets) \
    USE_VK_FUNC(vkCmdBindIndexBuffer) \
    USE_VK_FUNC(vkCmdBindPipeline) \
    USE_VK_FUNC(vkCmdBindPipelineShaderGroupNV) \
    USE_VK_FUNC(vkCmdBindShadingRateImageNV) \
    USE_VK_FUNC(vkCmdBindTransformFeedbackBuffersEXT) \
    USE_VK_FUNC(vkCmdBindVertexBuffers) \
    USE_VK_FUNC(vkCmdBindVertexBuffers2EXT) \
    USE_VK_FUNC(vkCmdBlitImage) \
    USE_VK_FUNC(vkCmdBuildAccelerationStructureNV) \
    USE_VK_FUNC(vkCmdClearAttachments) \
    USE_VK_FUNC(vkCmdClearColorImage) \
    USE_VK_FUNC(vkCmdClearDepthStencilImage) \
    USE_VK_FUNC(vkCmdCopyAccelerationStructureNV) \
    USE_VK_FUNC(vkCmdCopyBuffer) \
    USE_VK_FUNC(vkCmdCopyBufferToImage) \
    USE_VK_FUNC(vkCmdCopyImage) \
    USE_VK_FUNC(vkCmdCopyImageToBuffer) \
    USE_VK_FUNC(vkCmdCopyQueryPoolResults) \
    USE_VK_FUNC(vkCmdDispatch) \
    USE_VK_FUNC(vkCmdDispatchBase) \
    USE_VK_FUNC(vkCmdDispatchBaseKHR) \
    USE_VK_FUNC(vkCmdDispatchIndirect) \
    USE_VK_FUNC(vkCmdDraw) \
    USE_VK_FUNC(vkCmdDrawIndexed) \
    USE_VK_FUNC(vkCmdDrawIndexedIndirect) \
    USE_VK_FUNC(vkCmdDrawIndexedIndirectCount) \
    USE_VK_FUNC(vkCmdDrawIndexedIndirectCountAMD) \
    USE_VK_FUNC(vkCmdDrawIndexedIndirectCountKHR) \
    USE_VK_FUNC(vkCmdDrawIndirect) \
    USE_VK_FUNC(vkCmdDrawIndirectByteCountEXT) \
    USE_VK_FUNC(vkCmdDrawIndirectCount) \
    USE_VK_FUNC(vkCmdDrawIndirectCountAMD) \
    USE_VK_FUNC(vkCmdDrawIndirectCountKHR) \
    USE_VK_FUNC(vkCmdDrawMeshTasksIndirectCountNV) \
    USE_VK_FUNC(vkCmdDrawMeshTasksIndirectNV) \
    USE_VK_FUNC(vkCmdDrawMeshTasksNV) \
    USE_VK_FUNC(vkCmdEndConditionalRenderingEXT) \
    USE_VK_FUNC(vkCmdEndQuery) \
    USE_VK_FUNC(vkCmdEndQueryIndexedEXT) \
    USE_VK_FUNC(vkCmdEndRenderPass) \
    USE_VK_FUNC(vkCmdEndRenderPass2) \
    USE_VK_FUNC(vkCmdEndRenderPass2KHR) \
    USE_VK_FUNC(vkCmdEndTransformFeedbackEXT) \
    USE_VK_FUNC(vkCmdExecuteCommands) \
    USE_VK_FUNC(vkCmdExecuteGeneratedCommandsNV) \
    USE_VK_FUNC(vkCmdFillBuffer) \
    USE_VK_FUNC(vkCmdNextSubpass) \
    USE_VK_FUNC(vkCmdNextSubpass2) \
    USE_VK_FUNC(vkCmdNextSubpass2KHR) \
    USE_VK_FUNC(vkCmdPipelineBarrier) \
    USE_VK_FUNC(vkCmdPreprocessGeneratedCommandsNV) \
    USE_VK_FUNC(vkCmdPushConstants) \
    USE_VK_FUNC(vkCmdPushDescriptorSetKHR) \
    USE_VK_FUNC(vkCmdPushDescriptorSetWithTemplateKHR) \
    USE_VK_FUNC(vkCmdResetEvent) \
    USE_VK_FUNC(vkCmdResetQueryPool) \
    USE_VK_FUNC(vkCmdResolveImage) \
    USE_VK_FUNC(vkCmdSetBlendConstants) \
    USE_VK_FUNC(vkCmdSetCheckpointNV) \
    USE_VK_FUNC(vkCmdSetCoarseSampleOrderNV) \
    USE_VK_FUNC(vkCmdSetCullModeEXT) \
    USE_VK_FUNC(vkCmdSetDepthBias) \
    USE_VK_FUNC(vkCmdSetDepthBounds) \
    USE_VK_FUNC(vkCmdSetDepthBoundsTestEnableEXT) \
    USE_VK_FUNC(vkCmdSetDepthCompareOpEXT) \
    USE_VK_FUNC(vkCmdSetDepthTestEnableEXT) \
    USE_VK_FUNC(vkCmdSetDepthWriteEnableEXT) \
    USE_VK_FUNC(vkCmdSetDeviceMask) \
    USE_VK_FUNC(vkCmdSetDeviceMaskKHR) \
    USE_VK_FUNC(vkCmdSetDiscardRectangleEXT) \
    USE_VK_FUNC(vkCmdSetEvent) \
    USE_VK_FUNC(vkCmdSetExclusiveScissorNV) \
    USE_VK_FUNC(vkCmdSetFrontFaceEXT) \
    USE_VK_FUNC(vkCmdSetLineStippleEXT) \
    USE_VK_FUNC(vkCmdSetLineWidth) \
    USE_VK_FUNC(vkCmdSetPerformanceMarkerINTEL) \
    USE_VK_FUNC(vkCmdSetPerformanceOverrideINTEL) \
    USE_VK_FUNC(vkCmdSetPerformanceStreamMarkerINTEL) \
    USE_VK_FUNC(vkCmdSetPrimitiveTopologyEXT) \
    USE_VK_FUNC(vkCmdSetSampleLocationsEXT) \
    USE_VK_FUNC(vkCmdSetScissor) \
    USE_VK_FUNC(vkCmdSetScissorWithCountEXT) \
    USE_VK_FUNC(vkCmdSetStencilCompareMask) \
    USE_VK_FUNC(vkCmdSetStencilOpEXT) \
    USE_VK_FUNC(vkCmdSetStencilReference) \
    USE_VK_FUNC(vkCmdSetStencilTestEnableEXT) \
    USE_VK_FUNC(vkCmdSetStencilWriteMask) \
    USE_VK_FUNC(vkCmdSetViewport) \
    USE_VK_FUNC(vkCmdSetViewportShadingRatePaletteNV) \
    USE_VK_FUNC(vkCmdSetViewportWScalingNV) \
    USE_VK_FUNC(vkCmdSetViewportWithCountEXT) \
    USE_VK_FUNC(vkCmdTraceRaysNV) \
    USE_VK_FUNC(vkCmdUpdateBuffer) \
    USE_VK_FUNC(vkCmdWaitEvents) \
    USE_VK_FUNC(vkCmdWriteAccelerationStructuresPropertiesNV) \
    USE_VK_FUNC(vkCmdWriteBufferMarkerAMD) \
    USE_VK_FUNC(vkCmdWriteTimestamp) \
    USE_VK_FUNC(vkCompileDeferredNV) \
    USE_VK_FUNC(vkCreateAccelerationStructureNV) \
    USE_VK_FUNC(vkCreateBuffer) \
    USE_VK_FUNC(vkCreateBufferView) \
    USE_VK_FUNC(vkCreateCommandPool) \
    USE_VK_FUNC(vkCreateComputePipelines) \
    USE_VK_FUNC(vkCreateDescriptorPool) \
    USE_VK_FUNC(vkCreateDescriptorSetLayout) \
    USE_VK_FUNC(vkCreateDescriptorUpdateTemplate) \
    USE_VK_FUNC(vkCreateDescriptorUpdateTemplateKHR) \
    USE_VK_FUNC(vkCreateEvent) \
    USE_VK_FUNC(vkCreateFence) \
    USE_VK_FUNC(vkCreateFramebuffer) \
    USE_VK_FUNC(vkCreateGraphicsPipelines) \
    USE_VK_FUNC(vkCreateImage) \
    USE_VK_FUNC(vkCreateImageView) \
    USE_VK_FUNC(vkCreateIndirectCommandsLayoutNV) \
    USE_VK_FUNC(vkCreatePipelineCache) \
    USE_VK_FUNC(vkCreatePipelineLayout) \
    USE_VK_FUNC(vkCreatePrivateDataSlotEXT) \
    USE_VK_FUNC(vkCreateQueryPool) \
    USE_VK_FUNC(vkCreateRayTracingPipelinesNV) \
    USE_VK_FUNC(vkCreateRenderPass) \
    USE_VK_FUNC(vkCreateRenderPass2) \
    USE_VK_FUNC(vkCreateRenderPass2KHR) \
    USE_VK_FUNC(vkCreateSampler) \
    USE_VK_FUNC(vkCreateSamplerYcbcrConversion) \
    USE_VK_FUNC(vkCreateSamplerYcbcrConversionKHR) \
    USE_VK_FUNC(vkCreateSemaphore) \
    USE_VK_FUNC(vkCreateShaderModule) \
    USE_VK_FUNC(vkCreateSwapchainKHR) \
    USE_VK_FUNC(vkCreateValidationCacheEXT) \
    USE_VK_FUNC(vkDestroyAccelerationStructureNV) \
    USE_VK_FUNC(vkDestroyBuffer) \
    USE_VK_FUNC(vkDestroyBufferView) \
    USE_VK_FUNC(vkDestroyCommandPool) \
    USE_VK_FUNC(vkDestroyDescriptorPool) \
    USE_VK_FUNC(vkDestroyDescriptorSetLayout) \
    USE_VK_FUNC(vkDestroyDescriptorUpdateTemplate) \
    USE_VK_FUNC(vkDestroyDescriptorUpdateTemplateKHR) \
    USE_VK_FUNC(vkDestroyDevice) \
    USE_VK_FUNC(vkDestroyEvent) \
    USE_VK_FUNC(vkDestroyFence) \
    USE_VK_FUNC(vkDestroyFramebuffer) \
    USE_VK_FUNC(vkDestroyImage) \
    USE_VK_FUNC(vkDestroyImageView) \
    USE_VK_FUNC(vkDestroyIndirectCommandsLayoutNV) \
    USE_VK_FUNC(vkDestroyPipeline) \
    USE_VK_FUNC(vkDestroyPipelineCache) \
    USE_VK_FUNC(vkDestroyPipelineLayout) \
    USE_VK_FUNC(vkDestroyPrivateDataSlotEXT) \
    USE_VK_FUNC(vkDestroyQueryPool) \
    USE_VK_FUNC(vkDestroyRenderPass) \
    USE_VK_FUNC(vkDestroySampler) \
    USE_VK_FUNC(vkDestroySamplerYcbcrConversion) \
    USE_VK_FUNC(vkDestroySamplerYcbcrConversionKHR) \
    USE_VK_FUNC(vkDestroySemaphore) \
    USE_VK_FUNC(vkDestroyShaderModule) \
    USE_VK_FUNC(vkDestroySwapchainKHR) \
    USE_VK_FUNC(vkDestroyValidationCacheEXT) \
    USE_VK_FUNC(vkDeviceWaitIdle) \
    USE_VK_FUNC(vkEndCommandBuffer) \
    USE_VK_FUNC(vkFlushMappedMemoryRanges) \
    USE_VK_FUNC(vkFreeCommandBuffers) \
    USE_VK_FUNC(vkFreeDescriptorSets) \
    USE_VK_FUNC(vkFreeMemory) \
    USE_VK_FUNC(vkGetAccelerationStructureHandleNV) \
    USE_VK_FUNC(vkGetAccelerationStructureMemoryRequirementsNV) \
    USE_VK_FUNC(vkGetBufferDeviceAddress) \
    USE_VK_FUNC(vkGetBufferDeviceAddressEXT) \
    USE_VK_FUNC(vkGetBufferDeviceAddressKHR) \
    USE_VK_FUNC(vkGetBufferMemoryRequirements) \
    USE_VK_FUNC(vkGetBufferMemoryRequirements2) \
    USE_VK_FUNC(vkGetBufferMemoryRequirements2KHR) \
    USE_VK_FUNC(vkGetBufferOpaqueCaptureAddress) \
    USE_VK_FUNC(vkGetBufferOpaqueCaptureAddressKHR) \
    USE_VK_FUNC(vkGetCalibratedTimestampsEXT) \
    USE_VK_FUNC(vkGetDescriptorSetLayoutSupport) \
    USE_VK_FUNC(vkGetDescriptorSetLayoutSupportKHR) \
    USE_VK_FUNC(vkGetDeviceGroupPeerMemoryFeatures) \
    USE_VK_FUNC(vkGetDeviceGroupPeerMemoryFeaturesKHR) \
    USE_VK_FUNC(vkGetDeviceGroupPresentCapabilitiesKHR) \
    USE_VK_FUNC(vkGetDeviceGroupSurfacePresentModesKHR) \
    USE_VK_FUNC(vkGetDeviceMemoryCommitment) \
    USE_VK_FUNC(vkGetDeviceMemoryOpaqueCaptureAddress) \
    USE_VK_FUNC(vkGetDeviceMemoryOpaqueCaptureAddressKHR) \
    USE_VK_FUNC(vkGetDeviceQueue) \
    USE_VK_FUNC(vkGetDeviceQueue2) \
    USE_VK_FUNC(vkGetEventStatus) \
    USE_VK_FUNC(vkGetFenceStatus) \
    USE_VK_FUNC(vkGetGeneratedCommandsMemoryRequirementsNV) \
    USE_VK_FUNC(vkGetImageMemoryRequirements) \
    USE_VK_FUNC(vkGetImageMemoryRequirements2) \
    USE_VK_FUNC(vkGetImageMemoryRequirements2KHR) \
    USE_VK_FUNC(vkGetImageSparseMemoryRequirements) \
    USE_VK_FUNC(vkGetImageSparseMemoryRequirements2) \
    USE_VK_FUNC(vkGetImageSparseMemoryRequirements2KHR) \
    USE_VK_FUNC(vkGetImageSubresourceLayout) \
    USE_VK_FUNC(vkGetMemoryHostPointerPropertiesEXT) \
    USE_VK_FUNC(vkGetPerformanceParameterINTEL) \
    USE_VK_FUNC(vkGetPipelineCacheData) \
    USE_VK_FUNC(vkGetPipelineExecutableInternalRepresentationsKHR) \
    USE_VK_FUNC(vkGetPipelineExecutablePropertiesKHR) \
    USE_VK_FUNC(vkGetPipelineExecutableStatisticsKHR) \
    USE_VK_FUNC(vkGetPrivateDataEXT) \
    USE_VK_FUNC(vkGetQueryPoolResults) \
    USE_VK_FUNC(vkGetQueueCheckpointDataNV) \
    USE_VK_FUNC(vkGetRayTracingShaderGroupHandlesNV) \
    USE_VK_FUNC(vkGetRenderAreaGranularity) \
    USE_VK_FUNC(vkGetSemaphoreCounterValue) \
    USE_VK_FUNC(vkGetSemaphoreCounterValueKHR) \
    USE_VK_FUNC(vkGetShaderInfoAMD) \
    USE_VK_FUNC(vkGetSwapchainImagesKHR) \
    USE_VK_FUNC(vkGetValidationCacheDataEXT) \
    USE_VK_FUNC(vkInitializePerformanceApiINTEL) \
    USE_VK_FUNC(vkInvalidateMappedMemoryRanges) \
    USE_VK_FUNC(vkMapMemory) \
    USE_VK_FUNC(vkMergePipelineCaches) \
    USE_VK_FUNC(vkMergeValidationCachesEXT) \
    USE_VK_FUNC(vkQueueBindSparse) \
    USE_VK_FUNC(vkQueuePresentKHR) \
    USE_VK_FUNC(vkQueueSetPerformanceConfigurationINTEL) \
    USE_VK_FUNC(vkQueueSubmit) \
    USE_VK_FUNC(vkQueueWaitIdle) \
    USE_VK_FUNC(vkReleasePerformanceConfigurationINTEL) \
    USE_VK_FUNC(vkReleaseProfilingLockKHR) \
    USE_VK_FUNC(vkResetCommandBuffer) \
    USE_VK_FUNC(vkResetCommandPool) \
    USE_VK_FUNC(vkResetDescriptorPool) \
    USE_VK_FUNC(vkResetEvent) \
    USE_VK_FUNC(vkResetFences) \
    USE_VK_FUNC(vkResetQueryPool) \
    USE_VK_FUNC(vkResetQueryPoolEXT) \
    USE_VK_FUNC(vkSetEvent) \
    USE_VK_FUNC(vkSetPrivateDataEXT) \
    USE_VK_FUNC(vkSignalSemaphore) \
    USE_VK_FUNC(vkSignalSemaphoreKHR) \
    USE_VK_FUNC(vkTrimCommandPool) \
    USE_VK_FUNC(vkTrimCommandPoolKHR) \
    USE_VK_FUNC(vkUninitializePerformanceApiINTEL) \
    USE_VK_FUNC(vkUnmapMemory) \
    USE_VK_FUNC(vkUpdateDescriptorSetWithTemplate) \
    USE_VK_FUNC(vkUpdateDescriptorSetWithTemplateKHR) \
    USE_VK_FUNC(vkUpdateDescriptorSets) \
    USE_VK_FUNC(vkWaitForFences) \
    USE_VK_FUNC(vkWaitSemaphores) \
    USE_VK_FUNC(vkWaitSemaphoresKHR)

#define ALL_VK_INSTANCE_FUNCS() \
    USE_VK_FUNC(vkCreateDevice) \
    USE_VK_FUNC(vkCreateHeadlessSurfaceEXT) \
    USE_VK_FUNC(vkCreateWin32SurfaceKHR) \
    USE_VK_FUNC(vkDestroySurfaceKHR) \
    USE_VK_FUNC(vkEnumerateDeviceExtensionProperties) \
    USE_VK_FUNC(vkEnumerateDeviceLayerProperties) \
    USE_VK_FUNC(vkEnumeratePhysicalDeviceGroups) \
    USE_VK_FUNC(vkEnumeratePhysicalDeviceGroupsKHR) \
    USE_VK_FUNC(vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR) \
    USE_VK_FUNC(vkEnumeratePhysicalDevices) \
    USE_VK_FUNC(vkGetPhysicalDeviceCalibrateableTimeDomainsEXT) \
    USE_VK_FUNC(vkGetPhysicalDeviceCooperativeMatrixPropertiesNV) \
    USE_VK_FUNC(vkGetPhysicalDeviceFeatures) \
    USE_VK_FUNC(vkGetPhysicalDeviceFeatures2) \
    USE_VK_FUNC(vkGetPhysicalDeviceFeatures2KHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceFormatProperties) \
    USE_VK_FUNC(vkGetPhysicalDeviceFormatProperties2) \
    USE_VK_FUNC(vkGetPhysicalDeviceFormatProperties2KHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceImageFormatProperties) \
    USE_VK_FUNC(vkGetPhysicalDeviceImageFormatProperties2) \
    USE_VK_FUNC(vkGetPhysicalDeviceImageFormatProperties2KHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceMemoryProperties) \
    USE_VK_FUNC(vkGetPhysicalDeviceMemoryProperties2) \
    USE_VK_FUNC(vkGetPhysicalDeviceMemoryProperties2KHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceMultisamplePropertiesEXT) \
    USE_VK_FUNC(vkGetPhysicalDevicePresentRectanglesKHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceProperties) \
    USE_VK_FUNC(vkGetPhysicalDeviceProperties2) \
    USE_VK_FUNC(vkGetPhysicalDeviceProperties2KHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceQueueFamilyProperties) \
    USE_VK_FUNC(vkGetPhysicalDeviceQueueFamilyProperties2) \
    USE_VK_FUNC(vkGetPhysicalDeviceQueueFamilyProperties2KHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceSparseImageFormatProperties) \
    USE_VK_FUNC(vkGetPhysicalDeviceSparseImageFormatProperties2) \
    USE_VK_FUNC(vkGetPhysicalDeviceSparseImageFormatProperties2KHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV) \
    USE_VK_FUNC(vkGetPhysicalDeviceSurfaceCapabilities2KHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceSurfaceCapabilitiesKHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceSurfaceFormats2KHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceSurfaceFormatsKHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceSurfacePresentModesKHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceSurfaceSupportKHR) \
    USE_VK_FUNC(vkGetPhysicalDeviceToolPropertiesEXT) \
    USE_VK_FUNC(vkGetPhysicalDeviceWin32PresentationSupportKHR)

#endif /* __WINE_VULKAN_THUNKS_H */
