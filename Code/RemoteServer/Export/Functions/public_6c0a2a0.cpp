#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd57c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a2a8 _public_6c0a2a8
#define public_6c0a2b7 _public_6c0a2b7
#define public_6c0a2c6 _public_6c0a2c6
#define public_6c0a2d5 _public_6c0a2d5

PROC_DECLARE(0x6c0a2a0, internal_6c0a2a0, public_6c0a2a0);
/* CHUNK of public_6bd5820 */
extern "C" NAKED register_t __cdecl internal_6c0a2a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6bd57c0
        public_6c0a2a8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x204
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a2b7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x214
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a2c6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x248
        jmp dword ptr ds : [public_6c0b0cc]
        public_6c0a2d5 : nop
        mov eax, offset public_6c0e994
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a2a0)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a2a8, public_6c0a2a8)
        ASM_EXPORT_ENTRY(0x6c0a2b7, public_6c0a2b7)
        ASM_EXPORT_ENTRY(0x6c0a2c6, public_6c0a2c6)
        ASM_EXPORT_ENTRY_LAST(0x6c0a2d5, public_6c0a2d5)
    }
}

#undef public_6c0a2a8
#undef public_6c0a2b7
#undef public_6c0a2c6
#undef public_6c0a2d5

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a2a8 = __AsmFindLabelExport(&internal_6c0a2a0, 0x6c0a2a8);
extern "C" void const* const public_6c0a2b7 = __AsmFindLabelExport(&internal_6c0a2a0, 0x6c0a2b7);
extern "C" void const* const public_6c0a2c6 = __AsmFindLabelExport(&internal_6c0a2a0, 0x6c0a2c6);
extern "C" void const* const public_6c0a2d5 = __AsmFindLabelExport(&internal_6c0a2a0, 0x6c0a2d5);
