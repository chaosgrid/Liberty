#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7230);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faeb38 _public_6faeb38
#define public_6faeb46 _public_6faeb46
#define public_6faeb54 _public_6faeb54
#define public_6faeb62 _public_6faeb62
#define public_6faeb6a _public_6faeb6a

PROC_DECLARE(0x6faeb30, internal_6faeb30, public_6faeb30);
/* CHUNK of public_6f33d20 */
extern "C" NAKED register_t __cdecl internal_6faeb30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6eb7230
        public_6faeb38 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x128
        jmp public_6eec8d0
        public_6faeb46 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x13C
        jmp public_6eec8d0
        public_6faeb54 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x158
        jmp public_6ecfa90
        public_6faeb62 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f15350
        public_6faeb6a : nop
        mov eax, offset public_6fc3b30
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faeb30)
        ASM_EXPORT_ENTRY_FIRST(0x6faeb38, public_6faeb38)
        ASM_EXPORT_ENTRY(0x6faeb46, public_6faeb46)
        ASM_EXPORT_ENTRY(0x6faeb54, public_6faeb54)
        ASM_EXPORT_ENTRY(0x6faeb62, public_6faeb62)
        ASM_EXPORT_ENTRY_LAST(0x6faeb6a, public_6faeb6a)
    }
}

#undef public_6faeb38
#undef public_6faeb46
#undef public_6faeb54
#undef public_6faeb62
#undef public_6faeb6a

#pragma init_seg(compiler)
extern "C" void const* const public_6faeb38 = __AsmFindLabelExport(&internal_6faeb30, 0x6faeb38);
extern "C" void const* const public_6faeb46 = __AsmFindLabelExport(&internal_6faeb30, 0x6faeb46);
extern "C" void const* const public_6faeb54 = __AsmFindLabelExport(&internal_6faeb30, 0x6faeb54);
extern "C" void const* const public_6faeb62 = __AsmFindLabelExport(&internal_6faeb30, 0x6faeb62);
extern "C" void const* const public_6faeb6a = __AsmFindLabelExport(&internal_6faeb30, 0x6faeb6a);
