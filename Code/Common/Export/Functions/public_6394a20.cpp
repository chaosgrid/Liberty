#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394a28 _public_6394a28
#define public_6394a30 _public_6394a30

PROC_DECLARE(0x6394a20, internal_6394a20, public_6394a20);
/* CHUNK of public_62c29b0 */
extern "C" NAKED register_t __cdecl internal_6394a20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_62881d0
        public_6394a28 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_62881d0
        public_6394a30 : nop
        mov eax, offset public_63ae064
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394a20)
        ASM_EXPORT_ENTRY_FIRST(0x6394a28, public_6394a28)
        ASM_EXPORT_ENTRY_LAST(0x6394a30, public_6394a30)
    }
}

#undef public_6394a28
#undef public_6394a30

#pragma init_seg(compiler)
extern "C" void const* const public_6394a28 = __AsmFindLabelExport(&internal_6394a20, 0x6394a28);
extern "C" void const* const public_6394a30 = __AsmFindLabelExport(&internal_6394a20, 0x6394a30);
