#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_420d70);

#define public_420da5 _public_420da5

PROC_DECLARE(0x420d70, internal_420d70, public_420d70);
extern "C" NAKED register_t __cdecl internal_420d70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xFFFFFFFF
        je public_420da5
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x60]
        lea eax, ds:[esi+8]
        push eax
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        call public_41b030
        lea ecx, ds:[esi+0xC]
        push ecx
        call public_41b030
        add esp, 8
        public_420da5 : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x5C]
        xor ecx, ecx
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        setne cl
        mov al, cl
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x420d70)
    }
}

#undef public_420da5
