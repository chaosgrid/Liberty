#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5a27e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5c5008 _public_5c5008
#define public_5c5023 _public_5c5023

PROC_DECLARE(0x5c5000, internal_5c5000, public_5c5000);
/* CHUNK of public_5a2100 */
extern "C" NAKED register_t __cdecl internal_5c5000()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4b4fd0
/*FIXUP public_5c5008 : nop
        push offset _public_5a27e0 @0x5c5008*/
  FIXUP public_5c5008 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5a27e0
        push 0x100
        push 4
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x48C
        push eax
        call public_5b7ec6
        ret 
        public_5c5023 : nop
        mov eax, offset public_5fedf8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5000)
        ASM_EXPORT_ENTRY_FIRST(0x5c5008, public_5c5008)
        ASM_EXPORT_ENTRY_LAST(0x5c5023, public_5c5023)
    }
}

#undef public_5c5008
#undef public_5c5023

#pragma init_seg(compiler)
extern "C" void const* const public_5c5008 = __AsmFindLabelExport(&internal_5c5000, 0x5c5008);
extern "C" void const* const public_5c5023 = __AsmFindLabelExport(&internal_5c5000, 0x5c5023);
