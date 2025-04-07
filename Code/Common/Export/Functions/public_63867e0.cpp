#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63867e0);

PROC_DECLARE(0x63867e0, internal_63867e0, public_63867e0);
extern "C" NAKED register_t __cdecl internal_63867e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx+0x50]
        and eax, 0x1FF
        and edx, 0x1FF
        sub eax, edx
        ret 
        UNREACHABLE_TRAP(0x63867e0)
    }
}
