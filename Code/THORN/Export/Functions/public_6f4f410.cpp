#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

#define public_6f4f415 _public_6f4f415
#define public_6f4f428 _public_6f4f428
#define public_6f4f440 _public_6f4f440
#define public_6f4f447 _public_6f4f447

PROC_DECLARE(0x6f4f410, internal_6f4f410, public_6f4f410);
extern "C" NAKED register_t __cdecl internal_6f4f410()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        public_6f4f415 : nop
        mov eax, dword ptr ds : [public_6f61e28]
        mov esi, dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+ebx]
        add esi, ebx
        xor edi, edi
        test eax, eax
        jle public_6f4f447
        public_6f4f428 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+edi*4]
        cmp eax, offset public_6f608b0
        je public_6f4f440
        push 0
        push eax
        call public_6f4fe10
        add esp, 8
        public_6f4f440 : nop
        mov eax, dword ptr ds : [esi]
        inc edi
        cmp edi, eax
        jl public_6f4f428
        public_6f4f447 : nop
        mov edx, dword ptr ds : [esi+8]
        push 0
        push edx
        call public_6f4fe10
        add ebx, 0xC
        add esp, 8
        cmp ebx, 0x2E8
        jl public_6f4f415
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x60]
        push 0
        push ecx
        call public_6f4fe10
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4f410)
    }
}

#undef public_6f4f415
#undef public_6f4f428
#undef public_6f4f440
#undef public_6f4f447
