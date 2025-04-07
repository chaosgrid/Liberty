#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6be1270);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a6c8 _public_6c0a6c8
#define public_6c0a6d3 _public_6c0a6d3
#define public_6c0a6de _public_6c0a6de
#define public_6c0a6ea _public_6c0a6ea

PROC_DECLARE(0x6c0a6c0, internal_6c0a6c0, public_6c0a6c0);
/* CHUNK of public_6be5340 */
extern "C" NAKED register_t __cdecl internal_6c0a6c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6bebe40
        public_6c0a6c8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6be1270
        public_6c0a6d3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp public_6bdc790
        public_6c0a6de : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp dword ptr ds : [public_6c0b03c]
        public_6c0a6ea : nop
        mov eax, offset public_6c0ed90
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a6c0)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a6c8, public_6c0a6c8)
        ASM_EXPORT_ENTRY(0x6c0a6d3, public_6c0a6d3)
        ASM_EXPORT_ENTRY(0x6c0a6de, public_6c0a6de)
        ASM_EXPORT_ENTRY_LAST(0x6c0a6ea, public_6c0a6ea)
    }
}

#undef public_6c0a6c8
#undef public_6c0a6d3
#undef public_6c0a6de
#undef public_6c0a6ea

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a6c8 = __AsmFindLabelExport(&internal_6c0a6c0, 0x6c0a6c8);
extern "C" void const* const public_6c0a6d3 = __AsmFindLabelExport(&internal_6c0a6c0, 0x6c0a6d3);
extern "C" void const* const public_6c0a6de = __AsmFindLabelExport(&internal_6c0a6c0, 0x6c0a6de);
extern "C" void const* const public_6c0a6ea = __AsmFindLabelExport(&internal_6c0a6c0, 0x6c0a6ea);
