#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be7e9 _public_5be7e9
#define public_5be7f1 _public_5be7f1
#define public_5be802 _public_5be802

PROC_DECLARE(0x5be7e0, internal_5be7e0, public_5be7e0);
/* CHUNK of public_4e0ee0 */
extern "C" NAKED register_t __cdecl internal_5be7e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c62b4]
        public_5be7e9 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_45eeb0
        public_5be7f1 : nop
        mov eax, dword ptr ss : [ebp-0x38]
        push eax
        mov ecx, dword ptr ss : [ebp-0x34]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5be802 : nop
        mov eax, offset public_5f89b4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be7e0)
        ASM_EXPORT_ENTRY_FIRST(0x5be7e9, public_5be7e9)
        ASM_EXPORT_ENTRY(0x5be7f1, public_5be7f1)
        ASM_EXPORT_ENTRY_LAST(0x5be802, public_5be802)
    }
}

#undef public_5be7e9
#undef public_5be7f1
#undef public_5be802

#pragma init_seg(compiler)
extern "C" void const* const public_5be7e9 = __AsmFindLabelExport(&internal_5be7e0, 0x5be7e9);
extern "C" void const* const public_5be7f1 = __AsmFindLabelExport(&internal_5be7e0, 0x5be7f1);
extern "C" void const* const public_5be802 = __AsmFindLabelExport(&internal_5be7e0, 0x5be802);
