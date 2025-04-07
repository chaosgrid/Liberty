#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7900);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b460);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabe08 _public_6fabe08
#define public_6fabe16 _public_6fabe16
#define public_6fabe24 _public_6fabe24
#define public_6fabe32 _public_6fabe32
#define public_6fabe40 _public_6fabe40
#define public_6fabe4e _public_6fabe4e

PROC_DECLARE(0x6fabe00, internal_6fabe00, public_6fabe00);
/* CHUNK of public_6eef3d0 */
extern "C" NAKED register_t __cdecl internal_6fabe00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f4b460
        public_6fabe08 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x240
        jmp public_6fa0330
        public_6fabe16 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x248
        jmp public_6eb7900
        public_6fabe24 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x26C
        jmp public_6eec8d0
        public_6fabe32 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x27C
        jmp public_6eec8d0
        public_6fabe40 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x28C
        jmp public_6eec8d0
        public_6fabe4e : nop
        mov eax, offset public_6fc0a58
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabe00)
        ASM_EXPORT_ENTRY_FIRST(0x6fabe08, public_6fabe08)
        ASM_EXPORT_ENTRY(0x6fabe16, public_6fabe16)
        ASM_EXPORT_ENTRY(0x6fabe24, public_6fabe24)
        ASM_EXPORT_ENTRY(0x6fabe32, public_6fabe32)
        ASM_EXPORT_ENTRY(0x6fabe40, public_6fabe40)
        ASM_EXPORT_ENTRY_LAST(0x6fabe4e, public_6fabe4e)
    }
}

#undef public_6fabe08
#undef public_6fabe16
#undef public_6fabe24
#undef public_6fabe32
#undef public_6fabe40
#undef public_6fabe4e

#pragma init_seg(compiler)
extern "C" void const* const public_6fabe08 = __AsmFindLabelExport(&internal_6fabe00, 0x6fabe08);
extern "C" void const* const public_6fabe16 = __AsmFindLabelExport(&internal_6fabe00, 0x6fabe16);
extern "C" void const* const public_6fabe24 = __AsmFindLabelExport(&internal_6fabe00, 0x6fabe24);
extern "C" void const* const public_6fabe32 = __AsmFindLabelExport(&internal_6fabe00, 0x6fabe32);
extern "C" void const* const public_6fabe40 = __AsmFindLabelExport(&internal_6fabe00, 0x6fabe40);
extern "C" void const* const public_6fabe4e = __AsmFindLabelExport(&internal_6fabe00, 0x6fabe4e);
