#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdabb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a778 _public_6c0a778
#define public_6c0a783 _public_6c0a783
#define public_6c0a78e _public_6c0a78e

PROC_DECLARE(0x6c0a770, internal_6c0a770, public_6c0a770);
/* CHUNK of public_6be63e0 */
extern "C" NAKED register_t __cdecl internal_6c0a770()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6bebe40
        public_6c0a778 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_6bdabb0
        public_6c0a783 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6bdabb0
        public_6c0a78e : nop
        mov eax, offset public_6c0ee40
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a770)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a778, public_6c0a778)
        ASM_EXPORT_ENTRY(0x6c0a783, public_6c0a783)
        ASM_EXPORT_ENTRY_LAST(0x6c0a78e, public_6c0a78e)
    }
}

#undef public_6c0a778
#undef public_6c0a783
#undef public_6c0a78e

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a778 = __AsmFindLabelExport(&internal_6c0a770, 0x6c0a778);
extern "C" void const* const public_6c0a783 = __AsmFindLabelExport(&internal_6c0a770, 0x6c0a783);
extern "C" void const* const public_6c0a78e = __AsmFindLabelExport(&internal_6c0a770, 0x6c0a78e);
