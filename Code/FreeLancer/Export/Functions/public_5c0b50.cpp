#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f4a10);
CLANG_FORWARD_PROC_SYMBOL(public_4f4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0b5e _public_5c0b5e
#define public_5c0b6a _public_5c0b6a
#define public_5c0b75 _public_5c0b75
#define public_5c0b80 _public_5c0b80
#define public_5c0b8b _public_5c0b8b

PROC_DECLARE(0x5c0b50, internal_5c0b50, public_5c0b50);
/* CHUNK of public_53ac10 */
extern "C" NAKED register_t __cdecl internal_5c0b50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x15C]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c0b5e : nop
        lea ecx, ss:[ebp-0x148]
        jmp dword ptr ds : [public_5c658c]
        public_5c0b6a : nop
        lea ecx, ss:[ebp-0x120]
        jmp public_4f4a10
        public_5c0b75 : nop
        lea ecx, ss:[ebp-0x120]
        jmp public_4f4ab0
        public_5c0b80 : nop
        lea ecx, ss:[ebp-0x120]
        jmp public_4f4a10
        public_5c0b8b : nop
        mov eax, offset public_5fad94
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0b50)
        ASM_EXPORT_ENTRY_FIRST(0x5c0b5e, public_5c0b5e)
        ASM_EXPORT_ENTRY(0x5c0b6a, public_5c0b6a)
        ASM_EXPORT_ENTRY(0x5c0b75, public_5c0b75)
        ASM_EXPORT_ENTRY(0x5c0b80, public_5c0b80)
        ASM_EXPORT_ENTRY_LAST(0x5c0b8b, public_5c0b8b)
    }
}

#undef public_5c0b5e
#undef public_5c0b6a
#undef public_5c0b75
#undef public_5c0b80
#undef public_5c0b8b

#pragma init_seg(compiler)
extern "C" void const* const public_5c0b5e = __AsmFindLabelExport(&internal_5c0b50, 0x5c0b5e);
extern "C" void const* const public_5c0b6a = __AsmFindLabelExport(&internal_5c0b50, 0x5c0b6a);
extern "C" void const* const public_5c0b75 = __AsmFindLabelExport(&internal_5c0b50, 0x5c0b75);
extern "C" void const* const public_5c0b80 = __AsmFindLabelExport(&internal_5c0b50, 0x5c0b80);
extern "C" void const* const public_5c0b8b = __AsmFindLabelExport(&internal_5c0b50, 0x5c0b8b);
