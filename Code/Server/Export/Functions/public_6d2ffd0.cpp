#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2ffd0);

#define public_6d2ffea _public_6d2ffea
#define public_6d2fff1 _public_6d2fff1
#define public_6d30000 _public_6d30000
#define public_6d30017 _public_6d30017

PROC_DECLARE(0x6d2ffd0, internal_6d2ffd0, public_6d2ffd0);
extern "C" NAKED register_t __cdecl internal_6d2ffd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+4]
        shl eax, 5
        add eax, ecx
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        push esi
        push edi
        jne public_6d2fff1
        public_6d2ffea : nop
        pop edi
        xor al, al
        pop esi
        ret 8
        public_6d2fff1 : nop
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [eax+4]
        cmp ecx, esi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        je public_6d30017
        public_6d30000 : nop
        mov dx, word ptr ds : [eax]
        test dx, dx
        je public_6d2ffea
        cmp dx, word ptr ds : [ecx]
        jne public_6d2ffea
        add ecx, 2
        add eax, 2
        cmp ecx, esi
        jne public_6d30000
        public_6d30017 : nop
        mov dword ptr ds : [edi], eax
        pop edi
        mov al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d2ffd0)
    }
}

#undef public_6d2ffea
#undef public_6d2fff1
#undef public_6d30000
#undef public_6d30017
