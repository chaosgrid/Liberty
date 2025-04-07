#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0460);

#define public_6ed0476 _public_6ed0476
#define public_6ed0490 _public_6ed0490
#define public_6ed049b _public_6ed049b

PROC_DECLARE(0x6ed0460, internal_6ed0460, public_6ed0460);
extern "C" NAKED register_t __cdecl internal_6ed0460()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6ed583c]
        cmp ecx, offset public_6ed5838
        jne public_6ed0476
        add dword ptr ds : [public_6ed5840], 3
        ret 
        public_6ed0476 : nop
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, ecx
        add ecx, 3
        cmp eax, esi
        mov dword ptr ds : [public_6ed583c], ecx
        jbe public_6ed049b
        lea ebx, ds:[ebx]
        public_6ed0490 : nop
        mov dl, byte ptr ds : [eax-1]
        dec eax
        dec ecx
        cmp eax, esi
        mov byte ptr ds : [ecx], dl
        ja public_6ed0490
        public_6ed049b : nop
        mov al, byte ptr ss : [esp+8]
        mov byte ptr ds : [esi], al
        xor al, al
        mov byte ptr ds : [esi+1], al
        mov byte ptr ds : [esi+2], al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ed0460)
    }
}

#undef public_6ed0476
#undef public_6ed0490
#undef public_6ed049b
