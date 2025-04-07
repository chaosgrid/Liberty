#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a820);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a870);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59048 _public_6f59048
#define public_6f59056 _public_6f59056
#define public_6f59064 _public_6f59064

PROC_DECLARE(0x6f59040, internal_6f59040, public_6f59040);
/* CHUNK of public_6f41210 */
extern "C" NAKED register_t __cdecl internal_6f59040()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f405e0
        public_6f59048 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x84
        jmp public_6f4a820
        public_6f59056 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE4
        jmp public_6f4a870
        public_6f59064 : nop
        mov eax, offset public_6f5c1f8
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59040)
        ASM_EXPORT_ENTRY_FIRST(0x6f59048, public_6f59048)
        ASM_EXPORT_ENTRY(0x6f59056, public_6f59056)
        ASM_EXPORT_ENTRY_LAST(0x6f59064, public_6f59064)
    }
}

#undef public_6f59048
#undef public_6f59056
#undef public_6f59064

#pragma init_seg(compiler)
extern "C" void const* const public_6f59048 = __AsmFindLabelExport(&internal_6f59040, 0x6f59048);
extern "C" void const* const public_6f59056 = __AsmFindLabelExport(&internal_6f59040, 0x6f59056);
extern "C" void const* const public_6f59064 = __AsmFindLabelExport(&internal_6f59040, 0x6f59064);
