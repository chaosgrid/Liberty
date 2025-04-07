#include "Server-PCH.h"


#define public_6d31410 _public_6d31410
#define public_6d31423 _public_6d31423
#define public_6d3142d _public_6d3142d
#define public_6d31437 _public_6d31437

PROC_DECLARE(0x6d313f0, internal_6d313f0, public_6d313f0);
extern "C" NAKED register_t __cdecl internal_6d313f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ebx]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0xC]
        cmp esi, ecx
        je public_6d3142d
        mov eax, esi
        sub edi, esi
        lea ebx, ds:[ebx]
        public_6d31410 : nop
        mov si, word ptr ds : [edx]
        test si, si
        je public_6d31437
        cmp word ptr ds : [eax], si
        je public_6d31423
        cmp word ptr ds : [eax+edi], si
        jne public_6d31437
        public_6d31423 : nop
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6d31410
        public_6d3142d : nop
        pop edi
        pop esi
        mov dword ptr ds : [ebx], edx
        mov al, 1
        pop ebx
        ret 8
        public_6d31437 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d313f0)
    }
}

#undef public_6d31410
#undef public_6d31423
#undef public_6d3142d
#undef public_6d31437
