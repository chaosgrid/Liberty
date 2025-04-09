#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);

#define public_486b8c _public_486b8c
#define public_486be0 _public_486be0
#define public_486bf3 _public_486bf3
#define public_486c03 _public_486c03

PROC_DECLARE(0x486b80, internal_486b80, public_486b80);
extern "C" NAKED register_t __cdecl internal_486b80()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xF
        je public_486b8c
        xor al, al
        ret 4
        public_486b8c : nop
        cmp dword ptr ds : [ecx+8], 3
        je public_486c03
        push esi
        lea esi, ds:[ecx-0x32C]
        xor eax, eax
        mov al, byte ptr ds : [esi+0x330]
        push eax
        call public_4a7690
        mov edx, dword ptr ds : [esi+0x5DC]
        lea ecx, ds:[esi+0x5DC]
        add esp, 4
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi+0xE98]
        lea ecx, ds:[esi+0xE98]
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_486bf3
        push edi
        lea ebx, ds:[ebx]
        public_486be0 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_486be0
        pop edi
        public_486bf3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop esi
        public_486c03 : nop
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x486b80)
    }
}

#undef public_486b8c
#undef public_486be0
#undef public_486bf3
#undef public_486c03
