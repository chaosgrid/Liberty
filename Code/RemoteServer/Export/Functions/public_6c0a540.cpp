#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a54b _public_6c0a54b
#define public_6c0a55a _public_6c0a55a
#define public_6c0a569 _public_6c0a569
#define public_6c0a577 _public_6c0a577

PROC_DECLARE(0x6c0a540, internal_6c0a540, public_6c0a540);
/* CHUNK of public_6bdebe0 */
extern "C" NAKED register_t __cdecl internal_6c0a540()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6c09aaa
        pop ecx
        ret 
        public_6c0a54b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x204
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a55a : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x214
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a569 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x264
        jmp public_6bdc790
        public_6c0a577 : nop
        mov eax, offset public_6c0ec34
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a540)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a54b, public_6c0a54b)
        ASM_EXPORT_ENTRY(0x6c0a55a, public_6c0a55a)
        ASM_EXPORT_ENTRY(0x6c0a569, public_6c0a569)
        ASM_EXPORT_ENTRY_LAST(0x6c0a577, public_6c0a577)
    }
}

#undef public_6c0a54b
#undef public_6c0a55a
#undef public_6c0a569
#undef public_6c0a577

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a54b = __AsmFindLabelExport(&internal_6c0a540, 0x6c0a54b);
extern "C" void const* const public_6c0a55a = __AsmFindLabelExport(&internal_6c0a540, 0x6c0a55a);
extern "C" void const* const public_6c0a569 = __AsmFindLabelExport(&internal_6c0a540, 0x6c0a569);
extern "C" void const* const public_6c0a577 = __AsmFindLabelExport(&internal_6c0a540, 0x6c0a577);
