#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262090);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63924db _public_63924db
#define public_63924e6 _public_63924e6

PROC_DECLARE(0x63924d0, internal_63924d0, public_63924d0);
/* CHUNK of public_6264a40 */
extern "C" NAKED register_t __cdecl internal_63924d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x10
        jmp public_6262090
        public_63924db : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x24
        jmp public_62a68e0
        public_63924e6 : nop
        mov eax, offset public_63ab02c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63924d0)
        ASM_EXPORT_ENTRY_FIRST(0x63924db, public_63924db)
        ASM_EXPORT_ENTRY_LAST(0x63924e6, public_63924e6)
    }
}

#undef public_63924db
#undef public_63924e6

#pragma init_seg(compiler)
extern "C" void const* const public_63924db = __AsmFindLabelExport(&internal_63924d0, 0x63924db);
extern "C" void const* const public_63924e6 = __AsmFindLabelExport(&internal_63924d0, 0x63924e6);
