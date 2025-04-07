#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0ed00);
CLANG_FORWARD_PROC_SYMBOL(public_6f49a40);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b320);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faefc8 _public_6faefc8
#define public_6faefd7 _public_6faefd7
#define public_6faefe5 _public_6faefe5
#define public_6faeff3 _public_6faeff3
#define public_6faf001 _public_6faf001
#define public_6faf00f _public_6faf00f
#define public_6faf01d _public_6faf01d
#define public_6faf026 _public_6faf026

PROC_DECLARE(0x6faefc0, internal_6faefc0, public_6faefc0);
/* CHUNK of public_6f4b0d0 */
extern "C" NAKED register_t __cdecl internal_6faefc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x28]
        jmp public_6f0ed00
        public_6faefc8 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x1B0
        jmp dword ptr ds : [public_6fb3200]
        public_6faefd7 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x1E4
        jmp public_6f4b320
        public_6faefe5 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x1F8
        jmp public_6fa0330
        public_6faeff3 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x1FC
        jmp public_6eec8d0
        public_6faf001 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x20C
        jmp public_6f49a40
        public_6faf00f : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x224
        jmp public_6f4b3f0
        public_6faf01d : nop
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6fb3034]
        public_6faf026 : nop
        mov eax, offset public_6fc3ff4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faefc0)
        ASM_EXPORT_ENTRY_FIRST(0x6faefc8, public_6faefc8)
        ASM_EXPORT_ENTRY(0x6faefd7, public_6faefd7)
        ASM_EXPORT_ENTRY(0x6faefe5, public_6faefe5)
        ASM_EXPORT_ENTRY(0x6faeff3, public_6faeff3)
        ASM_EXPORT_ENTRY(0x6faf001, public_6faf001)
        ASM_EXPORT_ENTRY(0x6faf00f, public_6faf00f)
        ASM_EXPORT_ENTRY(0x6faf01d, public_6faf01d)
        ASM_EXPORT_ENTRY_LAST(0x6faf026, public_6faf026)
    }
}

#undef public_6faefc8
#undef public_6faefd7
#undef public_6faefe5
#undef public_6faeff3
#undef public_6faf001
#undef public_6faf00f
#undef public_6faf01d
#undef public_6faf026

#pragma init_seg(compiler)
extern "C" void const* const public_6faefc8 = __AsmFindLabelExport(&internal_6faefc0, 0x6faefc8);
extern "C" void const* const public_6faefd7 = __AsmFindLabelExport(&internal_6faefc0, 0x6faefd7);
extern "C" void const* const public_6faefe5 = __AsmFindLabelExport(&internal_6faefc0, 0x6faefe5);
extern "C" void const* const public_6faeff3 = __AsmFindLabelExport(&internal_6faefc0, 0x6faeff3);
extern "C" void const* const public_6faf001 = __AsmFindLabelExport(&internal_6faefc0, 0x6faf001);
extern "C" void const* const public_6faf00f = __AsmFindLabelExport(&internal_6faefc0, 0x6faf00f);
extern "C" void const* const public_6faf01d = __AsmFindLabelExport(&internal_6faefc0, 0x6faf01d);
extern "C" void const* const public_6faf026 = __AsmFindLabelExport(&internal_6faefc0, 0x6faf026);
