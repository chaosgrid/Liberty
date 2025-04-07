#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a890);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a910);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a930);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f591f8 _public_6f591f8
#define public_6f59206 _public_6f59206
#define public_6f59214 _public_6f59214
#define public_6f59222 _public_6f59222
#define public_6f59230 _public_6f59230

PROC_DECLARE(0x6f591f0, internal_6f591f0, public_6f591f0);
/* CHUNK of public_6f42ea0 */
extern "C" NAKED register_t __cdecl internal_6f591f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f405e0
        public_6f591f8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x104
        jmp public_6f4a890
        public_6f59206 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x108
        jmp public_6f4a8f0
        public_6f59214 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10C
        jmp public_6f4a910
        public_6f59222 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x110
        jmp public_6f4a930
        public_6f59230 : nop
        mov eax, offset public_6f5c3d4
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f591f0)
        ASM_EXPORT_ENTRY_FIRST(0x6f591f8, public_6f591f8)
        ASM_EXPORT_ENTRY(0x6f59206, public_6f59206)
        ASM_EXPORT_ENTRY(0x6f59214, public_6f59214)
        ASM_EXPORT_ENTRY(0x6f59222, public_6f59222)
        ASM_EXPORT_ENTRY_LAST(0x6f59230, public_6f59230)
    }
}

#undef public_6f591f8
#undef public_6f59206
#undef public_6f59214
#undef public_6f59222
#undef public_6f59230

#pragma init_seg(compiler)
extern "C" void const* const public_6f591f8 = __AsmFindLabelExport(&internal_6f591f0, 0x6f591f8);
extern "C" void const* const public_6f59206 = __AsmFindLabelExport(&internal_6f591f0, 0x6f59206);
extern "C" void const* const public_6f59214 = __AsmFindLabelExport(&internal_6f591f0, 0x6f59214);
extern "C" void const* const public_6f59222 = __AsmFindLabelExport(&internal_6f591f0, 0x6f59222);
extern "C" void const* const public_6f59230 = __AsmFindLabelExport(&internal_6f591f0, 0x6f59230);
