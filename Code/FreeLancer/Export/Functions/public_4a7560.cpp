#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_42d6f0);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7560);

#define public_4a7594 _public_4a7594
#define public_4a75a7 _public_4a75a7

PROC_DECLARE(0x4a7560, internal_4a7560, public_4a7560);
extern "C" NAKED register_t __cdecl internal_4a7560()
{
    __asm
    {
        push ecx
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x330]
        push 0
        mov byte ptr ss : [esp+8], al
        call public_42d6f0
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        call public_41dda0
        mov edx, dword ptr ds : [edi]
        add esp, 8
        mov ecx, edi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_4a75a7
        push esi
        public_4a7594 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_4a7594
        pop esi
        public_4a75a7 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        pop edi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4a7560)
    }
}

#undef public_4a7594
#undef public_4a75a7
