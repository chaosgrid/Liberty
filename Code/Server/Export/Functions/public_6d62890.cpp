#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d20a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d22200);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62898 _public_6d62898
#define public_6d628a3 _public_6d628a3
#define public_6d628ab _public_6d628ab
#define public_6d628b3 _public_6d628b3
#define public_6d628bb _public_6d628bb

PROC_DECLARE(0x6d62890, internal_6d62890, public_6d62890);
/* CHUNK of public_6d222b0 */
extern "C" NAKED register_t __cdecl internal_6d62890()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6d22200
        public_6d62898 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x30
        jmp public_6d209f0
        public_6d628a3 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6d20a40
        public_6d628ab : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6d209f0
        public_6d628b3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6d20a40
        public_6d628bb : nop
        mov eax, offset public_6d73644
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62890)
        ASM_EXPORT_ENTRY_FIRST(0x6d62898, public_6d62898)
        ASM_EXPORT_ENTRY(0x6d628a3, public_6d628a3)
        ASM_EXPORT_ENTRY(0x6d628ab, public_6d628ab)
        ASM_EXPORT_ENTRY(0x6d628b3, public_6d628b3)
        ASM_EXPORT_ENTRY_LAST(0x6d628bb, public_6d628bb)
    }
}

#undef public_6d62898
#undef public_6d628a3
#undef public_6d628ab
#undef public_6d628b3
#undef public_6d628bb

#pragma init_seg(compiler)
extern "C" void const* const public_6d62898 = __AsmFindLabelExport(&internal_6d62890, 0x6d62898);
extern "C" void const* const public_6d628a3 = __AsmFindLabelExport(&internal_6d62890, 0x6d628a3);
extern "C" void const* const public_6d628ab = __AsmFindLabelExport(&internal_6d62890, 0x6d628ab);
extern "C" void const* const public_6d628b3 = __AsmFindLabelExport(&internal_6d62890, 0x6d628b3);
extern "C" void const* const public_6d628bb = __AsmFindLabelExport(&internal_6d62890, 0x6d628bb);
