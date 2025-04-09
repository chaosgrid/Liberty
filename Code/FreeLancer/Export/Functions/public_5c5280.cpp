#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_4c60a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5291 _public_5c5291
#define public_5c5299 _public_5c5299
#define public_5c52a5 _public_5c52a5

PROC_DECLARE(0x5c5280, internal_5c5280, public_5c5280);
/* CHUNK of public_5a6a10 */
extern "C" NAKED register_t __cdecl internal_5c5280()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5c5291 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4c60a0
        public_5c5299 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x10
        jmp dword ptr ds : [public_5c6098]
        public_5c52a5 : nop
        mov eax, offset public_5ff114
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5280)
        ASM_EXPORT_ENTRY_FIRST(0x5c5291, public_5c5291)
        ASM_EXPORT_ENTRY(0x5c5299, public_5c5299)
        ASM_EXPORT_ENTRY_LAST(0x5c52a5, public_5c52a5)
    }
}

#undef public_5c5291
#undef public_5c5299
#undef public_5c52a5

#pragma init_seg(compiler)
extern "C" void const* const public_5c5291 = __AsmFindLabelExport(&internal_5c5280, 0x5c5291);
extern "C" void const* const public_5c5299 = __AsmFindLabelExport(&internal_5c5280, 0x5c5299);
extern "C" void const* const public_5c52a5 = __AsmFindLabelExport(&internal_5c5280, 0x5c52a5);
