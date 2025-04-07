#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639633b _public_639633b

PROC_DECLARE(0x6396330, internal_6396330, public_6396330);
/* CHUNK of public_630d870 */
extern "C" NAKED register_t __cdecl internal_6396330()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62fd570
        pop ecx
        ret 
        public_639633b : nop
        mov eax, offset public_63b018c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396330)
        ASM_EXPORT_ENTRY_SINGLE(0x639633b, public_639633b)
    }
}

#undef public_639633b

#pragma init_seg(compiler)
extern "C" void const* const public_639633b = __AsmFindLabelExport(&internal_6396330, 0x639633b);
