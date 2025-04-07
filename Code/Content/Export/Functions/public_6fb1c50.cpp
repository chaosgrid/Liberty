#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f85550);
CLANG_FORWARD_PROC_SYMBOL(public_6f9cf90);
CLANG_FORWARD_PROC_SYMBOL(public_6f9e6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1c5b _public_6fb1c5b
#define public_6fb1c66 _public_6fb1c66
#define public_6fb1c71 _public_6fb1c71
#define public_6fb1c7c _public_6fb1c7c
#define public_6fb1c8a _public_6fb1c8a
#define public_6fb1c98 _public_6fb1c98
#define public_6fb1ca6 _public_6fb1ca6
#define public_6fb1cb2 _public_6fb1cb2

PROC_DECLARE(0x6fb1c50, internal_6fb1c50, public_6fb1c50);
/* CHUNK of public_6f9f100 */
extern "C" NAKED register_t __cdecl internal_6fb1c50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 8
        jmp public_6f9fbd0
        public_6fb1c5b : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x18
        jmp public_6f9e6a0
        public_6fb1c66 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x30
        jmp public_6f85550
        public_6fb1c71 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x60
        jmp public_6f85550
        public_6fb1c7c : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x90
        jmp public_6f9cf90
        public_6fb1c8a : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x9C
        jmp public_6eec8d0
        public_6fb1c98 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xAC
        jmp public_6eec8d0
        public_6fb1ca6 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp dword ptr ds : [public_6fb3034]
        public_6fb1cb2 : nop
        mov eax, offset public_6fc72f4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1c50)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1c5b, public_6fb1c5b)
        ASM_EXPORT_ENTRY(0x6fb1c66, public_6fb1c66)
        ASM_EXPORT_ENTRY(0x6fb1c71, public_6fb1c71)
        ASM_EXPORT_ENTRY(0x6fb1c7c, public_6fb1c7c)
        ASM_EXPORT_ENTRY(0x6fb1c8a, public_6fb1c8a)
        ASM_EXPORT_ENTRY(0x6fb1c98, public_6fb1c98)
        ASM_EXPORT_ENTRY(0x6fb1ca6, public_6fb1ca6)
        ASM_EXPORT_ENTRY_LAST(0x6fb1cb2, public_6fb1cb2)
    }
}

#undef public_6fb1c5b
#undef public_6fb1c66
#undef public_6fb1c71
#undef public_6fb1c7c
#undef public_6fb1c8a
#undef public_6fb1c98
#undef public_6fb1ca6
#undef public_6fb1cb2

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1c5b = __AsmFindLabelExport(&internal_6fb1c50, 0x6fb1c5b);
extern "C" void const* const public_6fb1c66 = __AsmFindLabelExport(&internal_6fb1c50, 0x6fb1c66);
extern "C" void const* const public_6fb1c71 = __AsmFindLabelExport(&internal_6fb1c50, 0x6fb1c71);
extern "C" void const* const public_6fb1c7c = __AsmFindLabelExport(&internal_6fb1c50, 0x6fb1c7c);
extern "C" void const* const public_6fb1c8a = __AsmFindLabelExport(&internal_6fb1c50, 0x6fb1c8a);
extern "C" void const* const public_6fb1c98 = __AsmFindLabelExport(&internal_6fb1c50, 0x6fb1c98);
extern "C" void const* const public_6fb1ca6 = __AsmFindLabelExport(&internal_6fb1c50, 0x6fb1ca6);
extern "C" void const* const public_6fb1cb2 = __AsmFindLabelExport(&internal_6fb1c50, 0x6fb1cb2);
