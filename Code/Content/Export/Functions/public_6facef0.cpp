#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facefb _public_6facefb
#define public_6facf03 _public_6facf03
#define public_6facf0e _public_6facf0e

PROC_DECLARE(0x6facef0, internal_6facef0, public_6facef0);
/* CHUNK of public_6f06ed0 */
extern "C" NAKED register_t __cdecl internal_6facef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6facefb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea8cc0
        public_6facf03 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_6f28e10
        public_6facf0e : nop
        mov eax, offset public_6fc1c80
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facef0)
        ASM_EXPORT_ENTRY_FIRST(0x6facefb, public_6facefb)
        ASM_EXPORT_ENTRY(0x6facf03, public_6facf03)
        ASM_EXPORT_ENTRY_LAST(0x6facf0e, public_6facf0e)
    }
}

#undef public_6facefb
#undef public_6facf03
#undef public_6facf0e

#pragma init_seg(compiler)
extern "C" void const* const public_6facefb = __AsmFindLabelExport(&internal_6facef0, 0x6facefb);
extern "C" void const* const public_6facf03 = __AsmFindLabelExport(&internal_6facef0, 0x6facf03);
extern "C" void const* const public_6facf0e = __AsmFindLabelExport(&internal_6facef0, 0x6facf0e);
