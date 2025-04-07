#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda190);
CLANG_FORWARD_PROC_SYMBOL(public_6c09912);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d40);

#define public_6bd9b09 _public_6bd9b09

PROC_DECLARE(0x6bd9ac0, internal_6bd9ac0, public_6bd9ac0);
extern "C" NAKED register_t __cdecl internal_6bd9ac0()
{
    __asm
    {
        mov eax, 0x2808
        call public_6c09d40
        push esi
        mov esi, dword ptr ss : [esp+0x2810]
        mov edx, dword ptr ds : [esi]
        push edi
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+8]
        push eax
        mov edi, ecx
        push 0x2800
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test eax, eax
        jne public_6bd9b09
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [edi+0xC]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call public_6c09912
        public_6bd9b09 : nop
        mov ecx, esi
        call public_6bda190
        pop edi
        pop esi
        add esp, 0x2808
        ret 4
        UNREACHABLE_TRAP(0x6bd9ac0)
    }
}

#undef public_6bd9b09
