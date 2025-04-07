#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631bf50);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6396b63 _public_6396b63

PROC_DECLARE(0x6396b50, internal_6396b50, public_6396b50);
/* CHUNK of public_631c040 */
extern "C" NAKED register_t __cdecl internal_6396b50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
/*FIXUP push offset _public_631bf50 @0x6396b50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_631bf50
        push 7
        push 0x14
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6391dfc
        ret 
        public_6396b63 : nop
        mov eax, offset public_63b0ac4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396b50)
        ASM_EXPORT_ENTRY_SINGLE(0x6396b63, public_6396b63)
    }
}

#undef public_6396b63

#pragma init_seg(compiler)
extern "C" void const* const public_6396b63 = __AsmFindLabelExport(&internal_6396b50, 0x6396b63);
