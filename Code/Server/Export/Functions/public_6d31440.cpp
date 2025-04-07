#include "Server-PCH.h"


#define public_6d31461 _public_6d31461
#define public_6d31474 _public_6d31474
#define public_6d3147e _public_6d3147e
#define public_6d31489 _public_6d31489

PROC_DECLARE(0x6d31440, internal_6d31440, public_6d31440);
extern "C" NAKED register_t __cdecl internal_6d31440()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov dword ptr ds : [ebx+0x18], eax
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ebx+0x10]
        push edi
        mov edi, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0xC]
        cmp esi, ecx
        je public_6d3147e
        mov eax, esi
        sub edi, esi
        public_6d31461 : nop
        mov si, word ptr ds : [edx]
        test si, si
        je public_6d31489
        cmp word ptr ds : [eax], si
        je public_6d31474
        cmp word ptr ds : [eax+edi], si
        jne public_6d31489
        public_6d31474 : nop
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6d31461
        public_6d3147e : nop
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x10], edx
        mov al, 1
        pop ebx
        ret 4
        public_6d31489 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d31440)
    }
}

#undef public_6d31461
#undef public_6d31474
#undef public_6d3147e
#undef public_6d31489
