#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bd60);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bd70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d621e8 _public_6d621e8
#define public_6d621f3 _public_6d621f3
#define public_6d621fe _public_6d621fe

PROC_DECLARE(0x6d621e0, internal_6d621e0, public_6d621e0);
/* CHUNK of public_6d1bdd0 */
extern "C" NAKED register_t __cdecl internal_6d621e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6d1bbf0
        public_6d621e8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x2C
        jmp public_6d1bd60
        public_6d621f3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x3C
        jmp public_6d1bd70
        public_6d621fe : nop
        mov eax, offset public_6d73074
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d621e0)
        ASM_EXPORT_ENTRY_FIRST(0x6d621e8, public_6d621e8)
        ASM_EXPORT_ENTRY(0x6d621f3, public_6d621f3)
        ASM_EXPORT_ENTRY_LAST(0x6d621fe, public_6d621fe)
    }
}

#undef public_6d621e8
#undef public_6d621f3
#undef public_6d621fe

#pragma init_seg(compiler)
extern "C" void const* const public_6d621e8 = __AsmFindLabelExport(&internal_6d621e0, 0x6d621e8);
extern "C" void const* const public_6d621f3 = __AsmFindLabelExport(&internal_6d621e0, 0x6d621f3);
extern "C" void const* const public_6d621fe = __AsmFindLabelExport(&internal_6d621e0, 0x6d621fe);
