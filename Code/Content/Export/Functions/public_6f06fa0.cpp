#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57740);
CLANG_FORWARD_PROC_SYMBOL(public_6f577d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c00);

PROC_DECLARE(0x6f06fa0, internal_6f06fa0, public_6f06fa0);
extern "C" NAKED register_t __cdecl internal_6f06fa0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_6f57740
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        call public_6f577d0
        mov ecx, dword ptr ds : [esi+8]
        pop esi
        jmp public_6f57c00
        UNREACHABLE_TRAP(0x6f06fa0)
    }
}
