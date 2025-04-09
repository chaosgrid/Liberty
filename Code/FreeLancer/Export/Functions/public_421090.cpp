#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421090);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4210e8 _public_4210e8

PROC_DECLARE(0x421090, internal_421090, public_421090);
extern "C" NAKED register_t __cdecl internal_421090()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [public_5c6d90]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        push edi
        lea edx, ss:[esp+0xC]
        push edx
        mov esi, ecx
        mov edx, dword ptr ds : [esi+4]
        push 0
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_616870]
        test eax, eax
        jne public_4210e8
        call public_5b73e0
        mov dword ptr ds : [public_616870], eax
        public_4210e8 : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x421090)
    }
}

#undef public_4210e8
