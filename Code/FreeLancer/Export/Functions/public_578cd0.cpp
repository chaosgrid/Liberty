#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a0c30);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_578cef _public_578cef

PROC_DECLARE(0x578cd0, internal_578cd0, public_578cd0);
extern "C" NAKED register_t __cdecl internal_578cd0()
{
    __asm
    {
        mov al, byte ptr ds : [public_67c3e0]
        test al, al
        push esi
        mov esi, ecx
        je public_578cef
        push 0
        call public_5a0c30
        or byte ptr ds : [esi+0x6C], 1
        mov ecx, esi
        pop esi
        jmp public_5a17b0
        public_578cef : nop
        push 1
        call public_5a0c30
        and byte ptr ds : [esi+0x6C], 0xFE
        mov ecx, esi
        pop esi
        jmp public_5a17b0
        UNREACHABLE_TRAP(0x578cd0)
    }
}

#undef public_578cef
