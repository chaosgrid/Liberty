#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d47b14);

PROC_DECLARE(0x6d47b14, internal_6d47b14, public_6d47b14);
extern "C" NAKED register_t __cdecl internal_6d47b14()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx+4]
        fxch 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+0x10]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+0x14]
        fxch 
        faddp st(2), st
        faddp st(2), st
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+4]
        ret 0xC
        UNREACHABLE_TRAP(0x6d47b14)
    }
}
