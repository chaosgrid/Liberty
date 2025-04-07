#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62c5c20);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394be8 _public_6394be8
#define public_6394bf3 _public_6394bf3
#define public_6394c01 _public_6394c01
#define public_6394c0f _public_6394c0f
#define public_6394c1d _public_6394c1d
#define public_6394c25 _public_6394c25
#define public_6394c33 _public_6394c33

PROC_DECLARE(0x6394be0, internal_6394be0, public_6394be0);
/* CHUNK of public_62c7790 */
extern "C" NAKED register_t __cdecl internal_6394be0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394be8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_62c5c20
        public_6394bf3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x110
        jmp public_62c5c20
        public_6394c01 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1AC
        jmp public_62c3040
        public_6394c0f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1CC
        jmp public_62c3040
        public_6394c1d : nop
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6394c25 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2A0
        jmp public_62881d0
        public_6394c33 : nop
        mov eax, offset public_63ae26c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394be0)
        ASM_EXPORT_ENTRY_FIRST(0x6394be8, public_6394be8)
        ASM_EXPORT_ENTRY(0x6394bf3, public_6394bf3)
        ASM_EXPORT_ENTRY(0x6394c01, public_6394c01)
        ASM_EXPORT_ENTRY(0x6394c0f, public_6394c0f)
        ASM_EXPORT_ENTRY(0x6394c1d, public_6394c1d)
        ASM_EXPORT_ENTRY(0x6394c25, public_6394c25)
        ASM_EXPORT_ENTRY_LAST(0x6394c33, public_6394c33)
    }
}

#undef public_6394be8
#undef public_6394bf3
#undef public_6394c01
#undef public_6394c0f
#undef public_6394c1d
#undef public_6394c25
#undef public_6394c33

#pragma init_seg(compiler)
extern "C" void const* const public_6394be8 = __AsmFindLabelExport(&internal_6394be0, 0x6394be8);
extern "C" void const* const public_6394bf3 = __AsmFindLabelExport(&internal_6394be0, 0x6394bf3);
extern "C" void const* const public_6394c01 = __AsmFindLabelExport(&internal_6394be0, 0x6394c01);
extern "C" void const* const public_6394c0f = __AsmFindLabelExport(&internal_6394be0, 0x6394c0f);
extern "C" void const* const public_6394c1d = __AsmFindLabelExport(&internal_6394be0, 0x6394c1d);
extern "C" void const* const public_6394c25 = __AsmFindLabelExport(&internal_6394be0, 0x6394c25);
extern "C" void const* const public_6394c33 = __AsmFindLabelExport(&internal_6394be0, 0x6394c33);
