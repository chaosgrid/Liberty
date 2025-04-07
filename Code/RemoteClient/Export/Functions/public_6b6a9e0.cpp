#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b40300);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a9e8 _public_6b6a9e8
#define public_6b6a9f3 _public_6b6a9f3
#define public_6b6a9fe _public_6b6a9fe
#define public_6b6aa0a _public_6b6aa0a

PROC_DECLARE(0x6b6a9e0, internal_6b6a9e0, public_6b6a9e0);
/* CHUNK of public_6b4a840 */
extern "C" NAKED register_t __cdecl internal_6b6a9e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6b4e730
        public_6b6a9e8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6b40300
        public_6b6a9f3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp public_6b3a450
        public_6b6a9fe : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp dword ptr ds : [public_6b6b008]
        public_6b6aa0a : nop
        mov eax, offset public_6b6f094
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a9e0)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a9e8, public_6b6a9e8)
        ASM_EXPORT_ENTRY(0x6b6a9f3, public_6b6a9f3)
        ASM_EXPORT_ENTRY(0x6b6a9fe, public_6b6a9fe)
        ASM_EXPORT_ENTRY_LAST(0x6b6aa0a, public_6b6aa0a)
    }
}

#undef public_6b6a9e8
#undef public_6b6a9f3
#undef public_6b6a9fe
#undef public_6b6aa0a

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a9e8 = __AsmFindLabelExport(&internal_6b6a9e0, 0x6b6a9e8);
extern "C" void const* const public_6b6a9f3 = __AsmFindLabelExport(&internal_6b6a9e0, 0x6b6a9f3);
extern "C" void const* const public_6b6a9fe = __AsmFindLabelExport(&internal_6b6a9e0, 0x6b6a9fe);
extern "C" void const* const public_6b6aa0a = __AsmFindLabelExport(&internal_6b6a9e0, 0x6b6aa0a);
