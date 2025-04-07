#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a640);

#define public_6614d19 _public_6614d19
#define public_6614d38 _public_6614d38

PROC_DECLARE(0x6614cf0, internal_6614cf0, public_6614cf0);
extern "C" NAKED register_t __cdecl internal_6614cf0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        test ebx, ebx
        push esi
        je public_6614d38
        mov esi, dword ptr ss : [esp+0x14]
        cmp esi, 0xFFFFFFFF
        je public_6614d38
        test esi, esi
        je public_6614d38
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6614d38
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        public_6614d19 : nop
        mov eax, dword ptr ds : [eax+0x1C]
        push edi
        push eax
        call ebx
        add esp, 8
        lea ecx, ss:[esp+0x14]
        call public_661a640
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_6614d19
        pop edi
        public_6614d38 : nop
        pop esi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6614cf0)
    }
}

#undef public_6614d19
#undef public_6614d38
