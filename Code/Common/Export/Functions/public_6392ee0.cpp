#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6392eeb _public_6392eeb
#define public_6392f01 _public_6392f01

PROC_DECLARE(0x6392ee0, internal_6392ee0, public_6392ee0);
/* CHUNK of public_6282600 */
extern "C" NAKED register_t __cdecl internal_6392ee0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xF4]
        jmp public_62a68e0
/*FIXUP public_6392eeb : nop
        push offset _public_62a68e0 @0x6392eeb*/
  FIXUP public_6392eeb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a68e0
        push 0x10
        push 0xC
        lea eax, ss:[ebp-0xCC]
        push eax
        call public_6391dfc
        ret 
        public_6392f01 : nop
        mov eax, offset public_63abe90
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392ee0)
        ASM_EXPORT_ENTRY_FIRST(0x6392eeb, public_6392eeb)
        ASM_EXPORT_ENTRY_LAST(0x6392f01, public_6392f01)
    }
}

#undef public_6392eeb
#undef public_6392f01

#pragma init_seg(compiler)
extern "C" void const* const public_6392eeb = __AsmFindLabelExport(&internal_6392ee0, 0x6392eeb);
extern "C" void const* const public_6392f01 = __AsmFindLabelExport(&internal_6392ee0, 0x6392f01);
