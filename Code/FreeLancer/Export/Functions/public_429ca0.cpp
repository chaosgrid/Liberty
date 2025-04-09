#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_429cd5 _public_429cd5
#define public_429d05 _public_429d05

PROC_DECLARE(0x429ca0, internal_429ca0, public_429ca0);
extern "C" NAKED register_t __cdecl internal_429ca0()
{
    __asm
    {
        sub esp, 0xC
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x60]
        cmp ecx, 0xFFFFFFFF
        je public_429d05
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_667c98]
        test eax, eax
        jne public_429cd5
        call public_5b73e0
        mov dword ptr ds : [public_667c98], eax
        public_429cd5 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        add edi, 0x30
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ecx
        pop esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        add esp, 0xC
        ret 4
        public_429d05 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        add edi, 0x30
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], eax
        pop edi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x429ca0)
    }
}

#undef public_429cd5
#undef public_429d05
