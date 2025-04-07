#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6d95b60);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db2908 _public_6db2908
#define public_6db2913 _public_6db2913
#define public_6db291e _public_6db291e
#define public_6db292a _public_6db292a

PROC_DECLARE(0x6db2900, internal_6db2900, public_6db2900);
/* CHUNK of public_6d9e740 */
extern "C" NAKED register_t __cdecl internal_6db2900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6da1370
        public_6db2908 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x30
        jmp public_6d95b60
        public_6db2913 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x70
        jmp public_6d91340
        public_6db291e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x74
        jmp dword ptr ds : [public_6db3018]
        public_6db292a : nop
        mov eax, offset public_6db71cc
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2900)
        ASM_EXPORT_ENTRY_FIRST(0x6db2908, public_6db2908)
        ASM_EXPORT_ENTRY(0x6db2913, public_6db2913)
        ASM_EXPORT_ENTRY(0x6db291e, public_6db291e)
        ASM_EXPORT_ENTRY_LAST(0x6db292a, public_6db292a)
    }
}

#undef public_6db2908
#undef public_6db2913
#undef public_6db291e
#undef public_6db292a

#pragma init_seg(compiler)
extern "C" void const* const public_6db2908 = __AsmFindLabelExport(&internal_6db2900, 0x6db2908);
extern "C" void const* const public_6db2913 = __AsmFindLabelExport(&internal_6db2900, 0x6db2913);
extern "C" void const* const public_6db291e = __AsmFindLabelExport(&internal_6db2900, 0x6db291e);
extern "C" void const* const public_6db292a = __AsmFindLabelExport(&internal_6db2900, 0x6db292a);
