#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_554e56 _public_554e56
#define public_554e6c _public_554e6c
#define public_554e72 _public_554e72

PROC_DECLARE(0x554e20, internal_554e20, public_554e20);
extern "C" NAKED register_t __cdecl internal_554e20()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [ebp+0x3C]
        test eax, eax
        jle public_554e72
        push ebx
        push esi
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_5c6b58]
        mov eax, dword ptr ds : [public_679874]
        mov edi, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0xC
        mov ebx, eax
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_554e56
        mov edi, eax
        public_554e56 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop esi
        pop ebx
        je public_554e6c
        mov dword ptr ds : [eax], ebp
        public_554e6c : nop
        inc dword ptr ds : [public_679878]
        public_554e72 : nop
        mov al, 1
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x554e20)
    }
}

#undef public_554e56
#undef public_554e6c
#undef public_554e72
