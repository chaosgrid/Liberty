#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad038d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3817);
CLANG_FORWARD_PROC_SYMBOL(public_6ad388c);

#define public_6ad03a1 _public_6ad03a1
#define public_6ad03ba _public_6ad03ba
#define public_6ad03c9 _public_6ad03c9
#define public_6ad03cd _public_6ad03cd
#define public_6ad03d8 _public_6ad03d8

PROC_DECLARE(0x6ad038d, internal_6ad038d, public_6ad038d);
extern "C" NAKED register_t __cdecl internal_6ad038d()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        movsx eax, byte ptr ds : [esi]
        push eax
        call public_6ad388c
        cmp eax, 0x65
        pop ecx
        je public_6ad03cd
        public_6ad03a1 : nop
        inc esi
        cmp dword ptr ds : [public_6addc10], 1
        jle public_6ad03ba
        movsx eax, byte ptr ds : [esi]
        push 4
        push eax
        call public_6ad3817
        pop ecx
        pop ecx
        jmp public_6ad03c9
        public_6ad03ba : nop
        movsx eax, byte ptr ds : [esi]
        mov ecx, dword ptr ds : [public_6add750]
        mov al, byte ptr ds : [ecx+eax*2]
        and eax, 4
        public_6ad03c9 : nop
        test eax, eax
        jne public_6ad03a1
        public_6ad03cd : nop
        mov cl, byte ptr ds : [public_6addc14]
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [esi], cl
        inc esi
        public_6ad03d8 : nop
        mov cl, byte ptr ds : [esi]
        mov byte ptr ds : [esi], al
        mov al, cl
        mov cl, byte ptr ds : [esi]
        inc esi
        test cl, cl
        jne public_6ad03d8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad038d)
    }
}

#undef public_6ad03a1
#undef public_6ad03ba
#undef public_6ad03c9
#undef public_6ad03cd
#undef public_6ad03d8
