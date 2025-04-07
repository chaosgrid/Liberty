#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_629b110);
CLANG_FORWARD_PROC_SYMBOL(public_62a1230);
CLANG_FORWARD_PROC_SYMBOL(public_62b5980);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393f58 _public_6393f58
#define public_6393f66 _public_6393f66
#define public_6393f74 _public_6393f74
#define public_6393f82 _public_6393f82

PROC_DECLARE(0x6393f50, internal_6393f50, public_6393f50);
/* CHUNK of public_62a9190 */
extern "C" NAKED register_t __cdecl internal_6393f50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_62b5980
        public_6393f58 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0xE4
        jmp public_629b110
        public_6393f66 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0x144
        jmp public_62a1230
        public_6393f74 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0x180
        jmp public_6269110
        public_6393f82 : nop
        mov eax, offset public_63ad444
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393f50)
        ASM_EXPORT_ENTRY_FIRST(0x6393f58, public_6393f58)
        ASM_EXPORT_ENTRY(0x6393f66, public_6393f66)
        ASM_EXPORT_ENTRY(0x6393f74, public_6393f74)
        ASM_EXPORT_ENTRY_LAST(0x6393f82, public_6393f82)
    }
}

#undef public_6393f58
#undef public_6393f66
#undef public_6393f74
#undef public_6393f82

#pragma init_seg(compiler)
extern "C" void const* const public_6393f58 = __AsmFindLabelExport(&internal_6393f50, 0x6393f58);
extern "C" void const* const public_6393f66 = __AsmFindLabelExport(&internal_6393f50, 0x6393f66);
extern "C" void const* const public_6393f74 = __AsmFindLabelExport(&internal_6393f50, 0x6393f74);
extern "C" void const* const public_6393f82 = __AsmFindLabelExport(&internal_6393f50, 0x6393f82);
