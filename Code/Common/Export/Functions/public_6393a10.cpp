#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393a18 _public_6393a18
#define public_6393a29 _public_6393a29
#define public_6393a31 _public_6393a31

PROC_DECLARE(0x6393a10, internal_6393a10, public_6393a10);
/* CHUNK of public_629d9a0 */
extern "C" NAKED register_t __cdecl internal_6393a10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_629f2f0
        public_6393a18 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6393a29 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62881d0
        public_6393a31 : nop
        mov eax, offset public_63acd1c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393a10)
        ASM_EXPORT_ENTRY_FIRST(0x6393a18, public_6393a18)
        ASM_EXPORT_ENTRY(0x6393a29, public_6393a29)
        ASM_EXPORT_ENTRY_LAST(0x6393a31, public_6393a31)
    }
}

#undef public_6393a18
#undef public_6393a29
#undef public_6393a31

#pragma init_seg(compiler)
extern "C" void const* const public_6393a18 = __AsmFindLabelExport(&internal_6393a10, 0x6393a18);
extern "C" void const* const public_6393a29 = __AsmFindLabelExport(&internal_6393a10, 0x6393a29);
extern "C" void const* const public_6393a31 = __AsmFindLabelExport(&internal_6393a10, 0x6393a31);
