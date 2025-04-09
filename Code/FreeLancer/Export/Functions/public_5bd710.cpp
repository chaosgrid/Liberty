#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c60a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd718 _public_5bd718
#define public_5bd724 _public_5bd724

PROC_DECLARE(0x5bd710, internal_5bd710, public_5bd710);
/* CHUNK of public_4c6010 */
extern "C" NAKED register_t __cdecl internal_5bd710()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4c60a0
        public_5bd718 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp dword ptr ds : [public_5c6098]
        public_5bd724 : nop
        mov eax, offset public_5f7b34
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd710)
        ASM_EXPORT_ENTRY_FIRST(0x5bd718, public_5bd718)
        ASM_EXPORT_ENTRY_LAST(0x5bd724, public_5bd724)
    }
}

#undef public_5bd718
#undef public_5bd724

#pragma init_seg(compiler)
extern "C" void const* const public_5bd718 = __AsmFindLabelExport(&internal_5bd710, 0x5bd718);
extern "C" void const* const public_5bd724 = __AsmFindLabelExport(&internal_5bd710, 0x5bd724);
