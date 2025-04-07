#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdabb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a4b8 _public_6c0a4b8
#define public_6c0a4c3 _public_6c0a4c3
#define public_6c0a4ce _public_6c0a4ce

PROC_DECLARE(0x6c0a4b0, internal_6c0a4b0, public_6c0a4b0);
/* CHUNK of public_6bdd4e0 */
extern "C" NAKED register_t __cdecl internal_6c0a4b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6bebe40
        public_6c0a4b8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x20
        jmp public_6bdabb0
        public_6c0a4c3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_6bdabb0
        public_6c0a4ce : nop
        mov eax, offset public_6c0ebac
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a4b0)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a4b8, public_6c0a4b8)
        ASM_EXPORT_ENTRY(0x6c0a4c3, public_6c0a4c3)
        ASM_EXPORT_ENTRY_LAST(0x6c0a4ce, public_6c0a4ce)
    }
}

#undef public_6c0a4b8
#undef public_6c0a4c3
#undef public_6c0a4ce

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a4b8 = __AsmFindLabelExport(&internal_6c0a4b0, 0x6c0a4b8);
extern "C" void const* const public_6c0a4c3 = __AsmFindLabelExport(&internal_6c0a4b0, 0x6c0a4c3);
extern "C" void const* const public_6c0a4ce = __AsmFindLabelExport(&internal_6c0a4b0, 0x6c0a4ce);
