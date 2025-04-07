#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dc50);
CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_504bb0);
CLANG_FORWARD_PROC_SYMBOL(public_504be0);
CLANG_FORWARD_PROC_SYMBOL(public_504c30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf9a8 _public_5bf9a8
#define public_5bf9b3 _public_5bf9b3
#define public_5bf9be _public_5bf9be
#define public_5bf9cc _public_5bf9cc
#define public_5bf9da _public_5bf9da
#define public_5bf9e8 _public_5bf9e8

PROC_DECLARE(0x5bf9a0, internal_5bf9a0, public_5bf9a0);
/* CHUNK of public_504970 */
extern "C" NAKED register_t __cdecl internal_5bf9a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_504bb0
        public_5bf9a8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_41dc50
        public_5bf9b3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x38
        jmp public_504c30
        public_5bf9be : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE4
        jmp public_502d90
        public_5bf9cc : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xF4
        jmp public_4a2d30
        public_5bf9da : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x100
        jmp public_504be0
        public_5bf9e8 : nop
        mov eax, offset public_5f9928
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf9a0)
        ASM_EXPORT_ENTRY_FIRST(0x5bf9a8, public_5bf9a8)
        ASM_EXPORT_ENTRY(0x5bf9b3, public_5bf9b3)
        ASM_EXPORT_ENTRY(0x5bf9be, public_5bf9be)
        ASM_EXPORT_ENTRY(0x5bf9cc, public_5bf9cc)
        ASM_EXPORT_ENTRY(0x5bf9da, public_5bf9da)
        ASM_EXPORT_ENTRY_LAST(0x5bf9e8, public_5bf9e8)
    }
}

#undef public_5bf9a8
#undef public_5bf9b3
#undef public_5bf9be
#undef public_5bf9cc
#undef public_5bf9da
#undef public_5bf9e8

#pragma init_seg(compiler)
extern "C" void const* const public_5bf9a8 = __AsmFindLabelExport(&internal_5bf9a0, 0x5bf9a8);
extern "C" void const* const public_5bf9b3 = __AsmFindLabelExport(&internal_5bf9a0, 0x5bf9b3);
extern "C" void const* const public_5bf9be = __AsmFindLabelExport(&internal_5bf9a0, 0x5bf9be);
extern "C" void const* const public_5bf9cc = __AsmFindLabelExport(&internal_5bf9a0, 0x5bf9cc);
extern "C" void const* const public_5bf9da = __AsmFindLabelExport(&internal_5bf9a0, 0x5bf9da);
extern "C" void const* const public_5bf9e8 = __AsmFindLabelExport(&internal_5bf9a0, 0x5bf9e8);
