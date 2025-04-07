#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fb3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);
CLANG_FORWARD_PROC_SYMBOL(public_6700810);
CLANG_FORWARD_PROC_SYMBOL(public_670092a);

#define public_66fbec9 _public_66fbec9
#define public_66fbed3 _public_66fbed3
#define public_66fbed9 _public_66fbed9
#define public_66fbee5 _public_66fbee5
#define public_66fbeec _public_66fbeec
#define public_66fbf01 _public_66fbf01
#define public_66fbf21 _public_66fbf21
#define public_66fbf2d _public_66fbf2d
#define public_66fbf41 _public_66fbf41
#define public_66fbf4d _public_66fbf4d
#define public_66fbf52 _public_66fbf52
#define public_66fbf8b _public_66fbf8b
#define public_66fbfa3 _public_66fbfa3
#define public_66fc030 _public_66fc030

PROC_DECLARE(0x66fbe90, internal_66fbe90, public_66fbe90);
extern "C" NAKED register_t __cdecl internal_66fbe90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx]
        push esi
        push edi
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], ebx
        call dword ptr ds : [eax+0x70]
        mov ebp, dword ptr ss : [esp+0x20]
        mov esi, eax
        test esi, esi
        je public_66fbf52
        mov eax, dword ptr ss : [ebp]
        dec eax
        cmp eax, 9
        ja public_66fbf52
/*FIXUP jmp dword ptr ds : [eax*4+public_66fc038] @0x66fbec2*/
  JMPTB cmp eax, 0
  JMPTB je public_66fbf4d
  JMPTB cmp eax, 1
  JMPTB je public_66fbec9
  JMPTB cmp eax, 2
  JMPTB je public_66fbed9
  JMPTB cmp eax, 3
  JMPTB je public_66fbed3
  JMPTB cmp eax, 4
  JMPTB je public_66fbeec
  JMPTB cmp eax, 5
  JMPTB je public_66fbf2d
  JMPTB cmp eax, 6
  JMPTB je public_66fbeec
  JMPTB cmp eax, 7
  JMPTB je public_66fbec9
  JMPTB cmp eax, 8
  JMPTB je public_66fbee5
  JMPTB cmp eax, 9
  JMPTB je public_66fbf4d
  JMPTB int 3
        public_66fbec9 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi], eax
        jmp public_66fbf52
        public_66fbed3 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [esi+0xC], ecx
        public_66fbed9 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+4], eax
        public_66fbee5 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi], ecx
        jmp public_66fbf52
        public_66fbeec : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_66fbf01
        push eax
        call public_6700710
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_66fbf01 : nop
        mov edi, dword ptr ss : [ebp+4]
        test edi, edi
        je public_66fbf52
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call public_6700810
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov edx, eax
        public_66fbf21 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_66fbf21
        jmp public_66fbf52
        public_66fbf2d : nop
        mov edx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_66fbf41
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_66fbf41 : nop
        test edi, edi
        je public_66fbf52
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+8]
        jmp public_66fbf52
        public_66fbf4d : nop
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi], edx
        public_66fbf52 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax+4]
        mov cl, byte ptr ds : [eax]
        cmp cl, 0x44
        mov dl, 0x63
        jne public_66fbf8b
        cmp byte ptr ds : [eax+1], dl
        jne public_66fbf8b
        cmp byte ptr ds : [eax+2], 0
        jne public_66fbf8b
        lea ecx, ds:[ebx+0x20]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        add ebx, 0x30
        mov dword ptr ds : [ebx], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], eax
        jmp public_66fbfa3
        public_66fbf8b : nop
        cmp cl, 0x4F
        jne public_66fbfa3
        cmp byte ptr ds : [eax+1], dl
        jne public_66fbfa3
        mov cl, byte ptr ds : [eax+2]
        test cl, cl
        jne public_66fbfa3
        mov ecx, ebx
        call public_66fb3e0
        public_66fbfa3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jne public_66fc030
        fld dword ptr ss : [ebp+4]
        fmul qword ptr ds : [public_6702810]
        call public_670092a
        fld dword ptr ss : [ebp+8]
        fmul qword ptr ds : [public_6702810]
        mov bl, al
        call public_670092a
        fld dword ptr ss : [ebp+0xC]
        fmul qword ptr ds : [public_6702810]
        mov byte ptr ss : [esp+0x18], al
        call public_670092a
        fld dword ptr ss : [ebp+0x10]
        fmul qword ptr ds : [public_6702810]
        movzx edi, byte ptr ss : [esp+0x18]
        movzx esi, bl
        xor ebx, ebx
        mov bl, al
        call public_670092a
        xor ecx, ecx
        mov ch, al
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x80], 0
        or ecx, esi
        shl ecx, 8
        and esi, 0xFFFFFFF8
        or ecx, edi
        shl esi, 8
        and edi, 0xFFFFFFF8
        shl ecx, 8
        or ecx, ebx
        or esi, edi
        shl esi, 5
        shr ebx, 3
        or esi, ebx
        mov dword ptr ds : [eax+0x78], ecx
        mov dword ptr ds : [eax+0x7C], esi
        public_66fc030 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x66fbe90)
        ASM_EXPORT_ENTRY_FIRST(0x66fbec9, public_66fbec9)
        ASM_EXPORT_ENTRY(0x66fbed3, public_66fbed3)
        ASM_EXPORT_ENTRY(0x66fbed9, public_66fbed9)
        ASM_EXPORT_ENTRY(0x66fbee5, public_66fbee5)
        ASM_EXPORT_ENTRY(0x66fbeec, public_66fbeec)
        ASM_EXPORT_ENTRY(0x66fbf2d, public_66fbf2d)
        ASM_EXPORT_ENTRY_LAST(0x66fbf4d, public_66fbf4d)
    }
}

#undef public_66fbec9
#undef public_66fbed3
#undef public_66fbed9
#undef public_66fbee5
#undef public_66fbeec
#undef public_66fbf01
#undef public_66fbf21
#undef public_66fbf2d
#undef public_66fbf41
#undef public_66fbf4d
#undef public_66fbf52
#undef public_66fbf8b
#undef public_66fbfa3
#undef public_66fc030

#pragma init_seg(compiler)
extern "C" void const* const public_66fbec9 = __AsmFindLabelExport(&internal_66fbe90, 0x66fbec9);
extern "C" void const* const public_66fbed3 = __AsmFindLabelExport(&internal_66fbe90, 0x66fbed3);
extern "C" void const* const public_66fbed9 = __AsmFindLabelExport(&internal_66fbe90, 0x66fbed9);
extern "C" void const* const public_66fbee5 = __AsmFindLabelExport(&internal_66fbe90, 0x66fbee5);
extern "C" void const* const public_66fbeec = __AsmFindLabelExport(&internal_66fbe90, 0x66fbeec);
extern "C" void const* const public_66fbf2d = __AsmFindLabelExport(&internal_66fbe90, 0x66fbf2d);
extern "C" void const* const public_66fbf4d = __AsmFindLabelExport(&internal_66fbe90, 0x66fbf4d);
