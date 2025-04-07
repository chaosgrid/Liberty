#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d269e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d269f8 _public_6d269f8
#define public_6d26a0f _public_6d26a0f
#define public_6d26a2a _public_6d26a2a
#define public_6d26a4c _public_6d26a4c

PROC_DECLARE(0x6d269e0, internal_6d269e0, public_6d269e0);
extern "C" NAKED register_t __cdecl internal_6d269e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d269f8
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0xC
        cmp eax, ecx
        jbe public_6d26a2a
        public_6d269f8 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xC
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+8], 0xC
        jae public_6d26a0f
        lea eax, ss:[esp+8]
        public_6d26a0f : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d26a2a : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[ecx+esi+8]
        add ecx, 0xC
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        pop esi
        je public_6d26a4c
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], offset public_6d6929c
        ret 
        public_6d26a4c : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d269e0)
    }
}

#undef public_6d269f8
#undef public_6d26a0f
#undef public_6d26a2a
#undef public_6d26a4c
