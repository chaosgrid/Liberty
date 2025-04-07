#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d0b0);

PROC_DECLARE(0x661d0b0, internal_661d0b0, public_661d0b0);
extern "C" NAKED register_t __cdecl internal_661d0b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x400]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+eax*4], edx
        mov eax, dword ptr ds : [ecx+0x400]
        inc eax
        mov dword ptr ds : [ecx+0x400], eax
        ret 4
        UNREACHABLE_TRAP(0x661d0b0)
    }
}
