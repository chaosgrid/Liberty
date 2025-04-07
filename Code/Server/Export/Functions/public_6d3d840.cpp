#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3d850);

PROC_DECLARE(0x6d3d840, internal_6d3d840, public_6d3d840);
extern "C" NAKED register_t __cdecl internal_6d3d840()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d3d850
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3d840)
    }
}
