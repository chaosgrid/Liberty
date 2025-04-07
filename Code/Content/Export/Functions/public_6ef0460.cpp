#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c9c0);

PROC_DECLARE(0x6ef0460, internal_6ef0460, public_6ef0460);
extern "C" NAKED register_t __cdecl internal_6ef0460()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x240]
        mov edx, dword ptr ds : [eax+0x3C]
        mov dword ptr ds : [ecx+0x10], edx
        jmp public_6f4c9c0
        UNREACHABLE_TRAP(0x6ef0460)
    }
}
