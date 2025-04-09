#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579aa0);
CLANG_FORWARD_PROC_SYMBOL(public_58e000);
CLANG_FORWARD_PROC_SYMBOL(public_58f640);
CLANG_FORWARD_PROC_SYMBOL(public_595db0);

#define public_58f7d3 _public_58f7d3
#define public_58f7de _public_58f7de
#define public_58f7fb _public_58f7fb

PROC_DECLARE(0x58f7a0, internal_58f7a0, public_58f7a0);
extern "C" NAKED register_t __cdecl internal_58f7a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call public_58e000
        test al, al
        je public_58f7fb
        mov ecx, esi
        call public_579aa0
        mov dword ptr ds : [esi+0x588], eax
        mov ecx, dword ptr ds : [esi+0x4A4]
        test ecx, ecx
        jne public_58f7d3
        xor eax, eax
        jmp public_58f7de
        public_58f7d3 : nop
        mov eax, dword ptr ds : [esi+0x4A8]
        sub eax, ecx
        sar eax, 2
        public_58f7de : nop
        push 0
        push eax
        mov ecx, esi
        call public_58f640
        mov ecx, dword ptr ds : [esi+0x588]
        push 0
        call public_595db0
        mov al, 1
        pop esi
        ret 8
        public_58f7fb : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x58f7a0)
    }
}

#undef public_58f7d3
#undef public_58f7de
#undef public_58f7fb
