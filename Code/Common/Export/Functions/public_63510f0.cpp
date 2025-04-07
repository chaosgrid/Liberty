#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63510f0);

PROC_DECLARE(0x63510f0, internal_63510f0, public_63510f0);
extern "C" NAKED register_t __cdecl internal_63510f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [edx+4]
        fld dword ptr ds : [edx+0xC]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx]
        faddp 
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [eax]
        fsubp 
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx+4]
        faddp 
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx+0xC]
        faddp 
        fld dword ptr ds : [edx]
        fmul dword ptr ds : [eax+4]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx]
        fsubp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+4]
        fsubp 
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx+8]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx+0xC]
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [edx]
        faddp 
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+4]
        fmul dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], edx
        fsubp 
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx+4]
        ret 8
        UNREACHABLE_TRAP(0x63510f0)
    }
}
