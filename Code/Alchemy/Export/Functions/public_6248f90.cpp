#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6225910);
CLANG_FORWARD_PROC_SYMBOL(public_6226100);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248f9b _public_6248f9b
#define public_6248fa3 _public_6248fa3
#define public_6248fab _public_6248fab
#define public_6248fb3 _public_6248fb3
#define public_6248fbb _public_6248fbb

PROC_DECLARE(0x6248f90, internal_6248f90, public_6248f90);
/* CHUNK of public_6225ed0 */
extern "C" NAKED register_t __cdecl internal_6248f90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248f9b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620ce80
        public_6248fa3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6226100
        public_6248fab : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6225910
        public_6248fb3 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620b710
        public_6248fbb : nop
        mov eax, offset public_6251f04
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248f90)
        ASM_EXPORT_ENTRY_FIRST(0x6248f9b, public_6248f9b)
        ASM_EXPORT_ENTRY(0x6248fa3, public_6248fa3)
        ASM_EXPORT_ENTRY(0x6248fab, public_6248fab)
        ASM_EXPORT_ENTRY(0x6248fb3, public_6248fb3)
        ASM_EXPORT_ENTRY_LAST(0x6248fbb, public_6248fbb)
    }
}

#undef public_6248f9b
#undef public_6248fa3
#undef public_6248fab
#undef public_6248fb3
#undef public_6248fbb

#pragma init_seg(compiler)
extern "C" void const* const public_6248f9b = __AsmFindLabelExport(&internal_6248f90, 0x6248f9b);
extern "C" void const* const public_6248fa3 = __AsmFindLabelExport(&internal_6248f90, 0x6248fa3);
extern "C" void const* const public_6248fab = __AsmFindLabelExport(&internal_6248f90, 0x6248fab);
extern "C" void const* const public_6248fb3 = __AsmFindLabelExport(&internal_6248f90, 0x6248fb3);
extern "C" void const* const public_6248fbb = __AsmFindLabelExport(&internal_6248f90, 0x6248fbb);
