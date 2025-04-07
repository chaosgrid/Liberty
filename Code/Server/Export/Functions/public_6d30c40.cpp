#include "Server-PCH.h"


#define public_6d30c60 _public_6d30c60
#define public_6d30c76 _public_6d30c76
#define public_6d30c81 _public_6d30c81

PROC_DECLARE(0x6d30c40, internal_6d30c40, public_6d30c40);
extern "C" NAKED register_t __cdecl internal_6d30c40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x18], eax
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        cmp edx, ecx
        mov eax, dword ptr ds : [esi+0x10]
        push edi
        je public_6d30c76
        mov edi, dword ptr ds : [esi+0xC]
        lea ecx, ds:[ecx]
        public_6d30c60 : nop
        cmp edi, eax
        je public_6d30c81
        mov bx, word ptr ds : [edx]
        cmp bx, word ptr ds : [eax]
        jne public_6d30c81
        add edx, 2
        add eax, 2
        cmp edx, ecx
        jne public_6d30c60
        public_6d30c76 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6d30c81 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d30c40)
    }
}

#undef public_6d30c60
#undef public_6d30c76
#undef public_6d30c81
