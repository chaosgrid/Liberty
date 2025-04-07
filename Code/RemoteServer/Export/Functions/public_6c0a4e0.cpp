#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5660);
CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a4e8 _public_6c0a4e8
#define public_6c0a4f3 _public_6c0a4f3
#define public_6c0a502 _public_6c0a502
#define public_6c0a511 _public_6c0a511
#define public_6c0a51f _public_6c0a51f
#define public_6c0a52e _public_6c0a52e

PROC_DECLARE(0x6c0a4e0, internal_6c0a4e0, public_6c0a4e0);
/* CHUNK of public_6bdea60 */
extern "C" NAKED register_t __cdecl internal_6c0a4e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6bebe40
        public_6c0a4e8 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x24
        jmp public_6bd5660
        public_6c0a4f3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x204
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a502 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x214
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a511 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x264
        jmp public_6bdc790
        public_6c0a51f : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x268
        jmp dword ptr ds : [public_6c0b03c]
        public_6c0a52e : nop
        mov eax, offset public_6c0ebf8
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a4e0)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a4e8, public_6c0a4e8)
        ASM_EXPORT_ENTRY(0x6c0a4f3, public_6c0a4f3)
        ASM_EXPORT_ENTRY(0x6c0a502, public_6c0a502)
        ASM_EXPORT_ENTRY(0x6c0a511, public_6c0a511)
        ASM_EXPORT_ENTRY(0x6c0a51f, public_6c0a51f)
        ASM_EXPORT_ENTRY_LAST(0x6c0a52e, public_6c0a52e)
    }
}

#undef public_6c0a4e8
#undef public_6c0a4f3
#undef public_6c0a502
#undef public_6c0a511
#undef public_6c0a51f
#undef public_6c0a52e

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a4e8 = __AsmFindLabelExport(&internal_6c0a4e0, 0x6c0a4e8);
extern "C" void const* const public_6c0a4f3 = __AsmFindLabelExport(&internal_6c0a4e0, 0x6c0a4f3);
extern "C" void const* const public_6c0a502 = __AsmFindLabelExport(&internal_6c0a4e0, 0x6c0a502);
extern "C" void const* const public_6c0a511 = __AsmFindLabelExport(&internal_6c0a4e0, 0x6c0a511);
extern "C" void const* const public_6c0a51f = __AsmFindLabelExport(&internal_6c0a4e0, 0x6c0a51f);
extern "C" void const* const public_6c0a52e = __AsmFindLabelExport(&internal_6c0a4e0, 0x6c0a52e);
