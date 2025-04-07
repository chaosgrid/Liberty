#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62938 _public_6d62938
#define public_6d62943 _public_6d62943
#define public_6d6294e _public_6d6294e
#define public_6d62956 _public_6d62956

PROC_DECLARE(0x6d62930, internal_6d62930, public_6d62930);
/* CHUNK of public_6d23c70 */
extern "C" NAKED register_t __cdecl internal_6d62930()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6d1bbf0
        public_6d62938 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x2C
        jmp public_6d0b7e0
        public_6d62943 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x3C
        jmp public_6cecb50
        public_6d6294e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6d23bb0
        public_6d62956 : nop
        mov eax, offset public_6d7392c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62930)
        ASM_EXPORT_ENTRY_FIRST(0x6d62938, public_6d62938)
        ASM_EXPORT_ENTRY(0x6d62943, public_6d62943)
        ASM_EXPORT_ENTRY(0x6d6294e, public_6d6294e)
        ASM_EXPORT_ENTRY_LAST(0x6d62956, public_6d62956)
    }
}

#undef public_6d62938
#undef public_6d62943
#undef public_6d6294e
#undef public_6d62956

#pragma init_seg(compiler)
extern "C" void const* const public_6d62938 = __AsmFindLabelExport(&internal_6d62930, 0x6d62938);
extern "C" void const* const public_6d62943 = __AsmFindLabelExport(&internal_6d62930, 0x6d62943);
extern "C" void const* const public_6d6294e = __AsmFindLabelExport(&internal_6d62930, 0x6d6294e);
extern "C" void const* const public_6d62956 = __AsmFindLabelExport(&internal_6d62930, 0x6d62956);
