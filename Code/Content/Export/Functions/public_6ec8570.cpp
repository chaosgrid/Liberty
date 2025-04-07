#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49c30);

#define public_6ec8582 _public_6ec8582

PROC_DECLARE(0x6ec8570, internal_6ec8570, public_6ec8570);
extern "C" NAKED register_t __cdecl internal_6ec8570()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        call public_6f49c30
        test eax, eax
        jne public_6ec8582
        xor al, al
        pop esi
        pop ecx
        ret 
        public_6ec8582 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax+4]
        add esi, 0xC
        lea edx, ss:[esp+4]
        push esi
        push edx
        mov dword ptr ss : [esp+0xC], ecx
        call dword ptr ds : [public_6fb33d0]
        add esp, 8
        mov al, 1
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ec8570)
    }
}

#undef public_6ec8582
