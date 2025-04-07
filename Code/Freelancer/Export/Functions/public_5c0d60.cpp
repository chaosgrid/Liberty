#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0d69 _public_5c0d69
#define public_5c0d75 _public_5c0d75

PROC_DECLARE(0x5c0d60, internal_5c0d60, public_5c0d60);
/* CHUNK of public_542b70 */
extern "C" NAKED register_t __cdecl internal_5c0d60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x28]
        jmp dword ptr ds : [public_5c69ac]
        public_5c0d69 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 8
        jmp dword ptr ds : [public_5c6aa8]
        public_5c0d75 : nop
        mov eax, offset public_5fafd4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0d60)
        ASM_EXPORT_ENTRY_FIRST(0x5c0d69, public_5c0d69)
        ASM_EXPORT_ENTRY_LAST(0x5c0d75, public_5c0d75)
    }
}

#undef public_5c0d69
#undef public_5c0d75

#pragma init_seg(compiler)
extern "C" void const* const public_5c0d69 = __AsmFindLabelExport(&internal_5c0d60, 0x5c0d69);
extern "C" void const* const public_5c0d75 = __AsmFindLabelExport(&internal_5c0d60, 0x5c0d75);
