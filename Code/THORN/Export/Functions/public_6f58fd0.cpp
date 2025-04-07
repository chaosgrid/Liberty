#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58fd8 _public_6f58fd8
#define public_6f58fe6 _public_6f58fe6
#define public_6f58ff4 _public_6f58ff4

PROC_DECLARE(0x6f58fd0, internal_6f58fd0, public_6f58fd0);
/* CHUNK of public_6f40d40 */
extern "C" NAKED register_t __cdecl internal_6f58fd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f405e0
        public_6f58fd8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xCC
        jmp public_6f4a7a0
        public_6f58fe6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xD0
        jmp public_6f4a7c0
        public_6f58ff4 : nop
        mov eax, offset public_6f5c188
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58fd0)
        ASM_EXPORT_ENTRY_FIRST(0x6f58fd8, public_6f58fd8)
        ASM_EXPORT_ENTRY(0x6f58fe6, public_6f58fe6)
        ASM_EXPORT_ENTRY_LAST(0x6f58ff4, public_6f58ff4)
    }
}

#undef public_6f58fd8
#undef public_6f58fe6
#undef public_6f58ff4

#pragma init_seg(compiler)
extern "C" void const* const public_6f58fd8 = __AsmFindLabelExport(&internal_6f58fd0, 0x6f58fd8);
extern "C" void const* const public_6f58fe6 = __AsmFindLabelExport(&internal_6f58fd0, 0x6f58fe6);
extern "C" void const* const public_6f58ff4 = __AsmFindLabelExport(&internal_6f58fd0, 0x6f58ff4);
