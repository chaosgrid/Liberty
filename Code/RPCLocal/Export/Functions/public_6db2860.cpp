#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6d95b60);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db2868 _public_6db2868
#define public_6db2873 _public_6db2873
#define public_6db287e _public_6db287e
#define public_6db288a _public_6db288a

PROC_DECLARE(0x6db2860, internal_6db2860, public_6db2860);
/* CHUNK of public_6d9cc60 */
extern "C" NAKED register_t __cdecl internal_6db2860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6da1370
        public_6db2868 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6d95b60
        public_6db2873 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp public_6d91340
        public_6db287e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp dword ptr ds : [public_6db3018]
        public_6db288a : nop
        mov eax, offset public_6db70a4
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2860)
        ASM_EXPORT_ENTRY_FIRST(0x6db2868, public_6db2868)
        ASM_EXPORT_ENTRY(0x6db2873, public_6db2873)
        ASM_EXPORT_ENTRY(0x6db287e, public_6db287e)
        ASM_EXPORT_ENTRY_LAST(0x6db288a, public_6db288a)
    }
}

#undef public_6db2868
#undef public_6db2873
#undef public_6db287e
#undef public_6db288a

#pragma init_seg(compiler)
extern "C" void const* const public_6db2868 = __AsmFindLabelExport(&internal_6db2860, 0x6db2868);
extern "C" void const* const public_6db2873 = __AsmFindLabelExport(&internal_6db2860, 0x6db2873);
extern "C" void const* const public_6db287e = __AsmFindLabelExport(&internal_6db2860, 0x6db287e);
extern "C" void const* const public_6db288a = __AsmFindLabelExport(&internal_6db2860, 0x6db288a);
