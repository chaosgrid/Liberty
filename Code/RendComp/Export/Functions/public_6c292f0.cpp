#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c292f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c29360);

PROC_DECLARE(0x6c292f0, internal_6c292f0, public_6c292f0);
extern "C" NAKED register_t __cdecl internal_6c292f0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6c36220
        mov dword ptr ds : [ecx+4], offset public_6c3620c
        mov dword ptr ds : [ecx+8], offset public_6c361fc
        jmp public_6c29360
        UNREACHABLE_TRAP(0x6c292f0)
    }
}
