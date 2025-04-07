#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b40300);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6ab08 _public_6b6ab08
#define public_6b6ab13 _public_6b6ab13
#define public_6b6ab1e _public_6b6ab1e
#define public_6b6ab2a _public_6b6ab2a

PROC_DECLARE(0x6b6ab00, internal_6b6ab00, public_6b6ab00);
/* CHUNK of public_6b4c920 */
extern "C" NAKED register_t __cdecl internal_6b6ab00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6b4e730
        public_6b6ab08 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x30
        jmp public_6b40300
        public_6b6ab13 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x70
        jmp public_6b3a450
        public_6b6ab1e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x74
        jmp dword ptr ds : [public_6b6b008]
        public_6b6ab2a : nop
        mov eax, offset public_6b6f1bc
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6ab00)
        ASM_EXPORT_ENTRY_FIRST(0x6b6ab08, public_6b6ab08)
        ASM_EXPORT_ENTRY(0x6b6ab13, public_6b6ab13)
        ASM_EXPORT_ENTRY(0x6b6ab1e, public_6b6ab1e)
        ASM_EXPORT_ENTRY_LAST(0x6b6ab2a, public_6b6ab2a)
    }
}

#undef public_6b6ab08
#undef public_6b6ab13
#undef public_6b6ab1e
#undef public_6b6ab2a

#pragma init_seg(compiler)
extern "C" void const* const public_6b6ab08 = __AsmFindLabelExport(&internal_6b6ab00, 0x6b6ab08);
extern "C" void const* const public_6b6ab13 = __AsmFindLabelExport(&internal_6b6ab00, 0x6b6ab13);
extern "C" void const* const public_6b6ab1e = __AsmFindLabelExport(&internal_6b6ab00, 0x6b6ab1e);
extern "C" void const* const public_6b6ab2a = __AsmFindLabelExport(&internal_6b6ab00, 0x6b6ab2a);
