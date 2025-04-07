#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393581 _public_6393581
#define public_6393589 _public_6393589

PROC_DECLARE(0x6393570, internal_6393570, public_6393570);
/* CHUNK of public_62904d0 */
extern "C" NAKED register_t __cdecl internal_6393570()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6393581 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62881d0
        public_6393589 : nop
        mov eax, offset public_63ac6e4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393570)
        ASM_EXPORT_ENTRY_FIRST(0x6393581, public_6393581)
        ASM_EXPORT_ENTRY_LAST(0x6393589, public_6393589)
    }
}

#undef public_6393581
#undef public_6393589

#pragma init_seg(compiler)
extern "C" void const* const public_6393581 = __AsmFindLabelExport(&internal_6393570, 0x6393581);
extern "C" void const* const public_6393589 = __AsmFindLabelExport(&internal_6393570, 0x6393589);
