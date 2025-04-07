#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d660);
CLANG_FORWARD_PROC_SYMBOL(public_5544e0);

#define public_554521 _public_554521
#define public_554530 _public_554530
#define public_55453f _public_55453f
#define public_554541 _public_554541
#define public_554550 _public_554550
#define public_554552 _public_554552
#define public_55455e _public_55455e
#define public_554560 _public_554560
#define public_55456c _public_55456c
#define public_55456e _public_55456e
#define public_55457f _public_55457f
#define public_554594 _public_554594

PROC_DECLARE(0x5544e0, internal_5544e0, public_5544e0);
extern "C" NAKED register_t __cdecl internal_5544e0()
{
    __asm
    {
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_554594
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_554594
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_554594
        mov eax, dword ptr ds : [eax+0xA4]
        test eax, eax
        mov ecx, dword ptr ds : [ecx+0xA4]
        je public_554521
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x67
        cmp dl, 0x67
        je public_554594
        public_554521 : nop
        test ecx, ecx
        je public_554530
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x67
        cmp dl, 0x67
        je public_554594
        public_554530 : nop
        test eax, eax
        je public_55453f
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_554541
        public_55453f : nop
        xor eax, eax
        public_554541 : nop
        test ecx, ecx
        je public_554550
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 3
        cmp dl, 3
        je public_554552
        public_554550 : nop
        xor ecx, ecx
        public_554552 : nop
        test eax, eax
        je public_55455e
        mov edx, dword ptr ds : [eax+0xB4]
        jmp public_554560
        public_55455e : nop
        xor edx, edx
        public_554560 : nop
        test ecx, ecx
        je public_55456c
        mov eax, dword ptr ds : [ecx+0xB4]
        jmp public_55456e
        public_55456c : nop
        xor eax, eax
        public_55456e : nop
        mov ecx, dword ptr ds : [public_673344]
        cmp edx, ecx
        je public_55457f
        cmp eax, ecx
        je public_55457f
        xor eax, eax
        ret 
        public_55457f : nop
        call public_42d660
        fcomp qword ptr ds : [public_679978]
        fnstsw ax
        test ah, 0x41
        jp public_554594
        xor eax, eax
        ret 
        public_554594 : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x5544e0)
    }
}

#undef public_554521
#undef public_554530
#undef public_55453f
#undef public_554541
#undef public_554550
#undef public_554552
#undef public_55455e
#undef public_554560
#undef public_55456c
#undef public_55456e
#undef public_55457f
#undef public_554594
