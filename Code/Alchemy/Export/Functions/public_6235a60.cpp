#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235a60);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_6241070);
CLANG_FORWARD_PROC_SYMBOL(public_6241180);

#define public_6235af1 _public_6235af1
#define public_6235b2b _public_6235b2b

PROC_DECLARE(0x6235a60, internal_6235a60, public_6235a60);
extern "C" NAKED register_t __cdecl internal_6235a60()
{
    __asm
    {
        sub esp, 0x60
        mov ecx, offset public_6257aec
        push esi
        mov esi, dword ptr ss : [esp+0x68]
        call public_6241070
        test eax, eax
        je public_6235b2b
        mov eax, dword ptr ds : [public_62578e8]
        push edi
        inc eax
        mov dword ptr ds : [public_62578e8], eax
        mov edx, dword ptr ds : [esi+0xFC]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [edx+0x68]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [esi+0xFC]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [edx+0x6C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [esi+0xC8]
        push edx
        push 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x108]
        mov eax, dword ptr ds : [public_6257908]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x40]
        mov edi, eax
        mov eax, dword ptr ds : [public_6257b38]
        test eax, eax
        jne public_6235af1
        call public_623e830
        mov dword ptr ds : [public_6257b38], eax
        public_6235af1 : nop
        mov edx, dword ptr ds : [eax]
        add esi, 0x58
        push esi
        lea ecx, ss:[esp+0xC]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [public_6257bc0]
        mov ecx, 0xC
        lea esi, ss:[esp+8]
        lea edi, ss:[esp+0x38]
        rep movsd
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x7C]
        mov ecx, offset public_6257aec
        call public_6241180
        pop edi
        public_6235b2b : nop
        xor eax, eax
        pop esi
        add esp, 0x60
        ret 4
        UNREACHABLE_TRAP(0x6235a60)
    }
}

#undef public_6235af1
#undef public_6235b2b
