#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c417b _public_5c417b
#define public_5c4183 _public_5c4183

PROC_DECLARE(0x5c4170, internal_5c4170, public_5c4170);
/* CHUNK of public_57ecc0 */
extern "C" NAKED register_t __cdecl internal_5c4170()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c417b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_579620
        public_5c4183 : nop
        mov eax, offset public_5fddb8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4170)
        ASM_EXPORT_ENTRY_FIRST(0x5c417b, public_5c417b)
        ASM_EXPORT_ENTRY_LAST(0x5c4183, public_5c4183)
    }
}

#undef public_5c417b
#undef public_5c4183

#pragma init_seg(compiler)
extern "C" void const* const public_5c417b = __AsmFindLabelExport(&internal_5c4170, 0x5c417b);
extern "C" void const* const public_5c4183 = __AsmFindLabelExport(&internal_5c4170, 0x5c4183);
