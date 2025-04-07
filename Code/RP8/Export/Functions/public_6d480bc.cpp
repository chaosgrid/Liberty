#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d480bc);
CLANG_FORWARD_PROC_SYMBOL(public_6d57c3a);
CLANG_FORWARD_PROC_SYMBOL(public_6d57d32);

#define public_6d480ed _public_6d480ed
#define public_6d480f9 _public_6d480f9
#define public_6d48100 _public_6d48100
#define public_6d4813d _public_6d4813d
#define public_6d48159 _public_6d48159
#define public_6d4815f _public_6d4815f
#define public_6d481a6 _public_6d481a6
#define public_6d481c1 _public_6d481c1
#define public_6d481e9 _public_6d481e9
#define public_6d481ef _public_6d481ef
#define public_6d48221 _public_6d48221
#define public_6d48227 _public_6d48227
#define public_6d48254 _public_6d48254
#define public_6d48281 _public_6d48281
#define public_6d482aa _public_6d482aa
#define public_6d482df _public_6d482df
#define public_6d482e9 _public_6d482e9
#define public_6d482ec _public_6d482ec
#define public_6d482f6 _public_6d482f6
#define public_6d482f8 _public_6d482f8
#define public_6d482f9 _public_6d482f9
#define public_6d482fe _public_6d482fe
#define public_6d48302 _public_6d48302
#define public_6d4830b _public_6d4830b
#define public_6d48334 _public_6d48334
#define public_6d4835d _public_6d4835d
#define public_6d48386 _public_6d48386
#define public_6d483bb _public_6d483bb
#define public_6d483d3 _public_6d483d3
#define public_6d483dc _public_6d483dc
#define public_6d483e4 _public_6d483e4

PROC_DECLARE(0x6d480bc, internal_6d480bc, public_6d480bc);
extern "C" NAKED register_t __cdecl internal_6d480bc()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        cmp esi, ebx
        push edi
        je public_6d482f6
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, ebx
        je public_6d482f6
        cmp dword ptr ds : [esi], ebx
        je public_6d482f6
        cmp dword ptr ss : [esp+0x18], 4
        push 0xFFFFFFFB
        pop edi
        jne public_6d480ed
        mov ebx, edi
        public_6d480ed : nop
        push 0xD
        mov dword ptr ss : [esp+0x1C], ebx
        pop ebp
        jmp public_6d482ec
/*FIXUP public_6d480f9 : nop
        jmp dword ptr ds : [eax*4+public_6d483eb] @0x6d480f9*/
  JMPTB public_6d480f9 : nop
        cmp eax, 0
  JMPTB je public_6d48100
  JMPTB cmp eax, 1
  JMPTB je public_6d4815f
  JMPTB cmp eax, 2
  JMPTB je public_6d4830b
  JMPTB cmp eax, 3
  JMPTB je public_6d48334
  JMPTB cmp eax, 4
  JMPTB je public_6d4835d
  JMPTB cmp eax, 5
  JMPTB je public_6d48386
  JMPTB cmp eax, 6
  JMPTB je public_6d483bb
  JMPTB cmp eax, 7
  JMPTB je public_6d481c1
  JMPTB cmp eax, 8
  JMPTB je public_6d48227
  JMPTB cmp eax, 9
  JMPTB je public_6d48254
  JMPTB cmp eax, 0xA
  JMPTB je public_6d48281
  JMPTB cmp eax, 0xB
  JMPTB je public_6d482aa
  JMPTB cmp eax, 0xC
  JMPTB je public_6d483dc
  JMPTB cmp eax, 0xD
  JMPTB je public_6d483e4
  JMPTB int 3
        public_6d48100 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d482fe
        mov ecx, dword ptr ds : [esi+0x1C]
        dec eax
        inc dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi]
        movzx eax, byte ptr ds : [eax]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax+4]
        and cl, 0xF
        inc dword ptr ds : [esi]
        cmp cl, 8
        mov edi, ebx
        je public_6d4813d
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [esi+0x18], offset public_6d61554
        jmp public_6d482df
        public_6d4813d : nop
        mov ecx, dword ptr ds : [eax+4]
        shr ecx, 4
        add ecx, 8
        cmp ecx, dword ptr ds : [eax+0x10]
        jbe public_6d48159
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [esi+0x18], offset public_6d61540
        jmp public_6d482df
        public_6d48159 : nop
        mov dword ptr ds : [eax], 1
        public_6d4815f : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d482fe
        mov ecx, dword ptr ds : [esi+0x1C]
        dec eax
        inc dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi]
        mov edi, ebx
        movzx ebx, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [ecx+4]
        shl eax, 8
        push 0x1F
        add eax, ebx
        xor edx, edx
        pop ebp
        div ebp
        test edx, edx
        je public_6d481a6
        mov ebx, dword ptr ss : [esp+0x18]
        push 0xD
        pop ebp
        mov dword ptr ds : [ecx], ebp
        mov dword ptr ds : [esi+0x18], offset public_6d61528
        jmp public_6d482df
        public_6d481a6 : nop
        test bl, 0x20
        mov ebx, dword ptr ss : [esp+0x18]
        jne public_6d48302
        push 0xD
        mov dword ptr ds : [ecx], 7
        pop ebp
        jmp public_6d482e9
        public_6d481c1 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        push edi
        push esi
        push dword ptr ds : [eax+0x14]
        call public_6d57d32
        mov edi, eax
        add esp, 0xC
        cmp edi, 0xFFFFFFFD
        jne public_6d481e9
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax], ebp
        mov eax, dword ptr ds : [esi+0x1C]
        and dword ptr ds : [eax+4], 0
        jmp public_6d482e9
        public_6d481e9 : nop
        test edi, edi
        jne public_6d481ef
        mov edi, ebx
        public_6d481ef : nop
        cmp edi, 1
        jne public_6d482fe
        mov eax, dword ptr ds : [esi+0x1C]
        lea ecx, ds:[eax+4]
        push ecx
        push esi
        push dword ptr ds : [eax+0x14]
        mov edi, ebx
        call public_6d57c3a
        mov eax, dword ptr ds : [esi+0x1C]
        add esp, 0xC
        cmp dword ptr ds : [eax+0xC], 0
        je public_6d48221
        mov dword ptr ds : [eax], 0xC
        jmp public_6d482e9
        public_6d48221 : nop
        mov dword ptr ds : [eax], 8
        public_6d48227 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d482fe
        mov ecx, dword ptr ds : [esi+0x1C]
        dec eax
        inc dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi]
        movzx eax, byte ptr ds : [eax]
        shl eax, 0x18
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [esi+0x1C]
        inc dword ptr ds : [esi]
        mov edi, ebx
        mov dword ptr ds : [eax], 9
        public_6d48254 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d482fe
        mov ecx, dword ptr ds : [esi]
        dec eax
        inc dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], eax
        movzx ecx, byte ptr ds : [ecx]
        mov eax, dword ptr ds : [esi+0x1C]
        shl ecx, 0x10
        add dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+0x1C]
        inc dword ptr ds : [esi]
        mov edi, ebx
        mov dword ptr ds : [eax], 0xA
        public_6d48281 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d482fe
        mov ecx, dword ptr ds : [esi]
        dec eax
        inc dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], eax
        movzx ecx, byte ptr ds : [ecx]
        mov eax, dword ptr ds : [esi+0x1C]
        shl ecx, 8
        add dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+0x1C]
        inc dword ptr ds : [esi]
        mov edi, ebx
        mov dword ptr ds : [eax], 0xB
        public_6d482aa : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d482fe
        mov ecx, dword ptr ds : [esi]
        dec eax
        inc dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], eax
        movzx ecx, byte ptr ds : [ecx]
        mov eax, dword ptr ds : [esi+0x1C]
        add dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+0x1C]
        inc dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [eax+8]
        mov edi, ebx
        je public_6d483d3
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [esi+0x18], offset public_6d61510
        public_6d482df : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+4], 5
        public_6d482e9 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        public_6d482ec : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        jbe public_6d480f9
        public_6d482f6 : nop
        push 0xFFFFFFFE
        public_6d482f8 : nop
        pop eax
        public_6d482f9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6d482fe : nop
        mov eax, edi
        jmp public_6d482f9
        public_6d48302 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax], 2
        public_6d4830b : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d482fe
        mov ecx, dword ptr ds : [esi+0x1C]
        dec eax
        inc dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi]
        movzx eax, byte ptr ds : [eax]
        shl eax, 0x18
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [esi+0x1C]
        inc dword ptr ds : [esi]
        mov edi, ebx
        mov dword ptr ds : [eax], 3
        public_6d48334 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d482fe
        mov ecx, dword ptr ds : [esi]
        dec eax
        inc dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], eax
        movzx ecx, byte ptr ds : [ecx]
        mov eax, dword ptr ds : [esi+0x1C]
        shl ecx, 0x10
        add dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+0x1C]
        inc dword ptr ds : [esi]
        mov edi, ebx
        mov dword ptr ds : [eax], 4
        public_6d4835d : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d482fe
        mov ecx, dword ptr ds : [esi]
        dec eax
        inc dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], eax
        movzx ecx, byte ptr ds : [ecx]
        mov eax, dword ptr ds : [esi+0x1C]
        shl ecx, 8
        add dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+0x1C]
        inc dword ptr ds : [esi]
        mov edi, ebx
        mov dword ptr ds : [eax], 5
        public_6d48386 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d482fe
        mov ecx, dword ptr ds : [esi]
        dec eax
        inc dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], eax
        movzx ecx, byte ptr ds : [ecx]
        mov eax, dword ptr ds : [esi+0x1C]
        add dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+0x1C]
        inc dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0x30], ecx
        mov dword ptr ds : [eax], 6
        push 2
        jmp public_6d482f8
        public_6d483bb : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax], ebp
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x18], offset public_6d61500
        and dword ptr ds : [eax+4], 0
        jmp public_6d482f6
        public_6d483d3 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax], 0xC
        public_6d483dc : nop
        xor eax, eax
        inc eax
        jmp public_6d482f9
        public_6d483e4 : nop
        push 0xFFFFFFFD
        jmp public_6d482f8
        UNREACHABLE_TRAP(0x6d480bc)
        ASM_EXPORT_ENTRY_FIRST(0x6d48100, public_6d48100)
        ASM_EXPORT_ENTRY(0x6d4815f, public_6d4815f)
        ASM_EXPORT_ENTRY(0x6d481c1, public_6d481c1)
        ASM_EXPORT_ENTRY(0x6d48227, public_6d48227)
        ASM_EXPORT_ENTRY(0x6d48254, public_6d48254)
        ASM_EXPORT_ENTRY(0x6d48281, public_6d48281)
        ASM_EXPORT_ENTRY(0x6d482aa, public_6d482aa)
        ASM_EXPORT_ENTRY(0x6d4830b, public_6d4830b)
        ASM_EXPORT_ENTRY(0x6d48334, public_6d48334)
        ASM_EXPORT_ENTRY(0x6d4835d, public_6d4835d)
        ASM_EXPORT_ENTRY(0x6d48386, public_6d48386)
        ASM_EXPORT_ENTRY(0x6d483bb, public_6d483bb)
        ASM_EXPORT_ENTRY(0x6d483dc, public_6d483dc)
        ASM_EXPORT_ENTRY_LAST(0x6d483e4, public_6d483e4)
    }
}

#undef public_6d480ed
#undef public_6d480f9
#undef public_6d48100
#undef public_6d4813d
#undef public_6d48159
#undef public_6d4815f
#undef public_6d481a6
#undef public_6d481c1
#undef public_6d481e9
#undef public_6d481ef
#undef public_6d48221
#undef public_6d48227
#undef public_6d48254
#undef public_6d48281
#undef public_6d482aa
#undef public_6d482df
#undef public_6d482e9
#undef public_6d482ec
#undef public_6d482f6
#undef public_6d482f8
#undef public_6d482f9
#undef public_6d482fe
#undef public_6d48302
#undef public_6d4830b
#undef public_6d48334
#undef public_6d4835d
#undef public_6d48386
#undef public_6d483bb
#undef public_6d483d3
#undef public_6d483dc
#undef public_6d483e4

#pragma init_seg(compiler)
extern "C" void const* const public_6d48100 = __AsmFindLabelExport(&internal_6d480bc, 0x6d48100);
extern "C" void const* const public_6d4815f = __AsmFindLabelExport(&internal_6d480bc, 0x6d4815f);
extern "C" void const* const public_6d481c1 = __AsmFindLabelExport(&internal_6d480bc, 0x6d481c1);
extern "C" void const* const public_6d48227 = __AsmFindLabelExport(&internal_6d480bc, 0x6d48227);
extern "C" void const* const public_6d48254 = __AsmFindLabelExport(&internal_6d480bc, 0x6d48254);
extern "C" void const* const public_6d48281 = __AsmFindLabelExport(&internal_6d480bc, 0x6d48281);
extern "C" void const* const public_6d482aa = __AsmFindLabelExport(&internal_6d480bc, 0x6d482aa);
extern "C" void const* const public_6d4830b = __AsmFindLabelExport(&internal_6d480bc, 0x6d4830b);
extern "C" void const* const public_6d48334 = __AsmFindLabelExport(&internal_6d480bc, 0x6d48334);
extern "C" void const* const public_6d4835d = __AsmFindLabelExport(&internal_6d480bc, 0x6d4835d);
extern "C" void const* const public_6d48386 = __AsmFindLabelExport(&internal_6d480bc, 0x6d48386);
extern "C" void const* const public_6d483bb = __AsmFindLabelExport(&internal_6d480bc, 0x6d483bb);
extern "C" void const* const public_6d483dc = __AsmFindLabelExport(&internal_6d480bc, 0x6d483dc);
extern "C" void const* const public_6d483e4 = __AsmFindLabelExport(&internal_6d480bc, 0x6d483e4);
