#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_623b61e _public_623b61e

PROC_DECLARE(0x623b5f0, internal_623b5f0, public_623b5f0);
extern "C" NAKED register_t __cdecl internal_623b5f0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_624f1d8
        mov dword ptr ds : [esi+4], offset public_624f1c8
        mov ecx, dword ptr ds : [public_6257ba0]
        dec ecx
        test al, 1
        mov dword ptr ds : [public_6257ba0], ecx
        je public_623b61e
        push esi
        call public_62460e0
        add esp, 4
        public_623b61e : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x623b5f0)
    }
}

#undef public_623b61e
