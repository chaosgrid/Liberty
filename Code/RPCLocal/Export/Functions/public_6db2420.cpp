#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db242f _public_6db242f
#define public_6db243e _public_6db243e
#define public_6db244d _public_6db244d

PROC_DECLARE(0x6db2420, internal_6db2420, public_6db2420);
/* CHUNK of public_6d855c0 */
extern "C" NAKED register_t __cdecl internal_6db2420()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x204
        jmp dword ptr ds : [public_6db3198]
        public_6db242f : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x214
        jmp dword ptr ds : [public_6db3198]
        public_6db243e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x248
        jmp dword ptr ds : [public_6db30a4]
        public_6db244d : nop
        mov eax, offset public_6db6b54
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2420)
        ASM_EXPORT_ENTRY_FIRST(0x6db242f, public_6db242f)
        ASM_EXPORT_ENTRY(0x6db243e, public_6db243e)
        ASM_EXPORT_ENTRY_LAST(0x6db244d, public_6db244d)
    }
}

#undef public_6db242f
#undef public_6db243e
#undef public_6db244d

#pragma init_seg(compiler)
extern "C" void const* const public_6db242f = __AsmFindLabelExport(&internal_6db2420, 0x6db242f);
extern "C" void const* const public_6db243e = __AsmFindLabelExport(&internal_6db2420, 0x6db243e);
extern "C" void const* const public_6db244d = __AsmFindLabelExport(&internal_6db2420, 0x6db244d);
