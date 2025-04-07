#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6286c80);
CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394138 _public_6394138
#define public_6394140 _public_6394140

PROC_DECLARE(0x6394130, internal_6394130, public_6394130);
/* CHUNK of public_62acbd0 */
extern "C" NAKED register_t __cdecl internal_6394130()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6286c80
        public_6394138 : nop
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6394140 : nop
        mov eax, offset public_63ad63c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394130)
        ASM_EXPORT_ENTRY_FIRST(0x6394138, public_6394138)
        ASM_EXPORT_ENTRY_LAST(0x6394140, public_6394140)
    }
}

#undef public_6394138
#undef public_6394140

#pragma init_seg(compiler)
extern "C" void const* const public_6394138 = __AsmFindLabelExport(&internal_6394130, 0x6394138);
extern "C" void const* const public_6394140 = __AsmFindLabelExport(&internal_6394130, 0x6394140);
