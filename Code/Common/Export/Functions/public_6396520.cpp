#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6313a10);
CLANG_FORWARD_PROC_SYMBOL(public_6313ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6313bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639652b _public_639652b
#define public_6396536 _public_6396536
#define public_6396541 _public_6396541

PROC_DECLARE(0x6396520, internal_6396520, public_6396520);
/* CHUNK of public_6313880 */
extern "C" NAKED register_t __cdecl internal_6396520()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 4
        jmp public_6313a10
        public_639652b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x18
        jmp public_6313ae0
        public_6396536 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x2C
        jmp public_6313bb0
        public_6396541 : nop
        mov eax, offset public_63b0438
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396520)
        ASM_EXPORT_ENTRY_FIRST(0x639652b, public_639652b)
        ASM_EXPORT_ENTRY(0x6396536, public_6396536)
        ASM_EXPORT_ENTRY_LAST(0x6396541, public_6396541)
    }
}

#undef public_639652b
#undef public_6396536
#undef public_6396541

#pragma init_seg(compiler)
extern "C" void const* const public_639652b = __AsmFindLabelExport(&internal_6396520, 0x639652b);
extern "C" void const* const public_6396536 = __AsmFindLabelExport(&internal_6396520, 0x6396536);
extern "C" void const* const public_6396541 = __AsmFindLabelExport(&internal_6396520, 0x6396541);
