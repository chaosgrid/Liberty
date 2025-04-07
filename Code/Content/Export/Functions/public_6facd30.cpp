#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f05cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facd48 _public_6facd48
#define public_6facd4f _public_6facd4f
#define public_6facd57 _public_6facd57
#define public_6facd62 _public_6facd62
#define public_6facd6d _public_6facd6d

PROC_DECLARE(0x6facd30, internal_6facd30, public_6facd30);
/* CHUNK of public_6f05990 */
extern "C" NAKED register_t __cdecl internal_6facd30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6facd48
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 4
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6facd4f
        public_6facd48 : nop
        mov dword ptr ss : [ebp-0x18], 0
        public_6facd4f : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f05cf0
        public_6facd57 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_6f15350
        public_6facd62 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x18
        jmp public_6f15350
        public_6facd6d : nop
        mov eax, offset public_6fc1a24
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facd30)
        ASM_EXPORT_ENTRY_FIRST(0x6facd48, public_6facd48)
        ASM_EXPORT_ENTRY(0x6facd4f, public_6facd4f)
        ASM_EXPORT_ENTRY(0x6facd57, public_6facd57)
        ASM_EXPORT_ENTRY(0x6facd62, public_6facd62)
        ASM_EXPORT_ENTRY_LAST(0x6facd6d, public_6facd6d)
    }
}

#undef public_6facd48
#undef public_6facd4f
#undef public_6facd57
#undef public_6facd62
#undef public_6facd6d

#pragma init_seg(compiler)
extern "C" void const* const public_6facd48 = __AsmFindLabelExport(&internal_6facd30, 0x6facd48);
extern "C" void const* const public_6facd4f = __AsmFindLabelExport(&internal_6facd30, 0x6facd4f);
extern "C" void const* const public_6facd57 = __AsmFindLabelExport(&internal_6facd30, 0x6facd57);
extern "C" void const* const public_6facd62 = __AsmFindLabelExport(&internal_6facd30, 0x6facd62);
extern "C" void const* const public_6facd6d = __AsmFindLabelExport(&internal_6facd30, 0x6facd6d);
