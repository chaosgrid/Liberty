#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9cdb _public_5b9cdb
#define public_5b9ce6 _public_5b9ce6
#define public_5b9cf1 _public_5b9cf1

PROC_DECLARE(0x5b9cd0, internal_5b9cd0, public_5b9cd0);
/* CHUNK of public_44d810 */
extern "C" NAKED register_t __cdecl internal_5b9cd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9cdb : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9ce6 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9cf1 : nop
        mov eax, offset public_5f3dfc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9cd0)
        ASM_EXPORT_ENTRY_FIRST(0x5b9cdb, public_5b9cdb)
        ASM_EXPORT_ENTRY(0x5b9ce6, public_5b9ce6)
        ASM_EXPORT_ENTRY_LAST(0x5b9cf1, public_5b9cf1)
    }
}

#undef public_5b9cdb
#undef public_5b9ce6
#undef public_5b9cf1

#pragma init_seg(compiler)
extern "C" void const* const public_5b9cdb = __AsmFindLabelExport(&internal_5b9cd0, 0x5b9cdb);
extern "C" void const* const public_5b9ce6 = __AsmFindLabelExport(&internal_5b9cd0, 0x5b9ce6);
extern "C" void const* const public_5b9cf1 = __AsmFindLabelExport(&internal_5b9cd0, 0x5b9cf1);
