#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5553b0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_5553fe _public_5553fe
#define public_555405 _public_555405
#define public_555407 _public_555407
#define public_555412 _public_555412
#define public_555434 _public_555434
#define public_555442 _public_555442
#define public_555447 _public_555447
#define public_555457 _public_555457

PROC_DECLARE(0x5553b0, internal_5553b0, public_5553b0);
extern "C" NAKED register_t __cdecl internal_5553b0()
{
    __asm
    {
        push esi
        push edi
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_555434
        push 0x27
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_555434
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        mov edi, dword ptr ss : [esp+0xC]
        je public_555407
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_555405
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_5553fe
        fstp dword ptr ds : [eax]
        pop edi
        mov eax, esi
        pop esi
        ret 
        public_5553fe : nop
        pop edi
        fstp st(0)
        mov eax, esi
        pop esi
        ret 
        public_555405 : nop
        fstp st(0)
        public_555407 : nop
        mov eax, dword ptr ds : [public_6798c8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_555434
        public_555412 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x20]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_555447
        mov esi, dword ptr ds : [esi]
        fstp st(0)
        cmp esi, dword ptr ds : [public_6798c8]
        jne public_555412
        public_555434 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_555442
        mov dword ptr ds : [eax], 0
        public_555442 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_555447 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_555457
        fstp dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+8]
        pop edi
        pop esi
        ret 
        public_555457 : nop
        mov eax, dword ptr ds : [esi+8]
        fstp st(0)
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5553b0)
    }
}

#undef public_5553fe
#undef public_555405
#undef public_555407
#undef public_555412
#undef public_555434
#undef public_555442
#undef public_555447
#undef public_555457
