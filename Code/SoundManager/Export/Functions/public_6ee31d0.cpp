#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee31d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee80d0);

#define public_6ee320f _public_6ee320f
#define public_6ee3217 _public_6ee3217
#define public_6ee323b _public_6ee323b

PROC_DECLARE(0x6ee31d0, internal_6ee31d0, public_6ee31d0);
extern "C" NAKED register_t __cdecl internal_6ee31d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        push ebx
        xor bl, bl
        cmp eax, 0xFFFFFFFF
        push edi
        mov edi, ecx
        je public_6ee323b
        push esi
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0xF8]
        push eax
        mov ecx, esi
        call public_6ee80d0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_6ee320f
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6ee320f
        lea eax, ss:[esp+0xC]
        jmp public_6ee3217
        public_6ee320f : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6ee3217 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0xFC]
        pop esi
        je public_6ee323b
        mov eax, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        pop edi
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6ee323b : nop
        pop edi
        mov al, bl
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ee31d0)
    }
}

#undef public_6ee320f
#undef public_6ee3217
#undef public_6ee323b
