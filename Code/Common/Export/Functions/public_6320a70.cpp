#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_6320720);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_6320a8e _public_6320a8e
#define public_6320aaf _public_6320aaf
#define public_6320abe _public_6320abe
#define public_6320ad4 _public_6320ad4

PROC_DECLARE(0x6320a70, internal_6320a70, public_6320a70);
extern "C" NAKED register_t __cdecl internal_6320a70()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_64018d8]
        cmp dword ptr ds : [public_64018c8], eax
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0xC], ecx
        je public_6320a8e
        cmp dword ptr ds : [eax+0xC], ecx
        je public_6320aaf
        public_6320a8e : nop
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_64018d8], eax
        public_6320aaf : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_6320abe
        add eax, 0x10
        test eax, eax
        jne public_6320ad4
        public_6320abe : nop
        push ecx
        call public_6320290
        add esp, 4
        test eax, eax
        jne public_6320ad4
        push esi
        call public_6320720
        add esp, 4
        public_6320ad4 : nop
        xor eax, eax
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6320a70)
    }
}

#undef public_6320a8e
#undef public_6320aaf
#undef public_6320abe
#undef public_6320ad4
