#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c3710);
CLANG_FORWARD_PROC_SYMBOL(public_65c4240);

PROC_DECLARE(0x65c3710, internal_65c3710, public_65c3710);
extern "C" NAKED register_t __cdecl internal_65c3710()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx], offset public_65c74bc
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        add ecx, 0x10
        jmp public_65c4240
        UNREACHABLE_TRAP(0x65c3710)
    }
}
