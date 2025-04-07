#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_53d470);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c04db _public_5c04db
#define public_5c04e9 _public_5c04e9
#define public_5c04f7 _public_5c04f7

PROC_DECLARE(0x5c04d0, internal_5c04d0, public_5c04d0);
/* CHUNK of public_52dde0 */
extern "C" NAKED register_t __cdecl internal_5c04d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x94]
        jmp public_4de730
        public_5c04db : nop
        mov eax, dword ptr ss : [ebp-0xB0]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c04e9 : nop
        mov ecx, dword ptr ss : [ebp-0xB0]
        add ecx, 0xC
        jmp public_53d470
        public_5c04f7 : nop
        mov eax, offset public_5fa58c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c04d0)
        ASM_EXPORT_ENTRY_FIRST(0x5c04db, public_5c04db)
        ASM_EXPORT_ENTRY(0x5c04e9, public_5c04e9)
        ASM_EXPORT_ENTRY_LAST(0x5c04f7, public_5c04f7)
    }
}

#undef public_5c04db
#undef public_5c04e9
#undef public_5c04f7

#pragma init_seg(compiler)
extern "C" void const* const public_5c04db = __AsmFindLabelExport(&internal_5c04d0, 0x5c04db);
extern "C" void const* const public_5c04e9 = __AsmFindLabelExport(&internal_5c04d0, 0x5c04e9);
extern "C" void const* const public_5c04f7 = __AsmFindLabelExport(&internal_5c04d0, 0x5c04f7);
