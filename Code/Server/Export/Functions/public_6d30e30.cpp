#include "Server-PCH.h"


#define public_6d30e53 _public_6d30e53
#define public_6d30e65 _public_6d30e65
#define public_6d30e6f _public_6d30e6f
#define public_6d30e7b _public_6d30e7b

PROC_DECLARE(0x6d30e30, internal_6d30e30, public_6d30e30);
extern "C" NAKED register_t __cdecl internal_6d30e30()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [ebp]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0xC]
        cmp esi, ecx
        je public_6d30e6f
        mov eax, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [eax+0xC]
        mov eax, esi
        sub edi, esi
        public_6d30e53 : nop
        cmp ebx, edx
        je public_6d30e7b
        mov si, word ptr ds : [edx]
        cmp word ptr ds : [eax], si
        je public_6d30e65
        cmp word ptr ds : [eax+edi], si
        jne public_6d30e7b
        public_6d30e65 : nop
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6d30e53
        public_6d30e6f : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp], edx
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        public_6d30e7b : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d30e30)
    }
}

#undef public_6d30e53
#undef public_6d30e65
#undef public_6d30e6f
#undef public_6d30e7b
