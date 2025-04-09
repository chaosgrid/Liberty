#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_429d67 _public_429d67
#define public_429d99 _public_429d99

PROC_DECLARE(0x429d30, internal_429d30, public_429d30);
extern "C" NAKED register_t __cdecl internal_429d30()
{
    __asm
    {
        sub esp, 0xC
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edi+0x60]
        cmp ecx, 0xFFFFFFFF
        je public_429d99
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
        jne public_429d67
        call public_5b73e0
        mov dword ptr ds : [public_667c98], eax
        public_429d67 : nop
        mov ecx, dword ptr ds : [eax]
        add edi, 0x30
        push edi
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        pop esi
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        pop edi
        add esp, 0xC
        ret 8
        public_429d99 : nop
        mov edx, dword ptr ss : [esp+0x18]
        add edi, 0x30
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [edx+8], eax
        xor eax, eax
        pop edi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x429d30)
    }
}

#undef public_429d67
#undef public_429d99
