#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6b4c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef948e);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9503);

#define public_6ef6b60 _public_6ef6b60
#define public_6ef6b79 _public_6ef6b79
#define public_6ef6b88 _public_6ef6b88
#define public_6ef6b8c _public_6ef6b8c
#define public_6ef6b97 _public_6ef6b97

PROC_DECLARE(0x6ef6b4c, internal_6ef6b4c, public_6ef6b4c);
extern "C" NAKED register_t __cdecl internal_6ef6b4c()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        movsx eax, byte ptr ds : [esi]
        push eax
        call public_6ef9503
        cmp eax, 0x65
        pop ecx
        je public_6ef6b8c
        public_6ef6b60 : nop
        inc esi
        cmp dword ptr ds : [public_6f00610], 1
        jle public_6ef6b79
        movsx eax, byte ptr ds : [esi]
        push 4
        push eax
        call public_6ef948e
        pop ecx
        pop ecx
        jmp public_6ef6b88
        public_6ef6b79 : nop
        movsx eax, byte ptr ds : [esi]
        mov ecx, dword ptr ds : [public_6f0061c]
        mov al, byte ptr ds : [ecx+eax*2]
        and eax, 4
        public_6ef6b88 : nop
        test eax, eax
        jne public_6ef6b60
        public_6ef6b8c : nop
        mov cl, byte ptr ds : [public_6f00614]
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [esi], cl
        inc esi
        public_6ef6b97 : nop
        mov cl, byte ptr ds : [esi]
        mov byte ptr ds : [esi], al
        mov al, cl
        mov cl, byte ptr ds : [esi]
        inc esi
        test cl, cl
        jne public_6ef6b97
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef6b4c)
    }
}

#undef public_6ef6b60
#undef public_6ef6b79
#undef public_6ef6b88
#undef public_6ef6b8c
#undef public_6ef6b97
