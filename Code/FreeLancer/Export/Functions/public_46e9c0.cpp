#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46e9d7 _public_46e9d7

PROC_DECLARE(0x46e9c0, internal_46e9c0, public_46e9c0);
/* CHUNK of public_45e470 */
extern "C" NAKED register_t __cdecl internal_46e9c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_46e9d7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x18], 0
        public_46e9d7 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        mov dword ptr ds : [esi+4], 0
        call public_5b7e1d
        add esp, 8
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x46e9c0)
        ASM_EXPORT_ENTRY_SINGLE(0x46e9d7, public_46e9d7)
    }
}

#undef public_46e9d7

#pragma init_seg(compiler)
extern "C" void const* const public_46e9d7 = __AsmFindLabelExport(&internal_46e9c0, 0x46e9d7);
