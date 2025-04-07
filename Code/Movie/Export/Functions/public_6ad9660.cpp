#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad246b);
CLANG_FORWARD_PROC_SYMBOL(public_6ad86bf);
CLANG_FORWARD_PROC_SYMBOL(public_6ad873e);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9660);

#define public_6ad967c _public_6ad967c
#define public_6ad9692 _public_6ad9692
#define public_6ad96ae _public_6ad96ae
#define public_6ad96b0 _public_6ad96b0
#define public_6ad96de _public_6ad96de
#define public_6ad96e0 _public_6ad96e0

PROC_DECLARE(0x6ad9660, internal_6ad9660, public_6ad9660);
extern "C" NAKED register_t __cdecl internal_6ad9660()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        call public_6ad873e
        cmp eax, 0xFFFFFFFF
        pop ecx
        je public_6ad96ae
        cmp esi, 1
        je public_6ad967c
        cmp esi, 2
        jne public_6ad9692
        public_6ad967c : nop
        push 2
        call public_6ad873e
        push 1
        mov edi, eax
        call public_6ad873e
        pop ecx
        cmp eax, edi
        pop ecx
        je public_6ad96ae
        public_6ad9692 : nop
        push esi
        call public_6ad873e
        pop ecx
        push eax
        call dword ptr ds : [public_6ada04c]
        test eax, eax
        jne public_6ad96ae
        call dword ptr ds : [public_6ada140]
        mov edi, eax
        jmp public_6ad96b0
        public_6ad96ae : nop
        xor edi, edi
        public_6ad96b0 : nop
        push esi
        call public_6ad86bf
        mov eax, esi
        and esi, 0x1F
        sar eax, 5
        pop ecx
        mov eax, dword ptr ds : [eax*4+public_6ae2480]
        lea ecx, ds:[esi+esi*8]
        and byte ptr ds : [eax+ecx*4+4], 0
        test edi, edi
        je public_6ad96de
        push edi
        call public_6ad246b
        pop ecx
        or eax, 0xFFFFFFFF
        jmp public_6ad96e0
        public_6ad96de : nop
        xor eax, eax
        public_6ad96e0 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad9660)
    }
}

#undef public_6ad967c
#undef public_6ad9692
#undef public_6ad96ae
#undef public_6ad96b0
#undef public_6ad96de
#undef public_6ad96e0
