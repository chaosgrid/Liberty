#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d241f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d29370);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d629e8 _public_6d629e8
#define public_6d629f9 _public_6d629f9
#define public_6d62a01 _public_6d62a01
#define public_6d62a09 _public_6d62a09

PROC_DECLARE(0x6d629e0, internal_6d629e0, public_6d629e0);
/* CHUNK of public_6d24cb0 */
extern "C" NAKED register_t __cdecl internal_6d629e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_6d29370
        public_6d629e8 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d629f9 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6d29370
        public_6d62a01 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_6d241f0
        public_6d62a09 : nop
        mov eax, offset public_6d73a44
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d629e0)
        ASM_EXPORT_ENTRY_FIRST(0x6d629e8, public_6d629e8)
        ASM_EXPORT_ENTRY(0x6d629f9, public_6d629f9)
        ASM_EXPORT_ENTRY(0x6d62a01, public_6d62a01)
        ASM_EXPORT_ENTRY_LAST(0x6d62a09, public_6d62a09)
    }
}

#undef public_6d629e8
#undef public_6d629f9
#undef public_6d62a01
#undef public_6d62a09

#pragma init_seg(compiler)
extern "C" void const* const public_6d629e8 = __AsmFindLabelExport(&internal_6d629e0, 0x6d629e8);
extern "C" void const* const public_6d629f9 = __AsmFindLabelExport(&internal_6d629e0, 0x6d629f9);
extern "C" void const* const public_6d62a01 = __AsmFindLabelExport(&internal_6d629e0, 0x6d62a01);
extern "C" void const* const public_6d62a09 = __AsmFindLabelExport(&internal_6d629e0, 0x6d62a09);
