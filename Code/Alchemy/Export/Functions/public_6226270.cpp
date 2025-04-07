#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62264f0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6226286 _public_6226286
#define public_62262ac _public_62262ac

PROC_DECLARE(0x6226270, internal_6226270, public_6226270);
extern "C" NAKED register_t __cdecl internal_6226270()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xD0]
        test eax, eax
        jbe public_6226286
        dec eax
        mov dword ptr ds : [esi+0xD0], eax
        public_6226286 : nop
        mov eax, dword ptr ds : [esi+0xD0]
        test eax, eax
        jne public_62262ac
        mov ecx, esi
        mov dword ptr ds : [esi+0xD0], 1
        call public_62264f0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_62262ac : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6226270)
    }
}

#undef public_6226286
#undef public_62262ac
