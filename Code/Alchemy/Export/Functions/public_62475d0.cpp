#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6209ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62475db _public_62475db
#define public_62475ec _public_62475ec

PROC_DECLARE(0x62475d0, internal_62475d0, public_62475d0);
/* CHUNK of public_6208720 */
extern "C" NAKED register_t __cdecl internal_62475d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_6209ea0
        public_62475db : nop
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62087f0
        add esp, 8
        ret 
        public_62475ec : nop
        mov eax, offset public_62503c0
        jmp public_6246126
        UNREACHABLE_TRAP(0x62475d0)
        ASM_EXPORT_ENTRY_FIRST(0x62475db, public_62475db)
        ASM_EXPORT_ENTRY_LAST(0x62475ec, public_62475ec)
    }
}

#undef public_62475db
#undef public_62475ec

#pragma init_seg(compiler)
extern "C" void const* const public_62475db = __AsmFindLabelExport(&internal_62475d0, 0x62475db);
extern "C" void const* const public_62475ec = __AsmFindLabelExport(&internal_62475d0, 0x62475ec);
