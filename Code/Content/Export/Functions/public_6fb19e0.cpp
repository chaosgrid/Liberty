#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fc10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb19ee _public_6fb19ee
#define public_6fb19fc _public_6fb19fc
#define public_6fb1a0a _public_6fb1a0a
#define public_6fb1a16 _public_6fb1a16
#define public_6fb1a21 _public_6fb1a21
#define public_6fb1a2d _public_6fb1a2d
#define public_6fb1a39 _public_6fb1a39

PROC_DECLARE(0x6fb19e0, internal_6fb19e0, public_6fb19e0);
/* CHUNK of public_6f9d550 */
extern "C" NAKED register_t __cdecl internal_6fb19e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1580]
        add ecx, 4
        jmp public_6f9fc10
        public_6fb19ee : nop
        mov ecx, dword ptr ss : [ebp-0x1580]
        add ecx, 0xC
        jmp public_6eec8d0
        public_6fb19fc : nop
        mov ecx, dword ptr ss : [ebp-0x1580]
        add ecx, 0x1C
        jmp public_6f9d8a0
        public_6fb1a0a : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fb1a16 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fb1a21 : nop
        mov ecx, dword ptr ss : [ebp-0x158C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fb1a2d : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fb1a39 : nop
        mov eax, offset public_6fc70b4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb19e0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb19ee, public_6fb19ee)
        ASM_EXPORT_ENTRY(0x6fb19fc, public_6fb19fc)
        ASM_EXPORT_ENTRY(0x6fb1a0a, public_6fb1a0a)
        ASM_EXPORT_ENTRY(0x6fb1a16, public_6fb1a16)
        ASM_EXPORT_ENTRY(0x6fb1a21, public_6fb1a21)
        ASM_EXPORT_ENTRY(0x6fb1a2d, public_6fb1a2d)
        ASM_EXPORT_ENTRY_LAST(0x6fb1a39, public_6fb1a39)
    }
}

#undef public_6fb19ee
#undef public_6fb19fc
#undef public_6fb1a0a
#undef public_6fb1a16
#undef public_6fb1a21
#undef public_6fb1a2d
#undef public_6fb1a39

#pragma init_seg(compiler)
extern "C" void const* const public_6fb19ee = __AsmFindLabelExport(&internal_6fb19e0, 0x6fb19ee);
extern "C" void const* const public_6fb19fc = __AsmFindLabelExport(&internal_6fb19e0, 0x6fb19fc);
extern "C" void const* const public_6fb1a0a = __AsmFindLabelExport(&internal_6fb19e0, 0x6fb1a0a);
extern "C" void const* const public_6fb1a16 = __AsmFindLabelExport(&internal_6fb19e0, 0x6fb1a16);
extern "C" void const* const public_6fb1a21 = __AsmFindLabelExport(&internal_6fb19e0, 0x6fb1a21);
extern "C" void const* const public_6fb1a2d = __AsmFindLabelExport(&internal_6fb19e0, 0x6fb1a2d);
extern "C" void const* const public_6fb1a39 = __AsmFindLabelExport(&internal_6fb19e0, 0x6fb1a39);
