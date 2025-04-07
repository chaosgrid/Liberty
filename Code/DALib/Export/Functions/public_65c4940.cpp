#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c3b00);
CLANG_FORWARD_PROC_SYMBOL(public_65c3b10);
CLANG_FORWARD_PROC_SYMBOL(public_65c41f0);
CLANG_FORWARD_PROC_SYMBOL(public_65c4240);
CLANG_FORWARD_PROC_SYMBOL(public_65c4300);
CLANG_FORWARD_PROC_SYMBOL(public_65c4310);
CLANG_FORWARD_PROC_SYMBOL(public_65c4390);
CLANG_FORWARD_PROC_SYMBOL(public_65c44e0);
CLANG_FORWARD_PROC_SYMBOL(public_65c45d0);
CLANG_FORWARD_PROC_SYMBOL(public_65c5590);
CLANG_FORWARD_PROC_SYMBOL(public_65c6be4);
CLANG_FORWARD_JUMP_SYMBOL(public_65c6ed8);

#define public_65c49b0 _public_65c49b0
#define public_65c49c6 _public_65c49c6
#define public_65c49ea _public_65c49ea
#define public_65c4a45 _public_65c4a45
#define public_65c4a50 _public_65c4a50
#define public_65c4a70 _public_65c4a70
#define public_65c4a7e _public_65c4a7e
#define public_65c4aa1 _public_65c4aa1
#define public_65c4ace _public_65c4ace
#define public_65c4ad4 _public_65c4ad4
#define public_65c4ad8 _public_65c4ad8
#define public_65c4aee _public_65c4aee
#define public_65c4b10 _public_65c4b10
#define public_65c4b3d _public_65c4b3d
#define public_65c4b43 _public_65c4b43
#define public_65c4b47 _public_65c4b47
#define public_65c4b5f _public_65c4b5f
#define public_65c4b7c _public_65c4b7c
#define public_65c4ba0 _public_65c4ba0
#define public_65c4bb2 _public_65c4bb2
#define public_65c4bce _public_65c4bce

PROC_DECLARE(0x65c4940, internal_65c4940, public_65c4940);
extern "C" NAKED register_t __cdecl internal_65c4940()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_65c6ed8 @0x65c4942*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65c6ed8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x58
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x564]
        test al, al
        mov dword ptr ss : [esp+0x10], esi
        je public_65c4bce
        push ebp
        lea ecx, ss:[esp+0x34]
        call public_65c41f0
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x68], 0
        call public_65c4300
        add esi, 0x56C
        push esi
        lea ecx, ss:[esp+0x38]
        call public_65c44e0
        lea ecx, ss:[esp+0x34]
        call public_65c4390
        mov ebp, eax
        test ebp, ebp
        je public_65c4b7c
        push edi
        lea esp, ss:[esp]
        public_65c49b0 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, 3
        mov esi, dword ptr ss : [ebp+0x18]
        ja public_65c4b5f
/*FIXUP jmp dword ptr ds : [eax*4+public_65c4be0] @0x65c49bf*/
  JMPTB cmp eax, 0
  JMPTB je public_65c49c6
  JMPTB cmp eax, 1
  JMPTB je public_65c4a70
  JMPTB cmp eax, 2
  JMPTB je public_65c4aee
  JMPTB cmp eax, 3
  JMPTB je public_65c4a7e
  JMPTB int 3
        public_65c49c6 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 1
        jne public_65c4a45
        mov ecx, esi
        call public_65c3b00
        fcom qword ptr ds : [public_65c7500]
        fnstsw ax
        test ah, 0x41
        jne public_65c49ea
        fstp st(0)
        fld qword ptr ds : [public_65c7500]
        public_65c49ea : nop
        fmul qword ptr ds : [public_65c74f8]
        call public_65c6be4
        mov edx, dword ptr ss : [esp+0x18]
        or cl, 0xFF
        sub cl, al
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        mov byte ptr ss : [esp+0xF], cl
        je public_65c4a50
        test esi, esi
        je public_65c4a50
        push 0x108
        lea ecx, ss:[esp+0x13]
        mov dword ptr ss : [esp+0x38], ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        push esi
        push 0
        push 1
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x4C], 1
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x38]
        jmp public_65c4a50
        public_65c4a45 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx]
        public_65c4a50 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        test ecx, ecx
        je public_65c4b5f
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x64]
        jmp public_65c4b5f
        public_65c4a70 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax+4]
        jmp public_65c4b5f
        public_65c4a7e : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
/*FIXUP push offset public_65ca268 @0x65c4a85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca268
        call dword ptr ds : [public_65c7024]
        mov eax, dword ptr ds : [public_65ca260]
        mov edi, eax
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_65c4ad8
        public_65c4aa1 : nop
        cmp dword ptr ds : [eax+8], esi
        jne public_65c4ace
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_65c45d0
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, offset public_65ca25c
        call public_65c5590
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_65c4ad4
        public_65c4ace : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        public_65c4ad4 : nop
        cmp eax, edi
        jne public_65c4aa1
/*FIXUP public_65c4ad8 : nop
        push offset public_65ca268 @0x65c4ad8*/
  FIXUP public_65c4ad8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca268
        call dword ptr ds : [public_65c7028]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        jmp public_65c4b5f
/*FIXUP public_65c4aee : nop
        push offset public_65ca268 @0x65c4aee*/
  FIXUP public_65c4aee : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca268
        call dword ptr ds : [public_65c7024]
        mov eax, dword ptr ds : [public_65ca260]
        mov edi, eax
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], eax
        je public_65c4b47
        lea ebx, ds:[ebx]
        public_65c4b10 : nop
        cmp dword ptr ds : [eax+8], esi
        jne public_65c4b3d
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_65c45d0
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, offset public_65ca25c
        call public_65c5590
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_65c4b43
        public_65c4b3d : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], eax
        public_65c4b43 : nop
        cmp eax, edi
        jne public_65c4b10
/*FIXUP public_65c4b47 : nop
        push offset public_65ca268 @0x65c4b47*/
  FIXUP public_65c4b47 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca268
        call dword ptr ds : [public_65c7028]
        test esi, esi
        je public_65c4b5f
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        public_65c4b5f : nop
        mov eax, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [eax]
        lea ecx, ss:[esp+0x38]
        call public_65c4390
        mov ebp, eax
        test ebp, ebp
        jne public_65c49b0
        pop edi
        public_65c4b7c : nop
        lea ecx, ss:[esp+0x34]
        call public_65c4310
/*FIXUP push offset public_65ca268 @0x65c4b85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca268
        call dword ptr ds : [public_65c7024]
        mov eax, dword ptr ds : [public_65ca260]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        pop ebp
        je public_65c4bb2
        lea esp, ss:[esp]
        public_65c4ba0 : nop
        mov ecx, dword ptr ds : [esi+8]
        call public_65c3b10
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_65ca260]
        jne public_65c4ba0
/*FIXUP public_65c4bb2 : nop
        push offset public_65ca268 @0x65c4bb2*/
  FIXUP public_65c4bb2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca268
        call dword ptr ds : [public_65c7028]
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        call public_65c4240
        public_65c4bce : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x64
        ret 
        UNREACHABLE_TRAP(0x65c4940)
        ASM_EXPORT_ENTRY_FIRST(0x65c49c6, public_65c49c6)
        ASM_EXPORT_ENTRY(0x65c4a70, public_65c4a70)
        ASM_EXPORT_ENTRY(0x65c4a7e, public_65c4a7e)
        ASM_EXPORT_ENTRY_LAST(0x65c4aee, public_65c4aee)
    }
}

#undef public_65c49b0
#undef public_65c49c6
#undef public_65c49ea
#undef public_65c4a45
#undef public_65c4a50
#undef public_65c4a70
#undef public_65c4a7e
#undef public_65c4aa1
#undef public_65c4ace
#undef public_65c4ad4
#undef public_65c4ad8
#undef public_65c4aee
#undef public_65c4b10
#undef public_65c4b3d
#undef public_65c4b43
#undef public_65c4b47
#undef public_65c4b5f
#undef public_65c4b7c
#undef public_65c4ba0
#undef public_65c4bb2
#undef public_65c4bce

#pragma init_seg(compiler)
extern "C" void const* const public_65c49c6 = __AsmFindLabelExport(&internal_65c4940, 0x65c49c6);
extern "C" void const* const public_65c4a70 = __AsmFindLabelExport(&internal_65c4940, 0x65c4a70);
extern "C" void const* const public_65c4a7e = __AsmFindLabelExport(&internal_65c4940, 0x65c4a7e);
extern "C" void const* const public_65c4aee = __AsmFindLabelExport(&internal_65c4940, 0x65c4aee);
