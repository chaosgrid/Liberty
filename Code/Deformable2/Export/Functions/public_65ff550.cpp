#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);
CLANG_FORWARD_PROC_SYMBOL(public_6600da0);
CLANG_FORWARD_PROC_SYMBOL(public_6600dc0);

#define public_65ff57c _public_65ff57c
#define public_65ff583 _public_65ff583
#define public_65ff58a _public_65ff58a
#define public_65ff590 _public_65ff590
#define public_65ff59c _public_65ff59c
#define public_65ff5a1 _public_65ff5a1
#define public_65ff5ed _public_65ff5ed
#define public_65ff602 _public_65ff602
#define public_65ff622 _public_65ff622
#define public_65ff631 _public_65ff631
#define public_65ff645 _public_65ff645
#define public_65ff658 _public_65ff658
#define public_65ff68c _public_65ff68c
#define public_65ff68e _public_65ff68e
#define public_65ff6f2 _public_65ff6f2
#define public_65ff702 _public_65ff702
#define public_65ff718 _public_65ff718
#define public_65ff71d _public_65ff71d

PROC_DECLARE(0x65ff550, internal_65ff550, public_65ff550);
extern "C" NAKED register_t __cdecl internal_65ff550()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x70]
        mov esi, eax
        test esi, esi
        je public_65ff5a1
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx]
        dec eax
        cmp eax, 9
        ja public_65ff5a1
/*FIXUP jmp dword ptr ds : [eax*4+public_65ff724] @0x65ff575*/
  JMPTB cmp eax, 0
  JMPTB je public_65ff57c
  JMPTB cmp eax, 1
  JMPTB je public_65ff583
  JMPTB cmp eax, 2
  JMPTB je public_65ff590
  JMPTB cmp eax, 3
  JMPTB je public_65ff58a
  JMPTB cmp eax, 4
  JMPTB je public_65ff5ed
  JMPTB cmp eax, 5
  JMPTB je public_65ff631
  JMPTB cmp eax, 6
  JMPTB je public_65ff5ed
  JMPTB cmp eax, 7
  JMPTB je public_65ff57c
  JMPTB cmp eax, 8
  JMPTB je public_65ff583
  JMPTB cmp eax, 9
  JMPTB je public_65ff59c
  JMPTB int 3
        public_65ff57c : nop
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], edx
        jmp public_65ff5a1
        public_65ff583 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], eax
        jmp public_65ff5a1
        public_65ff58a : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [esi+0xC], ecx
        public_65ff590 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+4], eax
        public_65ff59c : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], ecx
        public_65ff5a1 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+4]
        mov cl, byte ptr ds : [eax]
        cmp cl, 0x44
        mov dl, 0x63
        jne public_65ff658
        cmp byte ptr ds : [eax+1], dl
        jne public_65ff658
        mov bl, byte ptr ds : [eax+2]
        test bl, bl
        jne public_65ff658
        lea eax, ss:[ebp+0x20]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        add ebp, 0x30
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp+4], edx
        mov edx, dword ptr ds : [eax+0xC]
        pop edi
        mov dword ptr ss : [ebp+8], ecx
        pop esi
        mov dword ptr ss : [ebp+0xC], edx
        pop ebp
        pop ebx
        ret 0xC
        public_65ff5ed : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_65ff602
        push eax
        call public_6600bb0
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_65ff602 : nop
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        je public_65ff5a1
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call public_6600bb6
        mov dword ptr ds : [esi], eax
        mov ebx, dword ptr ds : [ebx+4]
        add esp, 4
        mov ecx, eax
        public_65ff622 : nop
        mov al, byte ptr ds : [ebx]
        inc ebx
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_65ff622
        jmp public_65ff5a1
        public_65ff631 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [esi], edx
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        je public_65ff645
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+4]
        public_65ff645 : nop
        test edi, edi
        je public_65ff5a1
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        jmp public_65ff5a1
        public_65ff658 : nop
        cmp cl, 0x4F
        jne public_65ff71d
        cmp byte ptr ds : [eax+1], dl
        jne public_65ff71d
        mov cl, byte ptr ds : [eax+2]
        test cl, cl
        jne public_65ff71d
        fld dword ptr ss : [ebp+0x2C]
        fcomp dword ptr ds : [public_66011e0]
        fnstsw ax
        test ah, 5
        jp public_65ff68c
        mov eax, 1
        jmp public_65ff68e
        public_65ff68c : nop
        xor eax, eax
        public_65ff68e : nop
        test al, al
        mov byte ptr ss : [ebp+0x64], al
        mov byte ptr ss : [ebp+0x65], 0
        jne public_65ff71d
        push 0
        call public_6600da0
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 4
        test ecx, ecx
        je public_65ff71d
        mov eax, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+0x14]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xC8]
        test eax, eax
        jl public_65ff71d
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6600dc0
        mov edx, dword ptr ds : [eax+0x38]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        cmp edx, 1
        sete cl
        cmp eax, 0xA
        mov byte ptr ss : [ebp+0x65], cl
        jl public_65ff6f2
        cmp eax, 0xE
        jle public_65ff702
        public_65ff6f2 : nop
        push eax
        call public_6600dc0
        mov cl, byte ptr ds : [eax+0x48]
        add esp, 4
        test cl, cl
        je public_65ff718
        public_65ff702 : nop
        mov al, byte ptr ss : [ebp+0x65]
        test al, al
        jne public_65ff718
        pop edi
        mov eax, 1
        pop esi
        mov byte ptr ss : [ebp+0x64], al
        pop ebp
        pop ebx
        ret 0xC
        public_65ff718 : nop
        xor eax, eax
        mov byte ptr ss : [ebp+0x64], al
        public_65ff71d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65ff550)
        ASM_EXPORT_ENTRY_FIRST(0x65ff57c, public_65ff57c)
        ASM_EXPORT_ENTRY(0x65ff583, public_65ff583)
        ASM_EXPORT_ENTRY(0x65ff58a, public_65ff58a)
        ASM_EXPORT_ENTRY(0x65ff590, public_65ff590)
        ASM_EXPORT_ENTRY(0x65ff59c, public_65ff59c)
        ASM_EXPORT_ENTRY(0x65ff5ed, public_65ff5ed)
        ASM_EXPORT_ENTRY_LAST(0x65ff631, public_65ff631)
    }
}

#undef public_65ff57c
#undef public_65ff583
#undef public_65ff58a
#undef public_65ff590
#undef public_65ff59c
#undef public_65ff5a1
#undef public_65ff5ed
#undef public_65ff602
#undef public_65ff622
#undef public_65ff631
#undef public_65ff645
#undef public_65ff658
#undef public_65ff68c
#undef public_65ff68e
#undef public_65ff6f2
#undef public_65ff702
#undef public_65ff718
#undef public_65ff71d

#pragma init_seg(compiler)
extern "C" void const* const public_65ff57c = __AsmFindLabelExport(&internal_65ff550, 0x65ff57c);
extern "C" void const* const public_65ff583 = __AsmFindLabelExport(&internal_65ff550, 0x65ff583);
extern "C" void const* const public_65ff58a = __AsmFindLabelExport(&internal_65ff550, 0x65ff58a);
extern "C" void const* const public_65ff590 = __AsmFindLabelExport(&internal_65ff550, 0x65ff590);
extern "C" void const* const public_65ff59c = __AsmFindLabelExport(&internal_65ff550, 0x65ff59c);
extern "C" void const* const public_65ff5ed = __AsmFindLabelExport(&internal_65ff550, 0x65ff5ed);
extern "C" void const* const public_65ff631 = __AsmFindLabelExport(&internal_65ff550, 0x65ff631);
