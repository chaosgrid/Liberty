#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396441 _public_6396441

PROC_DECLARE(0x6396430, internal_6396430, public_6396430);
/* CHUNK of public_6312680 */
extern "C" NAKED register_t __cdecl internal_6396430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6396441 : nop
        mov eax, offset public_63b0344
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396430)
        ASM_EXPORT_ENTRY_SINGLE(0x6396441, public_6396441)
    }
}

#undef public_6396441

#pragma init_seg(compiler)
extern "C" void const* const public_6396441 = __AsmFindLabelExport(&internal_6396430, 0x6396441);
