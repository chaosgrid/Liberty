#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_44fd80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5b9e48 _public_5b9e48
#define public_5b9e5e _public_5b9e5e

PROC_DECLARE(0x5b9e40, internal_5b9e40, public_5b9e40);
/* CHUNK of public_451fd0 */
extern "C" NAKED register_t __cdecl internal_5b9e40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_44fd80
/*FIXUP public_5b9e48 : nop
        push offset _public_401e90 @0x5b9e48*/
  FIXUP public_5b9e48 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_401e90
        push 0x20
        push 0x10
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x78
        push eax
        call public_5b7ec6
        ret 
        public_5b9e5e : nop
        mov eax, offset public_5f4178
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9e40)
        ASM_EXPORT_ENTRY_FIRST(0x5b9e48, public_5b9e48)
        ASM_EXPORT_ENTRY_LAST(0x5b9e5e, public_5b9e5e)
    }
}

#undef public_5b9e48
#undef public_5b9e5e

#pragma init_seg(compiler)
extern "C" void const* const public_5b9e48 = __AsmFindLabelExport(&internal_5b9e40, 0x5b9e48);
extern "C" void const* const public_5b9e5e = __AsmFindLabelExport(&internal_5b9e40, 0x5b9e5e);
