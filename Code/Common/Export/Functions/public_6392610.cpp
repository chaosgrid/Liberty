#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262400);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639261b _public_639261b
#define public_6392623 _public_6392623
#define public_639262e _public_639262e

PROC_DECLARE(0x6392610, internal_6392610, public_6392610);
/* CHUNK of public_6266110 */
extern "C" NAKED register_t __cdecl internal_6392610()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639261b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62a68e0
        public_6392623 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_6262400
        public_639262e : nop
        mov eax, offset public_63ab198
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392610)
        ASM_EXPORT_ENTRY_FIRST(0x639261b, public_639261b)
        ASM_EXPORT_ENTRY(0x6392623, public_6392623)
        ASM_EXPORT_ENTRY_LAST(0x639262e, public_639262e)
    }
}

#undef public_639261b
#undef public_6392623
#undef public_639262e

#pragma init_seg(compiler)
extern "C" void const* const public_639261b = __AsmFindLabelExport(&internal_6392610, 0x639261b);
extern "C" void const* const public_6392623 = __AsmFindLabelExport(&internal_6392610, 0x6392623);
extern "C" void const* const public_639262e = __AsmFindLabelExport(&internal_6392610, 0x639262e);
