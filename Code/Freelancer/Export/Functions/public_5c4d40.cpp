#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57b260);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4d4b _public_5c4d4b
#define public_5c4d53 _public_5c4d53
#define public_5c4d62 _public_5c4d62

PROC_DECLARE(0x5c4d40, internal_5c4d40, public_5c4d40);
/* CHUNK of public_59c580 */
extern "C" NAKED register_t __cdecl internal_5c4d40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c4d4b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_57b260
        public_5c4d53 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4A8
        jmp dword ptr ds : [public_5c62c4]
        public_5c4d62 : nop
        mov eax, offset public_5fea68
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4d40)
        ASM_EXPORT_ENTRY_FIRST(0x5c4d4b, public_5c4d4b)
        ASM_EXPORT_ENTRY(0x5c4d53, public_5c4d53)
        ASM_EXPORT_ENTRY_LAST(0x5c4d62, public_5c4d62)
    }
}

#undef public_5c4d4b
#undef public_5c4d53
#undef public_5c4d62

#pragma init_seg(compiler)
extern "C" void const* const public_5c4d4b = __AsmFindLabelExport(&internal_5c4d40, 0x5c4d4b);
extern "C" void const* const public_5c4d53 = __AsmFindLabelExport(&internal_5c4d40, 0x5c4d53);
extern "C" void const* const public_5c4d62 = __AsmFindLabelExport(&internal_5c4d40, 0x5c4d62);
