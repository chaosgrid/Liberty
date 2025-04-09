#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_555a60);
CLANG_FORWARD_PROC_SYMBOL(public_5581b0);
CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b98b8 _public_5b98b8
#define public_5b98c4 _public_5b98c4
#define public_5b98cf _public_5b98cf
#define public_5b98da _public_5b98da
#define public_5b98e5 _public_5b98e5

PROC_DECLARE(0x5b98b0, internal_5b98b0, public_5b98b0);
/* CHUNK of public_445f40 */
extern "C" NAKED register_t __cdecl internal_5b98b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_5594b0
        public_5b98b8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x38
        jmp dword ptr ds : [public_5c7090]
        public_5b98c4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_555a60
        public_5b98cf : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x68
        jmp public_4a2d30
        public_5b98da : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp public_5581b0
        public_5b98e5 : nop
        mov eax, offset public_5f3920
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b98b0)
        ASM_EXPORT_ENTRY_FIRST(0x5b98b8, public_5b98b8)
        ASM_EXPORT_ENTRY(0x5b98c4, public_5b98c4)
        ASM_EXPORT_ENTRY(0x5b98cf, public_5b98cf)
        ASM_EXPORT_ENTRY(0x5b98da, public_5b98da)
        ASM_EXPORT_ENTRY_LAST(0x5b98e5, public_5b98e5)
    }
}

#undef public_5b98b8
#undef public_5b98c4
#undef public_5b98cf
#undef public_5b98da
#undef public_5b98e5

#pragma init_seg(compiler)
extern "C" void const* const public_5b98b8 = __AsmFindLabelExport(&internal_5b98b0, 0x5b98b8);
extern "C" void const* const public_5b98c4 = __AsmFindLabelExport(&internal_5b98b0, 0x5b98c4);
extern "C" void const* const public_5b98cf = __AsmFindLabelExport(&internal_5b98b0, 0x5b98cf);
extern "C" void const* const public_5b98da = __AsmFindLabelExport(&internal_5b98b0, 0x5b98da);
extern "C" void const* const public_5b98e5 = __AsmFindLabelExport(&internal_5b98b0, 0x5b98e5);
