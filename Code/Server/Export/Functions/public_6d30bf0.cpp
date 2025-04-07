#include "Server-PCH.h"


#define public_6d30c10 _public_6d30c10
#define public_6d30c26 _public_6d30c26
#define public_6d30c30 _public_6d30c30

PROC_DECLARE(0x6d30bf0, internal_6d30bf0, public_6d30bf0);
extern "C" NAKED register_t __cdecl internal_6d30bf0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        cmp edx, ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        je public_6d30c26
        mov esi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [esi+0xC]
        lea ebx, ds:[ebx]
        public_6d30c10 : nop
        cmp esi, eax
        je public_6d30c30
        mov bx, word ptr ds : [edx]
        cmp bx, word ptr ds : [eax]
        jne public_6d30c30
        add edx, 2
        add eax, 2
        cmp edx, ecx
        jne public_6d30c10
        public_6d30c26 : nop
        mov dword ptr ds : [edi], eax
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6d30c30 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d30bf0)
    }
}

#undef public_6d30c10
#undef public_6d30c26
#undef public_6d30c30
