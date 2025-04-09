#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53f330);
CLANG_FORWARD_PROC_SYMBOL(public_561b20);

#define public_56171d _public_56171d

PROC_DECLARE(0x561700, internal_561700, public_561700);
extern "C" NAKED register_t __cdecl internal_561700()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xF
        jne public_56171d
        mov dword ptr ds : [ecx+0x64], 0xFFFFFFFF
        add ecx, 0xFFFFFF80
        call public_561b20
        mov al, 1
        ret 4
        public_56171d : nop
        mov dword ptr ss : [esp+4], eax
        jmp public_53f330
        UNREACHABLE_TRAP(0x561700)
    }
}

#undef public_56171d
