#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);

#define public_472803 _public_472803
#define public_472829 _public_472829
#define public_472850 _public_472850
#define public_472863 _public_472863

PROC_DECLARE(0x4727f0, internal_4727f0, public_4727f0);
extern "C" NAKED register_t __cdecl internal_4727f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub eax, 0xF
        je public_472803
        sub eax, 2
        je public_472803
        xor al, al
        ret 4
        public_472803 : nop
        push esi
        lea esi, ds:[ecx-0x32C]
        mov dword ptr ds : [public_66dc04], 0
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_472829
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x3006
        call dword ptr ds : [eax+0x5C]
        public_472829 : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x330]
        push ecx
        call public_4a7690
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_472863
        push edi
        lea esp, ss:[esp]
        public_472850 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_472850
        pop edi
        public_472863 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4727f0)
    }
}

#undef public_472803
#undef public_472829
#undef public_472850
#undef public_472863
