#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6be1270);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a7a8 _public_6c0a7a8
#define public_6c0a7b3 _public_6c0a7b3
#define public_6c0a7be _public_6c0a7be
#define public_6c0a7ca _public_6c0a7ca

PROC_DECLARE(0x6c0a7a0, internal_6c0a7a0, public_6c0a7a0);
/* CHUNK of public_6be7410 */
extern "C" NAKED register_t __cdecl internal_6c0a7a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6bebe40
        public_6c0a7a8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6be1270
        public_6c0a7b3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp public_6bdc790
        public_6c0a7be : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp dword ptr ds : [public_6c0b03c]
        public_6c0a7ca : nop
        mov eax, offset public_6c0ee7c
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a7a0)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a7a8, public_6c0a7a8)
        ASM_EXPORT_ENTRY(0x6c0a7b3, public_6c0a7b3)
        ASM_EXPORT_ENTRY(0x6c0a7be, public_6c0a7be)
        ASM_EXPORT_ENTRY_LAST(0x6c0a7ca, public_6c0a7ca)
    }
}

#undef public_6c0a7a8
#undef public_6c0a7b3
#undef public_6c0a7be
#undef public_6c0a7ca

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a7a8 = __AsmFindLabelExport(&internal_6c0a7a0, 0x6c0a7a8);
extern "C" void const* const public_6c0a7b3 = __AsmFindLabelExport(&internal_6c0a7a0, 0x6c0a7b3);
extern "C" void const* const public_6c0a7be = __AsmFindLabelExport(&internal_6c0a7a0, 0x6c0a7be);
extern "C" void const* const public_6c0a7ca = __AsmFindLabelExport(&internal_6c0a7a0, 0x6c0a7ca);
