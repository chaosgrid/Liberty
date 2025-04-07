#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700690);
CLANG_FORWARD_PROC_SYMBOL(public_67006b0);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);
CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66f4b0f _public_66f4b0f
#define public_66f4b24 _public_66f4b24
#define public_66f4b47 _public_66f4b47
#define public_66f4b4e _public_66f4b4e
#define public_66f4b55 _public_66f4b55
#define public_66f4b5b _public_66f4b5b
#define public_66f4b67 _public_66f4b67
#define public_66f4b6c _public_66f4b6c
#define public_66f4bb8 _public_66f4bb8
#define public_66f4bcd _public_66f4bcd
#define public_66f4bf0 _public_66f4bf0
#define public_66f4bff _public_66f4bff
#define public_66f4c13 _public_66f4c13
#define public_66f4c26 _public_66f4c26
#define public_66f4c5a _public_66f4c5a
#define public_66f4c5c _public_66f4c5c
#define public_66f4cbc _public_66f4cbc
#define public_66f4ccc _public_66f4ccc
#define public_66f4ce1 _public_66f4ce1
#define public_66f4ce6 _public_66f4ce6

PROC_DECLARE(0x66f4ad0, internal_66f4ad0, public_66f4ad0);
extern "C" NAKED register_t __cdecl internal_66f4ad0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        jne public_66f4b0f
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp+0x30], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp+0x34], edx
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [ebp+0x38], ecx
        mov dword ptr ss : [ebp+0x3C], 0x3F800000
        cmp dword ptr ds : [eax], 4
        jne public_66f4ce6
        mov edx, dword ptr ds : [eax+0x10]
        pop esi
        mov dword ptr ss : [ebp+0x68], edx
        pop ebp
        pop ebx
        ret 0xC
        public_66f4b0f : nop
        cmp eax, 0xA
        jne public_66f4b24
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        pop esi
        mov dword ptr ss : [ebp+0x6C], ecx
        pop ebp
        pop ebx
        ret 0xC
        public_66f4b24 : nop
        mov edx, dword ptr ss : [ebp]
        push edi
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x70]
        mov esi, eax
        test esi, esi
        je public_66f4b6c
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx]
        dec eax
        cmp eax, 9
        ja public_66f4b6c
/*FIXUP jmp dword ptr ds : [eax*4+public_66f4cec] @0x66f4b40*/
  JMPTB cmp eax, 0
  JMPTB je public_66f4b47
  JMPTB cmp eax, 1
  JMPTB je public_66f4b4e
  JMPTB cmp eax, 2
  JMPTB je public_66f4b5b
  JMPTB cmp eax, 3
  JMPTB je public_66f4b55
  JMPTB cmp eax, 4
  JMPTB je public_66f4bb8
  JMPTB cmp eax, 5
  JMPTB je public_66f4bff
  JMPTB cmp eax, 6
  JMPTB je public_66f4bb8
  JMPTB cmp eax, 7
  JMPTB je public_66f4b47
  JMPTB cmp eax, 8
  JMPTB je public_66f4b4e
  JMPTB cmp eax, 9
  JMPTB je public_66f4b67
  JMPTB int 3
        public_66f4b47 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], eax
        jmp public_66f4b6c
        public_66f4b4e : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], ecx
        jmp public_66f4b6c
        public_66f4b55 : nop
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [esi+0xC], edx
        public_66f4b5b : nop
        mov eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+8], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+4], ecx
        public_66f4b67 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], edx
        public_66f4b6c : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+4]
        mov cl, byte ptr ds : [eax]
        cmp cl, 0x44
        mov dl, 0x63
        pop edi
        jne public_66f4c26
        cmp byte ptr ds : [eax+1], dl
        jne public_66f4c26
        mov bl, byte ptr ds : [eax+2]
        test bl, bl
        jne public_66f4c26
        lea ecx, ss:[ebp+0x20]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        add ebp, 0x30
        mov dword ptr ss : [ebp], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+4], eax
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [ebp+8], edx
        pop esi
        mov dword ptr ss : [ebp+0xC], eax
        pop ebp
        pop ebx
        ret 0xC
        public_66f4bb8 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_66f4bcd
        push eax
        call public_6700710
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_66f4bcd : nop
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        je public_66f4b6c
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
        lea ecx, ds:[ecx]
        public_66f4bf0 : nop
        mov al, byte ptr ds : [ebx]
        inc ebx
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_66f4bf0
        jmp public_66f4b6c
        public_66f4bff : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [esi], eax
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        je public_66f4c13
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+4]
        public_66f4c13 : nop
        test edi, edi
        je public_66f4b6c
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+8]
        jmp public_66f4b6c
        public_66f4c26 : nop
        cmp cl, 0x4F
        jne public_66f4ce6
        cmp byte ptr ds : [eax+1], dl
        jne public_66f4ce6
        mov cl, byte ptr ds : [eax+2]
        test cl, cl
        jne public_66f4ce6
        fld dword ptr ss : [ebp+0x2C]
        fcomp dword ptr ds : [public_6701394]
        fnstsw ax
        test ah, 5
        jp public_66f4c5a
        mov eax, 1
        jmp public_66f4c5c
        public_66f4c5a : nop
        xor eax, eax
        public_66f4c5c : nop
        test al, al
        mov byte ptr ss : [ebp+0x64], al
        mov byte ptr ss : [ebp+0x65], 0
        jne public_66f4ce6
        push 0
        call public_6700690
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ds : [ecx+8]
        add esp, 4
        test ecx, ecx
        je public_66f4ce6
        mov eax, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+0x18]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xC8]
        test eax, eax
        jl public_66f4ce6
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call public_67006b0
        mov edx, dword ptr ds : [eax+0x38]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 4
        cmp edx, 1
        sete cl
        cmp eax, 0xA
        mov byte ptr ss : [ebp+0x65], cl
        jl public_66f4cbc
        cmp eax, 0xE
        jle public_66f4ccc
        public_66f4cbc : nop
        push eax
        call public_67006b0
        mov cl, byte ptr ds : [eax+0x48]
        add esp, 4
        test cl, cl
        je public_66f4ce1
        public_66f4ccc : nop
        mov al, byte ptr ss : [ebp+0x65]
        test al, al
        jne public_66f4ce1
        mov eax, 1
        pop esi
        mov byte ptr ss : [ebp+0x64], al
        pop ebp
        pop ebx
        ret 0xC
        public_66f4ce1 : nop
        xor eax, eax
        mov byte ptr ss : [ebp+0x64], al
        public_66f4ce6 : nop
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66f4ad0)
        ASM_EXPORT_ENTRY_FIRST(0x66f4b47, public_66f4b47)
        ASM_EXPORT_ENTRY(0x66f4b4e, public_66f4b4e)
        ASM_EXPORT_ENTRY(0x66f4b55, public_66f4b55)
        ASM_EXPORT_ENTRY(0x66f4b5b, public_66f4b5b)
        ASM_EXPORT_ENTRY(0x66f4b67, public_66f4b67)
        ASM_EXPORT_ENTRY(0x66f4bb8, public_66f4bb8)
        ASM_EXPORT_ENTRY_LAST(0x66f4bff, public_66f4bff)
    }
}

#undef public_66f4b0f
#undef public_66f4b24
#undef public_66f4b47
#undef public_66f4b4e
#undef public_66f4b55
#undef public_66f4b5b
#undef public_66f4b67
#undef public_66f4b6c
#undef public_66f4bb8
#undef public_66f4bcd
#undef public_66f4bf0
#undef public_66f4bff
#undef public_66f4c13
#undef public_66f4c26
#undef public_66f4c5a
#undef public_66f4c5c
#undef public_66f4cbc
#undef public_66f4ccc
#undef public_66f4ce1
#undef public_66f4ce6

#pragma init_seg(compiler)
extern "C" void const* const public_66f4b47 = __AsmFindLabelExport(&internal_66f4ad0, 0x66f4b47);
extern "C" void const* const public_66f4b4e = __AsmFindLabelExport(&internal_66f4ad0, 0x66f4b4e);
extern "C" void const* const public_66f4b55 = __AsmFindLabelExport(&internal_66f4ad0, 0x66f4b55);
extern "C" void const* const public_66f4b5b = __AsmFindLabelExport(&internal_66f4ad0, 0x66f4b5b);
extern "C" void const* const public_66f4b67 = __AsmFindLabelExport(&internal_66f4ad0, 0x66f4b67);
extern "C" void const* const public_66f4bb8 = __AsmFindLabelExport(&internal_66f4ad0, 0x66f4bb8);
extern "C" void const* const public_66f4bff = __AsmFindLabelExport(&internal_66f4ad0, 0x66f4bff);
