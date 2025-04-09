#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_50c950);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfc6f);

#define public_50c9b8 _public_50c9b8
#define public_50c9e0 _public_50c9e0
#define public_50ca34 _public_50ca34
#define public_50ca5b _public_50ca5b
#define public_50ca71 _public_50ca71
#define public_50ca8f _public_50ca8f
#define public_50caf2 _public_50caf2
#define public_50cb55 _public_50cb55
#define public_50cb6e _public_50cb6e
#define public_50cb82 _public_50cb82
#define public_50cb8c _public_50cb8c
#define public_50cb8e _public_50cb8e
#define public_50cbfe _public_50cbfe
#define public_50cc0f _public_50cc0f
#define public_50cc24 _public_50cc24
#define public_50cc49 _public_50cc49
#define public_50cc6e _public_50cc6e
#define public_50cc77 _public_50cc77
#define public_50cccb _public_50cccb
#define public_50ccd6 _public_50ccd6
#define public_50cce5 _public_50cce5
#define public_50ccfb _public_50ccfb
#define public_50cd1a _public_50cd1a
#define public_50cd23 _public_50cd23

PROC_DECLARE(0x50c950, internal_50c950, public_50c950);
extern "C" NAKED register_t __cdecl internal_50c950()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5bfc6f @0x50c958*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfc6f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1594
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x10], 2
        call dword ptr ds : [public_5c605c]
        mov eax, dword ptr ss : [esp+0x15B4]
        xor ebx, ebx
        push ebx
        push eax
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x15B4], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_50cb82
        mov edi, dword ptr ss : [esp+0x15B8]
        mov ebp, dword ptr ds : [public_5c6d24]
        public_50c9b8 : nop
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_50cb8c
/*FIXUP push offset public_5db560 @0x50c9ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db560
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_50c9b8
        lea ecx, ds:[ecx]
        public_50c9e0 : nop
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_50c9b8
/*FIXUP push offset public_5c866c @0x50c9ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_50c9e0
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c6698]
        push eax
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne public_50c9b8
        xor ebx, ebx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_50cb8e
        mov edi, dword ptr ds : [public_5c6cf4]
/*FIXUP public_50ca34 : nop
        push offset public_5c9660 @0x50ca34*/
  FIXUP public_50ca34 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9660
        lea ecx, ss:[esp+0x40]
        call edi
        test al, al
        lea ecx, ss:[esp+0x3C]
        je public_50ca71
        call dword ptr ds : [public_5c6698]
        cmp eax, ebx
        jne public_50ca5b
        mov dword ptr ds : [esi], ebx
        mov byte ptr ds : [esi+4], bl
        jmp public_50cb6e
        public_50ca5b : nop
        push eax
        lea ecx, ds:[esi+4]
        push 0x20
        push ecx
        call public_417c50
        add esp, 0xC
        mov dword ptr ds : [esi], eax
        jmp public_50cb6e
/*FIXUP public_50ca71 : nop
        push offset public_5c9630 @0x50ca71*/
  FIXUP public_50ca71 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9630
        call edi
        test al, al
        lea ecx, ss:[esp+0x3C]
        je public_50ca8f
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x24]
        jmp public_50cb6e
/*FIXUP public_50ca8f : nop
        push offset public_5db554 @0x50ca8f*/
  FIXUP public_50ca8f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db554
        call edi
        test al, al
        lea ecx, ss:[esp+0x3C]
        je public_50caf2
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x1C]
        push ebx
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x14]
        push 2
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c6cfc]
        fld qword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x30]
        fld qword ptr ss : [esp+0x1C]
        lea edx, ds:[esi+0x28]
        fstp dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        jmp public_50cb6e
/*FIXUP public_50caf2 : nop
        push offset public_5db548 @0x50caf2*/
  FIXUP public_50caf2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db548
        call edi
        test al, al
        lea ecx, ss:[esp+0x3C]
        je public_50cb55
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x14]
        push ebx
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x1C]
        push 2
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c6cfc]
        fld qword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        fld qword ptr ss : [esp+0x14]
        lea ecx, ds:[esi+0x34]
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        jmp public_50cb6e
/*FIXUP public_50cb55 : nop
        push offset public_5db540 @0x50cb55*/
  FIXUP public_50cb55 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db540
        call edi
        test al, al
        je public_50cb6e
        push ebx
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x40]
        public_50cb6e : nop
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_50ca34
        jmp public_50cb8e
        public_50cb82 : nop
        mov dword ptr ss : [esp+0x10], 1
        jmp public_50cb8e
        public_50cb8c : nop
        xor ebx, ebx
        public_50cb8e : nop
        lea eax, ss:[esp+0x1464]
        mov dword ptr ss : [esp+0x15AC], 1
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x146C]
        mov byte ptr ss : [esp+0x15B4], 2
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x1474], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_50cc24
        cmp dword ptr ss : [esp+0x1478], ebx
        je public_50cc0f
        mov eax, dword ptr ss : [esp+0x147C]
        cmp eax, ebx
        je public_50cbfe
        push eax
        call ebp
        mov dword ptr ss : [esp+0x147C], ebx
        mov dword ptr ss : [esp+0x1480], ebx
        public_50cbfe : nop
        mov eax, dword ptr ss : [esp+0x1478]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1478], ebx
        public_50cc0f : nop
        mov ecx, dword ptr ss : [esp+0x1474]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x1474], 0xFFFFFFFF
        public_50cc24 : nop
        mov eax, dword ptr ss : [esp+0x147C]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_5c71d8]
        je public_50cc49
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x147C], ebx
        mov dword ptr ss : [esp+0x1480], ebx
        public_50cc49 : nop
        mov eax, dword ptr ss : [esp+0x1468]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1484], ebx
        je public_50cc77
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_50cc6e
        cmp cl, 0xFF
        je public_50cc6e
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_50cc77
        public_50cc6e : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_50cc77 : nop
        mov dword ptr ss : [esp+0x1468], ebx
        mov dword ptr ss : [esp+0x146C], ebx
        mov dword ptr ss : [esp+0x1470], ebx
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x15B4], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        je public_50cce5
        cmp dword ptr ss : [esp+0x50], ebx
        je public_50ccd6
        mov eax, dword ptr ss : [esp+0x54]
        cmp eax, ebx
        je public_50cccb
        push eax
        call ebp
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        public_50cccb : nop
        mov ecx, dword ptr ss : [esp+0x50]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x50], ebx
        public_50ccd6 : nop
        mov edx, dword ptr ss : [esp+0x4C]
        push edx
        call esi
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        public_50cce5 : nop
        mov eax, dword ptr ss : [esp+0x54]
        cmp eax, ebx
        je public_50ccfb
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        public_50ccfb : nop
        mov eax, dword ptr ss : [esp+0x40]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x5C], ebx
        je public_50cd23
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_50cd1a
        cmp cl, 0xFF
        je public_50cd1a
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_50cd23
        public_50cd1a : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_50cd23 : nop
        mov ecx, dword ptr ss : [esp+0x15A4]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x15A0
        ret 8
        UNREACHABLE_TRAP(0x50c950)
    }
}

#undef public_50c9b8
#undef public_50c9e0
#undef public_50ca34
#undef public_50ca5b
#undef public_50ca71
#undef public_50ca8f
#undef public_50caf2
#undef public_50cb55
#undef public_50cb6e
#undef public_50cb82
#undef public_50cb8c
#undef public_50cb8e
#undef public_50cbfe
#undef public_50cc0f
#undef public_50cc24
#undef public_50cc49
#undef public_50cc6e
#undef public_50cc77
#undef public_50cccb
#undef public_50ccd6
#undef public_50cce5
#undef public_50ccfb
#undef public_50cd1a
#undef public_50cd23
