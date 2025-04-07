#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a7a0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6206d68 _public_6206d68
#define public_6206d76 _public_6206d76

PROC_DECLARE(0x6206d40, internal_6206d40, public_6206d40);
extern "C" NAKED register_t __cdecl internal_6206d40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        lea esi, ds:[eax+8]
        mov ecx, esi
        call public_620a7a0
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6206d76
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6206d68
        push eax
        call public_62460e0
        add esp, 4
        public_6206d68 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+0x10], 0
        public_6206d76 : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6206d40)
    }
}

#undef public_6206d68
#undef public_6206d76
