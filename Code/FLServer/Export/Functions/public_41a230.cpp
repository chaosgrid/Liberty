#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40de20);
CLANG_FORWARD_PROC_SYMBOL(public_418ac8);
CLANG_FORWARD_PROC_SYMBOL(public_419020);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a238 _public_41a238
#define public_41a243 _public_41a243
#define public_41a24b _public_41a24b

PROC_DECLARE(0x41a230, internal_41a230, public_41a230);
/* CHUNK of public_40dd70 */
extern "C" NAKED register_t __cdecl internal_41a230()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_40de20
        public_41a238 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x58
        jmp public_418ac8
        public_41a243 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_419020
        public_41a24b : nop
        mov eax, offset public_41f3ac
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a230)
        ASM_EXPORT_ENTRY_FIRST(0x41a238, public_41a238)
        ASM_EXPORT_ENTRY(0x41a243, public_41a243)
        ASM_EXPORT_ENTRY_LAST(0x41a24b, public_41a24b)
    }
}

#undef public_41a238
#undef public_41a243
#undef public_41a24b

#pragma init_seg(compiler)
extern "C" void const* const public_41a238 = __AsmFindLabelExport(&internal_41a230, 0x41a238);
extern "C" void const* const public_41a243 = __AsmFindLabelExport(&internal_41a230, 0x41a243);
extern "C" void const* const public_41a24b = __AsmFindLabelExport(&internal_41a230, 0x41a24b);
