#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_627cae0);
CLANG_FORWARD_PROC_SYMBOL(public_6280b30);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392e88 _public_6392e88
#define public_6392e93 _public_6392e93
#define public_6392e9e _public_6392e9e
#define public_6392ea6 _public_6392ea6
#define public_6392eb4 _public_6392eb4

PROC_DECLARE(0x6392e80, internal_6392e80, public_6392e80);
/* CHUNK of public_62811b0 */
extern "C" NAKED register_t __cdecl internal_6392e80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627cae0
        public_6392e88 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_6269110
        public_6392e93 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x78
        jmp public_62a68e0
        public_6392e9e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62af440
        public_6392ea6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x9C
        jmp public_6280b30
        public_6392eb4 : nop
        mov eax, offset public_63abe14
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392e80)
        ASM_EXPORT_ENTRY_FIRST(0x6392e88, public_6392e88)
        ASM_EXPORT_ENTRY(0x6392e93, public_6392e93)
        ASM_EXPORT_ENTRY(0x6392e9e, public_6392e9e)
        ASM_EXPORT_ENTRY(0x6392ea6, public_6392ea6)
        ASM_EXPORT_ENTRY_LAST(0x6392eb4, public_6392eb4)
    }
}

#undef public_6392e88
#undef public_6392e93
#undef public_6392e9e
#undef public_6392ea6
#undef public_6392eb4

#pragma init_seg(compiler)
extern "C" void const* const public_6392e88 = __AsmFindLabelExport(&internal_6392e80, 0x6392e88);
extern "C" void const* const public_6392e93 = __AsmFindLabelExport(&internal_6392e80, 0x6392e93);
extern "C" void const* const public_6392e9e = __AsmFindLabelExport(&internal_6392e80, 0x6392e9e);
extern "C" void const* const public_6392ea6 = __AsmFindLabelExport(&internal_6392e80, 0x6392ea6);
extern "C" void const* const public_6392eb4 = __AsmFindLabelExport(&internal_6392e80, 0x6392eb4);
