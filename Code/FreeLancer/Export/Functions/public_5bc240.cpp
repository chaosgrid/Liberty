#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc251 _public_5bc251
#define public_5bc25d _public_5bc25d

PROC_DECLARE(0x5bc240, internal_5bc240, public_5bc240);
/* CHUNK of public_489620 */
extern "C" NAKED register_t __cdecl internal_5bc240()
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
        public_5bc251 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_5c7058]
        public_5bc25d : nop
        mov eax, offset public_5f6658
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc240)
        ASM_EXPORT_ENTRY_FIRST(0x5bc251, public_5bc251)
        ASM_EXPORT_ENTRY_LAST(0x5bc25d, public_5bc25d)
    }
}

#undef public_5bc251
#undef public_5bc25d

#pragma init_seg(compiler)
extern "C" void const* const public_5bc251 = __AsmFindLabelExport(&internal_5bc240, 0x5bc251);
extern "C" void const* const public_5bc25d = __AsmFindLabelExport(&internal_5bc240, 0x5bc25d);
