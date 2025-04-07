#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7230);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f33d20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faef18 _public_6faef18
#define public_6faef20 _public_6faef20
#define public_6faef2e _public_6faef2e
#define public_6faef3c _public_6faef3c
#define public_6faef4a _public_6faef4a
#define public_6faef52 _public_6faef52

PROC_DECLARE(0x6faef10, internal_6faef10, public_6faef10);
/* CHUNK of public_6f472e0 */
extern "C" NAKED register_t __cdecl internal_6faef10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f33d20
        public_6faef18 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6eb7230
        public_6faef20 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x128
        jmp public_6eec8d0
        public_6faef2e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x13C
        jmp public_6eec8d0
        public_6faef3c : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x158
        jmp public_6ecfa90
        public_6faef4a : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f15350
        public_6faef52 : nop
        mov eax, offset public_6fc3ec0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faef10)
        ASM_EXPORT_ENTRY_FIRST(0x6faef18, public_6faef18)
        ASM_EXPORT_ENTRY(0x6faef20, public_6faef20)
        ASM_EXPORT_ENTRY(0x6faef2e, public_6faef2e)
        ASM_EXPORT_ENTRY(0x6faef3c, public_6faef3c)
        ASM_EXPORT_ENTRY(0x6faef4a, public_6faef4a)
        ASM_EXPORT_ENTRY_LAST(0x6faef52, public_6faef52)
    }
}

#undef public_6faef18
#undef public_6faef20
#undef public_6faef2e
#undef public_6faef3c
#undef public_6faef4a
#undef public_6faef52

#pragma init_seg(compiler)
extern "C" void const* const public_6faef18 = __AsmFindLabelExport(&internal_6faef10, 0x6faef18);
extern "C" void const* const public_6faef20 = __AsmFindLabelExport(&internal_6faef10, 0x6faef20);
extern "C" void const* const public_6faef2e = __AsmFindLabelExport(&internal_6faef10, 0x6faef2e);
extern "C" void const* const public_6faef3c = __AsmFindLabelExport(&internal_6faef10, 0x6faef3c);
extern "C" void const* const public_6faef4a = __AsmFindLabelExport(&internal_6faef10, 0x6faef4a);
extern "C" void const* const public_6faef52 = __AsmFindLabelExport(&internal_6faef10, 0x6faef52);
