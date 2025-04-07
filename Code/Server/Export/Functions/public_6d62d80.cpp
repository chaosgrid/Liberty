#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);
CLANG_FORWARD_PROC_SYMBOL(public_6d6001e);

#define public_6d62d8b _public_6d62d8b
#define public_6d62da1 _public_6d62da1

PROC_DECLARE(0x6d62d80, internal_6d62d80, public_6d62d80);
/* CHUNK of public_6d441c0 */
extern "C" NAKED register_t __cdecl internal_6d62d80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xF8]
        jmp public_6cecb50
/*FIXUP public_6d62d8b : nop
        push offset _public_6cecb50 @0x6d62d8b*/
  FIXUP public_6d62d8b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6cecb50
        push 0x10
        push 0xC
        lea eax, ss:[ebp-0xCC]
        push eax
        call public_6d6001e
        ret 
        public_6d62da1 : nop
        mov eax, offset public_6d7519c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62d80)
        ASM_EXPORT_ENTRY_FIRST(0x6d62d8b, public_6d62d8b)
        ASM_EXPORT_ENTRY_LAST(0x6d62da1, public_6d62da1)
    }
}

#undef public_6d62d8b
#undef public_6d62da1

#pragma init_seg(compiler)
extern "C" void const* const public_6d62d8b = __AsmFindLabelExport(&internal_6d62d80, 0x6d62d8b);
extern "C" void const* const public_6d62da1 = __AsmFindLabelExport(&internal_6d62d80, 0x6d62da1);
