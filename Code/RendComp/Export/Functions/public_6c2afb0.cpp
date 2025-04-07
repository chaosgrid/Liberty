#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2afb0);

#define public_6c2afdf _public_6c2afdf

PROC_DECLARE(0x6c2afb0, internal_6c2afb0, public_6c2afb0);
extern "C" NAKED register_t __cdecl internal_6c2afb0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xC]
        xor edx, edx
        fcomp dword ptr ds : [public_6c36320]
        fnstsw ax
        test ah, 1
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], edx
        jne public_6c2afdf
        fld dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0xC]
        fstp dword ptr ds : [eax]
        xor eax, eax
        ret 8
        public_6c2afdf : nop
        mov ecx, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6c2afb0)
    }
}

#undef public_6c2afdf
