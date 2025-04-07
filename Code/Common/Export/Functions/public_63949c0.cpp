#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_629ff20);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63949c8 _public_63949c8
#define public_63949e0 _public_63949e0
#define public_63949e7 _public_63949e7
#define public_63949ef _public_63949ef

PROC_DECLARE(0x63949c0, internal_63949c0, public_63949c0);
/* CHUNK of public_62c1420 */
extern "C" NAKED register_t __cdecl internal_63949c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6285b90
        public_63949c8 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_63949e0
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_63949e7
        public_63949e0 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_63949e7 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_629ff20
        public_63949ef : nop
        mov eax, offset public_63ae014
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63949c0)
        ASM_EXPORT_ENTRY_FIRST(0x63949c8, public_63949c8)
        ASM_EXPORT_ENTRY(0x63949e0, public_63949e0)
        ASM_EXPORT_ENTRY(0x63949e7, public_63949e7)
        ASM_EXPORT_ENTRY_LAST(0x63949ef, public_63949ef)
    }
}

#undef public_63949c8
#undef public_63949e0
#undef public_63949e7
#undef public_63949ef

#pragma init_seg(compiler)
extern "C" void const* const public_63949c8 = __AsmFindLabelExport(&internal_63949c0, 0x63949c8);
extern "C" void const* const public_63949e0 = __AsmFindLabelExport(&internal_63949c0, 0x63949e0);
extern "C" void const* const public_63949e7 = __AsmFindLabelExport(&internal_63949c0, 0x63949e7);
extern "C" void const* const public_63949ef = __AsmFindLabelExport(&internal_63949c0, 0x63949ef);
