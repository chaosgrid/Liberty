#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d631ae _public_6d631ae
#define public_6d631c0 _public_6d631c0
#define public_6d631d2 _public_6d631d2
#define public_6d631e4 _public_6d631e4
#define public_6d631f6 _public_6d631f6

PROC_DECLARE(0x6d631a0, internal_6d631a0, public_6d631a0);
/* CHUNK of public_6d499c0 */
extern "C" NAKED register_t __cdecl internal_6d631a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x238]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d631ae : nop
        mov ecx, dword ptr ss : [ebp-0x238]
        add ecx, 0x204
        jmp dword ptr ds : [public_6d64b68]
        public_6d631c0 : nop
        mov ecx, dword ptr ss : [ebp-0x238]
        add ecx, 0x214
        jmp dword ptr ds : [public_6d64b68]
        public_6d631d2 : nop
        mov ecx, dword ptr ss : [ebp-0x238]
        add ecx, 0x248
        jmp dword ptr ds : [public_6d643f0]
        public_6d631e4 : nop
        mov ecx, dword ptr ss : [ebp-0x238]
        add ecx, 0x254
        jmp dword ptr ds : [public_6d6438c]
        public_6d631f6 : nop
        mov eax, offset public_6d75570
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d631a0)
        ASM_EXPORT_ENTRY_FIRST(0x6d631ae, public_6d631ae)
        ASM_EXPORT_ENTRY(0x6d631c0, public_6d631c0)
        ASM_EXPORT_ENTRY(0x6d631d2, public_6d631d2)
        ASM_EXPORT_ENTRY(0x6d631e4, public_6d631e4)
        ASM_EXPORT_ENTRY_LAST(0x6d631f6, public_6d631f6)
    }
}

#undef public_6d631ae
#undef public_6d631c0
#undef public_6d631d2
#undef public_6d631e4
#undef public_6d631f6

#pragma init_seg(compiler)
extern "C" void const* const public_6d631ae = __AsmFindLabelExport(&internal_6d631a0, 0x6d631ae);
extern "C" void const* const public_6d631c0 = __AsmFindLabelExport(&internal_6d631a0, 0x6d631c0);
extern "C" void const* const public_6d631d2 = __AsmFindLabelExport(&internal_6d631a0, 0x6d631d2);
extern "C" void const* const public_6d631e4 = __AsmFindLabelExport(&internal_6d631a0, 0x6d631e4);
extern "C" void const* const public_6d631f6 = __AsmFindLabelExport(&internal_6d631a0, 0x6d631f6);
