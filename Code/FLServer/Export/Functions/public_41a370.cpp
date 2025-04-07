#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e8a0);
CLANG_FORWARD_PROC_SYMBOL(public_40e910);
CLANG_FORWARD_PROC_SYMBOL(public_40ea80);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_PROC_SYMBOL(public_418d86);
CLANG_FORWARD_PROC_SYMBOL(public_4190f8);
CLANG_FORWARD_PROC_SYMBOL(public_419110);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a378 _public_41a378
#define public_41a386 _public_41a386
#define public_41a394 _public_41a394
#define public_41a3a2 _public_41a3a2
#define public_41a3b0 _public_41a3b0
#define public_41a3be _public_41a3be
#define public_41a3cc _public_41a3cc
#define public_41a3d4 _public_41a3d4
#define public_41a3dc _public_41a3dc

PROC_DECLARE(0x41a370, internal_41a370, public_41a370);
/* CHUNK of public_40ea90 */
extern "C" NAKED register_t __cdecl internal_41a370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_40ea80
        public_41a378 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80
        jmp public_418c24
        public_41a386 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC0
        jmp public_418d86
        public_41a394 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x100
        jmp public_4190f8
        public_41a3a2 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x140
        jmp public_418d86
        public_41a3b0 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x180
        jmp public_419110
        public_41a3be : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x1F0
        jmp public_40e8a0
        public_41a3cc : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_40e910
        public_41a3d4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_40e910
        public_41a3dc : nop
        mov eax, offset public_41f52c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a370)
        ASM_EXPORT_ENTRY_FIRST(0x41a378, public_41a378)
        ASM_EXPORT_ENTRY(0x41a386, public_41a386)
        ASM_EXPORT_ENTRY(0x41a394, public_41a394)
        ASM_EXPORT_ENTRY(0x41a3a2, public_41a3a2)
        ASM_EXPORT_ENTRY(0x41a3b0, public_41a3b0)
        ASM_EXPORT_ENTRY(0x41a3be, public_41a3be)
        ASM_EXPORT_ENTRY(0x41a3cc, public_41a3cc)
        ASM_EXPORT_ENTRY(0x41a3d4, public_41a3d4)
        ASM_EXPORT_ENTRY_LAST(0x41a3dc, public_41a3dc)
    }
}

#undef public_41a378
#undef public_41a386
#undef public_41a394
#undef public_41a3a2
#undef public_41a3b0
#undef public_41a3be
#undef public_41a3cc
#undef public_41a3d4
#undef public_41a3dc

#pragma init_seg(compiler)
extern "C" void const* const public_41a378 = __AsmFindLabelExport(&internal_41a370, 0x41a378);
extern "C" void const* const public_41a386 = __AsmFindLabelExport(&internal_41a370, 0x41a386);
extern "C" void const* const public_41a394 = __AsmFindLabelExport(&internal_41a370, 0x41a394);
extern "C" void const* const public_41a3a2 = __AsmFindLabelExport(&internal_41a370, 0x41a3a2);
extern "C" void const* const public_41a3b0 = __AsmFindLabelExport(&internal_41a370, 0x41a3b0);
extern "C" void const* const public_41a3be = __AsmFindLabelExport(&internal_41a370, 0x41a3be);
extern "C" void const* const public_41a3cc = __AsmFindLabelExport(&internal_41a370, 0x41a3cc);
extern "C" void const* const public_41a3d4 = __AsmFindLabelExport(&internal_41a370, 0x41a3d4);
extern "C" void const* const public_41a3dc = __AsmFindLabelExport(&internal_41a370, 0x41a3dc);
