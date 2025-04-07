#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2efd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f586cb _public_6f586cb
#define public_6f586d6 _public_6f586d6

PROC_DECLARE(0x6f586c0, internal_6f586c0, public_6f586c0);
/* CHUNK of public_6f2edf0 */
extern "C" NAKED register_t __cdecl internal_6f586c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 4
        jmp public_6f30cd0
        public_6f586cb : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x10
        jmp public_6f2efd0
        public_6f586d6 : nop
        mov eax, offset public_6f5b818
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f586c0)
        ASM_EXPORT_ENTRY_FIRST(0x6f586cb, public_6f586cb)
        ASM_EXPORT_ENTRY_LAST(0x6f586d6, public_6f586d6)
    }
}

#undef public_6f586cb
#undef public_6f586d6

#pragma init_seg(compiler)
extern "C" void const* const public_6f586cb = __AsmFindLabelExport(&internal_6f586c0, 0x6f586cb);
extern "C" void const* const public_6f586d6 = __AsmFindLabelExport(&internal_6f586c0, 0x6f586d6);
