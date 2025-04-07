#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec44c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faae58 _public_6faae58
#define public_6faae63 _public_6faae63
#define public_6faae6e _public_6faae6e

PROC_DECLARE(0x6faae50, internal_6faae50, public_6faae50);
/* CHUNK of public_6ec3be0 */
extern "C" NAKED register_t __cdecl internal_6faae50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6ec44c0
        public_6faae58 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xC
        jmp public_6f15350
        public_6faae63 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x18
        jmp public_6f15350
        public_6faae6e : nop
        mov eax, offset public_6fbefd4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faae50)
        ASM_EXPORT_ENTRY_FIRST(0x6faae58, public_6faae58)
        ASM_EXPORT_ENTRY(0x6faae63, public_6faae63)
        ASM_EXPORT_ENTRY_LAST(0x6faae6e, public_6faae6e)
    }
}

#undef public_6faae58
#undef public_6faae63
#undef public_6faae6e

#pragma init_seg(compiler)
extern "C" void const* const public_6faae58 = __AsmFindLabelExport(&internal_6faae50, 0x6faae58);
extern "C" void const* const public_6faae63 = __AsmFindLabelExport(&internal_6faae50, 0x6faae63);
extern "C" void const* const public_6faae6e = __AsmFindLabelExport(&internal_6faae50, 0x6faae6e);
