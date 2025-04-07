#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d29370);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6211b _public_6d6211b
#define public_6d62127 _public_6d62127
#define public_6d62133 _public_6d62133
#define public_6d6213e _public_6d6213e
#define public_6d62149 _public_6d62149
#define public_6d62154 _public_6d62154

PROC_DECLARE(0x6d62110, internal_6d62110, public_6d62110);
/* CHUNK of public_6d1b760 */
extern "C" NAKED register_t __cdecl internal_6d62110()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 4
        jmp public_6d1b6f0
        public_6d6211b : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x28
        jmp dword ptr ds : [public_6d64b68]
        public_6d62127 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x38
        jmp dword ptr ds : [public_6d64b68]
        public_6d62133 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x48
        jmp public_6cecb50
        public_6d6213e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x54
        jmp public_6d29370
        public_6d62149 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x5C
        jmp public_6cecb50
        public_6d62154 : nop
        mov eax, offset public_6d72f5c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62110)
        ASM_EXPORT_ENTRY_FIRST(0x6d6211b, public_6d6211b)
        ASM_EXPORT_ENTRY(0x6d62127, public_6d62127)
        ASM_EXPORT_ENTRY(0x6d62133, public_6d62133)
        ASM_EXPORT_ENTRY(0x6d6213e, public_6d6213e)
        ASM_EXPORT_ENTRY(0x6d62149, public_6d62149)
        ASM_EXPORT_ENTRY_LAST(0x6d62154, public_6d62154)
    }
}

#undef public_6d6211b
#undef public_6d62127
#undef public_6d62133
#undef public_6d6213e
#undef public_6d62149
#undef public_6d62154

#pragma init_seg(compiler)
extern "C" void const* const public_6d6211b = __AsmFindLabelExport(&internal_6d62110, 0x6d6211b);
extern "C" void const* const public_6d62127 = __AsmFindLabelExport(&internal_6d62110, 0x6d62127);
extern "C" void const* const public_6d62133 = __AsmFindLabelExport(&internal_6d62110, 0x6d62133);
extern "C" void const* const public_6d6213e = __AsmFindLabelExport(&internal_6d62110, 0x6d6213e);
extern "C" void const* const public_6d62149 = __AsmFindLabelExport(&internal_6d62110, 0x6d62149);
extern "C" void const* const public_6d62154 = __AsmFindLabelExport(&internal_6d62110, 0x6d62154);
