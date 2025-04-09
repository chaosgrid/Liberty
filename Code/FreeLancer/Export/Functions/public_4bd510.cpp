#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bd510);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4bd520 _public_4bd520
#define public_4bd522 _public_4bd522

PROC_DECLARE(0x4bd510, internal_4bd510, public_4bd510);
extern "C" NAKED register_t __cdecl internal_4bd510()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        test edi, edi
        je public_4bd520
        lea esi, ds:[edi+0x32C]
        jmp public_4bd522
        public_4bd520 : nop
        xor esi, esi
        public_4bd522 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, edi
        pop edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        jmp public_59fa50
        UNREACHABLE_TRAP(0x4bd510)
    }
}

#undef public_4bd520
#undef public_4bd522
