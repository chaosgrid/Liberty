#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6625bd0);

#define public_6625be4 _public_6625be4

PROC_DECLARE(0x6625bd0, internal_6625bd0, public_6625bd0);
/* CHUNK of public_661e9e0 */
extern "C" NAKED register_t __cdecl internal_6625bd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6625be4
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [ecx+0xC]
        dec edx
        mov dword ptr ds : [ecx+0xC], edx
        ret 
        public_6625be4 : nop
        mov eax, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [public_662903c]
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x6625bd0)
        ASM_EXPORT_ENTRY_SINGLE(0x6625be4, public_6625be4)
    }
}

#undef public_6625be4

#pragma init_seg(compiler)
extern "C" void const* const public_6625be4 = __AsmFindLabelExport(&internal_6625bd0, 0x6625be4);
