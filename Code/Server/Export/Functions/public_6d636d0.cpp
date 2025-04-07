#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1e70);
CLANG_FORWARD_PROC_SYMBOL(public_6d50d70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d636dc _public_6d636dc
#define public_6d636e8 _public_6d636e8
#define public_6d636f3 _public_6d636f3
#define public_6d636fe _public_6d636fe

PROC_DECLARE(0x6d636d0, internal_6d636d0, public_6d636d0);
/* CHUNK of public_6d50c30 */
extern "C" NAKED register_t __cdecl internal_6d636d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x10
        jmp dword ptr ds : [public_6d64004]
        public_6d636dc : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x20
        jmp dword ptr ds : [public_6d64b68]
        public_6d636e8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x30
        jmp public_6ce1e70
        public_6d636f3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x44
        jmp public_6d50d70
        public_6d636fe : nop
        mov eax, offset public_6d75954
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d636d0)
        ASM_EXPORT_ENTRY_FIRST(0x6d636dc, public_6d636dc)
        ASM_EXPORT_ENTRY(0x6d636e8, public_6d636e8)
        ASM_EXPORT_ENTRY(0x6d636f3, public_6d636f3)
        ASM_EXPORT_ENTRY_LAST(0x6d636fe, public_6d636fe)
    }
}

#undef public_6d636dc
#undef public_6d636e8
#undef public_6d636f3
#undef public_6d636fe

#pragma init_seg(compiler)
extern "C" void const* const public_6d636dc = __AsmFindLabelExport(&internal_6d636d0, 0x6d636dc);
extern "C" void const* const public_6d636e8 = __AsmFindLabelExport(&internal_6d636d0, 0x6d636e8);
extern "C" void const* const public_6d636f3 = __AsmFindLabelExport(&internal_6d636d0, 0x6d636f3);
extern "C" void const* const public_6d636fe = __AsmFindLabelExport(&internal_6d636d0, 0x6d636fe);
