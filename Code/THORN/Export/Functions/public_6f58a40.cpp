#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f235d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f235f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23610);
CLANG_FORWARD_PROC_SYMBOL(public_6f34850);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58a48 _public_6f58a48
#define public_6f58a53 _public_6f58a53
#define public_6f58a5e _public_6f58a5e
#define public_6f58a69 _public_6f58a69

PROC_DECLARE(0x6f58a40, internal_6f58a40, public_6f58a40);
/* CHUNK of public_6f34ff0 */
extern "C" NAKED register_t __cdecl internal_6f58a40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f34850
        public_6f58a48 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6f235d0
        public_6f58a53 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_6f235f0
        public_6f58a5e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34
        jmp public_6f23610
        public_6f58a69 : nop
        mov eax, offset public_6f5bc18
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58a40)
        ASM_EXPORT_ENTRY_FIRST(0x6f58a48, public_6f58a48)
        ASM_EXPORT_ENTRY(0x6f58a53, public_6f58a53)
        ASM_EXPORT_ENTRY(0x6f58a5e, public_6f58a5e)
        ASM_EXPORT_ENTRY_LAST(0x6f58a69, public_6f58a69)
    }
}

#undef public_6f58a48
#undef public_6f58a53
#undef public_6f58a5e
#undef public_6f58a69

#pragma init_seg(compiler)
extern "C" void const* const public_6f58a48 = __AsmFindLabelExport(&internal_6f58a40, 0x6f58a48);
extern "C" void const* const public_6f58a53 = __AsmFindLabelExport(&internal_6f58a40, 0x6f58a53);
extern "C" void const* const public_6f58a5e = __AsmFindLabelExport(&internal_6f58a40, 0x6f58a5e);
extern "C" void const* const public_6f58a69 = __AsmFindLabelExport(&internal_6f58a40, 0x6f58a69);
