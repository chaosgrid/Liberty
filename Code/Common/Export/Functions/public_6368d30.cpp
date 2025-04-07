#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6368d30);

PROC_DECLARE(0x6368d30, internal_6368d30, public_6368d30);
extern "C" NAKED register_t __cdecl internal_6368d30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        shl ecx, 4
        fld dword ptr ds : [ecx+eax+0xC0]
        lea ecx, ds:[ecx+eax+0xB8]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [edx+4]
        faddp 
        fld dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edx]
        faddp 
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        faddp 
        ret 
        UNREACHABLE_TRAP(0x6368d30)
    }
}
