#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7900);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadc6b _public_6fadc6b
#define public_6fadc76 _public_6fadc76
#define public_6fadc8e _public_6fadc8e
#define public_6fadc95 _public_6fadc95
#define public_6fadc9d _public_6fadc9d
#define public_6fadcb8 _public_6fadcb8
#define public_6fadcc2 _public_6fadcc2
#define public_6fadccd _public_6fadccd

PROC_DECLARE(0x6fadc60, internal_6fadc60, public_6fadc60);
/* CHUNK of public_6f1cd40 */
extern "C" NAKED register_t __cdecl internal_6fadc60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 8
        jmp public_6eb7900
        public_6fadc6b : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x28
        jmp public_6eb7900
        public_6fadc76 : nop
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6fadc8e
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 4
        mov dword ptr ss : [ebp-0x6C], eax
        jmp public_6fadc95
        public_6fadc8e : nop
        mov dword ptr ss : [ebp-0x6C], 0
        public_6fadc95 : nop
        mov ecx, dword ptr ss : [ebp-0x6C]
        jmp public_6f15350
        public_6fadc9d : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6fadcb8
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 4
        mov dword ptr ss : [ebp-0xB4], eax
        jmp public_6fadcc2
        public_6fadcb8 : nop
        mov dword ptr ss : [ebp-0xB4], 0
        public_6fadcc2 : nop
        mov ecx, dword ptr ss : [ebp-0xB4]
        jmp public_6f15350
        public_6fadccd : nop
        mov eax, offset public_6fc2bf0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fadc60)
        ASM_EXPORT_ENTRY_FIRST(0x6fadc6b, public_6fadc6b)
        ASM_EXPORT_ENTRY(0x6fadc76, public_6fadc76)
        ASM_EXPORT_ENTRY(0x6fadc8e, public_6fadc8e)
        ASM_EXPORT_ENTRY(0x6fadc95, public_6fadc95)
        ASM_EXPORT_ENTRY(0x6fadc9d, public_6fadc9d)
        ASM_EXPORT_ENTRY(0x6fadcb8, public_6fadcb8)
        ASM_EXPORT_ENTRY(0x6fadcc2, public_6fadcc2)
        ASM_EXPORT_ENTRY_LAST(0x6fadccd, public_6fadccd)
    }
}

#undef public_6fadc6b
#undef public_6fadc76
#undef public_6fadc8e
#undef public_6fadc95
#undef public_6fadc9d
#undef public_6fadcb8
#undef public_6fadcc2
#undef public_6fadccd

#pragma init_seg(compiler)
extern "C" void const* const public_6fadc6b = __AsmFindLabelExport(&internal_6fadc60, 0x6fadc6b);
extern "C" void const* const public_6fadc76 = __AsmFindLabelExport(&internal_6fadc60, 0x6fadc76);
extern "C" void const* const public_6fadc8e = __AsmFindLabelExport(&internal_6fadc60, 0x6fadc8e);
extern "C" void const* const public_6fadc95 = __AsmFindLabelExport(&internal_6fadc60, 0x6fadc95);
extern "C" void const* const public_6fadc9d = __AsmFindLabelExport(&internal_6fadc60, 0x6fadc9d);
extern "C" void const* const public_6fadcb8 = __AsmFindLabelExport(&internal_6fadc60, 0x6fadcb8);
extern "C" void const* const public_6fadcc2 = __AsmFindLabelExport(&internal_6fadc60, 0x6fadcc2);
extern "C" void const* const public_6fadccd = __AsmFindLabelExport(&internal_6fadc60, 0x6fadccd);
