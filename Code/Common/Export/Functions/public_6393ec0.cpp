#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_627cae0);
CLANG_FORWARD_PROC_SYMBOL(public_6280b30);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393ec8 _public_6393ec8
#define public_6393ed3 _public_6393ed3
#define public_6393ede _public_6393ede
#define public_6393ee6 _public_6393ee6
#define public_6393ef4 _public_6393ef4

PROC_DECLARE(0x6393ec0, internal_6393ec0, public_6393ec0);
/* CHUNK of public_62a8330 */
extern "C" NAKED register_t __cdecl internal_6393ec0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627cae0
        public_6393ec8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_6269110
        public_6393ed3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x78
        jmp public_62a68e0
        public_6393ede : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62af440
        public_6393ee6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x9C
        jmp public_6280b30
        public_6393ef4 : nop
        mov eax, offset public_63ad3c4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393ec0)
        ASM_EXPORT_ENTRY_FIRST(0x6393ec8, public_6393ec8)
        ASM_EXPORT_ENTRY(0x6393ed3, public_6393ed3)
        ASM_EXPORT_ENTRY(0x6393ede, public_6393ede)
        ASM_EXPORT_ENTRY(0x6393ee6, public_6393ee6)
        ASM_EXPORT_ENTRY_LAST(0x6393ef4, public_6393ef4)
    }
}

#undef public_6393ec8
#undef public_6393ed3
#undef public_6393ede
#undef public_6393ee6
#undef public_6393ef4

#pragma init_seg(compiler)
extern "C" void const* const public_6393ec8 = __AsmFindLabelExport(&internal_6393ec0, 0x6393ec8);
extern "C" void const* const public_6393ed3 = __AsmFindLabelExport(&internal_6393ec0, 0x6393ed3);
extern "C" void const* const public_6393ede = __AsmFindLabelExport(&internal_6393ec0, 0x6393ede);
extern "C" void const* const public_6393ee6 = __AsmFindLabelExport(&internal_6393ec0, 0x6393ee6);
extern "C" void const* const public_6393ef4 = __AsmFindLabelExport(&internal_6393ec0, 0x6393ef4);
