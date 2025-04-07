#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395428 _public_6395428
#define public_6395433 _public_6395433

PROC_DECLARE(0x6395420, internal_6395420, public_6395420);
/* CHUNK of public_62e9330 */
extern "C" NAKED register_t __cdecl internal_6395420()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6395428 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_62881d0
        public_6395433 : nop
        mov eax, offset public_63aeed8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395420)
        ASM_EXPORT_ENTRY_FIRST(0x6395428, public_6395428)
        ASM_EXPORT_ENTRY_LAST(0x6395433, public_6395433)
    }
}

#undef public_6395428
#undef public_6395433

#pragma init_seg(compiler)
extern "C" void const* const public_6395428 = __AsmFindLabelExport(&internal_6395420, 0x6395428);
extern "C" void const* const public_6395433 = __AsmFindLabelExport(&internal_6395420, 0x6395433);
