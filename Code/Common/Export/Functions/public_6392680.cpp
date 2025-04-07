#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_639268b _public_639268b
#define public_63926a1 _public_63926a1

PROC_DECLARE(0x6392680, internal_6392680, public_6392680);
/* CHUNK of public_6268840 */
extern "C" NAKED register_t __cdecl internal_6392680()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xF8]
        jmp public_62a68e0
/*FIXUP public_639268b : nop
        push offset _public_62a68e0 @0x639268b*/
  FIXUP public_639268b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a68e0
        push 0x10
        push 0xC
        lea eax, ss:[ebp-0xCC]
        push eax
        call public_6391dfc
        ret 
        public_63926a1 : nop
        mov eax, offset public_63ab2b4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392680)
        ASM_EXPORT_ENTRY_FIRST(0x639268b, public_639268b)
        ASM_EXPORT_ENTRY_LAST(0x63926a1, public_63926a1)
    }
}

#undef public_639268b
#undef public_63926a1

#pragma init_seg(compiler)
extern "C" void const* const public_639268b = __AsmFindLabelExport(&internal_6392680, 0x639268b);
extern "C" void const* const public_63926a1 = __AsmFindLabelExport(&internal_6392680, 0x63926a1);
