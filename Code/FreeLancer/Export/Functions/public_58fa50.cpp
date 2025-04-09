#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_58fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_58fa60 _public_58fa60
#define public_58fa6e _public_58fa6e

PROC_DECLARE(0x58fa50, internal_58fa50, public_58fa50);
extern "C" NAKED register_t __cdecl internal_58fa50()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_58fa6e
        nop 
        public_58fa60 : nop
        mov ecx, esi
        call public_444ee0
        add esi, 0x64
        cmp esi, ebx
        jne public_58fa60
        public_58fa6e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x58fa50)
    }
}

#undef public_58fa60
#undef public_58fa6e
