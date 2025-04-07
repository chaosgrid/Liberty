#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a260);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6208c78 _public_6208c78
#define public_6208c86 _public_6208c86

PROC_DECLARE(0x6208c50, internal_6208c50, public_6208c50);
extern "C" NAKED register_t __cdecl internal_6208c50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        lea esi, ds:[eax+8]
        mov ecx, esi
        call public_620a260
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6208c86
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6208c78
        push eax
        call public_62460e0
        add esp, 4
        public_6208c78 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+0x10], 0
        public_6208c86 : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6208c50)
    }
}

#undef public_6208c78
#undef public_6208c86
