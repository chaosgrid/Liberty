#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d1b8d0 _public_6d1b8d0
#define public_6d1b8e6 _public_6d1b8e6

PROC_DECLARE(0x6d1b8c0, internal_6d1b8c0, public_6d1b8c0);
/* CHUNK of public_6d1be80 */
extern "C" NAKED register_t __cdecl internal_6d1b8c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov al, byte ptr ds : [ecx+4]
        test al, al
        push esi
        jne public_6d1b8e6
        mov esi, dword ptr ds : [ecx]
        cmp dword ptr ds : [esi], 0
        je public_6d1b8e6
        push edi
        public_6d1b8d0 : nop
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [eax]
        mov ecx, eax
        push ecx
        call public_6d5ffb0
        add esp, 4
        test edi, edi
        mov dword ptr ds : [esi], edi
        jne public_6d1b8d0
        pop edi
        public_6d1b8e6 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d1b8c0)
        ASM_EXPORT_ENTRY_FIRST(0x6d1b8d0, public_6d1b8d0)
        ASM_EXPORT_ENTRY_LAST(0x6d1b8e6, public_6d1b8e6)
    }
}

#undef public_6d1b8d0
#undef public_6d1b8e6

#pragma init_seg(compiler)
extern "C" void const* const public_6d1b8d0 = __AsmFindLabelExport(&internal_6d1b8c0, 0x6d1b8d0);
extern "C" void const* const public_6d1b8e6 = __AsmFindLabelExport(&internal_6d1b8c0, 0x6d1b8e6);
