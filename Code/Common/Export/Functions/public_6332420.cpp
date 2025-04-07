#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_633243d _public_633243d
#define public_6332455 _public_6332455

PROC_DECLARE(0x6332420, internal_6332420, public_6332420);
extern "C" NAKED register_t __cdecl internal_6332420()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_633243d
        mov edi, eax
        public_633243d : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6332455
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        public_6332455 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [ebx+0xC], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6332420)
    }
}

#undef public_633243d
#undef public_6332455
