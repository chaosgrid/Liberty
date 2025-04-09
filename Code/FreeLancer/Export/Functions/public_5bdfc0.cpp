#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bdfd1 _public_5bdfd1
#define public_5bdfda _public_5bdfda

PROC_DECLARE(0x5bdfc0, internal_5bdfc0, public_5bdfc0);
/* CHUNK of public_4d49b0 */
extern "C" NAKED register_t __cdecl internal_5bdfc0()
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
        public_5bdfd1 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp dword ptr ds : [public_5c62a4]
        public_5bdfda : nop
        mov eax, offset public_5f8364
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bdfc0)
        ASM_EXPORT_ENTRY_FIRST(0x5bdfd1, public_5bdfd1)
        ASM_EXPORT_ENTRY_LAST(0x5bdfda, public_5bdfda)
    }
}

#undef public_5bdfd1
#undef public_5bdfda

#pragma init_seg(compiler)
extern "C" void const* const public_5bdfd1 = __AsmFindLabelExport(&internal_5bdfc0, 0x5bdfd1);
extern "C" void const* const public_5bdfda = __AsmFindLabelExport(&internal_5bdfc0, 0x5bdfda);
