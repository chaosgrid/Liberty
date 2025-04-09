#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_412360);
CLANG_FORWARD_PROC_SYMBOL(public_412430);
CLANG_FORWARD_PROC_SYMBOL(public_417f10);
CLANG_FORWARD_PROC_SYMBOL(public_41b2e0);
CLANG_FORWARD_PROC_SYMBOL(public_424f30);
CLANG_FORWARD_PROC_SYMBOL(public_425080);
CLANG_FORWARD_PROC_SYMBOL(public_425140);
CLANG_FORWARD_PROC_SYMBOL(public_428030);
CLANG_FORWARD_PROC_SYMBOL(public_428040);
CLANG_FORWARD_PROC_SYMBOL(public_42d730);
CLANG_FORWARD_PROC_SYMBOL(public_42d740);
CLANG_FORWARD_PROC_SYMBOL(public_471e80);
CLANG_FORWARD_PROC_SYMBOL(public_4c4a30);
CLANG_FORWARD_PROC_SYMBOL(public_4c4a60);
CLANG_FORWARD_PROC_SYMBOL(public_4c7cb0);
CLANG_FORWARD_PROC_SYMBOL(public_4ec400);
CLANG_FORWARD_PROC_SYMBOL(public_5135b0);
CLANG_FORWARD_PROC_SYMBOL(public_51b4b0);
CLANG_FORWARD_PROC_SYMBOL(public_52fc20);
CLANG_FORWARD_PROC_SYMBOL(public_537c30);
CLANG_FORWARD_PROC_SYMBOL(public_538390);
CLANG_FORWARD_PROC_SYMBOL(public_540bd0);
CLANG_FORWARD_PROC_SYMBOL(public_541380);
CLANG_FORWARD_PROC_SYMBOL(public_541510);
CLANG_FORWARD_PROC_SYMBOL(public_541580);
CLANG_FORWARD_PROC_SYMBOL(public_549e70);
CLANG_FORWARD_PROC_SYMBOL(public_54a940);
CLANG_FORWARD_PROC_SYMBOL(public_54b230);
CLANG_FORWARD_PROC_SYMBOL(public_554e90);
CLANG_FORWARD_PROC_SYMBOL(public_554eb0);
CLANG_FORWARD_PROC_SYMBOL(public_559c10);
CLANG_FORWARD_PROC_SYMBOL(public_559c20);
CLANG_FORWARD_PROC_SYMBOL(public_579190);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_59e300);
CLANG_FORWARD_PROC_SYMBOL(public_5a29b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a2a20);

#define public_54b018 _public_54b018
#define public_54b08b _public_54b08b
#define public_54b0a2 _public_54b0a2
#define public_54b0b1 _public_54b0b1
#define public_54b114 _public_54b114
#define public_54b159 _public_54b159
#define public_54b15e _public_54b15e
#define public_54b175 _public_54b175
#define public_54b1a8 _public_54b1a8
#define public_54b1aa _public_54b1aa
#define public_54b1b8 _public_54b1b8
#define public_54b1db _public_54b1db
#define public_54b1ed _public_54b1ed
#define public_54b201 _public_54b201
#define public_54b212 _public_54b212
#define public_54b21f _public_54b21f

PROC_DECLARE(0x54b000, internal_54b000, public_54b000);
extern "C" NAKED register_t __cdecl internal_54b000()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xBA0]
        test eax, eax
        jne public_54b018
        mov eax, 6
        pop esi
        pop ecx
        ret 4
        public_54b018 : nop
        push edi
        call public_42d740
        test al, al
        mov edi, dword ptr ss : [esp+0x10]
        jne public_54b0b1
        push edi
        mov dword ptr ds : [public_679778], 0
        call public_401e90
        push edi
        call public_541380
        push edi
        call dword ptr ds : [public_5c6b4c]
        add esp, 0xC
        push edi
        call public_554e90
        push eax
        call dword ptr ds : [public_5c6b48]
        push edi
        call public_540bd0
        call public_52fc20
        mov eax, dword ptr ds : [esi+0xBA0]
        push eax
        push edi
        call public_5135b0
        push 0x18
        call public_5792b0
        add esp, 0x18
        test eax, eax
        je public_54b08b
        push edi
        call public_538390
        add esp, 4
        call public_537c30
        public_54b08b : nop
        mov ecx, esi
        call public_54b230
        mov ecx, dword ptr ds : [esi+0xBA0]
        test ecx, ecx
        je public_54b0a2
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x6C]
        public_54b0a2 : nop
        push edi
        call public_554eb0
        push edi
        call public_41b2e0
        add esp, 8
        public_54b0b1 : nop
        mov ecx, dword ptr ds : [esi+0xBA0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x7C]
        push eax
        call public_428030
        mov ecx, dword ptr ds : [esi+0xBA0]
        push edi
        push ecx
        call public_428040
        add esp, 0xC
        call public_424f30
        test al, al
        mov byte ptr ss : [esp+0xB], al
        je public_54b15e
        call public_5a29b0
        call public_559c10
        call public_4c7cb0
        call public_4ec400
        mov ecx, dword ptr ds : [esi+0xBA0]
        test ecx, ecx
        je public_54b114
        call public_51b4b0
        mov ecx, dword ptr ds : [esi+0xBA0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0xFFFF
        call dword ptr ds : [edx+0x78]
        public_54b114 : nop
        call public_5a2a20
        call public_559c20
        call public_417f10
        call public_59e300
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_54b159
        call public_42d730
        test al, al
        jne public_54b159
        push ebp
        mov ebp, dword ptr ds : [esi+0xBA0]
        push edi
        call public_412360
        push ebp
        call public_412430
        add esp, 8
        pop ebp
        public_54b159 : nop
        call public_425080
        public_54b15e : nop
        call public_541510
        call public_42d740
        test al, al
        jne public_54b175
        push edi
        call public_541580
        add esp, 4
        public_54b175 : nop
        mov ecx, esi
        call public_54a940
        mov eax, dword ptr ds : [public_679744]
        test eax, eax
        pop edi
        je public_54b1b8
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_54b1b8
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        push eax
        call public_4c4a30
        mov eax, dword ptr ds : [public_679744]
        add esp, 4
        test eax, eax
        je public_54b1a8
        lea ecx, ds:[eax-8]
        jmp public_54b1aa
        public_54b1a8 : nop
        xor ecx, ecx
        public_54b1aa : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        push eax
        call public_4c4a60
        add esp, 4
        public_54b1b8 : nop
        mov ecx, dword ptr ds : [esi+0xBA0]
        test ecx, ecx
        je public_54b201
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        test al, al
        je public_54b201
        mov eax, dword ptr ds : [public_679744]
        test eax, eax
        je public_54b1db
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_54b1ed
        public_54b1db : nop
        mov al, byte ptr ds : [esi+9]
        test al, al
        jne public_54b201
        call public_471e80
        mov byte ptr ds : [esi+9], 1
        jmp public_54b201
        public_54b1ed : nop
        push eax
/*FIXUP push offset public_5cc404 @0x54b1ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc404
        mov ecx, esi
        call public_549e70
        mov byte ptr ds : [esi+0xBA8], 0
        public_54b201 : nop
        mov al, byte ptr ds : [esi+0xA]
        test al, al
        je public_54b212
        mov dword ptr ds : [public_679778], 6
        public_54b212 : nop
        mov al, byte ptr ss : [esp+7]
        test al, al
        je public_54b21f
        call public_425140
        public_54b21f : nop
        call public_579190
        mov eax, dword ptr ds : [public_679778]
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x54b000)
    }
}

#undef public_54b018
#undef public_54b08b
#undef public_54b0a2
#undef public_54b0b1
#undef public_54b114
#undef public_54b159
#undef public_54b15e
#undef public_54b175
#undef public_54b1a8
#undef public_54b1aa
#undef public_54b1b8
#undef public_54b1db
#undef public_54b1ed
#undef public_54b201
#undef public_54b212
#undef public_54b21f
