#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_467ee0);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5686b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c34d8 _public_5c34d8
#define public_5c34e1 _public_5c34e1
#define public_5c34ec _public_5c34ec
#define public_5c34f8 _public_5c34f8
#define public_5c3504 _public_5c3504
#define public_5c3510 _public_5c3510
#define public_5c351b _public_5c351b

PROC_DECLARE(0x5c34d0, internal_5c34d0, public_5c34d0);
/* CHUNK of public_571280 */
extern "C" NAKED register_t __cdecl internal_5c34d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_467ee0
        public_5c34d8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c7058]
        public_5c34e1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_4de730
        public_5c34ec : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp dword ptr ds : [public_5c7058]
        public_5c34f8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x54
        jmp dword ptr ds : [public_5c7058]
        public_5c3504 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp dword ptr ds : [public_5c7090]
        public_5c3510 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_5686b0
        public_5c351b : nop
        mov eax, offset public_5fd2f4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c34d0)
        ASM_EXPORT_ENTRY_FIRST(0x5c34d8, public_5c34d8)
        ASM_EXPORT_ENTRY(0x5c34e1, public_5c34e1)
        ASM_EXPORT_ENTRY(0x5c34ec, public_5c34ec)
        ASM_EXPORT_ENTRY(0x5c34f8, public_5c34f8)
        ASM_EXPORT_ENTRY(0x5c3504, public_5c3504)
        ASM_EXPORT_ENTRY(0x5c3510, public_5c3510)
        ASM_EXPORT_ENTRY_LAST(0x5c351b, public_5c351b)
    }
}

#undef public_5c34d8
#undef public_5c34e1
#undef public_5c34ec
#undef public_5c34f8
#undef public_5c3504
#undef public_5c3510
#undef public_5c351b

#pragma init_seg(compiler)
extern "C" void const* const public_5c34d8 = __AsmFindLabelExport(&internal_5c34d0, 0x5c34d8);
extern "C" void const* const public_5c34e1 = __AsmFindLabelExport(&internal_5c34d0, 0x5c34e1);
extern "C" void const* const public_5c34ec = __AsmFindLabelExport(&internal_5c34d0, 0x5c34ec);
extern "C" void const* const public_5c34f8 = __AsmFindLabelExport(&internal_5c34d0, 0x5c34f8);
extern "C" void const* const public_5c3504 = __AsmFindLabelExport(&internal_5c34d0, 0x5c3504);
extern "C" void const* const public_5c3510 = __AsmFindLabelExport(&internal_5c34d0, 0x5c3510);
extern "C" void const* const public_5c351b = __AsmFindLabelExport(&internal_5c34d0, 0x5c351b);
