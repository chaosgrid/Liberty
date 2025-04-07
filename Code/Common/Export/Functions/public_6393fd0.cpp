#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393fdb _public_6393fdb

PROC_DECLARE(0x6393fd0, internal_6393fd0, public_6393fd0);
/* CHUNK of public_62a9920 */
extern "C" NAKED register_t __cdecl internal_6393fd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x20]
        push eax
        call public_62fd570
        pop ecx
        ret 
        public_6393fdb : nop
        mov eax, offset public_63ad4b0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393fd0)
        ASM_EXPORT_ENTRY_SINGLE(0x6393fdb, public_6393fdb)
    }
}

#undef public_6393fdb

#pragma init_seg(compiler)
extern "C" void const* const public_6393fdb = __AsmFindLabelExport(&internal_6393fd0, 0x6393fdb);
