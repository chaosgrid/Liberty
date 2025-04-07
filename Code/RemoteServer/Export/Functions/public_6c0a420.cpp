#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdabb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a428 _public_6c0a428
#define public_6c0a433 _public_6c0a433
#define public_6c0a43e _public_6c0a43e

PROC_DECLARE(0x6c0a420, internal_6c0a420, public_6c0a420);
/* CHUNK of public_6bdaad0 */
extern "C" NAKED register_t __cdecl internal_6c0a420()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6bebe40
        public_6c0a428 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_6bdabb0
        public_6c0a433 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x30
        jmp public_6bdabb0
        public_6c0a43e : nop
        mov eax, offset public_6c0eb0c
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a420)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a428, public_6c0a428)
        ASM_EXPORT_ENTRY(0x6c0a433, public_6c0a433)
        ASM_EXPORT_ENTRY_LAST(0x6c0a43e, public_6c0a43e)
    }
}

#undef public_6c0a428
#undef public_6c0a433
#undef public_6c0a43e

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a428 = __AsmFindLabelExport(&internal_6c0a420, 0x6c0a428);
extern "C" void const* const public_6c0a433 = __AsmFindLabelExport(&internal_6c0a420, 0x6c0a433);
extern "C" void const* const public_6c0a43e = __AsmFindLabelExport(&internal_6c0a420, 0x6c0a43e);
