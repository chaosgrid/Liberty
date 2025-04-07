#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d060);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620bc06 _public_620bc06
#define public_620bc2c _public_620bc2c

PROC_DECLARE(0x620bbf0, internal_620bbf0, public_620bbf0);
extern "C" NAKED register_t __cdecl internal_620bbf0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x90]
        test eax, eax
        jbe public_620bc06
        dec eax
        mov dword ptr ds : [esi+0x90], eax
        public_620bc06 : nop
        mov eax, dword ptr ds : [esi+0x90]
        test eax, eax
        jne public_620bc2c
        mov ecx, esi
        mov dword ptr ds : [esi+0x90], 1
        call public_620d060
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_620bc2c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x620bbf0)
    }
}

#undef public_620bc06
#undef public_620bc2c
