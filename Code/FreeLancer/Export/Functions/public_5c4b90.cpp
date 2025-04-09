#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_599a60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4ba1 _public_5c4ba1
#define public_5c4bac _public_5c4bac

PROC_DECLARE(0x5c4b90, internal_5c4b90, public_5c4b90);
/* CHUNK of public_5999d0 */
extern "C" NAKED register_t __cdecl internal_5c4b90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5c4ba1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_599a60
        public_5c4bac : nop
        mov eax, offset public_5fe8b8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4b90)
        ASM_EXPORT_ENTRY_FIRST(0x5c4ba1, public_5c4ba1)
        ASM_EXPORT_ENTRY_LAST(0x5c4bac, public_5c4bac)
    }
}

#undef public_5c4ba1
#undef public_5c4bac

#pragma init_seg(compiler)
extern "C" void const* const public_5c4ba1 = __AsmFindLabelExport(&internal_5c4b90, 0x5c4ba1);
extern "C" void const* const public_5c4bac = __AsmFindLabelExport(&internal_5c4b90, 0x5c4bac);
