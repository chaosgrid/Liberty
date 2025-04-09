#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442880);
CLANG_FORWARD_PROC_SYMBOL(public_4539e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9f9f _public_5b9f9f
#define public_5b9fae _public_5b9fae
#define public_5b9fbc _public_5b9fbc
#define public_5b9fca _public_5b9fca
#define public_5b9fd8 _public_5b9fd8

PROC_DECLARE(0x5b9f90, internal_5b9f90, public_5b9f90);
/* CHUNK of public_454bb0 */
extern "C" NAKED register_t __cdecl internal_5b9f90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xD4
        jmp dword ptr ds : [public_5c6098]
        public_5b9f9f : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xEC
        jmp dword ptr ds : [public_5c6098]
        public_5b9fae : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x114
        jmp public_4539e0
        public_5b9fbc : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x124
        jmp public_442880
        public_5b9fca : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x130
        jmp public_442880
        public_5b9fd8 : nop
        mov eax, offset public_5f42d8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9f90)
        ASM_EXPORT_ENTRY_FIRST(0x5b9f9f, public_5b9f9f)
        ASM_EXPORT_ENTRY(0x5b9fae, public_5b9fae)
        ASM_EXPORT_ENTRY(0x5b9fbc, public_5b9fbc)
        ASM_EXPORT_ENTRY(0x5b9fca, public_5b9fca)
        ASM_EXPORT_ENTRY_LAST(0x5b9fd8, public_5b9fd8)
    }
}

#undef public_5b9f9f
#undef public_5b9fae
#undef public_5b9fbc
#undef public_5b9fca
#undef public_5b9fd8

#pragma init_seg(compiler)
extern "C" void const* const public_5b9f9f = __AsmFindLabelExport(&internal_5b9f90, 0x5b9f9f);
extern "C" void const* const public_5b9fae = __AsmFindLabelExport(&internal_5b9f90, 0x5b9fae);
extern "C" void const* const public_5b9fbc = __AsmFindLabelExport(&internal_5b9f90, 0x5b9fbc);
extern "C" void const* const public_5b9fca = __AsmFindLabelExport(&internal_5b9f90, 0x5b9fca);
extern "C" void const* const public_5b9fd8 = __AsmFindLabelExport(&internal_5b9f90, 0x5b9fd8);
