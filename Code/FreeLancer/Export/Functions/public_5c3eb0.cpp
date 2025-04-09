#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3ebb _public_5c3ebb
#define public_5c3ec6 _public_5c3ec6

PROC_DECLARE(0x5c3eb0, internal_5c3eb0, public_5c3eb0);
/* CHUNK of public_57be30 */
extern "C" NAKED register_t __cdecl internal_5c3eb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c3ebb : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c3ec6 : nop
        mov eax, offset public_5fdb50
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3eb0)
        ASM_EXPORT_ENTRY_FIRST(0x5c3ebb, public_5c3ebb)
        ASM_EXPORT_ENTRY_LAST(0x5c3ec6, public_5c3ec6)
    }
}

#undef public_5c3ebb
#undef public_5c3ec6

#pragma init_seg(compiler)
extern "C" void const* const public_5c3ebb = __AsmFindLabelExport(&internal_5c3eb0, 0x5c3ebb);
extern "C" void const* const public_5c3ec6 = __AsmFindLabelExport(&internal_5c3eb0, 0x5c3ec6);
