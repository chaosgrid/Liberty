#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);

#define public_47295a _public_47295a
#define public_472979 _public_472979
#define public_4729a0 _public_4729a0
#define public_4729b3 _public_4729b3
#define public_4729c8 _public_4729c8

PROC_DECLARE(0x472940, internal_472940, public_472940);
extern "C" NAKED register_t __cdecl internal_472940()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        test byte ptr ds : [eax], 2
        je public_4729c8
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1B
        je public_47295a
        cmp eax, 0xD
        jne public_4729c8
        public_47295a : nop
        mov dword ptr ds : [public_66dc04], 0
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_472979
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x3006
        call dword ptr ds : [edx+0x5C]
        public_472979 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi+0x330]
        push eax
        call public_4a7690
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4729b3
        push edi
        lea esp, ss:[esp]
        public_4729a0 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4729a0
        pop edi
        public_4729b3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        mov al, 1
        pop esi
        ret 8
        public_4729c8 : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x472940)
    }
}

#undef public_47295a
#undef public_472979
#undef public_4729a0
#undef public_4729b3
#undef public_4729c8
