#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10008760);
CLANG_FORWARD_PROC_SYMBOL(public_10008b00);

#define public_10008b12 _public_10008b12

PROC_DECLARE(0x10008b00, internal_10008b00, public_10008b00);
extern "C" NAKED register_t __cdecl internal_10008b00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_10008b12
        mov eax, 0xFFFFFF9A
        pop esi
        ret 4
        public_10008b12 : nop
        mov eax, dword ptr ds : [esi+0x44]
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, ds:[esi+0x98]
        push ecx
        lea edx, ds:[esi+0x48]
        mov dword ptr ds : [esi+0x34], eax
        push edx
        mov eax, esi
        mov dword ptr ds : [esi+0x30], 0
        call public_10008760
        xor ecx, ecx
        add esp, 0x20
        test eax, eax
        sete cl
        mov dword ptr ds : [esi+0x38], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x10008b00)
    }
}

#undef public_10008b12
