#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539bc0);

#define public_53ec63 _public_53ec63

PROC_DECLARE(0x53ec30, internal_53ec30, public_53ec30);
extern "C" NAKED register_t __cdecl internal_53ec30()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        push 0xA7
        mov esi, ecx
        call public_539bc0
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_53ec63
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0xA7
        cmp al, 0xA7
        jne public_53ec63
        mov ecx, esi
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x4C]
        pop edi
        pop esi
        ret 4
        public_53ec63 : nop
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x4C]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x53ec30)
    }
}

#undef public_53ec63
