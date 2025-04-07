#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6be1ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a63b _public_6c0a63b
#define public_6c0a643 _public_6c0a643
#define public_6c0a64e _public_6c0a64e

PROC_DECLARE(0x6c0a630, internal_6c0a630, public_6c0a630);
/* CHUNK of public_6be12a0 */
extern "C" NAKED register_t __cdecl internal_6c0a630()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6c09aaa
        pop ecx
        ret 
        public_6c0a63b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6bda1b0
        public_6c0a643 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6be1ae0
        public_6c0a64e : nop
        mov eax, offset public_6c0ece0
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a630)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a63b, public_6c0a63b)
        ASM_EXPORT_ENTRY(0x6c0a643, public_6c0a643)
        ASM_EXPORT_ENTRY_LAST(0x6c0a64e, public_6c0a64e)
    }
}

#undef public_6c0a63b
#undef public_6c0a643
#undef public_6c0a64e

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a63b = __AsmFindLabelExport(&internal_6c0a630, 0x6c0a63b);
extern "C" void const* const public_6c0a643 = __AsmFindLabelExport(&internal_6c0a630, 0x6c0a643);
extern "C" void const* const public_6c0a64e = __AsmFindLabelExport(&internal_6c0a630, 0x6c0a64e);
