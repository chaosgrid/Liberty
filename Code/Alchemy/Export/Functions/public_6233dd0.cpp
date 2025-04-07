#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e830);

#define public_6233e42 _public_6233e42

PROC_DECLARE(0x6233dd0, internal_6233dd0, public_6233dd0);
extern "C" NAKED register_t __cdecl internal_6233dd0()
{
    __asm
    {
        sub esp, 0x60
        mov eax, dword ptr ds : [public_6257bc0]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        push edi
        mov edx, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [edx+0x68]
        push edx
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [edx+0x6C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [esi+0xBC]
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
        jne public_6233e42
        call public_623e830
        mov dword ptr ds : [public_6257b38], eax
        public_6233e42 : nop
        mov edx, dword ptr ds : [eax]
        add esi, 0x4C
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
        pop edi
        pop esi
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x6233dd0)
    }
}

#undef public_6233e42
