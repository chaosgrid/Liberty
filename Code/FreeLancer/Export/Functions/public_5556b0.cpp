#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5556b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5556cd _public_5556cd
#define public_5556e7 _public_5556e7

PROC_DECLARE(0x5556b0, internal_5556b0, public_5556b0);
extern "C" NAKED register_t __cdecl internal_5556b0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_5556cd
        mov edi, eax
        public_5556cd : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_5556e7
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        public_5556e7 : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5556b0)
    }
}

#undef public_5556cd
#undef public_5556e7
