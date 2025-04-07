#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347f50);

PROC_DECLARE(0x6347f50, internal_6347f50, public_6347f50);
extern "C" NAKED register_t __cdecl internal_6347f50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx]
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+4]
        faddp 
        fchs 
        fld st(0)
        fmul dword ptr ds : [edx+4]
        fadd dword ptr ds : [eax+4]
        fld st(1)
        fmul dword ptr ds : [edx+8]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+4]
        fxch 
        fmul dword ptr ds : [edx]
        fadd dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+8], eax
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx+4]
        ret 8
        UNREACHABLE_TRAP(0x6347f50)
    }
}
