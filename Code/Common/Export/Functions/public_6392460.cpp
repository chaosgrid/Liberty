#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639246e _public_639246e
#define public_639247c _public_639247c

PROC_DECLARE(0x6392460, internal_6392460, public_6392460);
/* CHUNK of public_6264100 */
extern "C" NAKED register_t __cdecl internal_6392460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0x94
        jmp public_62a68e0
        public_639246e : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0xA0
        jmp public_62a68e0
        public_639247c : nop
        mov eax, offset public_63aafb0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392460)
        ASM_EXPORT_ENTRY_FIRST(0x639246e, public_639246e)
        ASM_EXPORT_ENTRY_LAST(0x639247c, public_639247c)
    }
}

#undef public_639246e
#undef public_639247c

#pragma init_seg(compiler)
extern "C" void const* const public_639246e = __AsmFindLabelExport(&internal_6392460, 0x639246e);
extern "C" void const* const public_639247c = __AsmFindLabelExport(&internal_6392460, 0x639247c);
