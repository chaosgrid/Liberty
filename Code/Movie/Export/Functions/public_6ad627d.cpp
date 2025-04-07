#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad7a22);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7b6b);

#define public_6ad62a7 _public_6ad62a7
#define public_6ad62c6 _public_6ad62c6
#define public_6ad62ed _public_6ad62ed
#define public_6ad62f8 _public_6ad62f8
#define public_6ad6373 _public_6ad6373
#define public_6ad6389 _public_6ad6389
#define public_6ad6391 _public_6ad6391
#define public_6ad63a6 _public_6ad63a6
#define public_6ad63ad _public_6ad63ad
#define public_6ad63b6 _public_6ad63b6
#define public_6ad63bd _public_6ad63bd
#define public_6ad63d3 _public_6ad63d3
#define public_6ad63db _public_6ad63db
#define public_6ad63f3 _public_6ad63f3
#define public_6ad63fa _public_6ad63fa
#define public_6ad63ff _public_6ad63ff

PROC_DECLARE(0x6ad627d, internal_6ad627d, public_6ad627d);
extern "C" NAKED register_t __cdecl internal_6ad627d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x514
        lea eax, ss:[ebp-0x14]
        push esi
        push eax
        push dword ptr ds : [public_6ae120c]
        call dword ptr ds : [public_6ada0a4]
        cmp eax, 1
        jne public_6ad63b6
        xor eax, eax
        mov esi, 0x100
        public_6ad62a7 : nop
        mov byte ptr ss : [ebp+eax-0x114], al
        inc eax
        cmp eax, esi
        jb public_6ad62a7
        mov al, byte ptr ss : [ebp-0xE]
        mov byte ptr ss : [ebp-0x114], 0x20
        test al, al
        je public_6ad62f8
        push ebx
        push edi
        lea edx, ss:[ebp-0xD]
        public_6ad62c6 : nop
        movzx ecx, byte ptr ds : [edx]
        movzx eax, al
        cmp eax, ecx
        ja public_6ad62ed
        sub ecx, eax
        lea edi, ss:[ebp+eax-0x114]
        inc ecx
        mov eax, 0x20202020
        mov ebx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, ebx
        and ecx, 3
        rep stosb
        public_6ad62ed : nop
        inc edx
        inc edx
        mov al, byte ptr ds : [edx-1]
        test al, al
        jne public_6ad62c6
        pop edi
        pop ebx
        public_6ad62f8 : nop
        push 0
        lea eax, ss:[ebp-0x514]
        push dword ptr ds : [public_6ae1424]
        push dword ptr ds : [public_6ae120c]
        push eax
        lea eax, ss:[ebp-0x114]
        push esi
        push eax
        push 1
        call public_6ad7a22
        push 0
        lea eax, ss:[ebp-0x214]
        push dword ptr ds : [public_6ae120c]
        push esi
        push eax
        lea eax, ss:[ebp-0x114]
        push esi
        push eax
        push esi
        push dword ptr ds : [public_6ae1424]
        call public_6ad7b6b
        push 0
        lea eax, ss:[ebp-0x314]
        push dword ptr ds : [public_6ae120c]
        push esi
        push eax
        lea eax, ss:[ebp-0x114]
        push esi
        push eax
        push 0x200
        push dword ptr ds : [public_6ae1424]
        call public_6ad7b6b
        add esp, 0x5C
        xor eax, eax
        lea ecx, ss:[ebp-0x514]
        public_6ad6373 : nop
        mov dx, word ptr ds : [ecx]
        test dl, 1
        je public_6ad6391
        or byte ptr ds : [eax+public_6ae1321], 0x10
        mov dl, byte ptr ss : [ebp+eax-0x214]
        public_6ad6389 : nop
        mov byte ptr ds : [eax+public_6ae1220], dl
        jmp public_6ad63ad
        public_6ad6391 : nop
        test dl, 2
        je public_6ad63a6
        or byte ptr ds : [eax+public_6ae1321], 0x20
        mov dl, byte ptr ss : [ebp+eax-0x314]
        jmp public_6ad6389
        public_6ad63a6 : nop
        and byte ptr ds : [eax+public_6ae1220], 0
        public_6ad63ad : nop
        inc eax
        inc ecx
        inc ecx
        cmp eax, esi
        jb public_6ad6373
        jmp public_6ad63ff
        public_6ad63b6 : nop
        xor eax, eax
        mov esi, 0x100
        public_6ad63bd : nop
        cmp eax, 0x41
        jb public_6ad63db
        cmp eax, 0x5A
        ja public_6ad63db
        or byte ptr ds : [eax+public_6ae1321], 0x10
        mov cl, al
        add cl, 0x20
        public_6ad63d3 : nop
        mov byte ptr ds : [eax+public_6ae1220], cl
        jmp public_6ad63fa
        public_6ad63db : nop
        cmp eax, 0x61
        jb public_6ad63f3
        cmp eax, 0x7A
        ja public_6ad63f3
        or byte ptr ds : [eax+public_6ae1321], 0x20
        mov cl, al
        sub cl, 0x20
        jmp public_6ad63d3
        public_6ad63f3 : nop
        and byte ptr ds : [eax+public_6ae1220], 0
        public_6ad63fa : nop
        inc eax
        cmp eax, esi
        jb public_6ad63bd
        public_6ad63ff : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad627d)
    }
}

#undef public_6ad62a7
#undef public_6ad62c6
#undef public_6ad62ed
#undef public_6ad62f8
#undef public_6ad6373
#undef public_6ad6389
#undef public_6ad6391
#undef public_6ad63a6
#undef public_6ad63ad
#undef public_6ad63b6
#undef public_6ad63bd
#undef public_6ad63d3
#undef public_6ad63db
#undef public_6ad63f3
#undef public_6ad63fa
#undef public_6ad63ff
