#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db227c _public_6db227c
#define public_6db228b _public_6db228b

PROC_DECLARE(0x6db2270, internal_6db2270, public_6db2270);
/* CHUNK of public_6d83df0 */
extern "C" NAKED register_t __cdecl internal_6db2270()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp dword ptr ds : [public_6db3020]
        public_6db227c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x80
        jmp dword ptr ds : [public_6db3018]
        public_6db228b : nop
        mov eax, offset public_6db6968
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2270)
        ASM_EXPORT_ENTRY_FIRST(0x6db227c, public_6db227c)
        ASM_EXPORT_ENTRY_LAST(0x6db228b, public_6db228b)
    }
}

#undef public_6db227c
#undef public_6db228b

#pragma init_seg(compiler)
extern "C" void const* const public_6db227c = __AsmFindLabelExport(&internal_6db2270, 0x6db227c);
extern "C" void const* const public_6db228b = __AsmFindLabelExport(&internal_6db2270, 0x6db228b);
