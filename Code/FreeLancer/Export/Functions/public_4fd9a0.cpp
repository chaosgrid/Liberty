#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79c0);
CLANG_FORWARD_PROC_SYMBOL(public_4fd920);

#define public_4fd9bd _public_4fd9bd

PROC_DECLARE(0x4fd9a0, internal_4fd9a0, public_4fd9a0);
extern "C" NAKED register_t __cdecl internal_4fd9a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4fd920
        test byte ptr ss : [esp+8], 1
        je public_4fd9bd
        push 0x9C
        push esi
        call public_4f79c0
        add esp, 8
        public_4fd9bd : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4fd9a0)
    }
}

#undef public_4fd9bd
