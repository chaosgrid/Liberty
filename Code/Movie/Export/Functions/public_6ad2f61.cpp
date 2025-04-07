#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad30ae);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3258);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7011);

#define public_6ad2f6e _public_6ad2f6e
#define public_6ad2f8f _public_6ad2f8f
#define public_6ad2f94 _public_6ad2f94
#define public_6ad2f9b _public_6ad2f9b
#define public_6ad2fa1 _public_6ad2fa1

PROC_DECLARE(0x6ad2f61, internal_6ad2f61, public_6ad2f61);
extern "C" NAKED register_t __cdecl internal_6ad2f61()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov byte ptr ss : [ebp-0x90], 0xFE
        xor ch, ch
        fldl2e 
        fmulp 
        public_6ad2f6e : nop
        call public_6ad30ae
        fld1 
        faddp 
        test byte ptr ss : [ebp-0x9F], 1
        je public_6ad2f94
        fld1 
        cmp dword ptr ds : [public_6ae0e90], 1
        je public_6ad2f8f
        fdivrp 
        jmp public_6ad2f94
        public_6ad2f8f : nop
        call public_6ad7011
        public_6ad2f94 : nop
        test dl, 0x40
        jne public_6ad2f9b
        fscale 
        public_6ad2f9b : nop
        or ch, ch
        je public_6ad2fa1
        fchs 
        public_6ad2fa1 : nop
        jmp public_6ad3258
        UNREACHABLE_TRAP(0x6ad2f61)
        ASM_EXPORT_ENTRY_FIRST(0x6ad2f6e, public_6ad2f6e)
        ASM_EXPORT_ENTRY(0x6ad2f8f, public_6ad2f8f)
        ASM_EXPORT_ENTRY(0x6ad2f94, public_6ad2f94)
        ASM_EXPORT_ENTRY(0x6ad2f9b, public_6ad2f9b)
        ASM_EXPORT_ENTRY_LAST(0x6ad2fa1, public_6ad2fa1)
    }
}

#undef public_6ad2f6e
#undef public_6ad2f8f
#undef public_6ad2f94
#undef public_6ad2f9b
#undef public_6ad2fa1

#pragma init_seg(compiler)
extern "C" void const* const public_6ad2f6e = __AsmFindLabelExport(&internal_6ad2f61, 0x6ad2f6e);
extern "C" void const* const public_6ad2f8f = __AsmFindLabelExport(&internal_6ad2f61, 0x6ad2f8f);
extern "C" void const* const public_6ad2f94 = __AsmFindLabelExport(&internal_6ad2f61, 0x6ad2f94);
extern "C" void const* const public_6ad2f9b = __AsmFindLabelExport(&internal_6ad2f61, 0x6ad2f9b);
extern "C" void const* const public_6ad2fa1 = __AsmFindLabelExport(&internal_6ad2f61, 0x6ad2fa1);
