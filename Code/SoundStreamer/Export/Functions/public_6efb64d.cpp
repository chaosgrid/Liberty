#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb5ad);
CLANG_FORWARD_PROC_SYMBOL(public_6efb64d);

#define public_6efb65e _public_6efb65e
#define public_6efb688 _public_6efb688
#define public_6efb6a2 _public_6efb6a2
#define public_6efb6ab _public_6efb6ab
#define public_6efb6b6 _public_6efb6b6

PROC_DECLARE(0x6efb64d, internal_6efb64d, public_6efb64d);
extern "C" NAKED register_t __cdecl internal_6efb64d()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor esi, esi
        xor ebx, ebx
        xor edi, edi
        cmp dword ptr ds : [public_6f02520], esi
        jle public_6efb6ab
        public_6efb65e : nop
        mov eax, dword ptr ds : [public_6f01508]
        mov eax, dword ptr ds : [eax+esi*4]
        test eax, eax
        je public_6efb6a2
        mov ecx, dword ptr ds : [eax+0xC]
        test cl, 0x83
        je public_6efb6a2
        cmp dword ptr ss : [esp+0x10], 1
        jne public_6efb688
        push eax
        call public_6efb5ad
        cmp eax, 0xFFFFFFFF
        pop ecx
        je public_6efb6a2
        inc ebx
        jmp public_6efb6a2
        public_6efb688 : nop
        cmp dword ptr ss : [esp+0x10], 0
        jne public_6efb6a2
        test cl, 2
        je public_6efb6a2
        push eax
        call public_6efb5ad
        cmp eax, 0xFFFFFFFF
        pop ecx
        jne public_6efb6a2
        or edi, eax
        public_6efb6a2 : nop
        inc esi
        cmp esi, dword ptr ds : [public_6f02520]
        jl public_6efb65e
        public_6efb6ab : nop
        cmp dword ptr ss : [esp+0x10], 1
        mov eax, ebx
        je public_6efb6b6
        mov eax, edi
        public_6efb6b6 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6efb64d)
    }
}

#undef public_6efb65e
#undef public_6efb688
#undef public_6efb6a2
#undef public_6efb6ab
#undef public_6efb6b6
