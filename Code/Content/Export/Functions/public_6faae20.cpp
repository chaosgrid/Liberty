#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec44c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faae28 _public_6faae28
#define public_6faae33 _public_6faae33
#define public_6faae3e _public_6faae3e

PROC_DECLARE(0x6faae20, internal_6faae20, public_6faae20);
/* CHUNK of public_6ec32e0 */
extern "C" NAKED register_t __cdecl internal_6faae20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ec44c0
        public_6faae28 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_6f15350
        public_6faae33 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_6f15350
        public_6faae3e : nop
        mov eax, offset public_6fbef6c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faae20)
        ASM_EXPORT_ENTRY_FIRST(0x6faae28, public_6faae28)
        ASM_EXPORT_ENTRY(0x6faae33, public_6faae33)
        ASM_EXPORT_ENTRY_LAST(0x6faae3e, public_6faae3e)
    }
}

#undef public_6faae28
#undef public_6faae33
#undef public_6faae3e

#pragma init_seg(compiler)
extern "C" void const* const public_6faae28 = __AsmFindLabelExport(&internal_6faae20, 0x6faae28);
extern "C" void const* const public_6faae33 = __AsmFindLabelExport(&internal_6faae20, 0x6faae33);
extern "C" void const* const public_6faae3e = __AsmFindLabelExport(&internal_6faae20, 0x6faae3e);
