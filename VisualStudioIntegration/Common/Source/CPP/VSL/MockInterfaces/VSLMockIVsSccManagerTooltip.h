/***************************************************************************

Copyright (c) Microsoft Corporation. All rights reserved.
This code is licensed under the Visual Studio SDK license terms.
THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.

This code is a part of the Visual Studio Library.

***************************************************************************/

#ifndef IVSSCCMANAGERTOOLTIP_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
#define IVSSCCMANAGERTOOLTIP_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5

#if _MSC_VER > 1000
#pragma once
#endif

#include "IVsSccManagerTooltip.h"

#pragma warning(push)
#pragma warning(disable : 4510) // default constructor could not be generated
#pragma warning(disable : 4610) // can never be instantiated - user defined constructor required
#pragma warning(disable : 4512) // assignment operator could not be generated
#pragma warning(disable : 6011) // Dereferencing NULL pointer (a NULL derference is just another kind of failure for a unit test

namespace VSL
{

class IVsSccManagerTooltipNotImpl :
	public IVsSccManagerTooltip
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(IVsSccManagerTooltipNotImpl)

public:

	typedef IVsSccManagerTooltip Interface;

	STDMETHOD(GetGlyphTipText)(
		/*[in]*/ IVsHierarchy* /*phierHierarchy*/,
		/*[in]*/ VSITEMID /*itemidNode*/,
		/*[out,retval]*/ BSTR* /*pbstrTooltipText*/)VSL_STDMETHOD_NOTIMPL
};

class IVsSccManagerTooltipMockImpl :
	public IVsSccManagerTooltip,
	public MockBase
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(IVsSccManagerTooltipMockImpl)

public:

VSL_DEFINE_MOCK_CLASS_TYPDEFS(IVsSccManagerTooltipMockImpl)

	typedef IVsSccManagerTooltip Interface;
	struct GetGlyphTipTextValidValues
	{
		/*[in]*/ IVsHierarchy* phierHierarchy;
		/*[in]*/ VSITEMID itemidNode;
		/*[out,retval]*/ BSTR* pbstrTooltipText;
		HRESULT retValue;
	};

	STDMETHOD(GetGlyphTipText)(
		/*[in]*/ IVsHierarchy* phierHierarchy,
		/*[in]*/ VSITEMID itemidNode,
		/*[out,retval]*/ BSTR* pbstrTooltipText)
	{
		VSL_DEFINE_MOCK_METHOD(GetGlyphTipText)

		VSL_CHECK_VALIDVALUE_INTERFACEPOINTER(phierHierarchy);

		VSL_CHECK_VALIDVALUE(itemidNode);

		VSL_SET_VALIDVALUE_BSTR(pbstrTooltipText);

		VSL_RETURN_VALIDVALUES();
	}
};


} // namespace VSL

#pragma warning(pop)

#endif // IVSSCCMANAGERTOOLTIP_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
