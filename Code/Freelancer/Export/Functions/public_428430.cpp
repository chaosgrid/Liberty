#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428430);

#define public_428454 _public_428454
#define public_428478 _public_428478
#define public_428490 _public_428490
#define public_4284a4 _public_4284a4
#define public_4284a9 _public_4284a9
#define public_4284c0 _public_4284c0

PROC_DECLARE(0x428430, internal_428430, public_428430);
extern "C" NAKED register_t __cdecl internal_428430()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_667cb0]
        test ecx, ecx
        je public_428454
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [public_667cb0]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_667cb0], 0
        public_428454 : nop
        mov ecx, dword ptr ds : [public_667cb4]
        test ecx, ecx
        je public_428478
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [public_667cb4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_667cb4], 0
        public_428478 : nop
        mov eax, dword ptr ds : [public_667c70]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_4284a9
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea esp, ss:[esp]
        public_428490 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, dword ptr ds : [ecx+0x18]
        mov esi, dword ptr ds : [esi]
        je public_4284a4
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [public_667c70]
        public_4284a4 : nop
        cmp esi, eax
        jne public_428490
        pop edi
        public_4284a9 : nop
        mov eax, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        pop esi
        je public_4284c0
        mov ecx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [ecx+0xB8]
        public_4284c0 : nop
        mov dword ptr ds : [public_667ca0], 0
        mov dword ptr ds : [public_667ca4], 0
        mov dword ptr ds : [public_667ca8], 0
        mov dword ptr ds : [public_610904], 0xBF800000
        ret 
        UNREACHABLE_TRAP(0x428430)
    }
}

#undef public_428454
#undef public_428478
#undef public_428490
#undef public_4284a4
#undef public_4284a9
#undef public_4284c0
