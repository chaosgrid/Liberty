#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394d58 _public_6394d58
#define public_6394d63 _public_6394d63
#define public_6394d71 _public_6394d71
#define public_6394d7f _public_6394d7f
#define public_6394d87 _public_6394d87
#define public_6394d95 _public_6394d95

PROC_DECLARE(0x6394d50, internal_6394d50, public_6394d50);
/* CHUNK of public_62ca350 */
extern "C" NAKED register_t __cdecl internal_6394d50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394d58 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_62c3040
        public_6394d63 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x88
        jmp public_62c3040
        public_6394d71 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x148
        jmp public_62c3040
        public_6394d7f : nop
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6394d87 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1D4
        jmp public_62881d0
        public_6394d95 : nop
        mov eax, offset public_63ae3d4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394d50)
        ASM_EXPORT_ENTRY_FIRST(0x6394d58, public_6394d58)
        ASM_EXPORT_ENTRY(0x6394d63, public_6394d63)
        ASM_EXPORT_ENTRY(0x6394d71, public_6394d71)
        ASM_EXPORT_ENTRY(0x6394d7f, public_6394d7f)
        ASM_EXPORT_ENTRY(0x6394d87, public_6394d87)
        ASM_EXPORT_ENTRY_LAST(0x6394d95, public_6394d95)
    }
}

#undef public_6394d58
#undef public_6394d63
#undef public_6394d71
#undef public_6394d7f
#undef public_6394d87
#undef public_6394d95

#pragma init_seg(compiler)
extern "C" void const* const public_6394d58 = __AsmFindLabelExport(&internal_6394d50, 0x6394d58);
extern "C" void const* const public_6394d63 = __AsmFindLabelExport(&internal_6394d50, 0x6394d63);
extern "C" void const* const public_6394d71 = __AsmFindLabelExport(&internal_6394d50, 0x6394d71);
extern "C" void const* const public_6394d7f = __AsmFindLabelExport(&internal_6394d50, 0x6394d7f);
extern "C" void const* const public_6394d87 = __AsmFindLabelExport(&internal_6394d50, 0x6394d87);
extern "C" void const* const public_6394d95 = __AsmFindLabelExport(&internal_6394d50, 0x6394d95);
