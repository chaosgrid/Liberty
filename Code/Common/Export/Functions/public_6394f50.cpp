#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394f58 _public_6394f58
#define public_6394f60 _public_6394f60
#define public_6394f6b _public_6394f6b
#define public_6394f73 _public_6394f73
#define public_6394f81 _public_6394f81

PROC_DECLARE(0x6394f50, internal_6394f50, public_6394f50);
/* CHUNK of public_62cf230 */
extern "C" NAKED register_t __cdecl internal_6394f50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394f58 : nop
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6394f60 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_62881d0
        public_6394f6b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62881d0
        public_6394f73 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xFC
        jmp public_62881d0
        public_6394f81 : nop
        mov eax, offset public_63ae680
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394f50)
        ASM_EXPORT_ENTRY_FIRST(0x6394f58, public_6394f58)
        ASM_EXPORT_ENTRY(0x6394f60, public_6394f60)
        ASM_EXPORT_ENTRY(0x6394f6b, public_6394f6b)
        ASM_EXPORT_ENTRY(0x6394f73, public_6394f73)
        ASM_EXPORT_ENTRY_LAST(0x6394f81, public_6394f81)
    }
}

#undef public_6394f58
#undef public_6394f60
#undef public_6394f6b
#undef public_6394f73
#undef public_6394f81

#pragma init_seg(compiler)
extern "C" void const* const public_6394f58 = __AsmFindLabelExport(&internal_6394f50, 0x6394f58);
extern "C" void const* const public_6394f60 = __AsmFindLabelExport(&internal_6394f50, 0x6394f60);
extern "C" void const* const public_6394f6b = __AsmFindLabelExport(&internal_6394f50, 0x6394f6b);
extern "C" void const* const public_6394f73 = __AsmFindLabelExport(&internal_6394f50, 0x6394f73);
extern "C" void const* const public_6394f81 = __AsmFindLabelExport(&internal_6394f50, 0x6394f81);
