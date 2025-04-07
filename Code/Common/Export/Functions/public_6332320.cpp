#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6332320);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6332359 _public_6332359

PROC_DECLARE(0x6332320, internal_6332320, public_6332320);
extern "C" NAKED register_t __cdecl internal_6332320()
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
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6332359
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        public_6332359 : nop
        push esi
        call public_6391d5a
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
        UNREACHABLE_TRAP(0x6332320)
    }
}

#undef public_6332359
