#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700690);
CLANG_FORWARD_PROC_SYMBOL(public_67006b0);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);
CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66f2afc _public_66f2afc
#define public_66f2b03 _public_66f2b03
#define public_66f2b0a _public_66f2b0a
#define public_66f2b10 _public_66f2b10
#define public_66f2b1c _public_66f2b1c
#define public_66f2b21 _public_66f2b21
#define public_66f2b6d _public_66f2b6d
#define public_66f2b82 _public_66f2b82
#define public_66f2ba2 _public_66f2ba2
#define public_66f2bb1 _public_66f2bb1
#define public_66f2bc5 _public_66f2bc5
#define public_66f2bd8 _public_66f2bd8
#define public_66f2c0c _public_66f2c0c
#define public_66f2c0e _public_66f2c0e
#define public_66f2c72 _public_66f2c72
#define public_66f2c82 _public_66f2c82
#define public_66f2c98 _public_66f2c98
#define public_66f2c9d _public_66f2c9d

PROC_DECLARE(0x66f2ad0, internal_66f2ad0, public_66f2ad0);
extern "C" NAKED register_t __cdecl internal_66f2ad0()
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
        je public_66f2b21
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx]
        dec eax
        cmp eax, 9
        ja public_66f2b21
/*FIXUP jmp dword ptr ds : [eax*4+public_66f2ca4] @0x66f2af5*/
  JMPTB cmp eax, 0
  JMPTB je public_66f2afc
  JMPTB cmp eax, 1
  JMPTB je public_66f2b03
  JMPTB cmp eax, 2
  JMPTB je public_66f2b10
  JMPTB cmp eax, 3
  JMPTB je public_66f2b0a
  JMPTB cmp eax, 4
  JMPTB je public_66f2b6d
  JMPTB cmp eax, 5
  JMPTB je public_66f2bb1
  JMPTB cmp eax, 6
  JMPTB je public_66f2b6d
  JMPTB cmp eax, 7
  JMPTB je public_66f2afc
  JMPTB cmp eax, 8
  JMPTB je public_66f2b03
  JMPTB cmp eax, 9
  JMPTB je public_66f2b1c
  JMPTB int 3
        public_66f2afc : nop
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], edx
        jmp public_66f2b21
        public_66f2b03 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], eax
        jmp public_66f2b21
        public_66f2b0a : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [esi+0xC], ecx
        public_66f2b10 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+4], eax
        public_66f2b1c : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], ecx
        public_66f2b21 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+4]
        mov cl, byte ptr ds : [eax]
        cmp cl, 0x44
        mov dl, 0x63
        jne public_66f2bd8
        cmp byte ptr ds : [eax+1], dl
        jne public_66f2bd8
        mov bl, byte ptr ds : [eax+2]
        test bl, bl
        jne public_66f2bd8
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
        public_66f2b6d : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_66f2b82
        push eax
        call public_6700710
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_66f2b82 : nop
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        je public_66f2b21
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call public_6700810
        mov dword ptr ds : [esi], eax
        mov ebx, dword ptr ds : [ebx+4]
        add esp, 4
        mov ecx, eax
        public_66f2ba2 : nop
        mov al, byte ptr ds : [ebx]
        inc ebx
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_66f2ba2
        jmp public_66f2b21
        public_66f2bb1 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [esi], edx
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        je public_66f2bc5
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+4]
        public_66f2bc5 : nop
        test edi, edi
        je public_66f2b21
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        jmp public_66f2b21
        public_66f2bd8 : nop
        cmp cl, 0x4F
        jne public_66f2c9d
        cmp byte ptr ds : [eax+1], dl
        jne public_66f2c9d
        mov cl, byte ptr ds : [eax+2]
        test cl, cl
        jne public_66f2c9d
        fld dword ptr ss : [ebp+0x2C]
        fcomp dword ptr ds : [public_6701394]
        fnstsw ax
        test ah, 5
        jp public_66f2c0c
        mov eax, 1
        jmp public_66f2c0e
        public_66f2c0c : nop
        xor eax, eax
        public_66f2c0e : nop
        test al, al
        mov byte ptr ss : [ebp+0x64], al
        mov byte ptr ss : [ebp+0x65], 0
        jne public_66f2c9d
        push 0
        call public_6700690
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 4
        test ecx, ecx
        je public_66f2c9d
        mov eax, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+0x14]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xC8]
        test eax, eax
        jl public_66f2c9d
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_67006b0
        mov edx, dword ptr ds : [eax+0x38]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        cmp edx, 1
        sete cl
        cmp eax, 0xA
        mov byte ptr ss : [ebp+0x65], cl
        jl public_66f2c72
        cmp eax, 0xE
        jle public_66f2c82
        public_66f2c72 : nop
        push eax
        call public_67006b0
        mov cl, byte ptr ds : [eax+0x48]
        add esp, 4
        test cl, cl
        je public_66f2c98
        public_66f2c82 : nop
        mov al, byte ptr ss : [ebp+0x65]
        test al, al
        jne public_66f2c98
        pop edi
        mov eax, 1
        pop esi
        mov byte ptr ss : [ebp+0x64], al
        pop ebp
        pop ebx
        ret 0xC
        public_66f2c98 : nop
        xor eax, eax
        mov byte ptr ss : [ebp+0x64], al
        public_66f2c9d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66f2ad0)
        ASM_EXPORT_ENTRY_FIRST(0x66f2afc, public_66f2afc)
        ASM_EXPORT_ENTRY(0x66f2b03, public_66f2b03)
        ASM_EXPORT_ENTRY(0x66f2b0a, public_66f2b0a)
        ASM_EXPORT_ENTRY(0x66f2b10, public_66f2b10)
        ASM_EXPORT_ENTRY(0x66f2b1c, public_66f2b1c)
        ASM_EXPORT_ENTRY(0x66f2b6d, public_66f2b6d)
        ASM_EXPORT_ENTRY_LAST(0x66f2bb1, public_66f2bb1)
    }
}

#undef public_66f2afc
#undef public_66f2b03
#undef public_66f2b0a
#undef public_66f2b10
#undef public_66f2b1c
#undef public_66f2b21
#undef public_66f2b6d
#undef public_66f2b82
#undef public_66f2ba2
#undef public_66f2bb1
#undef public_66f2bc5
#undef public_66f2bd8
#undef public_66f2c0c
#undef public_66f2c0e
#undef public_66f2c72
#undef public_66f2c82
#undef public_66f2c98
#undef public_66f2c9d

#pragma init_seg(compiler)
extern "C" void const* const public_66f2afc = __AsmFindLabelExport(&internal_66f2ad0, 0x66f2afc);
extern "C" void const* const public_66f2b03 = __AsmFindLabelExport(&internal_66f2ad0, 0x66f2b03);
extern "C" void const* const public_66f2b0a = __AsmFindLabelExport(&internal_66f2ad0, 0x66f2b0a);
extern "C" void const* const public_66f2b10 = __AsmFindLabelExport(&internal_66f2ad0, 0x66f2b10);
extern "C" void const* const public_66f2b1c = __AsmFindLabelExport(&internal_66f2ad0, 0x66f2b1c);
extern "C" void const* const public_66f2b6d = __AsmFindLabelExport(&internal_66f2ad0, 0x66f2b6d);
extern "C" void const* const public_66f2bb1 = __AsmFindLabelExport(&internal_66f2ad0, 0x66f2bb1);
