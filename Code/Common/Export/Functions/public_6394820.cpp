#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639482b _public_639482b

PROC_DECLARE(0x6394820, internal_6394820, public_6394820);
/* CHUNK of public_62b7f00 */
extern "C" NAKED register_t __cdecl internal_6394820()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_62fd570
        pop ecx
        ret 
        public_639482b : nop
        mov eax, offset public_63adde8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394820)
        ASM_EXPORT_ENTRY_SINGLE(0x639482b, public_639482b)
    }
}

#undef public_639482b

#pragma init_seg(compiler)
extern "C" void const* const public_639482b = __AsmFindLabelExport(&internal_6394820, 0x639482b);
