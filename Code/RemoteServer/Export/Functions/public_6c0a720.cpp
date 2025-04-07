#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdabb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a728 _public_6c0a728
#define public_6c0a733 _public_6c0a733
#define public_6c0a73e _public_6c0a73e

PROC_DECLARE(0x6c0a720, internal_6c0a720, public_6c0a720);
/* CHUNK of public_6be5a50 */
extern "C" NAKED register_t __cdecl internal_6c0a720()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6bebe40
        public_6c0a728 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_6bdabb0
        public_6c0a733 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_6bdabb0
        public_6c0a73e : nop
        mov eax, offset public_6c0ede8
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a720)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a728, public_6c0a728)
        ASM_EXPORT_ENTRY(0x6c0a733, public_6c0a733)
        ASM_EXPORT_ENTRY_LAST(0x6c0a73e, public_6c0a73e)
    }
}

#undef public_6c0a728
#undef public_6c0a733
#undef public_6c0a73e

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a728 = __AsmFindLabelExport(&internal_6c0a720, 0x6c0a728);
extern "C" void const* const public_6c0a733 = __AsmFindLabelExport(&internal_6c0a720, 0x6c0a733);
extern "C" void const* const public_6c0a73e = __AsmFindLabelExport(&internal_6c0a720, 0x6c0a73e);
