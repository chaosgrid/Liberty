#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d38220);

#define public_6d3823c _public_6d3823c
#define public_6d38244 _public_6d38244
#define public_6d38256 _public_6d38256
#define public_6d3826c _public_6d3826c

PROC_DECLARE(0x6d38220, internal_6d38220, public_6d38220);
extern "C" NAKED register_t __cdecl internal_6d38220()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 5
        mov cl, byte ptr ds : [eax+edx+8]
        add eax, edx
        test cl, cl
        push edi
        jne public_6d38244
        public_6d3823c : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6d38244 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        cmp ecx, edx
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        je public_6d3826c
        mov esi, dword ptr ds : [esi+0xC]
        public_6d38256 : nop
        cmp esi, eax
        je public_6d3823c
        mov bx, word ptr ds : [eax]
        cmp bx, word ptr ds : [ecx]
        jne public_6d3823c
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d38256
        public_6d3826c : nop
        mov dword ptr ds : [edi], eax
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d38220)
    }
}

#undef public_6d3823c
#undef public_6d38244
#undef public_6d38256
#undef public_6d3826c
