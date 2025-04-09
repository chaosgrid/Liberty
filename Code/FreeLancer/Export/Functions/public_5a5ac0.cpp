#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c970);

#define public_5a5afd _public_5a5afd
#define public_5a5b1b _public_5a5b1b

PROC_DECLARE(0x5a5ac0, internal_5a5ac0, public_5a5ac0);
extern "C" NAKED register_t __cdecl internal_5a5ac0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        call dword ptr ds : [public_5c60d0]
        test al, al
        mov esi, dword ptr ss : [esp+0x3C]
        jne public_5a5afd
        push esi
        call dword ptr ds : [public_5c6c88]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        push eax
        push ecx
        call dword ptr ds : [public_5c6c84]
        mov edx, dword ptr ds : [esi+8]
        push 0
        push edx
        push esi
        call dword ptr ds : [public_5c65d4]
        add esp, 0x18
        pop esi
        add esp, 0x30
        ret 8
        public_5a5afd : nop
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        push edi
        lea edi, ds:[esi+0x48]
        je public_5a5b1b
        push 0x18
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[esi+0x30]
        call public_41c970
        lea edi, ss:[esp+8]
        public_5a5b1b : nop
        lea ecx, ss:[esp+0x40]
        push ecx
        push esi
        call dword ptr ds : [public_5c6b50]
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        lea edx, ds:[esi+0x30]
        push edx
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x14]
        lea eax, ds:[esi+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x54]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        push edx
        push eax
        push ecx
        push esi
        call dword ptr ds : [public_5c6c80]
        add esp, 0x28
        pop edi
        pop esi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x5a5ac0)
    }
}

#undef public_5a5afd
#undef public_5a5b1b
