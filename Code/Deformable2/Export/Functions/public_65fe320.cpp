#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3e80);
CLANG_FORWARD_PROC_SYMBOL(public_65fe590);
CLANG_FORWARD_PROC_SYMBOL(public_65fe5c0);
CLANG_FORWARD_PROC_SYMBOL(public_65fe620);
CLANG_FORWARD_PROC_SYMBOL(public_66003a0);
CLANG_FORWARD_PROC_SYMBOL(public_6600460);
CLANG_FORWARD_PROC_SYMBOL(public_6600520);
CLANG_FORWARD_PROC_SYMBOL(public_6600600);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65fe359 _public_65fe359
#define public_65fe360 _public_65fe360
#define public_65fe38b _public_65fe38b
#define public_65fe3a2 _public_65fe3a2
#define public_65fe3f4 _public_65fe3f4
#define public_65fe3fb _public_65fe3fb
#define public_65fe420 _public_65fe420
#define public_65fe424 _public_65fe424
#define public_65fe438 _public_65fe438
#define public_65fe447 _public_65fe447
#define public_65fe454 _public_65fe454
#define public_65fe45d _public_65fe45d
#define public_65fe46a _public_65fe46a
#define public_65fe4ac _public_65fe4ac
#define public_65fe4d2 _public_65fe4d2
#define public_65fe4ff _public_65fe4ff
#define public_65fe513 _public_65fe513
#define public_65fe517 _public_65fe517
#define public_65fe52a _public_65fe52a
#define public_65fe52e _public_65fe52e
#define public_65fe533 _public_65fe533
#define public_65fe556 _public_65fe556

PROC_DECLARE(0x65fe320, internal_65fe320, public_65fe320);
extern "C" NAKED register_t __cdecl internal_65fe320()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x68
        push ebp
        mov ebp, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x6C]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+4], ecx
        jbe public_65fe556
        push ebx
        push esi
        xor esi, esi
        push edi
        mov edi, dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0x14], esi
        jmp public_65fe360
        public_65fe359 : nop
        xor ecx, ecx
        nop 
        lea esp, ss:[esp]
        public_65fe360 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov al, byte ptr ds : [esi+edx]
        add esi, edx
        not al
        test al, 1
        je public_65fe533
        mov ebx, dword ptr ds : [esi+0x10]
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], ecx
        je public_65fe38b
        lea ecx, ss:[esp+0x30]
        call public_65fe5c0
        public_65fe38b : nop
        lea eax, ds:[ebx-1]
        cmp eax, 8
        mov dword ptr ss : [esp+0x30], ebx
        ja public_65fe517
/*FIXUP jmp dword ptr ds : [eax*4+public_65fe560] @0x65fe39b*/
  JMPTB cmp eax, 0
  JMPTB je public_65fe3a2
  JMPTB cmp eax, 1
  JMPTB je public_65fe424
  JMPTB cmp eax, 2
  JMPTB je public_65fe438
  JMPTB cmp eax, 3
  JMPTB je public_65fe447
  JMPTB cmp eax, 4
  JMPTB je public_65fe46a
  JMPTB cmp eax, 5
  JMPTB je public_65fe517
  JMPTB cmp eax, 6
  JMPTB je public_65fe46a
  JMPTB cmp eax, 7
  JMPTB je public_65fe4ac
  JMPTB cmp eax, 8
  JMPTB je public_65fe4d2
  JMPTB int 3
        public_65fe3a2 : nop
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6602040 @0x65fe3a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
        push ecx
        lea ecx, ss:[esp+0x4C]
        call public_65f3e80
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x44]
        push eax
        push edi
        xor ebp, ebp
        call dword ptr ds : [edx+0x7C]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        je public_65fe3fb
        mov ecx, dword ptr ds : [edi]
        push ebp
        lea edx, ss:[esp+0x20]
        push edx
        push 4
        lea eax, ss:[esp+0x2C]
        push eax
        push ebx
        push edi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_65fe420
        cmp dword ptr ss : [esp+0x1C], 4
        jne public_65fe420
        mov ecx, dword ptr ss : [esp+0x20]
        mov ebp, 1
        mov dword ptr ss : [esp+0x34], ecx
        public_65fe3f4 : nop
        mov edx, dword ptr ds : [edi]
        push ebx
        push edi
        call dword ptr ds : [edx+0x10]
        public_65fe3fb : nop
        xor eax, eax
        test ebp, ebp
        setne al
        dec eax
        test eax, 0x80004005
        jge public_65fe513
        lea ecx, ss:[esp+0x30]
        call public_65fe5c0
        mov ebp, dword ptr ss : [esp+0x7C]
        jmp public_65fe533
        public_65fe420 : nop
        xor ebp, ebp
        jmp public_65fe3f4
        public_65fe424 : nop
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x34]
        push ecx
        push edx
        push edi
        call public_6600460
        add esp, 0xC
        jmp public_65fe45d
        public_65fe438 : nop
        mov ecx, dword ptr ds : [esi+4]
        push 0
        lea eax, ss:[esp+0x38]
        push eax
        push 3
        push ecx
        jmp public_65fe454
        public_65fe447 : nop
        mov eax, dword ptr ds : [esi+4]
        push 0
        lea edx, ss:[esp+0x38]
        push edx
        push 4
        push eax
        public_65fe454 : nop
        push edi
        call public_6600520
        add esp, 0x14
        public_65fe45d : nop
        test eax, eax
        jge public_65fe517
        jmp public_65fe52a
        public_65fe46a : nop
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x80]
        push ecx
        push 0
        push edx
        push edi
        call public_6600600
        add esp, 0x10
        test eax, eax
        lea ecx, ss:[esp+0x30]
        jl public_65fe52e
        mov eax, dword ptr ss : [esp+0x80]
        push eax
        call public_65fe620
        mov ecx, dword ptr ss : [esp+0x80]
        push ecx
        call public_6600bb0
        add esp, 4
        jmp public_65fe517
        public_65fe4ac : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        push edi
        call public_66003a0
        add esp, 0xC
        test eax, eax
        jl public_65fe52a
        mov ecx, dword ptr ss : [esp+0x24]
        shr ecx, 4
        and ecx, 0xF
        mov dword ptr ss : [esp+0x34], ecx
        jmp public_65fe517
        public_65fe4d2 : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        push edi
        call public_66003a0
        add esp, 0xC
        test eax, eax
        jl public_65fe52a
        mov eax, dword ptr ds : [esi]
        xor ecx, ecx
        test eax, 0x20000
        jne public_65fe4ff
        test eax, 0x40000
        je public_65fe4ff
        mov ecx, 1
        public_65fe4ff : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        call public_65fe590
        add esp, 8
        mov dword ptr ss : [esp+0x34], eax
        jmp public_65fe517
        public_65fe513 : nop
        mov ebp, dword ptr ss : [esp+0x7C]
        public_65fe517 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x30]
        push eax
        push esi
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x68]
        public_65fe52a : nop
        lea ecx, ss:[esp+0x30]
        public_65fe52e : nop
        call public_65fe5c0
        public_65fe533 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x2C]
        inc eax
        add esi, 0x4C
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], esi
        jb public_65fe359
        pop edi
        pop esi
        pop ebx
        public_65fe556 : nop
        xor eax, eax
        pop ebp
        add esp, 0x68
        ret 8
        UNREACHABLE_TRAP(0x65fe320)
        ASM_EXPORT_ENTRY_FIRST(0x65fe3a2, public_65fe3a2)
        ASM_EXPORT_ENTRY(0x65fe424, public_65fe424)
        ASM_EXPORT_ENTRY(0x65fe438, public_65fe438)
        ASM_EXPORT_ENTRY(0x65fe447, public_65fe447)
        ASM_EXPORT_ENTRY(0x65fe46a, public_65fe46a)
        ASM_EXPORT_ENTRY(0x65fe4ac, public_65fe4ac)
        ASM_EXPORT_ENTRY(0x65fe4d2, public_65fe4d2)
        ASM_EXPORT_ENTRY_LAST(0x65fe517, public_65fe517)
    }
}

#undef public_65fe359
#undef public_65fe360
#undef public_65fe38b
#undef public_65fe3a2
#undef public_65fe3f4
#undef public_65fe3fb
#undef public_65fe420
#undef public_65fe424
#undef public_65fe438
#undef public_65fe447
#undef public_65fe454
#undef public_65fe45d
#undef public_65fe46a
#undef public_65fe4ac
#undef public_65fe4d2
#undef public_65fe4ff
#undef public_65fe513
#undef public_65fe517
#undef public_65fe52a
#undef public_65fe52e
#undef public_65fe533
#undef public_65fe556

#pragma init_seg(compiler)
extern "C" void const* const public_65fe3a2 = __AsmFindLabelExport(&internal_65fe320, 0x65fe3a2);
extern "C" void const* const public_65fe424 = __AsmFindLabelExport(&internal_65fe320, 0x65fe424);
extern "C" void const* const public_65fe438 = __AsmFindLabelExport(&internal_65fe320, 0x65fe438);
extern "C" void const* const public_65fe447 = __AsmFindLabelExport(&internal_65fe320, 0x65fe447);
extern "C" void const* const public_65fe46a = __AsmFindLabelExport(&internal_65fe320, 0x65fe46a);
extern "C" void const* const public_65fe4ac = __AsmFindLabelExport(&internal_65fe320, 0x65fe4ac);
extern "C" void const* const public_65fe4d2 = __AsmFindLabelExport(&internal_65fe320, 0x65fe4d2);
extern "C" void const* const public_65fe517 = __AsmFindLabelExport(&internal_65fe320, 0x65fe517);
