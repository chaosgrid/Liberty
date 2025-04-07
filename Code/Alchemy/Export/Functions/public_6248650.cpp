#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a4c0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624865b _public_624865b
#define public_6248663 _public_6248663

PROC_DECLARE(0x6248650, internal_6248650, public_6248650);
/* CHUNK of public_6219e10 */
extern "C" NAKED register_t __cdecl internal_6248650()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624865b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_621a4c0
        public_6248663 : nop
        mov eax, offset public_6251524
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248650)
        ASM_EXPORT_ENTRY_FIRST(0x624865b, public_624865b)
        ASM_EXPORT_ENTRY_LAST(0x6248663, public_6248663)
    }
}

#undef public_624865b
#undef public_6248663

#pragma init_seg(compiler)
extern "C" void const* const public_624865b = __AsmFindLabelExport(&internal_6248650, 0x624865b);
extern "C" void const* const public_6248663 = __AsmFindLabelExport(&internal_6248650, 0x6248663);
