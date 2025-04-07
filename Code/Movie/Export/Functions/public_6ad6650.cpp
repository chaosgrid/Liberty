#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad6640);
CLANG_FORWARD_PROC_SYMBOL(public_6ad6650);

#define public_6ad6668 _public_6ad6668
#define public_6ad667b _public_6ad667b
#define public_6ad6686 _public_6ad6686
#define public_6ad66c2 _public_6ad66c2
#define public_6ad66c4 _public_6ad66c4
#define public_6ad66c8 _public_6ad66c8
#define public_6ad66f0 _public_6ad66f0
#define public_6ad66f7 _public_6ad66f7
#define public_6ad66fe _public_6ad66fe
#define public_6ad6705 _public_6ad6705

PROC_DECLARE(0x6ad6650, internal_6ad6650, public_6ad6650);
extern "C" NAKED register_t __cdecl internal_6ad6650()
{
    __asm
    {
        xor eax, eax
        mov al, byte ptr ss : [esp+8]
        push ebx
        mov ebx, eax
        shl eax, 8
        mov edx, dword ptr ss : [esp+8]
        test edx, 3
        je public_6ad667b
        public_6ad6668 : nop
        mov cl, byte ptr ds : [edx]
        inc edx
        cmp cl, bl
        je public_6ad6640
        test cl, cl
        je public_6ad66c4
        test edx, 3
        jne public_6ad6668
        public_6ad667b : nop
        or ebx, eax
        push edi
        mov eax, ebx
        shl ebx, 0x10
        push esi
        or ebx, eax
        public_6ad6686 : nop
        mov ecx, dword ptr ds : [edx]
        mov edi, 0x7EFEFEFF
        mov eax, ecx
        mov esi, edi
        xor ecx, ebx
        add esi, eax
        add edi, ecx
        xor ecx, 0xFFFFFFFF
        xor eax, 0xFFFFFFFF
        xor ecx, edi
        xor eax, esi
        add edx, 4
        and ecx, 0x81010100
        jne public_6ad66c8
        and eax, 0x81010100
        je public_6ad6686
        and eax, 0x1010100
        jne public_6ad66c2
        and esi, 0x80000000
        jne public_6ad6686
        public_6ad66c2 : nop
        pop esi
        pop edi
        public_6ad66c4 : nop
        pop ebx
        xor eax, eax
        ret 
        public_6ad66c8 : nop
        mov eax, dword ptr ds : [edx-4]
        cmp al, bl
        je public_6ad6705
        test al, al
        je public_6ad66c2
        cmp ah, bl
        je public_6ad66fe
        test ah, ah
        je public_6ad66c2
        shr eax, 0x10
        cmp al, bl
        je public_6ad66f7
        test al, al
        je public_6ad66c2
        cmp ah, bl
        je public_6ad66f0
        test ah, ah
        je public_6ad66c2
        jmp public_6ad6686
        public_6ad66f0 : nop
        pop esi
        pop edi
        lea eax, ds:[edx-1]
        pop ebx
        ret 
        public_6ad66f7 : nop
        lea eax, ds:[edx-2]
        pop esi
        pop edi
        pop ebx
        ret 
        public_6ad66fe : nop
        lea eax, ds:[edx-3]
        pop esi
        pop edi
        pop ebx
        ret 
        public_6ad6705 : nop
        lea eax, ds:[edx-4]
        pop esi
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ad6650)
    }
}

#undef public_6ad6668
#undef public_6ad667b
#undef public_6ad6686
#undef public_6ad66c2
#undef public_6ad66c4
#undef public_6ad66c8
#undef public_6ad66f0
#undef public_6ad66f7
#undef public_6ad66fe
#undef public_6ad6705
