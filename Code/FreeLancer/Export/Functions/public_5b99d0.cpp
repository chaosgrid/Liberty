#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b99db _public_5b99db
#define public_5b99e6 _public_5b99e6
#define public_5b99f1 _public_5b99f1

PROC_DECLARE(0x5b99d0, internal_5b99d0, public_5b99d0);
/* CHUNK of public_447690 */
extern "C" NAKED register_t __cdecl internal_5b99d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b99db : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b99e6 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b99f1 : nop
        mov eax, offset public_5f3a5c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b99d0)
        ASM_EXPORT_ENTRY_FIRST(0x5b99db, public_5b99db)
        ASM_EXPORT_ENTRY(0x5b99e6, public_5b99e6)
        ASM_EXPORT_ENTRY_LAST(0x5b99f1, public_5b99f1)
    }
}

#undef public_5b99db
#undef public_5b99e6
#undef public_5b99f1

#pragma init_seg(compiler)
extern "C" void const* const public_5b99db = __AsmFindLabelExport(&internal_5b99d0, 0x5b99db);
extern "C" void const* const public_5b99e6 = __AsmFindLabelExport(&internal_5b99d0, 0x5b99e6);
extern "C" void const* const public_5b99f1 = __AsmFindLabelExport(&internal_5b99d0, 0x5b99f1);
