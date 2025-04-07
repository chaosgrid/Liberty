#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62c5c20);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394de8 _public_6394de8
#define public_6394df0 _public_6394df0
#define public_6394dfb _public_6394dfb
#define public_6394e06 _public_6394e06
#define public_6394e14 _public_6394e14
#define public_6394e22 _public_6394e22
#define public_6394e30 _public_6394e30

PROC_DECLARE(0x6394de0, internal_6394de0, public_6394de0);
/* CHUNK of public_62cb2b0 */
extern "C" NAKED register_t __cdecl internal_6394de0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394de8 : nop
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6394df0 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_62881d0
        public_6394dfb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34
        jmp public_62c3040
        public_6394e06 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x90
        jmp public_62c3040
        public_6394e14 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x150
        jmp public_62c3040
        public_6394e22 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C8
        jmp public_62c5c20
        public_6394e30 : nop
        mov eax, offset public_63ae464
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394de0)
        ASM_EXPORT_ENTRY_FIRST(0x6394de8, public_6394de8)
        ASM_EXPORT_ENTRY(0x6394df0, public_6394df0)
        ASM_EXPORT_ENTRY(0x6394dfb, public_6394dfb)
        ASM_EXPORT_ENTRY(0x6394e06, public_6394e06)
        ASM_EXPORT_ENTRY(0x6394e14, public_6394e14)
        ASM_EXPORT_ENTRY(0x6394e22, public_6394e22)
        ASM_EXPORT_ENTRY_LAST(0x6394e30, public_6394e30)
    }
}

#undef public_6394de8
#undef public_6394df0
#undef public_6394dfb
#undef public_6394e06
#undef public_6394e14
#undef public_6394e22
#undef public_6394e30

#pragma init_seg(compiler)
extern "C" void const* const public_6394de8 = __AsmFindLabelExport(&internal_6394de0, 0x6394de8);
extern "C" void const* const public_6394df0 = __AsmFindLabelExport(&internal_6394de0, 0x6394df0);
extern "C" void const* const public_6394dfb = __AsmFindLabelExport(&internal_6394de0, 0x6394dfb);
extern "C" void const* const public_6394e06 = __AsmFindLabelExport(&internal_6394de0, 0x6394e06);
extern "C" void const* const public_6394e14 = __AsmFindLabelExport(&internal_6394de0, 0x6394e14);
extern "C" void const* const public_6394e22 = __AsmFindLabelExport(&internal_6394de0, 0x6394e22);
extern "C" void const* const public_6394e30 = __AsmFindLabelExport(&internal_6394de0, 0x6394e30);
