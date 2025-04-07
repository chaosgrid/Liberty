#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611d80);
CLANG_FORWARD_PROC_SYMBOL(public_66235d0);
CLANG_FORWARD_PROC_SYMBOL(public_66254d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);
CLANG_FORWARD_PROC_SYMBOL(public_6628230);

#define public_661f97f _public_661f97f
#define public_661f9d2 _public_661f9d2
#define public_661f9e0 _public_661f9e0
#define public_661fa1e _public_661fa1e
#define public_661fa45 _public_661fa45
#define public_661fa69 _public_661fa69
#define public_661fa78 _public_661fa78
#define public_661fa80 _public_661fa80
#define public_661fa87 _public_661fa87
#define public_661fa9b _public_661fa9b
#define public_661fae9 _public_661fae9
#define public_661fafc _public_661fafc
#define public_661fb2b _public_661fb2b
#define public_661fb37 _public_661fb37
#define public_661fb3c _public_661fb3c
#define public_661fb6c _public_661fb6c
#define public_661fb71 _public_661fb71
#define public_661fb7e _public_661fb7e
#define public_661fbb7 _public_661fbb7
#define public_661fbe9 _public_661fbe9
#define public_661fc00 _public_661fc00
#define public_661fc0e _public_661fc0e
#define public_661fc48 _public_661fc48
#define public_661fcad _public_661fcad
#define public_661fcc7 _public_661fcc7
#define public_661fcd8 _public_661fcd8
#define public_661fd0d _public_661fd0d
#define public_661fd19 _public_661fd19
#define public_661fd1e _public_661fd1e
#define public_661fd3e _public_661fd3e
#define public_661fd5b _public_661fd5b
#define public_661fd73 _public_661fd73
#define public_661fd7d _public_661fd7d
#define public_661fd91 _public_661fd91

PROC_DECLARE(0x661f930, internal_661f930, public_661f930);
extern "C" NAKED register_t __cdecl internal_661f930()
{
    __asm
    {
        mov eax, 0x2170
        call public_6628230
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x217C]
        mov al, byte ptr ss : [ebp+0x44]
        test al, al
        jne public_661fd91
        mov eax, dword ptr ss : [esp+0x2180]
        xor ebx, ebx
        cmp eax, ebx
        jne public_661f97f
/*FIXUP push offset public_662a610 @0x661f95b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a610
        push 0x1A3
        mov eax, 0x100003
/*FIXUP push offset public_662a5c8 @0x661f96a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a5ac @0x661f96f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5ac
        push eax
        mov eax, dword ptr ds : [public_6629004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_661f97f : nop
        call dword ptr ds : [public_6629000]
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], ebx
        mov ecx, dword ptr ds : [eax]
        push edx
/*FIXUP push offset public_662a598 @0x661f990*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a598
        push eax
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_661f9e0
/*FIXUP push offset public_662a550 @0x661f9a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a550
        push 0x1AF
        mov eax, 0x100001
/*FIXUP push offset public_662a5c8 @0x661f9af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a530 @0x661f9b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a530
        push eax
        mov eax, dword ptr ds : [public_6629004]
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0x14
        cmp eax, ebx
        je public_661f9d2
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_661f9d2 : nop
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x2170
        ret 8
        public_661f9e0 : nop
        mov eax, dword ptr ss : [esp+8]
        push 3
/*FIXUP push offset public_662a528 @0x661f9e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a528
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x14]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+8]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x14], ecx
        jne public_661fa1e
        cmp eax, ebx
        mov byte ptr ss : [ebp+0x44], 1
        je public_661fd91
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2170
        ret 8
        public_661fa1e : nop
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        lea esi, ss:[esp+0x80]
        push 0x100
        push esi
        push ebx
        push ecx
        push eax
        mov dword ptr ss : [esp+0x34], 1
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        je public_661fbe9
        public_661fa45 : nop
        lea eax, ss:[esp+0x80]
/*FIXUP push offset public_662a524 @0x661fa4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a524
        push eax
        xor esi, esi
        xor edi, edi
        xor bl, bl
        call dword ptr ds : [public_6629054]
        add esp, 8
        test eax, eax
        je public_661fbb7
        public_661fa69 : nop
        mov cl, byte ptr ds : [eax]
        cmp cl, 0x3B
        je public_661fa9b
        test esi, esi
        jne public_661fa78
        mov esi, eax
        jmp public_661fa87
        public_661fa78 : nop
        test bl, bl
        je public_661fa80
        mov edi, eax
        jmp public_661fa87
        public_661fa80 : nop
        cmp cl, 0x3D
        jne public_661fa87
        mov bl, 1
/*FIXUP public_661fa87 : nop
        push offset public_662a524 @0x661fa87*/
  FIXUP public_661fa87 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a524
        push 0
        call dword ptr ds : [public_6629054]
        add esp, 8
        test eax, eax
        jne public_661fa69
        public_661fa9b : nop
        xor eax, eax
        cmp esi, eax
        je public_661fbb7
        mov ecx, dword ptr ss : [esp+0x2188]
        push 0x20
        mov dword ptr ss : [esp+0x38], esi
        lea edx, ss:[esp+0x28]
        push esi
        mov esi, dword ptr ds : [public_6629050]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x38], 0x18
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x48], edi
        call esi
        add esp, 8
        test eax, eax
        je public_661fae9
        mov byte ptr ds : [eax], 0
        public_661fae9 : nop
        mov eax, dword ptr ss : [esp+0x34]
        push 9
        push eax
        call esi
        add esp, 8
        test eax, eax
        je public_661fafc
        mov byte ptr ds : [eax], 0
        public_661fafc : nop
        mov eax, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ss:[esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jl public_661fb6c
        mov edx, dword ptr ss : [esp+0x34]
        mov esi, offset public_662a51c
        test edx, edx
        je public_661fb37
        lea ecx, ss:[esp+0x48]
        lea eax, ss:[esp+0x48]
        sub edx, ecx
        public_661fb2b : nop
        mov cl, byte ptr ds : [edx+eax]
        mov byte ptr ds : [eax], cl
        inc eax
        test cl, cl
        jne public_661fb2b
        jmp public_661fb3c
        public_661fb37 : nop
        mov byte ptr ss : [esp+0x48], 0
        public_661fb3c : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp+0x4C]
        lea ecx, ss:[ebp+0x48]
        mov dword ptr ss : [esp+0x78], edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        lea eax, ss:[esp+0x84]
        push eax
        call public_66235d0
        mov byte ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x78], 0
        jmp public_661fb71
        public_661fb6c : nop
        mov esi, offset public_662a510
        public_661fb71 : nop
        mov eax, dword ptr ss : [esp+0x40]
        test eax, eax
        jne public_661fb7e
        mov eax, offset public_662ace4
        public_661fb7e : nop
        mov ecx, dword ptr ss : [esp+0x34]
        push esi
        push eax
        push ecx
        lea edx, ss:[esp+0x18C]
/*FIXUP push offset public_662a4c8 @0x661fb8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a4c8
        push edx
        call public_6611d80
        push eax
        mov eax, dword ptr ds : [public_6629004]
        push 0x1FC
        mov ecx, 0x100003
/*FIXUP push offset public_662a5c8 @0x661fba7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a5ac @0x661fbac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5ac
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x28
        public_661fbb7 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        lea esi, ss:[esp+0x80]
        mov eax, ecx
        inc ecx
        push 0x100
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x1C]
        xor ebx, ebx
        test eax, eax
        jne public_661fa45
        public_661fbe9 : nop
        mov edi, dword ptr ss : [ebp+0x4C]
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ebx
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_661fcc7
        public_661fc00 : nop
        cmp eax, ebx
        je public_661fc0e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], ebx
        public_661fc0e : nop
        mov eax, dword ptr ds : [esi+0x38]
        lea ecx, ss:[esp+0x14]
        push ecx
/*FIXUP push offset public_662a2a0 @0x661fc16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a2a0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx]
        xor edx, edx
        test eax, eax
        setge dl
        mov eax, edx
        cmp eax, ebx
        je public_661fc48
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        xor edx, edx
        test eax, eax
        setge dl
        mov eax, edx
        cmp eax, ebx
        je public_661fc48
        mov esi, dword ptr ds : [esi]
        jmp public_661fcad
        public_661fc48 : nop
        lea edi, ds:[esi+8]
        lea eax, ss:[esp+0x180]
        push edi
/*FIXUP push offset public_662a470 @0x661fc53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a470
        push eax
        call public_6611d80
        push eax
        push 0x224
        mov ecx, 0x100002
/*FIXUP push offset public_662a5c8 @0x661fc69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x661fc6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push ecx
        mov ecx, dword ptr ds : [public_6629004]
        call dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        add esp, 0x20
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push ebx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, edi
        call public_66254d0
        push esi
        call public_66281d0
        mov eax, dword ptr ss : [ebp+0x50]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+0x50], eax
        mov eax, dword ptr ss : [ebp+0x4C]
        mov edi, eax
        mov esi, dword ptr ds : [eax]
        public_661fcad : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp esi, edi
        jne public_661fc00
        cmp eax, ebx
        je public_661fcc7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], ebx
        public_661fcc7 : nop
        mov esi, dword ptr ss : [ebp+0x4C]
        mov dword ptr ss : [esp+0x1C], esi
        mov ebx, dword ptr ds : [esi]
        cmp ebx, esi
        je public_661fd7d
        public_661fcd8 : nop
        mov eax, dword ptr ds : [ebx+0x38]
        lea ecx, ss:[esp+0x18]
        push ecx
/*FIXUP push offset public_662a454 @0x661fce0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a454
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jl public_661fd73
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+8]
        lea edx, ds:[ebx+8]
        test edx, edx
        je public_661fd19
        lea ecx, ss:[esp+0x48]
        lea eax, ss:[esp+0x48]
        sub edx, ecx
        public_661fd0d : nop
        mov cl, byte ptr ds : [edx+eax]
        mov byte ptr ds : [eax], cl
        inc eax
        test cl, cl
        jne public_661fd0d
        jmp public_661fd1e
        public_661fd19 : nop
        mov byte ptr ss : [esp+0x48], 0
        public_661fd1e : nop
        mov esi, dword ptr ss : [ebp+0x58]
        mov edx, dword ptr ss : [esp+0x18]
        push 0x3C
        mov dword ptr ss : [esp+0x7C], edx
        mov edi, dword ptr ds : [esi+4]
        call public_66281dc
        add esp, 4
        mov dword ptr ds : [eax], esi
        test edi, edi
        jne public_661fd3e
        mov edi, eax
        public_661fd3e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_661fd5b
        mov ecx, 0xD
        lea esi, ss:[esp+0x48]
        rep movsd
        public_661fd5b : nop
        mov eax, dword ptr ss : [ebp+0x5C]
        mov esi, dword ptr ss : [esp+0x1C]
        inc eax
        mov byte ptr ss : [esp+0x48], 0
        mov dword ptr ss : [ebp+0x5C], eax
        mov dword ptr ss : [esp+0x78], 0
        public_661fd73 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, esi
        jne public_661fcd8
        public_661fd7d : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        test eax, eax
        mov byte ptr ss : [ebp+0x44], 1
        pop esi
        je public_661fd91
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_661fd91 : nop
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2170
        ret 8
        UNREACHABLE_TRAP(0x661f930)
    }
}

#undef public_661f97f
#undef public_661f9d2
#undef public_661f9e0
#undef public_661fa1e
#undef public_661fa45
#undef public_661fa69
#undef public_661fa78
#undef public_661fa80
#undef public_661fa87
#undef public_661fa9b
#undef public_661fae9
#undef public_661fafc
#undef public_661fb2b
#undef public_661fb37
#undef public_661fb3c
#undef public_661fb6c
#undef public_661fb71
#undef public_661fb7e
#undef public_661fbb7
#undef public_661fbe9
#undef public_661fc00
#undef public_661fc0e
#undef public_661fc48
#undef public_661fcad
#undef public_661fcc7
#undef public_661fcd8
#undef public_661fd0d
#undef public_661fd19
#undef public_661fd1e
#undef public_661fd3e
#undef public_661fd5b
#undef public_661fd73
#undef public_661fd7d
#undef public_661fd91
