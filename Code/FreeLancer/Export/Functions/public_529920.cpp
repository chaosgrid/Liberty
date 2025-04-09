#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_528d00);
CLANG_FORWARD_PROC_SYMBOL(public_529920);

#define public_529937 _public_529937
#define public_52994c _public_52994c
#define public_52995b _public_52995b
#define public_52996a _public_52996a
#define public_529979 _public_529979
#define public_529987 _public_529987
#define public_529990 _public_529990
#define public_5299a2 _public_5299a2

PROC_DECLARE(0x529920, internal_529920, public_529920);
extern "C" NAKED register_t __cdecl internal_529920()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ds : [ecx+8]
        push esi
        mov esi, dword ptr ds : [ecx+4]
        push edi
        mov edi, ebp
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], ecx
        je public_529987
        xor ebx, ebx
        public_529937 : nop
        mov ax, word ptr ds : [edi]
        mov word ptr ds : [esi], ax
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_52994c
        call public_4f7a90
        mov dword ptr ds : [esi+4], ebx
        public_52994c : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        mov dword ptr ds : [esi+4], ecx
        je public_52995b
        call public_4f7a80
        public_52995b : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_52996a
        call public_4f7a90
        mov dword ptr ds : [esi+8], ebx
        public_52996a : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, ebx
        mov dword ptr ds : [esi+8], ecx
        je public_529979
        call public_4f7a80
        public_529979 : nop
        add edi, 0xC
        add esi, 0xC
        cmp edi, ebp
        jne public_529937
        mov ecx, dword ptr ss : [esp+0x10]
        public_529987 : nop
        mov ebx, dword ptr ds : [ecx+8]
        cmp esi, ebx
        mov edi, esi
        je public_5299a2
        public_529990 : nop
        mov ecx, edi
        call public_528d00
        add edi, 0xC
        cmp edi, ebx
        jne public_529990
        mov ecx, dword ptr ss : [esp+0x10]
        public_5299a2 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x529920)
    }
}

#undef public_529937
#undef public_52994c
#undef public_52995b
#undef public_52996a
#undef public_529979
#undef public_529987
#undef public_529990
#undef public_5299a2
