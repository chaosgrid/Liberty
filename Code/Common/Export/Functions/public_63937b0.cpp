#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_6287870);
CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63937b8 _public_63937b8
#define public_63937d0 _public_63937d0
#define public_63937d7 _public_63937d7
#define public_63937df _public_63937df
#define public_63937ea _public_63937ea
#define public_63937f2 _public_63937f2

PROC_DECLARE(0x63937b0, internal_63937b0, public_63937b0);
/* CHUNK of public_6295e40 */
extern "C" NAKED register_t __cdecl internal_63937b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_629f2f0
        public_63937b8 : nop
        cmp dword ptr ss : [ebp-0x14], 0
        je public_63937d0
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0x20
        mov dword ptr ss : [ebp-0x10], eax
        jmp public_63937d7
        public_63937d0 : nop
        mov dword ptr ss : [ebp-0x10], 0
        public_63937d7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6287870
        public_63937df : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x34
        jmp public_6269110
        public_63937ea : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6285b90
        public_63937f2 : nop
        mov eax, offset public_63aca10
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63937b0)
        ASM_EXPORT_ENTRY_FIRST(0x63937b8, public_63937b8)
        ASM_EXPORT_ENTRY(0x63937d0, public_63937d0)
        ASM_EXPORT_ENTRY(0x63937d7, public_63937d7)
        ASM_EXPORT_ENTRY(0x63937df, public_63937df)
        ASM_EXPORT_ENTRY(0x63937ea, public_63937ea)
        ASM_EXPORT_ENTRY_LAST(0x63937f2, public_63937f2)
    }
}

#undef public_63937b8
#undef public_63937d0
#undef public_63937d7
#undef public_63937df
#undef public_63937ea
#undef public_63937f2

#pragma init_seg(compiler)
extern "C" void const* const public_63937b8 = __AsmFindLabelExport(&internal_63937b0, 0x63937b8);
extern "C" void const* const public_63937d0 = __AsmFindLabelExport(&internal_63937b0, 0x63937d0);
extern "C" void const* const public_63937d7 = __AsmFindLabelExport(&internal_63937b0, 0x63937d7);
extern "C" void const* const public_63937df = __AsmFindLabelExport(&internal_63937b0, 0x63937df);
extern "C" void const* const public_63937ea = __AsmFindLabelExport(&internal_63937b0, 0x63937ea);
extern "C" void const* const public_63937f2 = __AsmFindLabelExport(&internal_63937b0, 0x63937f2);
