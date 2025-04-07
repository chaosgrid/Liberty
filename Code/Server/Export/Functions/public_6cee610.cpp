#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee610);

#define public_6cee619 _public_6cee619
#define public_6cee61b _public_6cee61b

PROC_DECLARE(0x6cee610, internal_6cee610, public_6cee610);
/* CHUNK of public_6cee4a0 */
extern "C" NAKED register_t __cdecl internal_6cee610()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        test ecx, ecx
        je public_6cee619
        add ecx, 8
        jmp public_6cee61b
        public_6cee619 : nop
        xor ecx, ecx
        public_6cee61b : nop
        jmp dword ptr ds : [public_6d6435c]
        UNREACHABLE_TRAP(0x6cee610)
        ASM_EXPORT_ENTRY_FIRST(0x6cee619, public_6cee619)
        ASM_EXPORT_ENTRY_LAST(0x6cee61b, public_6cee61b)
    }
}

#undef public_6cee619
#undef public_6cee61b

#pragma init_seg(compiler)
extern "C" void const* const public_6cee619 = __AsmFindLabelExport(&internal_6cee610, 0x6cee619);
extern "C" void const* const public_6cee61b = __AsmFindLabelExport(&internal_6cee610, 0x6cee61b);
