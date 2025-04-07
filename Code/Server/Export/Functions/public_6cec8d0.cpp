#include "Server-PCH.h"


#define public_6cec8e5 _public_6cec8e5
#define public_6cec8f5 _public_6cec8f5
#define public_6cec8fb _public_6cec8fb
#define public_6cec901 _public_6cec901

PROC_DECLARE(0x6cec8d0, internal_6cec8d0, public_6cec8d0);
extern "C" NAKED register_t __cdecl internal_6cec8d0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x80]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6cec8fb
        mov ebx, dword ptr ds : [public_6d64324]
        public_6cec8e5 : nop
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        je public_6cec8f5
        lea ecx, ds:[esi+8]
        call ebx
        test al, al
        je public_6cec901
        public_6cec8f5 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6cec8e5
        public_6cec8fb : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 
        public_6cec901 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6cec8d0)
    }
}

#undef public_6cec8e5
#undef public_6cec8f5
#undef public_6cec8fb
#undef public_6cec901
