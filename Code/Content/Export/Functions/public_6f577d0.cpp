#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f577d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f577f0 _public_6f577f0
#define public_6f57808 _public_6f57808

PROC_DECLARE(0x6f577d0, internal_6f577d0, public_6f577d0);
extern "C" NAKED register_t __cdecl internal_6f577d0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+0x15C]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f577f0
        mov edi, eax
        public_6f577f0 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [esp+0x10]
        add eax, 8
        test eax, eax
        je public_6f57808
        mov dword ptr ds : [eax], ecx
        public_6f57808 : nop
        inc dword ptr ds : [ebx+0x160]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f577d0)
    }
}

#undef public_6f577f0
#undef public_6f57808
