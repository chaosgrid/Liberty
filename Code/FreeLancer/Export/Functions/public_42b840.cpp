#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42b5e0);

#define public_42b86b _public_42b86b
#define public_42b87c _public_42b87c
#define public_42b889 _public_42b889

PROC_DECLARE(0x42b840, internal_42b840, public_42b840);
extern "C" NAKED register_t __cdecl internal_42b840()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x30]
        cmp eax, esi
        jne public_42b87c
        cmp dword ptr ds : [esi+0xC], 0xFFFFFFFF
        jne public_42b86b
        mov ecx, dword ptr ds : [public_5c6d44]
        cmp dword ptr ds : [ecx], 0
        je public_42b86b
        push 0
        push esi
        call public_42b5e0
        add esp, 8
        mov dword ptr ds : [esi+0xC], eax
        public_42b86b : nop
        mov ecx, dword ptr ds : [esi+0xC]
        inc word ptr ds : [esi+0x2A]
        xor eax, eax
        cmp ecx, 0xFFFFFFFF
        setne al
        pop esi
        ret 
        public_42b87c : nop
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        je public_42b889
        mov edx, dword ptr ds : [ecx]
        pop esi
        jmp dword ptr ds : [edx+0xC]
        public_42b889 : nop
        inc word ptr ds : [esi+0x28]
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42b840)
    }
}

#undef public_42b86b
#undef public_42b87c
#undef public_42b889
