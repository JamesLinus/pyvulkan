%carray_of_float(float)
%carray_of_long(int32_t)
%carray_of_long(uint32_t)
%carray_of_struct(VkOffset3D)
%carray_of_struct(VkMemoryHeap)
%carray_of_struct(VkMemoryType)
%ref_counted_handle(VkEvent)
%ref_counted_handle(VkImage)
%ref_counted_handle(VkDisplayKHR)
%ref_counted_handle(VkSwapchainKHR)
%ref_counted_handle(VkSemaphore)
%ref_counted_handle(VkQueue)
%ref_counted_handle(VkPipelineLayout)
%ref_counted_handle(VkDescriptorPool)
%ref_counted_handle(VkQueryPool)
%ref_counted_handle(VkImageView)
%ref_counted_handle(VkInstance)
%ref_counted_handle(VkDevice)
%ref_counted_handle(VkDisplayModeKHR)
%ref_counted_handle(VkSurfaceKHR)
%ref_counted_handle(VkPipeline)
%ref_counted_handle(VkCommandPool)
%ref_counted_handle(VkBuffer)
%ref_counted_handle(VkShaderModule)
%ref_counted_handle(VkPipelineCache)
%ref_counted_handle(VkIndirectCommandsLayoutNVX)
%ref_counted_handle(VkObjectTableNVX)
%ref_counted_handle(VkRenderPass)
%ref_counted_handle(VkSampler)
%ref_counted_handle(VkBufferView)
%ref_counted_handle(VkPhysicalDevice)
%ref_counted_handle(VkFence)
%ref_counted_handle(VkFramebuffer)
%ref_counted_handle(VkDebugReportCallbackEXT)
%ref_counted_handle(VkDeviceMemory)
%ref_counted_handle(VkDescriptorSetLayout)
%ref_counted_handle(VkDescriptorUpdateTemplateKHR)
%shared_ptr(VkDebugMarkerMarkerInfoEXT)
%shared_ptr(VkDeviceGroupPresentModeFlagsKHX)
%shared_ptr(VkDebugMarkerObjectNameInfoEXT)
%shared_ptr(VkPeerMemoryFeatureFlagsKHX)
%shared_ptr(VkDebugMarkerObjectTagInfoEXT)
%raii_struct(VkDebugMarkerMarkerInfoEXT)
%raii_struct(VkDescriptorSetLayoutBinding)
%raii_struct(VkPipelineVertexInputStateCreateInfo)
%raii_struct(VkDeviceGroupPresentInfoKHX)
%raii_struct(VkDisplayPropertiesKHR)
%raii_struct(VkCmdProcessCommandsInfoNVX)
%raii_struct(VkWin32KeyedMutexAcquireReleaseInfoKHX)
%raii_struct(VkDeviceQueueCreateInfo)
%raii_struct(VkBindSparseInfo)
%raii_struct(VkSubmitInfo)
%raii_struct(VkDeviceGroupDeviceCreateInfoKHX)
%raii_struct(VkSparseBufferMemoryBindInfo)
%raii_struct(VkD3D12FenceSubmitInfoKHX)
%raii_struct(VkSparseImageOpaqueMemoryBindInfo)
%raii_struct(VkGraphicsPipelineCreateInfo)
%raii_struct(VkBindBufferMemoryInfoKHX)
%raii_struct(VkDebugMarkerObjectTagInfoEXT)
%raii_struct(VkExportMemoryWin32HandleInfoNV)
%raii_struct(VkSparseImageMemoryBindInfo)
%raii_struct(VkExportSemaphoreWin32HandleInfoKHX)
%raii_struct(VkPipelineCacheCreateInfo)
%raii_struct(VkValidationFlagsEXT)
%raii_struct(VkObjectTableCreateInfoNVX)
%raii_struct(VkSubpassDescription)
%raii_struct(VkSpecializationInfo)
%raii_struct(VkInstanceCreateInfo)
%raii_struct(VkDebugMarkerObjectNameInfoEXT)
%raii_struct(VkDescriptorPoolCreateInfo)
%raii_struct(VkPipelineColorBlendStateCreateInfo)
%raii_struct(VkRenderPassBeginInfo)
%raii_struct(VkFramebufferCreateInfo)
%raii_struct(VkWin32KeyedMutexAcquireReleaseInfoNV)
%raii_struct(VkBindImageMemoryInfoKHX)
%raii_struct(VkExportMemoryWin32HandleInfoKHX)
%raii_struct(VkRenderPassMultiviewCreateInfoKHX)
%raii_struct(VkDescriptorSetAllocateInfo)
%raii_struct(VkPipelineViewportStateCreateInfo)
%raii_struct(VkApplicationInfo)
%raii_struct(VkPipelineDynamicStateCreateInfo)
%raii_struct(VkBufferCreateInfo)
%raii_struct(VkPresentInfoKHR)
%raii_struct(VkCommandBufferBeginInfo)
%raii_struct(VkPipelineViewportWScalingStateCreateInfoNV)
%raii_struct(VkDescriptorUpdateTemplateCreateInfoKHR)
%raii_struct(VkDeviceCreateInfo)
%raii_struct(VkDeviceGroupSubmitInfoKHX)
%raii_struct(VkWriteDescriptorSet)
%raii_struct(VkShaderModuleCreateInfo)
%raii_struct(VkIndirectCommandsLayoutCreateInfoNVX)
%raii_struct(VkPipelineViewportSwizzleStateCreateInfoNV)
%raii_struct(VkRenderPassCreateInfo)
%raii_struct(VkPipelineLayoutCreateInfo)
%raii_struct(VkDeviceGroupRenderPassBeginInfoKHX)
%raii_struct(VkSwapchainCreateInfoKHR)
%raii_struct(VkPipelineDiscardRectangleStateCreateInfoEXT)
%raii_struct(VkPipelineShaderStageCreateInfo)
%raii_struct(VkDescriptorSetLayoutCreateInfo)
%raii_struct(VkImageCreateInfo)

%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pCode_in_array1, int pCode_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pWaitSemaphoreDeviceIndices_in_array1, int pWaitSemaphoreDeviceIndices_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pDynamicOffsets_in_array1, int pDynamicOffsets_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pCorrelationMasks_in_array1, int pCorrelationMasks_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pCommandBufferDeviceMasks_in_array1, int pCommandBufferDeviceMasks_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pObjectEntryCounts_in_array1, int pObjectEntryCounts_dim1)};
%apply (int* IN_ARRAY1, int DIM1) {(int* pViewOffsets_in_array1, int pViewOffsets_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pAcquireTimeouts_in_array1, int pAcquireTimeouts_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pObjectIndices_in_array1, int pObjectIndices_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pAcquireTimeoutMilliseconds_in_array1, int pAcquireTimeoutMilliseconds_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pDeviceIndices_in_array1, int pDeviceIndices_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pQueueFamilyIndices_in_array1, int pQueueFamilyIndices_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pSignalSemaphoreDeviceIndices_in_array1, int pSignalSemaphoreDeviceIndices_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pPreserveAttachments_in_array1, int pPreserveAttachments_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pDeviceMasks_in_array1, int pDeviceMasks_dim1)};
%apply (float* IN_ARRAY1, int DIM1) {(float* pQueuePriorities_in_array1, int pQueuePriorities_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pImageIndices_in_array1, int pImageIndices_dim1)};
%apply (unsigned int* IN_ARRAY1, int DIM1) {(unsigned int* pViewMasks_in_array1, int pViewMasks_dim1)};
