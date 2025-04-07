#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c26d6 _public_62c26d6
#define public_62c26e2 _public_62c26e2
#define public_62c26e4 _public_62c26e4
#define public_62c26f9 _public_62c26f9
#define public_62c26fb _public_62c26fb
#define public_62c2705 _public_62c2705
#define public_62c2711 _public_62c2711

PROC_DECLARE(0x62c26c0, internal_62c26c0, public_62c26c0);
extern "C" NAKED register_t __cdecl internal_62c26c0()
{
    __asm
    {
        push ebx
        push ebp
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x800]
        xor ebp, ebp
        xor ebx, ebx
        test eax, eax
        jle public_62c2711
        push esi
        mov esi, edi
        public_62c26d6 : nop
        mov eax, dword ptr ds : [edi+ebx*8]
        test eax, eax
        je public_62c26e2
        add eax, 0xFFFFFFF8
        jmp public_62c26e4
        public_62c26e2 : nop
        xor eax, eax
        public_62c26e4 : nop
        cmp eax, dword ptr ss : [esp+0x14]
        je public_62c2705
        mov ecx, esi
        inc ebp
        add esi, 8
        test eax, eax
        je public_62c26f9
        add eax, 8
        jmp public_62c26fb
        public_62c26f9 : nop
        xor eax, eax
        public_62c26fb : nop
        cmp eax, dword ptr ds : [ecx]
        je public_62c2705
        push eax
        call public_6341610
        public_62c2705 : nop
        mov eax, dword ptr ds : [edi+0x800]
        inc ebx
        cmp ebx, eax
        jl public_62c26d6
        pop esi
        public_62c2711 : nop
        mov dword ptr ds : [edi+0x800], ebp
        pop edi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62c26c0)
    }
}

#undef public_62c26d6
#undef public_62c26e2
#undef public_62c26e4
#undef public_62c26f9
#undef public_62c26fb
#undef public_62c2705
#undef public_62c2711
