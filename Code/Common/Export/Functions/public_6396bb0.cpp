#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279d90);
CLANG_FORWARD_PROC_SYMBOL(public_631cae0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396bb9 _public_6396bb9
#define public_6396bc1 _public_6396bc1
#define public_6396bc9 _public_6396bc9
#define public_6396bd8 _public_6396bd8
#define public_6396be0 _public_6396be0
#define public_6396bef _public_6396bef
#define public_6396bfe _public_6396bfe
#define public_6396c07 _public_6396c07

PROC_DECLARE(0x6396bb0, internal_6396bb0, public_6396bb0);
/* CHUNK of public_631c870 */
extern "C" NAKED register_t __cdecl internal_6396bb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x7C]
        jmp dword ptr ds : [public_63991ac]
        public_6396bb9 : nop
        lea ecx, ss:[ebp-0x80]
        jmp public_631cae0
        public_6396bc1 : nop
        lea ecx, ss:[ebp-0x5C]
        jmp public_6279d90
        public_6396bc9 : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_6396bd8 : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_6279d90
        public_6396be0 : nop
        mov ecx, dword ptr ss : [ebp-0x8C]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_6396bef : nop
        mov ecx, dword ptr ss : [ebp-0x8C]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_6396bfe : nop
        lea ecx, ss:[ebp-0x7C]
        jmp dword ptr ds : [public_63991ac]
        public_6396c07 : nop
        mov eax, offset public_63b0b5c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396bb0)
        ASM_EXPORT_ENTRY_FIRST(0x6396bb9, public_6396bb9)
        ASM_EXPORT_ENTRY(0x6396bc1, public_6396bc1)
        ASM_EXPORT_ENTRY(0x6396bc9, public_6396bc9)
        ASM_EXPORT_ENTRY(0x6396bd8, public_6396bd8)
        ASM_EXPORT_ENTRY(0x6396be0, public_6396be0)
        ASM_EXPORT_ENTRY(0x6396bef, public_6396bef)
        ASM_EXPORT_ENTRY(0x6396bfe, public_6396bfe)
        ASM_EXPORT_ENTRY_LAST(0x6396c07, public_6396c07)
    }
}

#undef public_6396bb9
#undef public_6396bc1
#undef public_6396bc9
#undef public_6396bd8
#undef public_6396be0
#undef public_6396bef
#undef public_6396bfe
#undef public_6396c07

#pragma init_seg(compiler)
extern "C" void const* const public_6396bb9 = __AsmFindLabelExport(&internal_6396bb0, 0x6396bb9);
extern "C" void const* const public_6396bc1 = __AsmFindLabelExport(&internal_6396bb0, 0x6396bc1);
extern "C" void const* const public_6396bc9 = __AsmFindLabelExport(&internal_6396bb0, 0x6396bc9);
extern "C" void const* const public_6396bd8 = __AsmFindLabelExport(&internal_6396bb0, 0x6396bd8);
extern "C" void const* const public_6396be0 = __AsmFindLabelExport(&internal_6396bb0, 0x6396be0);
extern "C" void const* const public_6396bef = __AsmFindLabelExport(&internal_6396bb0, 0x6396bef);
extern "C" void const* const public_6396bfe = __AsmFindLabelExport(&internal_6396bb0, 0x6396bfe);
extern "C" void const* const public_6396c07 = __AsmFindLabelExport(&internal_6396bb0, 0x6396c07);
