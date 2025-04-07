#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395268 _public_6395268
#define public_6395273 _public_6395273

PROC_DECLARE(0x6395260, internal_6395260, public_6395260);
/* CHUNK of public_62d8970 */
extern "C" NAKED register_t __cdecl internal_6395260()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0xC]
        jmp public_62881d0
        public_6395268 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_62881d0
        public_6395273 : nop
        mov eax, offset public_63aed0c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395260)
        ASM_EXPORT_ENTRY_FIRST(0x6395268, public_6395268)
        ASM_EXPORT_ENTRY_LAST(0x6395273, public_6395273)
    }
}

#undef public_6395268
#undef public_6395273

#pragma init_seg(compiler)
extern "C" void const* const public_6395268 = __AsmFindLabelExport(&internal_6395260, 0x6395268);
extern "C" void const* const public_6395273 = __AsmFindLabelExport(&internal_6395260, 0x6395273);
