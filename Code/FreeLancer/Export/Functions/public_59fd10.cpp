#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4f3f);

#define public_59fdb0 _public_59fdb0
#define public_59fded _public_59fded
#define public_59fec0 _public_59fec0
#define public_59ff39 _public_59ff39
#define public_59ff69 _public_59ff69
#define public_59ff73 _public_59ff73
#define public_59ff93 _public_59ff93
#define public_59ffb6 _public_59ffb6
#define public_59ffb8 _public_59ffb8
#define public_59ffca _public_59ffca
#define public_59ffe0 _public_59ffe0
#define public_59fff0 _public_59fff0
#define public_5a0008 _public_5a0008
#define public_5a0027 _public_5a0027
#define public_5a0044 _public_5a0044
#define public_5a0054 _public_5a0054
#define public_5a00c6 _public_5a00c6
#define public_5a00d7 _public_5a00d7
#define public_5a00e8 _public_5a00e8
#define public_5a010b _public_5a010b
#define public_5a0130 _public_5a0130
#define public_5a0139 _public_5a0139
#define public_5a0174 _public_5a0174
#define public_5a01ae _public_5a01ae
#define public_5a01b1 _public_5a01b1
#define public_5a01d4 _public_5a01d4
#define public_5a01df _public_5a01df
#define public_5a01ea _public_5a01ea
#define public_5a0204 _public_5a0204
#define public_5a0223 _public_5a0223
#define public_5a022c _public_5a022c

PROC_DECLARE(0x59fd10, internal_59fd10, public_59fd10);
extern "C" NAKED register_t __cdecl internal_59fd10()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5c4f3f @0x59fd18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4f3f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x169C
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c605c]
        mov eax, dword ptr ss : [esp+0x16BC]
        xor ebx, ebx
        push ebx
        push eax
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x16BC], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_5a0054
/*FIXUP push offset public_5e5f30 @0x59fd63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5f30
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6180]
        test al, al
        je public_5a0054
/*FIXUP push offset public_5e5f30 @0x59fd7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5f30
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_5a0054
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c669c]
        test al, al
        mov ebp, dword ptr ds : [public_5c6cf4]
        je public_59ffca
        lea esp, ss:[esp]
/*FIXUP public_59fdb0 : nop
        push offset public_5e5f24 @0x59fdb0*/
  FIXUP public_59fdb0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5f24
        lea ecx, ss:[esp+0x48]
        call ebp
        test al, al
        jne public_59ffb8
/*FIXUP push offset public_5dba88 @0x59fdc3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dba88
        lea ecx, ss:[esp+0x48]
        call ebp
        test al, al
        lea ecx, ss:[esp+0x44]
        je public_59fded
        mov edi, dword ptr ds : [esi]
        push ebx
        call dword ptr ds : [public_5c6698]
        push eax
        mov ecx, esi
        call dword ptr ds : [edi+0x98]
        jmp public_59ffb8
/*FIXUP public_59fded : nop
        push offset public_5e1708 @0x59fded*/
  FIXUP public_59fded : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1708
        call ebp
        test al, al
        lea ecx, ss:[esp+0x44]
        je public_59fec0
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x30]
        push ebx
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x10]
        push 2
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6cfc]
        fld qword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        fld qword ptr ss : [esp+0x30]
        lea edi, ds:[esi+0xA8]
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        lea ecx, ds:[esi+0x80]
        call public_420d60
        test al, al
        je public_59ffb6
        fld dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi+0x84]
        fadd dword ptr ds : [esi+0x68]
        mov eax, dword ptr ds : [public_5c6d90]
        fld dword ptr ds : [edi+4]
        fadd dword ptr ds : [esi+0x64]
        fld dword ptr ds : [edi]
        lea edi, ss:[esp+0x38]
        fadd dword ptr ds : [esi+0x60]
        push edi
        push ecx
        fstp dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x8C]
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        xor ebx, ebx
        push ebx
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        jmp public_59ffb8
/*FIXUP public_59fec0 : nop
        push offset public_5e5f18 @0x59fec0*/
  FIXUP public_59fec0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5f18
        call ebp
        test al, al
        jne public_59ffb8
/*FIXUP push offset public_5e16fc @0x59fecf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16fc
        lea ecx, ss:[esp+0x48]
        call ebp
        test al, al
        lea ecx, ss:[esp+0x44]
        je public_59ff39
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x10]
        push ebx
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x30]
        push 2
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6cfc]
        fld qword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        fld qword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0xB4]
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        jmp public_59ffb8
/*FIXUP public_59ff39 : nop
        push offset public_5e16c0 @0x59ff39*/
  FIXUP public_59ff39 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16c0
        call ebp
        test al, al
        lea ecx, ss:[esp+0x44]
        je public_59ff73
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_59ff69
        mov eax, 1
        mov byte ptr ds : [esi+0x2D1], al
        jmp public_59ffb8
        public_59ff69 : nop
        xor eax, eax
        mov byte ptr ds : [esi+0x2D1], al
        jmp public_59ffb8
/*FIXUP public_59ff73 : nop
        push offset public_5e5f10 @0x59ff73*/
  FIXUP public_59ff73 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5f10
        call ebp
        test al, al
        lea ecx, ss:[esp+0x44]
        je public_59ff93
        push ebx
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [esi+0x70], eax
        jmp public_59ffb8
/*FIXUP public_59ff93 : nop
        push offset public_5e16b8 @0x59ff93*/
  FIXUP public_59ff93 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16b8
        call ebp
        test al, al
        je public_59ffb8
        push ebx
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [esi+0xCC], eax
        jmp public_59ffb8
        public_59ffb6 : nop
        xor ebx, ebx
        public_59ffb8 : nop
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_59fdb0
        public_59ffca : nop
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_5a0054
        mov edi, dword ptr ds : [public_5c6468]
        mov edi, edi
        public_59ffe0 : nop
        lea ecx, ss:[esp+0x44]
        call edi
        lea edx, ss:[esp+0x15AC]
        lea ecx, ds:[ecx]
        public_59fff0 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        cmp cl, bl
        jne public_59fff0
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5a0044
/*FIXUP public_5a0008 : nop
        push offset public_5e5f04 @0x5a0008*/
  FIXUP public_5a0008 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5f04
        lea ecx, ss:[esp+0x48]
        call ebp
        test al, al
        lea ecx, ss:[esp+0x44]
        jne public_5a0027
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5a0008
        jmp public_5a0044
        public_5a0027 : nop
        lea edx, ss:[esp+0x44]
        push edx
        push esi
        call dword ptr ds : [public_5c6698]
        push eax
        lea eax, ss:[esp+0x15B8]
        push eax
        call public_59db20
        add esp, 0x10
        public_5a0044 : nop
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c6054]
        xor ebx, ebx
        test al, al
        jne public_59ffe0
        public_5a0054 : nop
        lea ecx, ss:[esp+0x146C]
        mov dword ptr ss : [esp+0x16B4], 1
        mov dword ptr ss : [esp+0x10], ecx
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x1474]
        mov byte ptr ss : [esp+0x16BC], 2
        call dword ptr ds : [public_5c707c]
        mov eax, dword ptr ss : [esp+0x147C]
        mov ebp, dword ptr ds : [public_5c6ef8]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_5a00e8
        cmp dword ptr ss : [esp+0x1480], ebx
        je public_5a00d7
        mov eax, dword ptr ss : [esp+0x1484]
        cmp eax, ebx
        je public_5a00c6
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x1484], ebx
        mov dword ptr ss : [esp+0x1488], ebx
        public_5a00c6 : nop
        mov ecx, dword ptr ss : [esp+0x1480]
        push ecx
        call ebp
        mov dword ptr ss : [esp+0x1480], ebx
        public_5a00d7 : nop
        mov edx, dword ptr ss : [esp+0x147C]
        push edx
        call ebp
        mov dword ptr ss : [esp+0x147C], edi
        public_5a00e8 : nop
        mov eax, dword ptr ss : [esp+0x1484]
        cmp eax, ebx
        je public_5a010b
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x1484], ebx
        mov dword ptr ss : [esp+0x1488], ebx
        public_5a010b : nop
        mov eax, dword ptr ss : [esp+0x1470]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x148C], ebx
        je public_5a0139
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_5a0130
        cmp cl, 0xFF
        je public_5a0130
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_5a0139
        public_5a0130 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5a0139 : nop
        mov dword ptr ss : [esp+0x1470], ebx
        mov dword ptr ss : [esp+0x1474], ebx
        mov dword ptr ss : [esp+0x1478], ebx
        mov eax, dword ptr ds : [public_5c7080]
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x16B4], 3
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, esi
        jae public_5a0174
        mov esi, eax
        public_5a0174 : nop
        cmp esi, ebx
        jbe public_5a01b1
        sub eax, esi
        push eax
        mov eax, dword ptr ss : [esp+0x4C]
        lea ecx, ds:[eax+esi]
        push ecx
        push eax
        call dword ptr ds : [public_5c709c]
        mov edi, dword ptr ss : [esp+0x58]
        add esp, 0xC
        push ebx
        sub edi, esi
        push edi
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_5a01ae
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x4C], edi
        mov byte ptr ds : [edx+edi], bl
        public_5a01ae : nop
        or edi, 0xFFFFFFFF
        public_5a01b1 : nop
        cmp dword ptr ss : [esp+0x54], edi
        je public_5a01ea
        cmp dword ptr ss : [esp+0x58], ebx
        je public_5a01df
        mov eax, dword ptr ss : [esp+0x5C]
        cmp eax, ebx
        je public_5a01d4
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x60], ebx
        public_5a01d4 : nop
        mov eax, dword ptr ss : [esp+0x58]
        push eax
        call ebp
        mov dword ptr ss : [esp+0x58], ebx
        public_5a01df : nop
        mov ecx, dword ptr ss : [esp+0x54]
        push ecx
        call ebp
        mov dword ptr ss : [esp+0x54], edi
        public_5a01ea : nop
        mov eax, dword ptr ss : [esp+0x5C]
        cmp eax, ebx
        je public_5a0204
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x60], ebx
        public_5a0204 : nop
        mov eax, dword ptr ss : [esp+0x48]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x64], ebx
        je public_5a022c
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_5a0223
        cmp cl, 0xFF
        je public_5a0223
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_5a022c
        public_5a0223 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5a022c : nop
        mov ecx, dword ptr ss : [esp+0x16AC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x16A8
        ret 4
        UNREACHABLE_TRAP(0x59fd10)
    }
}

#undef public_59fdb0
#undef public_59fded
#undef public_59fec0
#undef public_59ff39
#undef public_59ff69
#undef public_59ff73
#undef public_59ff93
#undef public_59ffb6
#undef public_59ffb8
#undef public_59ffca
#undef public_59ffe0
#undef public_59fff0
#undef public_5a0008
#undef public_5a0027
#undef public_5a0044
#undef public_5a0054
#undef public_5a00c6
#undef public_5a00d7
#undef public_5a00e8
#undef public_5a010b
#undef public_5a0130
#undef public_5a0139
#undef public_5a0174
#undef public_5a01ae
#undef public_5a01b1
#undef public_5a01d4
#undef public_5a01df
#undef public_5a01ea
#undef public_5a0204
#undef public_5a0223
#undef public_5a022c
