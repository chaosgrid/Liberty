#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6264890);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392808 _public_6392808
#define public_6392813 _public_6392813
#define public_639281e _public_639281e

PROC_DECLARE(0x6392800, internal_6392800, public_6392800);
/* CHUNK of public_6270360 */
extern "C" NAKED register_t __cdecl internal_6392800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_62a68e0
        public_6392808 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xC
        jmp public_6264890
        public_6392813 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x20
        jmp public_6264890
        public_639281e : nop
        mov eax, offset public_63ab5dc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392800)
        ASM_EXPORT_ENTRY_FIRST(0x6392808, public_6392808)
        ASM_EXPORT_ENTRY(0x6392813, public_6392813)
        ASM_EXPORT_ENTRY_LAST(0x639281e, public_639281e)
    }
}

#undef public_6392808
#undef public_6392813
#undef public_639281e

#pragma init_seg(compiler)
extern "C" void const* const public_6392808 = __AsmFindLabelExport(&internal_6392800, 0x6392808);
extern "C" void const* const public_6392813 = __AsmFindLabelExport(&internal_6392800, 0x6392813);
extern "C" void const* const public_639281e = __AsmFindLabelExport(&internal_6392800, 0x639281e);
