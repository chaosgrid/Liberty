#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_635d3b0);

#define public_635d3d1 _public_635d3d1
#define public_635d3d6 _public_635d3d6

PROC_DECLARE(0x635d3b0, internal_635d3b0, public_635d3b0);
/* CHUNK of public_635c090 */
extern "C" NAKED register_t __cdecl internal_635d3b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        cmp eax, ecx
        je public_635d3d6
        test eax, eax
        je public_635d3d1
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+4], 0
        public_635d3d1 : nop
        mov word ptr ds : [esi], 0
        public_635d3d6 : nop
        mov word ptr ds : [esi+2], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x635d3b0)
        ASM_EXPORT_ENTRY_FIRST(0x635d3d1, public_635d3d1)
        ASM_EXPORT_ENTRY_LAST(0x635d3d6, public_635d3d6)
    }
}

#undef public_635d3d1
#undef public_635d3d6

#pragma init_seg(compiler)
extern "C" void const* const public_635d3d1 = __AsmFindLabelExport(&internal_635d3b0, 0x635d3d1);
extern "C" void const* const public_635d3d6 = __AsmFindLabelExport(&internal_635d3b0, 0x635d3d6);
