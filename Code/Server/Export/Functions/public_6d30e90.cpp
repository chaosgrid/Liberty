#include "Server-PCH.h"


#define public_6d30eb5 _public_6d30eb5
#define public_6d30ec7 _public_6d30ec7
#define public_6d30ed1 _public_6d30ed1
#define public_6d30edd _public_6d30edd

PROC_DECLARE(0x6d30e90, internal_6d30e90, public_6d30e90);
extern "C" NAKED register_t __cdecl internal_6d30e90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        mov dword ptr ds : [ebx+0x18], eax
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ebx+0x10]
        push edi
        mov edi, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0xC]
        cmp esi, ecx
        je public_6d30ed1
        mov ebp, dword ptr ds : [ebx+0xC]
        mov eax, esi
        sub edi, esi
        public_6d30eb5 : nop
        cmp ebp, edx
        je public_6d30edd
        mov si, word ptr ds : [edx]
        cmp word ptr ds : [eax], si
        je public_6d30ec7
        cmp word ptr ds : [eax+edi], si
        jne public_6d30edd
        public_6d30ec7 : nop
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6d30eb5
        public_6d30ed1 : nop
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x10], edx
        mov al, 1
        pop ebx
        ret 4
        public_6d30edd : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d30e90)
    }
}

#undef public_6d30eb5
#undef public_6d30ec7
#undef public_6d30ed1
#undef public_6d30edd
