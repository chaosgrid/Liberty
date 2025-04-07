#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62c5c20);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394b28 _public_6394b28
#define public_6394b33 _public_6394b33
#define public_6394b41 _public_6394b41
#define public_6394b4f _public_6394b4f

PROC_DECLARE(0x6394b20, internal_6394b20, public_6394b20);
/* CHUNK of public_62c5af0 */
extern "C" NAKED register_t __cdecl internal_6394b20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394b28 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_62c3040
        public_6394b33 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA4
        jmp public_62c3040
        public_6394b41 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x178
        jmp public_62c5c20
        public_6394b4f : nop
        mov eax, offset public_63ae16c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394b20)
        ASM_EXPORT_ENTRY_FIRST(0x6394b28, public_6394b28)
        ASM_EXPORT_ENTRY(0x6394b33, public_6394b33)
        ASM_EXPORT_ENTRY(0x6394b41, public_6394b41)
        ASM_EXPORT_ENTRY_LAST(0x6394b4f, public_6394b4f)
    }
}

#undef public_6394b28
#undef public_6394b33
#undef public_6394b41
#undef public_6394b4f

#pragma init_seg(compiler)
extern "C" void const* const public_6394b28 = __AsmFindLabelExport(&internal_6394b20, 0x6394b28);
extern "C" void const* const public_6394b33 = __AsmFindLabelExport(&internal_6394b20, 0x6394b33);
extern "C" void const* const public_6394b41 = __AsmFindLabelExport(&internal_6394b20, 0x6394b41);
extern "C" void const* const public_6394b4f = __AsmFindLabelExport(&internal_6394b20, 0x6394b4f);
