#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248c81 _public_6248c81

PROC_DECLARE(0x6248c70, internal_6248c70, public_6248c70);
/* CHUNK of public_6222af0 */
extern "C" NAKED register_t __cdecl internal_6248c70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62087f0
        add esp, 8
        ret 
        public_6248c81 : nop
        mov eax, offset public_6251b68
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248c70)
        ASM_EXPORT_ENTRY_SINGLE(0x6248c81, public_6248c81)
    }
}

#undef public_6248c81

#pragma init_seg(compiler)
extern "C" void const* const public_6248c81 = __AsmFindLabelExport(&internal_6248c70, 0x6248c81);
