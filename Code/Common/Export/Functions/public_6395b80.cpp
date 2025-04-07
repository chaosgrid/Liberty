#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62c3060);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395b88 _public_6395b88
#define public_6395b93 _public_6395b93
#define public_6395ba1 _public_6395ba1
#define public_6395baf _public_6395baf
#define public_6395bb7 _public_6395bb7
#define public_6395bc5 _public_6395bc5
#define public_6395bd3 _public_6395bd3

PROC_DECLARE(0x6395b80, internal_6395b80, public_6395b80);
/* CHUNK of public_62fd620 */
extern "C" NAKED register_t __cdecl internal_6395b80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6395b88 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_62c3040
        public_6395b93 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA4
        jmp public_62c3040
        public_6395ba1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x164
        jmp public_62c3060
        public_6395baf : nop
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6395bb7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x310
        jmp public_62881d0
        public_6395bc5 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x370
        jmp public_62881d0
        public_6395bd3 : nop
        mov eax, offset public_63af9c0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395b80)
        ASM_EXPORT_ENTRY_FIRST(0x6395b88, public_6395b88)
        ASM_EXPORT_ENTRY(0x6395b93, public_6395b93)
        ASM_EXPORT_ENTRY(0x6395ba1, public_6395ba1)
        ASM_EXPORT_ENTRY(0x6395baf, public_6395baf)
        ASM_EXPORT_ENTRY(0x6395bb7, public_6395bb7)
        ASM_EXPORT_ENTRY(0x6395bc5, public_6395bc5)
        ASM_EXPORT_ENTRY_LAST(0x6395bd3, public_6395bd3)
    }
}

#undef public_6395b88
#undef public_6395b93
#undef public_6395ba1
#undef public_6395baf
#undef public_6395bb7
#undef public_6395bc5
#undef public_6395bd3

#pragma init_seg(compiler)
extern "C" void const* const public_6395b88 = __AsmFindLabelExport(&internal_6395b80, 0x6395b88);
extern "C" void const* const public_6395b93 = __AsmFindLabelExport(&internal_6395b80, 0x6395b93);
extern "C" void const* const public_6395ba1 = __AsmFindLabelExport(&internal_6395b80, 0x6395ba1);
extern "C" void const* const public_6395baf = __AsmFindLabelExport(&internal_6395b80, 0x6395baf);
extern "C" void const* const public_6395bb7 = __AsmFindLabelExport(&internal_6395b80, 0x6395bb7);
extern "C" void const* const public_6395bc5 = __AsmFindLabelExport(&internal_6395b80, 0x6395bc5);
extern "C" void const* const public_6395bd3 = __AsmFindLabelExport(&internal_6395b80, 0x6395bd3);
