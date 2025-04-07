#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6333110);
CLANG_FORWARD_PROC_SYMBOL(public_6333220);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63975c8 _public_63975c8
#define public_63975d0 _public_63975d0
#define public_63975db _public_63975db

PROC_DECLARE(0x63975c0, internal_63975c0, public_63975c0);
/* CHUNK of public_6333530 */
extern "C" NAKED register_t __cdecl internal_63975c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6333220
        public_63975c8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6333110
        public_63975d0 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C
        jmp public_62a68e0
        public_63975db : nop
        mov eax, offset public_63b17a8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63975c0)
        ASM_EXPORT_ENTRY_FIRST(0x63975c8, public_63975c8)
        ASM_EXPORT_ENTRY(0x63975d0, public_63975d0)
        ASM_EXPORT_ENTRY_LAST(0x63975db, public_63975db)
    }
}

#undef public_63975c8
#undef public_63975d0
#undef public_63975db

#pragma init_seg(compiler)
extern "C" void const* const public_63975c8 = __AsmFindLabelExport(&internal_63975c0, 0x63975c8);
extern "C" void const* const public_63975d0 = __AsmFindLabelExport(&internal_63975c0, 0x63975d0);
extern "C" void const* const public_63975db = __AsmFindLabelExport(&internal_63975c0, 0x63975db);
