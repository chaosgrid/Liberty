#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6d95b60);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db2808 _public_6db2808
#define public_6db2813 _public_6db2813
#define public_6db281e _public_6db281e
#define public_6db282a _public_6db282a

PROC_DECLARE(0x6db2800, internal_6db2800, public_6db2800);
/* CHUNK of public_6d97b90 */
extern "C" NAKED register_t __cdecl internal_6db2800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6da1370
        public_6db2808 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x30
        jmp public_6d95b60
        public_6db2813 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x70
        jmp public_6d91340
        public_6db281e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x74
        jmp dword ptr ds : [public_6db3018]
        public_6db282a : nop
        mov eax, offset public_6db7020
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2800)
        ASM_EXPORT_ENTRY_FIRST(0x6db2808, public_6db2808)
        ASM_EXPORT_ENTRY(0x6db2813, public_6db2813)
        ASM_EXPORT_ENTRY(0x6db281e, public_6db281e)
        ASM_EXPORT_ENTRY_LAST(0x6db282a, public_6db282a)
    }
}

#undef public_6db2808
#undef public_6db2813
#undef public_6db281e
#undef public_6db282a

#pragma init_seg(compiler)
extern "C" void const* const public_6db2808 = __AsmFindLabelExport(&internal_6db2800, 0x6db2808);
extern "C" void const* const public_6db2813 = __AsmFindLabelExport(&internal_6db2800, 0x6db2813);
extern "C" void const* const public_6db281e = __AsmFindLabelExport(&internal_6db2800, 0x6db281e);
extern "C" void const* const public_6db282a = __AsmFindLabelExport(&internal_6db2800, 0x6db282a);
