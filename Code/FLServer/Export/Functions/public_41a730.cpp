#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c78);
CLANG_FORWARD_PROC_SYMBOL(public_418d86);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a738 _public_41a738
#define public_41a743 _public_41a743
#define public_41a751 _public_41a751
#define public_41a75f _public_41a75f
#define public_41a76d _public_41a76d
#define public_41a77b _public_41a77b

PROC_DECLARE(0x41a730, internal_41a730, public_41a730);
/* CHUNK of public_4128c0 */
extern "C" NAKED register_t __cdecl internal_41a730()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_41a738 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp public_418c78
        public_41a743 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA0
        jmp public_418c78
        public_41a751 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE0
        jmp public_418c78
        public_41a75f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x120
        jmp public_418d86
        public_41a76d : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x160
        jmp public_418c78
        public_41a77b : nop
        mov eax, offset public_41f8a4
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a730)
        ASM_EXPORT_ENTRY_FIRST(0x41a738, public_41a738)
        ASM_EXPORT_ENTRY(0x41a743, public_41a743)
        ASM_EXPORT_ENTRY(0x41a751, public_41a751)
        ASM_EXPORT_ENTRY(0x41a75f, public_41a75f)
        ASM_EXPORT_ENTRY(0x41a76d, public_41a76d)
        ASM_EXPORT_ENTRY_LAST(0x41a77b, public_41a77b)
    }
}

#undef public_41a738
#undef public_41a743
#undef public_41a751
#undef public_41a75f
#undef public_41a76d
#undef public_41a77b

#pragma init_seg(compiler)
extern "C" void const* const public_41a738 = __AsmFindLabelExport(&internal_41a730, 0x41a738);
extern "C" void const* const public_41a743 = __AsmFindLabelExport(&internal_41a730, 0x41a743);
extern "C" void const* const public_41a751 = __AsmFindLabelExport(&internal_41a730, 0x41a751);
extern "C" void const* const public_41a75f = __AsmFindLabelExport(&internal_41a730, 0x41a75f);
extern "C" void const* const public_41a76d = __AsmFindLabelExport(&internal_41a730, 0x41a76d);
extern "C" void const* const public_41a77b = __AsmFindLabelExport(&internal_41a730, 0x41a77b);
