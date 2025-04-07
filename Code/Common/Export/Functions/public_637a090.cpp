#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6356b40);
CLANG_FORWARD_PROC_SYMBOL(public_637a090);

#define public_637a0b6 _public_637a0b6
#define public_637a0d5 _public_637a0d5

PROC_DECLARE(0x637a090, internal_637a090, public_637a090);
extern "C" NAKED register_t __cdecl internal_637a090()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+8], eax
        mov ecx, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], ecx
        jbe public_637a0b6
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], eax
        public_637a0b6 : nop
        mov ecx, dword ptr ds : [edi+0x18]
        lea edx, ss:[esp+8]
        push edx
        call public_6356ac0
        test eax, eax
        jne public_637a0d5
        mov ecx, dword ptr ds : [edi+0x18]
        push esi
        lea eax, ss:[esp+0xC]
        push eax
        call public_6356b40
        public_637a0d5 : nop
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x637a090)
    }
}

#undef public_637a0b6
#undef public_637a0d5
