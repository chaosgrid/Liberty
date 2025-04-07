#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393fbb _public_6393fbb

PROC_DECLARE(0x6393fb0, internal_6393fb0, public_6393fb0);
/* CHUNK of public_62a9820 */
extern "C" NAKED register_t __cdecl internal_6393fb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62fd570
        pop ecx
        ret 
        public_6393fbb : nop
        mov eax, offset public_63ad48c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393fb0)
        ASM_EXPORT_ENTRY_SINGLE(0x6393fbb, public_6393fbb)
    }
}

#undef public_6393fbb

#pragma init_seg(compiler)
extern "C" void const* const public_6393fbb = __AsmFindLabelExport(&internal_6393fb0, 0x6393fbb);
