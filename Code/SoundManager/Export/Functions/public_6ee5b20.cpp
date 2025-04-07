#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee5b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ee71c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8da0);

#define public_6ee5b43 _public_6ee5b43
#define public_6ee5b55 _public_6ee5b55
#define public_6ee5ba1 _public_6ee5ba1
#define public_6ee5bb3 _public_6ee5bb3
#define public_6ee5c0d _public_6ee5c0d
#define public_6ee5c50 _public_6ee5c50
#define public_6ee5c81 _public_6ee5c81
#define public_6ee5ca3 _public_6ee5ca3
#define public_6ee5cc2 _public_6ee5cc2
#define public_6ee5cf5 _public_6ee5cf5
#define public_6ee5d0e _public_6ee5d0e
#define public_6ee5d28 _public_6ee5d28
#define public_6ee5d42 _public_6ee5d42
#define public_6ee5d59 _public_6ee5d59
#define public_6ee5d5c _public_6ee5d5c
#define public_6ee5d95 _public_6ee5d95
#define public_6ee5dce _public_6ee5dce
#define public_6ee5e06 _public_6ee5e06
#define public_6ee5e3f _public_6ee5e3f
#define public_6ee5e78 _public_6ee5e78
#define public_6ee5e8b _public_6ee5e8b

PROC_DECLARE(0x6ee5b20, internal_6ee5b20, public_6ee5b20);
extern "C" NAKED register_t __cdecl internal_6ee5b20()
{
    __asm
    {
        mov eax, 0x2000
        call public_6ee8da0
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [esi+0x90]
        mov al, 1
        test al, cl
        mov ecx, offset public_6eeaaf8
        jne public_6ee5b43
        mov ecx, offset public_6eeaaec
        public_6ee5b43 : nop
        test byte ptr ds : [esi+0x8C], al
        mov eax, offset public_6eeaf78
        jne public_6ee5b55
        mov eax, offset public_6eeaae4
        public_6ee5b55 : nop
        mov edx, dword ptr ds : [esi+0x50]
        push edx
        push ecx
        push eax
        lea eax, ss:[esp+0x10]
/*FIXUP push offset public_6eeaaa0 @0x6ee5b5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaaa0
        push eax
        call public_6ee71c0
        push eax
        push 0xBA0
/*FIXUP push offset public_6eea070 @0x6ee5b70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5b7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        mov ecx, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [ecx]
        mov cl, byte ptr ds : [esi+0x90]
        mov al, 2
        add esp, 0x28
        test al, cl
        mov ecx, offset public_6eeaaf8
        jne public_6ee5ba1
        mov ecx, offset public_6eeaaec
        public_6ee5ba1 : nop
        test byte ptr ds : [esi+0x8C], al
        mov eax, offset public_6eeaf78
        jne public_6ee5bb3
        mov eax, offset public_6eeaae4
        public_6ee5bb3 : nop
        mov edx, dword ptr ds : [esi+0x94]
        push edx
        push ecx
        push eax
        lea eax, ss:[esp+0x10]
/*FIXUP push offset public_6eeaa58 @0x6ee5bc0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaa58
        push eax
        call public_6ee71c0
        push eax
        push 0xBA5
/*FIXUP push offset public_6eea070 @0x6ee5bd1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5bdb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        mov ecx, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [ecx]
        mov al, byte ptr ds : [esi+0x90]
        add esp, 0x28
        test al, 3
        je public_6ee5c81
        mov eax, dword ptr ds : [public_6eeaf5c]
        test eax, eax
        mov eax, offset public_6eeaf78
        jne public_6ee5c0d
        mov eax, offset public_6eeaae4
        public_6ee5c0d : nop
        push eax
        lea edx, ss:[esp+8]
/*FIXUP push offset public_6eeaa18 @0x6ee5c12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaa18
        push edx
        call public_6ee71c0
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        push 0xBAA
/*FIXUP push offset public_6eea070 @0x6ee5c28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5c32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_6eeaf60]
        add esp, 0x20
        test eax, eax
        mov eax, offset public_6eeaf78
        jne public_6ee5c50
        mov eax, offset public_6eeaae4
        public_6ee5c50 : nop
        push eax
        lea ecx, ss:[esp+8]
/*FIXUP push offset public_6eea9d8 @0x6ee5c55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea9d8
        push ecx
        call public_6ee71c0
        mov edx, dword ptr ds : [public_6ee9008]
        push eax
        push 0xBAC
/*FIXUP push offset public_6eea070 @0x6ee5c6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5c76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        public_6ee5c81 : nop
        mov eax, dword ptr ds : [esi+0x90]
        test ah, 2
        je public_6ee5ca3
        lea eax, ss:[esp+4]
/*FIXUP push offset public_6eea9a0 @0x6ee5c90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea9a0
        push eax
        call public_6ee71c0
        push eax
        push 0xBB1
        jmp public_6ee5d0e
        public_6ee5ca3 : nop
        test ah, 1
        je public_6ee5cc2
        lea edx, ss:[esp+4]
/*FIXUP push offset public_6eea964 @0x6ee5cac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea964
        push edx
        call public_6ee71c0
        push eax
        push 0xBB5
        jmp public_6ee5d42
        public_6ee5cc2 : nop
        test al, al
        jns public_6ee5cf5
        lea ecx, ss:[esp+4]
/*FIXUP push offset public_6eea928 @0x6ee5cca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea928
        push ecx
        call public_6ee71c0
        mov edx, dword ptr ds : [public_6ee9008]
        push eax
        push 0xBB9
/*FIXUP push offset public_6eea070 @0x6ee5ce1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5ceb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        call dword ptr ds : [edx]
        jmp public_6ee5d59
        public_6ee5cf5 : nop
        test al, 0x40
        je public_6ee5d28
        lea eax, ss:[esp+4]
/*FIXUP push offset public_6eea8f0 @0x6ee5cfd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea8f0
        push eax
        call public_6ee71c0
        push eax
        push 0xBBD
/*FIXUP public_6ee5d0e : nop
        push offset public_6eea070 @0x6ee5d0e*/
  FIXUP public_6ee5d0e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5d18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        mov ecx, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [ecx]
        jmp public_6ee5d59
        public_6ee5d28 : nop
        test ah, 4
        je public_6ee5d5c
        lea edx, ss:[esp+4]
/*FIXUP push offset public_6eea8c0 @0x6ee5d31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea8c0
        push edx
        call public_6ee71c0
        push eax
        push 0xBC1
        public_6ee5d42 : nop
        mov eax, dword ptr ds : [public_6ee9008]
/*FIXUP push offset public_6eea070 @0x6ee5d47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5d51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        call dword ptr ds : [eax]
        public_6ee5d59 : nop
        add esp, 0x1C
        public_6ee5d5c : nop
        test byte ptr ds : [esi+0x90], 0x10
        je public_6ee5d95
        lea ecx, ss:[esp+4]
/*FIXUP push offset public_6eea894 @0x6ee5d69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea894
        push ecx
        call public_6ee71c0
        mov edx, dword ptr ds : [public_6ee9008]
        push eax
        push 0xBC6
/*FIXUP push offset public_6eea070 @0x6ee5d80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5d8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x1C
        public_6ee5d95 : nop
        test byte ptr ds : [esi+0x90], 0x20
        je public_6ee5dce
        lea eax, ss:[esp+4]
/*FIXUP push offset public_6eea86c @0x6ee5da2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea86c
        push eax
        call public_6ee71c0
        push eax
        push 0xBCA
/*FIXUP push offset public_6eea070 @0x6ee5db3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5dbd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        mov ecx, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [ecx]
        add esp, 0x1C
        public_6ee5dce : nop
        mov eax, dword ptr ds : [public_6eea028]
        test eax, eax
        je public_6ee5e06
        lea edx, ss:[esp+4]
/*FIXUP push offset public_6eea830 @0x6ee5ddb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea830
        push edx
        call public_6ee71c0
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        push 0xBCF
/*FIXUP push offset public_6eea070 @0x6ee5df1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5dfb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x1C
        public_6ee5e06 : nop
        mov eax, dword ptr ds : [public_6eeaf64]
        test eax, eax
        je public_6ee5e3f
        lea ecx, ss:[esp+4]
/*FIXUP push offset public_6eea804 @0x6ee5e13*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea804
        push ecx
        call public_6ee71c0
        mov edx, dword ptr ds : [public_6ee9008]
        push eax
        push 0xBD4
/*FIXUP push offset public_6eea070 @0x6ee5e2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5e34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x1C
        public_6ee5e3f : nop
        mov eax, dword ptr ds : [public_6eeaf68]
        test eax, eax
        je public_6ee5e78
        lea eax, ss:[esp+4]
/*FIXUP push offset public_6eea7e0 @0x6ee5e4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea7e0
        push eax
        call public_6ee71c0
        push eax
        push 0xBD9
/*FIXUP push offset public_6eea070 @0x6ee5e5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5e67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        mov ecx, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [ecx]
        add esp, 0x1C
        public_6ee5e78 : nop
        test byte ptr ds : [esi+0x90], 4
        mov eax, offset public_6eeaaf8
        jne public_6ee5e8b
        mov eax, offset public_6eeaaec
        public_6ee5e8b : nop
        push eax
        lea edx, ss:[esp+8]
/*FIXUP push offset public_6eea7cc @0x6ee5e90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea7cc
        push edx
        call public_6ee71c0
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        push 0xBDE
/*FIXUP push offset public_6eea070 @0x6ee5ea6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5eb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x54]
        push ecx
        lea edx, ss:[esp+0x28]
/*FIXUP push offset public_6eea7a8 @0x6ee5ec0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea7a8
        push edx
        call public_6ee71c0
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        push 0xBE0
/*FIXUP push offset public_6eea070 @0x6ee5ed6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5ee0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x40
        pop esi
        add esp, 0x2000
        ret 
        UNREACHABLE_TRAP(0x6ee5b20)
    }
}

#undef public_6ee5b43
#undef public_6ee5b55
#undef public_6ee5ba1
#undef public_6ee5bb3
#undef public_6ee5c0d
#undef public_6ee5c50
#undef public_6ee5c81
#undef public_6ee5ca3
#undef public_6ee5cc2
#undef public_6ee5cf5
#undef public_6ee5d0e
#undef public_6ee5d28
#undef public_6ee5d42
#undef public_6ee5d59
#undef public_6ee5d5c
#undef public_6ee5d95
#undef public_6ee5dce
#undef public_6ee5e06
#undef public_6ee5e3f
#undef public_6ee5e78
#undef public_6ee5e8b
