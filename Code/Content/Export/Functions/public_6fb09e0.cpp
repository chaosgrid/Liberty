#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9f800);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb09e9 _public_6fb09e9
#define public_6fb09f4 _public_6fb09f4

PROC_DECLARE(0x6fb09e0, internal_6fb09e0, public_6fb09e0);
/* CHUNK of public_6f84d70 */
extern "C" NAKED register_t __cdecl internal_6fb09e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_6fb325c]
        public_6fb09e9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_6f9f800
        public_6fb09f4 : nop
        mov eax, offset public_6fc5cf8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb09e0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb09e9, public_6fb09e9)
        ASM_EXPORT_ENTRY_LAST(0x6fb09f4, public_6fb09f4)
    }
}

#undef public_6fb09e9
#undef public_6fb09f4

#pragma init_seg(compiler)
extern "C" void const* const public_6fb09e9 = __AsmFindLabelExport(&internal_6fb09e0, 0x6fb09e9);
extern "C" void const* const public_6fb09f4 = __AsmFindLabelExport(&internal_6fb09e0, 0x6fb09f4);
