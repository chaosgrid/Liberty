#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412050);
CLANG_FORWARD_PROC_SYMBOL(public_412070);
CLANG_FORWARD_PROC_SYMBOL(public_412360);
CLANG_FORWARD_PROC_SYMBOL(public_412430);
CLANG_FORWARD_PROC_SYMBOL(public_41a140);
CLANG_FORWARD_PROC_SYMBOL(public_41b2e0);
CLANG_FORWARD_PROC_SYMBOL(public_4214d0);
CLANG_FORWARD_PROC_SYMBOL(public_4215e0);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_424f30);
CLANG_FORWARD_PROC_SYMBOL(public_425080);
CLANG_FORWARD_PROC_SYMBOL(public_425140);
CLANG_FORWARD_PROC_SYMBOL(public_428030);
CLANG_FORWARD_PROC_SYMBOL(public_428040);
CLANG_FORWARD_PROC_SYMBOL(public_42d730);
CLANG_FORWARD_PROC_SYMBOL(public_438c90);
CLANG_FORWARD_PROC_SYMBOL(public_439540);
CLANG_FORWARD_PROC_SYMBOL(public_43b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_43bbc0);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4564e0);
CLANG_FORWARD_PROC_SYMBOL(public_456650);
CLANG_FORWARD_PROC_SYMBOL(public_4c4810);
CLANG_FORWARD_PROC_SYMBOL(public_4c4910);
CLANG_FORWARD_PROC_SYMBOL(public_4c4a10);
CLANG_FORWARD_PROC_SYMBOL(public_5593c0);
CLANG_FORWARD_PROC_SYMBOL(public_5602a0);
CLANG_FORWARD_PROC_SYMBOL(public_5602e0);
CLANG_FORWARD_PROC_SYMBOL(public_5743a0);
CLANG_FORWARD_PROC_SYMBOL(public_579170);
CLANG_FORWARD_PROC_SYMBOL(public_579190);
CLANG_FORWARD_PROC_SYMBOL(public_579260);
CLANG_FORWARD_PROC_SYMBOL(public_579280);
CLANG_FORWARD_PROC_SYMBOL(public_59e300);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_573ee3 _public_573ee3
#define public_573f11 _public_573f11
#define public_573f28 _public_573f28
#define public_573f34 _public_573f34
#define public_573f3b _public_573f3b
#define public_573f5b _public_573f5b
#define public_573f76 _public_573f76
#define public_573f96 _public_573f96
#define public_573fcb _public_573fcb
#define public_573fdc _public_573fdc
#define public_573fe1 _public_573fe1
#define public_573fef _public_573fef
#define public_574006 _public_574006
#define public_574021 _public_574021
#define public_57403c _public_57403c
#define public_5740a2 _public_5740a2
#define public_5740b2 _public_5740b2
#define public_5740b9 _public_5740b9
#define public_5740cd _public_5740cd
#define public_574133 _public_574133
#define public_57413a _public_57413a
#define public_574148 _public_574148
#define public_57415d _public_57415d
#define public_57417a _public_57417a
#define public_574182 _public_574182
#define public_5741d7 _public_5741d7
#define public_574245 _public_574245
#define public_57425e _public_57425e
#define public_574265 _public_574265
#define public_574309 _public_574309
#define public_57431b _public_57431b
#define public_574340 _public_574340

PROC_DECLARE(0x573eb0, internal_573eb0, public_573eb0);
extern "C" NAKED register_t __cdecl internal_573eb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x414
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_5c60f8]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        push edi
        xor edi, edi
        xor bl, bl
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], edi
        je public_573f5b
        mov ebx, dword ptr ds : [public_5c71ec]
        mov byte ptr ss : [esp+0x17], 1
        public_573ee3 : nop
        call ebp
        mov edi, dword ptr ds : [esi+8]
        push edi
        lea ecx, ss:[esp+0x28]
/*FIXUP push offset public_5e30b0 @0x573eed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e30b0
        push ecx
        call ebx
        add esp, 0xC
        cmp edi, 5
        je public_573f34
        cmp edi, 0xA
        jne public_573f3b
        mov eax, dword ptr ds : [public_67c20c]
        test eax, eax
        je public_573f11
        test byte ptr ds : [eax+0x6C], 1
        jne public_573f3b
        public_573f11 : nop
        mov dword ptr ds : [esi+4], 1
        mov ecx, dword ptr ds : [public_67c20c]
        test ecx, ecx
        je public_573f28
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_573f28 : nop
        mov dword ptr ds : [public_67c20c], 0
        jmp public_573f3b
        public_573f34 : nop
        mov byte ptr ds : [public_67c204], 0
        public_573f3b : nop
        call ebp
        mov eax, dword ptr ds : [esi+4]
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi+8], eax
        call public_5743a0
        call ebp
        mov eax, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [esi+8]
        jne public_573ee3
        mov bl, byte ptr ss : [esp+0x17]
        xor edi, edi
        public_573f5b : nop
        mov eax, dword ptr ds : [esi+4]
        dec eax
        cmp eax, 0x13
        ja public_574182
/*FIXUP movzx ecx, byte ptr ds : [eax+public_574380] @0x573f68*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_574354] @0x573f6f*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_573f76
  JMPTB cmp eax, 1
  JMPTB mov ecx, 0xA
  JMPTB je public_574182
  JMPTB cmp eax, 2
  JMPTB mov ecx, 0xA
  JMPTB je public_574182
  JMPTB cmp eax, 3
  JMPTB mov ecx, 0xA
  JMPTB je public_574182
  JMPTB cmp eax, 4
  JMPTB mov ecx, 1
  JMPTB je public_574006
  JMPTB cmp eax, 5
  JMPTB mov ecx, 2
  JMPTB je public_574021
  JMPTB cmp eax, 6
  JMPTB mov ecx, 0xA
  JMPTB je public_574182
  JMPTB cmp eax, 7
  JMPTB mov ecx, 0xA
  JMPTB je public_574182
  JMPTB cmp eax, 8
  JMPTB mov ecx, 3
  JMPTB je public_57403c
  JMPTB cmp eax, 9
  JMPTB mov ecx, 4
  JMPTB je public_573f96
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 0xA
  JMPTB je public_574182
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 0xA
  JMPTB je public_574182
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 5
  JMPTB je public_57417a
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 6
  JMPTB je public_57415d
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 0xA
  JMPTB je public_574182
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 0xA
  JMPTB je public_574182
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 7
  JMPTB je public_574182
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 8
  JMPTB je public_5740cd
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 0xA
  JMPTB je public_574182
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 9
  JMPTB je public_573fef
  JMPTB int 3
        public_573f76 : nop
        mov eax, dword ptr ds : [public_67b800]
        cmp eax, edi
        je public_574182
        cmp eax, 0xC
        mov dword ptr ds : [esi+4], eax
        jne public_574182
        call ebp
        jmp public_574182
        public_573f96 : nop
        mov eax, dword ptr ds : [public_67a888]
        cmp eax, edi
        je public_573fdc
        mov cl, byte ptr ds : [eax+0x32C]
        test cl, cl
        je public_573fcb
        push eax
        call public_43d2a0
        mov eax, 1
        mov dword ptr ds : [public_67a888], edi
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov dword ptr ds : [public_67a884], edi
        jmp public_574182
        public_573fcb : nop
        mov eax, dword ptr ds : [public_67a884]
        cmp eax, edi
        je public_574182
        test cl, cl
        je public_573fe1
        public_573fdc : nop
        mov eax, 1
        public_573fe1 : nop
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [public_67a884], edi
        jmp public_574182
        public_573fef : nop
        call public_4c4810
        neg al
        sbb eax, eax
        neg eax
        add eax, 2
        mov dword ptr ss : [esp+0x18], eax
        jmp public_574182
        public_574006 : nop
        mov eax, dword ptr ds : [public_67abd4]
        cmp eax, edi
        je public_574182
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [public_67abd4], edi
        jmp public_574182
        public_574021 : nop
        mov eax, dword ptr ds : [public_67aac4]
        cmp eax, edi
        je public_574182
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [public_67aac4], edi
        jmp public_574182
        public_57403c : nop
        mov al, byte ptr ds : [public_67b778]
        test al, al
        je public_5740b9
        mov al, byte ptr ds : [public_614a9c]
        test al, al
        je public_5740a2
        mov ecx, offset public_668708
        call public_43b3e0
        mov ecx, offset public_66d2d0
        call public_4564e0
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], edi
        call public_4c4910
        push edi
        call public_4c4a10
        push 0x3F800000
        call public_412070
        fld dword ptr ds : [public_61650c]
        fdivr qword ptr ds : [public_5c89b8]
        add esp, 8
        fstp dword ptr ss : [esp]
        push edi
        call public_412050
        add esp, 8
        mov byte ptr ds : [public_668762], 0
        public_5740a2 : nop
        cmp dword ptr ds : [public_67c1fc], 4
        jne public_5740b2
        mov byte ptr ds : [public_668762], 0
        public_5740b2 : nop
        mov byte ptr ds : [public_67b779], 1
        public_5740b9 : nop
        mov eax, dword ptr ds : [public_67b434]
        cmp eax, edi
        je public_574182
/*FIXUP push offset public_67b519 @0x5740c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67b519
        jmp public_574148
        public_5740cd : nop
        mov al, byte ptr ds : [public_67b178]
        test al, al
        je public_57413a
        mov al, byte ptr ds : [public_614a9c]
        test al, al
        je public_574133
        mov ecx, offset public_668708
        call public_43b3e0
        mov ecx, offset public_66d2d0
        call public_4564e0
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], edi
        call public_4c4910
        push edi
        call public_4c4a10
        push 0x3F800000
        call public_412070
        fld dword ptr ds : [public_61650c]
        fdivr qword ptr ds : [public_5c89b8]
        add esp, 8
        fstp dword ptr ss : [esp]
        push edi
        call public_412050
        add esp, 8
        mov byte ptr ds : [public_668762], 0
        public_574133 : nop
        mov byte ptr ds : [public_67b179], 1
        public_57413a : nop
        mov eax, dword ptr ds : [public_67aec4]
        cmp eax, edi
        je public_574182
/*FIXUP push offset public_67af28 @0x574143*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67af28
        public_574148 : nop
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_5c63cc]
        mov byte ptr ds : [esi+0x20C], 1
        jmp public_574182
        public_57415d : nop
        mov ecx, offset public_67a890
        call public_5602e0
        test al, al
        je public_574182
        mov ecx, offset public_67a890
        call public_5602a0
        mov dword ptr ds : [esi+4], eax
        jmp public_574182
        public_57417a : nop
        mov dword ptr ss : [esp+0x18], 1
        public_574182 : nop
        push 3
        call public_428030
        mov ecx, dword ptr ss : [esp+0x42C]
        push ecx
        push edi
        call public_428040
        add esp, 0xC
        test bl, bl
        jne public_574340
        mov al, byte ptr ds : [public_614a9c]
        test al, al
        je public_574340
        fld dword ptr ss : [esp+0x428]
        fst qword ptr ss : [esp+0x1C]
        fcomp qword ptr ds : [public_5cf100]
        fnstsw ax
        test ah, 0x41
        jne public_5741d7
        mov dword ptr ss : [esp+0x1C], 0x9999999A
        mov dword ptr ss : [esp+0x20], 0x3FC99999
        public_5741d7 : nop
        fld dword ptr ds : [esi+0x230]
        sub esp, 8
        fadd qword ptr ss : [esp+0x24]
        fst dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_5d3f50]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        fld dword ptr ss : [esp+0x18]
        add esp, 8
        fld st(1)
        fmul qword ptr ds : [public_5c75f8]
        fsubp 
        fstp dword ptr ds : [esi+0x230]
        call public_5b7ec0
        push eax
        mov ecx, offset public_66d2d0
        call public_456650
        fld qword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x10]
        push ebx
        mov ecx, offset public_668708
        call public_439540
        call public_5593c0
        mov ebp, eax
        mov eax, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_574265
        public_574245 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov al, byte ptr ds : [ecx+4]
        test al, al
        jne public_57425e
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call dword ptr ds : [edx+0x14]
        public_57425e : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [ebp+4]
        jne public_574245
        public_574265 : nop
        push ebx
        call public_438c90
        push eax
        call public_41a140
        push ebx
        call public_412360
        mov ecx, dword ptr ss : [esp+0x434]
        push ecx
        call public_41b2e0
        add esp, 0x10
        call public_424f30
        test al, al
        je public_57431b
        call public_579190
        push 0x1AC7
/*FIXUP push offset public_5e2724 @0x57429e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2724
        push 0
        call public_422610
        push 0x3F800000
        push 0
        push 0
        push 0
        call public_4214d0
        push 0x4100
        call public_4215e0
        add esp, 0x20
        mov ecx, offset public_668708
        call public_43bbc0
        mov edx, dword ptr ds : [esi+0x210]
        lea ecx, ds:[esi+0x210]
        call dword ptr ds : [edx+8]
        push 0x100
        call public_4215e0
        add esp, 4
        call public_59e300
        call public_42d730
        test al, al
        jne public_574309
        call public_438c90
        push eax
        call public_412430
        add esp, 4
        public_574309 : nop
        push 0
        call dword ptr ds : [public_5c6ed8]
        call public_425080
        call public_425140
        public_57431b : nop
        mov al, byte ptr ds : [esi+0x22C]
        test al, al
        jne public_574340
        call public_579170
        call public_579260
        push 0
        call public_579280
        add esp, 4
        mov byte ptr ds : [esi+0x22C], 1
        public_574340 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x414
        ret 4
        UNREACHABLE_TRAP(0x573eb0)
        ASM_EXPORT_ENTRY_SINGLE(0x574182, public_574182)
    }
}

#undef public_573ee3
#undef public_573f11
#undef public_573f28
#undef public_573f34
#undef public_573f3b
#undef public_573f5b
#undef public_573f76
#undef public_573f96
#undef public_573fcb
#undef public_573fdc
#undef public_573fe1
#undef public_573fef
#undef public_574006
#undef public_574021
#undef public_57403c
#undef public_5740a2
#undef public_5740b2
#undef public_5740b9
#undef public_5740cd
#undef public_574133
#undef public_57413a
#undef public_574148
#undef public_57415d
#undef public_57417a
#undef public_574182
#undef public_5741d7
#undef public_574245
#undef public_57425e
#undef public_574265
#undef public_574309
#undef public_57431b
#undef public_574340

#pragma init_seg(compiler)
extern "C" void const* const public_574182 = __AsmFindLabelExport(&internal_573eb0, 0x574182);
