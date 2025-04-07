#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f235d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f235f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23610);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f589fb _public_6f589fb
#define public_6f58a06 _public_6f58a06
#define public_6f58a11 _public_6f58a11

PROC_DECLARE(0x6f589f0, internal_6f589f0, public_6f589f0);
/* CHUNK of public_6f34890 */
extern "C" NAKED register_t __cdecl internal_6f589f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6f235d0
        public_6f589fb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_6f235f0
        public_6f58a06 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34
        jmp public_6f23610
        public_6f58a11 : nop
        mov eax, offset public_6f5bbb8
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f589f0)
        ASM_EXPORT_ENTRY_FIRST(0x6f589fb, public_6f589fb)
        ASM_EXPORT_ENTRY(0x6f58a06, public_6f58a06)
        ASM_EXPORT_ENTRY_LAST(0x6f58a11, public_6f58a11)
    }
}

#undef public_6f589fb
#undef public_6f58a06
#undef public_6f58a11

#pragma init_seg(compiler)
extern "C" void const* const public_6f589fb = __AsmFindLabelExport(&internal_6f589f0, 0x6f589fb);
extern "C" void const* const public_6f58a06 = __AsmFindLabelExport(&internal_6f589f0, 0x6f58a06);
extern "C" void const* const public_6f58a11 = __AsmFindLabelExport(&internal_6f589f0, 0x6f58a11);
