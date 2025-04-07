#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_629b110);
CLANG_FORWARD_PROC_SYMBOL(public_62a1230);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5980);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393f08 _public_6393f08
#define public_6393f13 _public_6393f13
#define public_6393f21 _public_6393f21
#define public_6393f2f _public_6393f2f
#define public_6393f3d _public_6393f3d

PROC_DECLARE(0x6393f00, internal_6393f00, public_6393f00);
/* CHUNK of public_62a9010 */
extern "C" NAKED register_t __cdecl internal_6393f00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62b5980
        public_6393f08 : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 4
        jmp public_62a68e0
        public_6393f13 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE4
        jmp public_629b110
        public_6393f21 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x144
        jmp public_62a1230
        public_6393f2f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x180
        jmp public_6269110
        public_6393f3d : nop
        mov eax, offset public_63ad408
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393f00)
        ASM_EXPORT_ENTRY_FIRST(0x6393f08, public_6393f08)
        ASM_EXPORT_ENTRY(0x6393f13, public_6393f13)
        ASM_EXPORT_ENTRY(0x6393f21, public_6393f21)
        ASM_EXPORT_ENTRY(0x6393f2f, public_6393f2f)
        ASM_EXPORT_ENTRY_LAST(0x6393f3d, public_6393f3d)
    }
}

#undef public_6393f08
#undef public_6393f13
#undef public_6393f21
#undef public_6393f2f
#undef public_6393f3d

#pragma init_seg(compiler)
extern "C" void const* const public_6393f08 = __AsmFindLabelExport(&internal_6393f00, 0x6393f08);
extern "C" void const* const public_6393f13 = __AsmFindLabelExport(&internal_6393f00, 0x6393f13);
extern "C" void const* const public_6393f21 = __AsmFindLabelExport(&internal_6393f00, 0x6393f21);
extern "C" void const* const public_6393f2f = __AsmFindLabelExport(&internal_6393f00, 0x6393f2f);
extern "C" void const* const public_6393f3d = __AsmFindLabelExport(&internal_6393f00, 0x6393f3d);
