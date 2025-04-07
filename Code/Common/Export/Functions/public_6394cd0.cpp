#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394cd8 _public_6394cd8
#define public_6394ce3 _public_6394ce3
#define public_6394cee _public_6394cee

PROC_DECLARE(0x6394cd0, internal_6394cd0, public_6394cd0);
/* CHUNK of public_62c8a30 */
extern "C" NAKED register_t __cdecl internal_6394cd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394cd8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_62881d0
        public_6394ce3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x68
        jmp public_62c3040
        public_6394cee : nop
        mov eax, offset public_63ae328
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394cd0)
        ASM_EXPORT_ENTRY_FIRST(0x6394cd8, public_6394cd8)
        ASM_EXPORT_ENTRY(0x6394ce3, public_6394ce3)
        ASM_EXPORT_ENTRY_LAST(0x6394cee, public_6394cee)
    }
}

#undef public_6394cd8
#undef public_6394ce3
#undef public_6394cee

#pragma init_seg(compiler)
extern "C" void const* const public_6394cd8 = __AsmFindLabelExport(&internal_6394cd0, 0x6394cd8);
extern "C" void const* const public_6394ce3 = __AsmFindLabelExport(&internal_6394cd0, 0x6394ce3);
extern "C" void const* const public_6394cee = __AsmFindLabelExport(&internal_6394cd0, 0x6394cee);
