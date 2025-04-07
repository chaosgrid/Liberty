#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0b60);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eb6c6c _public_6eb6c6c
#define public_6eb6c73 _public_6eb6c73
#define public_6eb6c7a _public_6eb6c7a
#define public_6eb6c80 _public_6eb6c80
#define public_6eb6c8c _public_6eb6c8c
#define public_6eb6c91 _public_6eb6c91
#define public_6eb6cda _public_6eb6cda
#define public_6eb6cef _public_6eb6cef
#define public_6eb6d10 _public_6eb6d10
#define public_6eb6d1f _public_6eb6d1f
#define public_6eb6d33 _public_6eb6d33
#define public_6eb6d46 _public_6eb6d46
#define public_6eb6d7a _public_6eb6d7a
#define public_6eb6d7c _public_6eb6d7c
#define public_6eb6ddc _public_6eb6ddc
#define public_6eb6dec _public_6eb6dec
#define public_6eb6dfa _public_6eb6dfa
#define public_6eb6dfc _public_6eb6dfc
#define public_6eb6dff _public_6eb6dff
#define public_6eb6e1c _public_6eb6e1c
#define public_6eb6e2e _public_6eb6e2e

PROC_DECLARE(0x6eb6c40, internal_6eb6c40, public_6eb6c40);
extern "C" NAKED register_t __cdecl internal_6eb6c40()
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
        je public_6eb6c91
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx]
        dec eax
        cmp eax, 9
        ja public_6eb6c91
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb6e38] @0x6eb6c65*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb6c6c
  JMPTB cmp eax, 1
  JMPTB je public_6eb6c73
  JMPTB cmp eax, 2
  JMPTB je public_6eb6c80
  JMPTB cmp eax, 3
  JMPTB je public_6eb6c7a
  JMPTB cmp eax, 4
  JMPTB je public_6eb6cda
  JMPTB cmp eax, 5
  JMPTB je public_6eb6d1f
  JMPTB cmp eax, 6
  JMPTB je public_6eb6cda
  JMPTB cmp eax, 7
  JMPTB je public_6eb6c6c
  JMPTB cmp eax, 8
  JMPTB je public_6eb6c73
  JMPTB cmp eax, 9
  JMPTB je public_6eb6c8c
  JMPTB int 3
        public_6eb6c6c : nop
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], edx
        jmp public_6eb6c91
        public_6eb6c73 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], eax
        jmp public_6eb6c91
        public_6eb6c7a : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [esi+0xC], ecx
        public_6eb6c80 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+4], eax
        public_6eb6c8c : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], ecx
        public_6eb6c91 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+4]
        mov cl, byte ptr ds : [eax]
        cmp cl, 0x44
        mov dl, 0x63
        jne public_6eb6d46
        cmp byte ptr ds : [eax+1], dl
        jne public_6eb6d46
        mov bl, byte ptr ds : [eax+2]
        test bl, bl
        jne public_6eb6d46
        lea eax, ss:[ebp+0x20]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x30]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        jmp public_6eb6dff
        public_6eb6cda : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6eb6cef
        push eax
        call public_6ed0c50
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_6eb6cef : nop
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        je public_6eb6c91
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call public_6ed0c5c
        mov dword ptr ds : [esi], eax
        mov ebx, dword ptr ds : [ebx+4]
        add esp, 4
        mov ecx, eax
        nop 
        public_6eb6d10 : nop
        mov al, byte ptr ds : [ebx]
        inc ebx
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_6eb6d10
        jmp public_6eb6c91
        public_6eb6d1f : nop
        mov edx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [esi], edx
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        je public_6eb6d33
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+4]
        public_6eb6d33 : nop
        test edi, edi
        je public_6eb6c91
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        jmp public_6eb6c91
        public_6eb6d46 : nop
        cmp cl, 0x4F
        jne public_6eb6dff
        cmp byte ptr ds : [eax+1], dl
        jne public_6eb6dff
        mov cl, byte ptr ds : [eax+2]
        test cl, cl
        jne public_6eb6dff
        fld dword ptr ss : [ebp+0x2C]
        fcomp dword ptr ds : [public_6ed1270]
        fnstsw ax
        test ah, 5
        jp public_6eb6d7a
        mov eax, 1
        jmp public_6eb6d7c
        public_6eb6d7a : nop
        xor eax, eax
        public_6eb6d7c : nop
        test al, al
        mov byte ptr ss : [ebp+0x64], al
        mov byte ptr ss : [ebp+0x65], 0
        jne public_6eb6dff
        push 0
        call public_6ed0b60
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [esp+0x20], eax
        mov ecx, dword ptr ds : [ecx+8]
        add esp, 4
        test ecx, ecx
        je public_6eb6dff
        mov eax, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+0x1C]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xC8]
        test eax, eax
        jl public_6eb6dff
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_6ed0ba0
        mov edx, dword ptr ds : [eax+0x38]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        cmp edx, 1
        sete cl
        cmp eax, 0xA
        mov byte ptr ss : [ebp+0x65], cl
        jl public_6eb6ddc
        cmp eax, 0xE
        jle public_6eb6dec
        public_6eb6ddc : nop
        push eax
        call public_6ed0ba0
        mov cl, byte ptr ds : [eax+0x48]
        add esp, 4
        test cl, cl
        je public_6eb6dfa
        public_6eb6dec : nop
        mov al, byte ptr ss : [ebp+0x65]
        test al, al
        jne public_6eb6dfa
        mov eax, 1
        jmp public_6eb6dfc
        public_6eb6dfa : nop
        xor eax, eax
        public_6eb6dfc : nop
        mov byte ptr ss : [ebp+0x64], al
        public_6eb6dff : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, 6
        jne public_6eb6e1c
        mov eax, dword ptr ss : [ebp+0x6C]
        xor edx, edx
        test eax, eax
        setg dl
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x6C], edx
        pop ebp
        pop ebx
        ret 0xC
        public_6eb6e1c : nop
        cmp eax, 7
        jne public_6eb6e2e
        mov ecx, dword ptr ss : [ebp+0x70]
        xor eax, eax
        test ecx, ecx
        setg al
        mov dword ptr ss : [ebp+0x70], eax
        public_6eb6e2e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb6c40)
        ASM_EXPORT_ENTRY_FIRST(0x6eb6c6c, public_6eb6c6c)
        ASM_EXPORT_ENTRY(0x6eb6c73, public_6eb6c73)
        ASM_EXPORT_ENTRY(0x6eb6c7a, public_6eb6c7a)
        ASM_EXPORT_ENTRY(0x6eb6c80, public_6eb6c80)
        ASM_EXPORT_ENTRY(0x6eb6c8c, public_6eb6c8c)
        ASM_EXPORT_ENTRY(0x6eb6cda, public_6eb6cda)
        ASM_EXPORT_ENTRY_LAST(0x6eb6d1f, public_6eb6d1f)
    }
}

#undef public_6eb6c6c
#undef public_6eb6c73
#undef public_6eb6c7a
#undef public_6eb6c80
#undef public_6eb6c8c
#undef public_6eb6c91
#undef public_6eb6cda
#undef public_6eb6cef
#undef public_6eb6d10
#undef public_6eb6d1f
#undef public_6eb6d33
#undef public_6eb6d46
#undef public_6eb6d7a
#undef public_6eb6d7c
#undef public_6eb6ddc
#undef public_6eb6dec
#undef public_6eb6dfa
#undef public_6eb6dfc
#undef public_6eb6dff
#undef public_6eb6e1c
#undef public_6eb6e2e

#pragma init_seg(compiler)
extern "C" void const* const public_6eb6c6c = __AsmFindLabelExport(&internal_6eb6c40, 0x6eb6c6c);
extern "C" void const* const public_6eb6c73 = __AsmFindLabelExport(&internal_6eb6c40, 0x6eb6c73);
extern "C" void const* const public_6eb6c7a = __AsmFindLabelExport(&internal_6eb6c40, 0x6eb6c7a);
extern "C" void const* const public_6eb6c80 = __AsmFindLabelExport(&internal_6eb6c40, 0x6eb6c80);
extern "C" void const* const public_6eb6c8c = __AsmFindLabelExport(&internal_6eb6c40, 0x6eb6c8c);
extern "C" void const* const public_6eb6cda = __AsmFindLabelExport(&internal_6eb6c40, 0x6eb6cda);
extern "C" void const* const public_6eb6d1f = __AsmFindLabelExport(&internal_6eb6c40, 0x6eb6d1f);
