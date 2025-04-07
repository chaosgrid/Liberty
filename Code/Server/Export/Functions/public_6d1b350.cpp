#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b350);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d1b37e _public_6d1b37e

PROC_DECLARE(0x6d1b350, internal_6d1b350, public_6d1b350);
extern "C" NAKED register_t __cdecl internal_6d1b350()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6d1b37e
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+8], 0
        public_6d1b37e : nop
        push esi
        call public_6d5ffb0
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d1b350)
    }
}

#undef public_6d1b37e
