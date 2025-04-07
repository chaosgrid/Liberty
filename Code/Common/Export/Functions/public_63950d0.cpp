#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_62d4c90);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63950db _public_63950db
#define public_63950e9 _public_63950e9

PROC_DECLARE(0x63950d0, internal_63950d0, public_63950d0);
/* CHUNK of public_62d2530 */
extern "C" NAKED register_t __cdecl internal_63950d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp public_6269110
        public_63950db : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xDC
        jmp public_62d4c90
        public_63950e9 : nop
        mov eax, offset public_63aeaf8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63950d0)
        ASM_EXPORT_ENTRY_FIRST(0x63950db, public_63950db)
        ASM_EXPORT_ENTRY_LAST(0x63950e9, public_63950e9)
    }
}

#undef public_63950db
#undef public_63950e9

#pragma init_seg(compiler)
extern "C" void const* const public_63950db = __AsmFindLabelExport(&internal_63950d0, 0x63950db);
extern "C" void const* const public_63950e9 = __AsmFindLabelExport(&internal_63950d0, 0x63950e9);
