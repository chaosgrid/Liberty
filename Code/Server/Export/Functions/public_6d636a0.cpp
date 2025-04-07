#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1e70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d636ac _public_6d636ac
#define public_6d636b8 _public_6d636b8
#define public_6d636c3 _public_6d636c3

PROC_DECLARE(0x6d636a0, internal_6d636a0, public_6d636a0);
/* CHUNK of public_6d50b10 */
extern "C" NAKED register_t __cdecl internal_6d636a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp dword ptr ds : [public_6d64004]
        public_6d636ac : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp dword ptr ds : [public_6d64b68]
        public_6d636b8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6ce1e70
        public_6d636c3 : nop
        mov eax, offset public_6d75918
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d636a0)
        ASM_EXPORT_ENTRY_FIRST(0x6d636ac, public_6d636ac)
        ASM_EXPORT_ENTRY(0x6d636b8, public_6d636b8)
        ASM_EXPORT_ENTRY_LAST(0x6d636c3, public_6d636c3)
    }
}

#undef public_6d636ac
#undef public_6d636b8
#undef public_6d636c3

#pragma init_seg(compiler)
extern "C" void const* const public_6d636ac = __AsmFindLabelExport(&internal_6d636a0, 0x6d636ac);
extern "C" void const* const public_6d636b8 = __AsmFindLabelExport(&internal_6d636a0, 0x6d636b8);
extern "C" void const* const public_6d636c3 = __AsmFindLabelExport(&internal_6d636a0, 0x6d636c3);
