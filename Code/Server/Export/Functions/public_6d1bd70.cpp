#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1bd70);

#define public_6d1bd80 _public_6d1bd80
#define public_6d1bda0 _public_6d1bda0

PROC_DECLARE(0x6d1bd70, internal_6d1bd70, public_6d1bd70);
/* CHUNK of public_6d1bb20 */
extern "C" NAKED register_t __cdecl internal_6d1bd70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [esi]
        cmp edx, esi
        je public_6d1bda0
        push ebx
        push edi
        lea esp, ss:[esp]
        public_6d1bd80 : nop
        mov eax, edx
        mov edi, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [edi], ebx
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], eax
        mov edi, dword ptr ds : [ecx+8]
        dec edi
        cmp edx, esi
        mov dword ptr ds : [ecx+8], edi
        jne public_6d1bd80
        pop edi
        pop ebx
        public_6d1bda0 : nop
        xor eax, eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d1bd70)
        ASM_EXPORT_ENTRY_FIRST(0x6d1bd80, public_6d1bd80)
        ASM_EXPORT_ENTRY_LAST(0x6d1bda0, public_6d1bda0)
    }
}

#undef public_6d1bd80
#undef public_6d1bda0

#pragma init_seg(compiler)
extern "C" void const* const public_6d1bd80 = __AsmFindLabelExport(&internal_6d1bd70, 0x6d1bd80);
extern "C" void const* const public_6d1bda0 = __AsmFindLabelExport(&internal_6d1bd70, 0x6d1bda0);
