#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d050);
CLANG_FORWARD_PROC_SYMBOL(public_661d0d0);
CLANG_FORWARD_PROC_SYMBOL(public_661d460);
CLANG_FORWARD_PROC_SYMBOL(public_661d510);
CLANG_FORWARD_PROC_SYMBOL(public_6628266);

#define public_661d1cc _public_661d1cc
#define public_661d1d1 _public_661d1d1
#define public_661d1e9 _public_661d1e9
#define public_661d1f4 _public_661d1f4
#define public_661d235 _public_661d235
#define public_661d23e _public_661d23e
#define public_661d247 _public_661d247
#define public_661d24b _public_661d24b
#define public_661d323 _public_661d323
#define public_661d334 _public_661d334
#define public_661d349 _public_661d349
#define public_661d370 _public_661d370
#define public_661d38d _public_661d38d
#define public_661d3e2 _public_661d3e2
#define public_661d406 _public_661d406
#define public_661d42a _public_661d42a
#define public_661d42c _public_661d42c

PROC_DECLARE(0x661d160, internal_661d160, public_661d160);
extern "C" NAKED register_t __cdecl internal_661d160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x50
        push ebx
        mov ebx, dword ptr ss : [esp+0x5C]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, ebx
        call public_661d0d0
        mov ebp, eax
        call public_661d0d0
        mov edi, eax
        lea ecx, ss:[esp+0x44]
        push ebx
        push ecx
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x28]
        push ebx
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+4]
        fld dword ptr ds : [esi+0x18]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        and eax, 0x4100
        jne public_661d1cc
        fld dword ptr ds : [esi+0x1C]
        fmul dword ptr ds : [esi+0x14]
        sub esp, 8
        fmul dword ptr ds : [public_6629514]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6629048]
        add esp, 8
        call public_6628266
        jmp public_661d1d1
        public_661d1cc : nop
        mov eax, 0xFF
        public_661d1d1 : nop
        push eax
        call public_661d050
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        fstp dword ptr ss : [esp+0x68]
        test eax, eax
        jne public_661d1e9
        mov ebx, ebp
        jmp public_661d1f4
        public_661d1e9 : nop
        mov ebx, dword ptr ds : [edi+4]
        neg ebx
        sbb ebx, ebx
        not ebx
        and ebx, edi
        public_661d1f4 : nop
        test ebx, ebx
        je public_661d349
        fld dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edi, dword ptr ss : [esp+0x64]
        sub esp, 8
        lea eax, ss:[esp+0x30]
        mov edx, dword ptr ds : [ecx]
        fstp qword ptr ss : [esp]
        push eax
        lea eax, ss:[esp+0x50]
        push eax
        push edi
        call dword ptr ds : [edx+0xC]
        test byte ptr ds : [esi+0x20], 2
        je public_661d42c
        mov ecx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [ecx+0x20]
        test al, 8
        je public_661d235
        fld dword ptr ds : [edi]
        jmp public_661d24b
        public_661d235 : nop
        test al, 0x10
        je public_661d23e
        fld dword ptr ds : [edi+4]
        jmp public_661d24b
        public_661d23e : nop
        test al, 0x20
        je public_661d247
        fld dword ptr ds : [edi+8]
        jmp public_661d24b
        public_661d247 : nop
        fld dword ptr ss : [esp+0x64]
        public_661d24b : nop
        fld dword ptr ds : [esi+0x3C]
        fmul dword ptr ds : [public_6629510]
        fld dword ptr ds : [esi+0x40]
        fmul dword ptr ds : [public_6629510]
        fld dword ptr ds : [esi+0x44]
        fmul dword ptr ds : [public_6629510]
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x64], edx
        mov ecx, edi
        fstp dword ptr ss : [esp+0x18]
        fxch 
        fmul dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x64]
        fld dword ptr ds : [esi+0x14]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x64], eax
        fstp dword ptr ss : [esp+0x10]
        fxch st(2)
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fxch 
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+0x30]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+0x34]
        fstp dword ptr ss : [esp+0x14]
        fxch 
        fadd dword ptr ds : [esi+0x38]
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x24]
        fxch 
        fadd dword ptr ds : [esi+0x24]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [eax+0x20]
        test al, 8
        je public_661d323
        fstp dword ptr ds : [edi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
        public_661d323 : nop
        test al, 0x10
        je public_661d334
        fstp dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
        public_661d334 : nop
        test al, 0x20
        je public_661d42a
        fstp dword ptr ds : [edi+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
        public_661d349 : nop
        cmp dword ptr ds : [edi+4], 2
        jne public_661d42c
        cmp eax, 2
        jne public_661d42c
        mov eax, dword ptr ds : [edi+0x14]
        dec eax
        cmp eax, 6
        ja public_661d42c
/*FIXUP jmp dword ptr ds : [eax*4+public_661d438] @0x661d369*/
  JMPTB cmp eax, 0
  JMPTB je public_661d370
  JMPTB cmp eax, 1
  JMPTB je public_661d42c
  JMPTB cmp eax, 2
  JMPTB je public_661d38d
  JMPTB cmp eax, 3
  JMPTB je public_661d3e2
  JMPTB cmp eax, 4
  JMPTB je public_661d42c
  JMPTB cmp eax, 5
  JMPTB je public_661d42c
  JMPTB cmp eax, 6
  JMPTB je public_661d406
  JMPTB int 3
        public_661d370 : nop
        fld dword ptr ss : [ebp+0x18]
        fsub dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [edi+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        fstp dword ptr ds : [ecx]
        add esp, 0x50
        ret 8
        public_661d38d : nop
        fld dword ptr ss : [ebp+0x18]
        fsub dword ptr ds : [edi+0x18]
        mov edx, dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [edi+0x18]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [ebp+0x1C]
        fsub dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [edi+0x1C]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [ebp+0x20]
        fsub dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [edi+0x20]
        mov dword ptr ds : [edx], eax
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+4], ecx
        pop ebx
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+8], eax
        add esp, 0x50
        ret 8
        public_661d3e2 : nop
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x64]
        add ebp, 0x18
        push ecx
        add edi, 0x18
        push ebp
        push edi
        push edx
        call public_661d510
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
        public_661d406 : nop
        mov eax, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x64]
        add ebp, 0x18
        push eax
        add edi, 0x18
        push ebp
        push edi
        push ecx
        call public_661d460
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
        public_661d42a : nop
        fstp st(0)
        public_661d42c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x661d160)
        ASM_EXPORT_ENTRY_FIRST(0x661d370, public_661d370)
        ASM_EXPORT_ENTRY(0x661d38d, public_661d38d)
        ASM_EXPORT_ENTRY(0x661d3e2, public_661d3e2)
        ASM_EXPORT_ENTRY(0x661d406, public_661d406)
        ASM_EXPORT_ENTRY_LAST(0x661d42c, public_661d42c)
    }
}

#undef public_661d1cc
#undef public_661d1d1
#undef public_661d1e9
#undef public_661d1f4
#undef public_661d235
#undef public_661d23e
#undef public_661d247
#undef public_661d24b
#undef public_661d323
#undef public_661d334
#undef public_661d349
#undef public_661d370
#undef public_661d38d
#undef public_661d3e2
#undef public_661d406
#undef public_661d42a
#undef public_661d42c

#pragma init_seg(compiler)
extern "C" void const* const public_661d370 = __AsmFindLabelExport(&internal_661d160, 0x661d370);
extern "C" void const* const public_661d38d = __AsmFindLabelExport(&internal_661d160, 0x661d38d);
extern "C" void const* const public_661d3e2 = __AsmFindLabelExport(&internal_661d160, 0x661d3e2);
extern "C" void const* const public_661d406 = __AsmFindLabelExport(&internal_661d160, 0x661d406);
extern "C" void const* const public_661d42c = __AsmFindLabelExport(&internal_661d160, 0x661d42c);
