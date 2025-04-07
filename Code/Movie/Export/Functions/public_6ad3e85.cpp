#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3e85);

#define public_6ad3ecc _public_6ad3ecc
#define public_6ad3ed3 _public_6ad3ed3
#define public_6ad3eeb _public_6ad3eeb
#define public_6ad3ef4 _public_6ad3ef4
#define public_6ad3f0c _public_6ad3f0c
#define public_6ad3f2d _public_6ad3f2d
#define public_6ad3f36 _public_6ad3f36

PROC_DECLARE(0x6ad3e85, internal_6ad3e85, public_6ad3e85);
extern "C" NAKED register_t __cdecl internal_6ad3e85()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push ebx
        push esi
        push edi
        mov ax, word ptr ds : [edx+6]
        mov edi, 0x7FF
        mov ecx, eax
        and eax, 0x8000
        shr ecx, 4
        and ecx, edi
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx]
        movzx ebx, cx
        mov esi, 0x80000000
        and eax, 0xFFFFF
        test ebx, ebx
        mov dword ptr ss : [ebp-4], esi
        je public_6ad3ed3
        cmp ebx, edi
        je public_6ad3ecc
        lea edi, ds:[ecx+0x3C00]
        jmp public_6ad3ef4
        public_6ad3ecc : nop
        mov edi, 0x7FFF
        jmp public_6ad3ef4
        public_6ad3ed3 : nop
        xor ebx, ebx
        cmp eax, ebx
        jne public_6ad3eeb
        cmp edx, ebx
        jne public_6ad3eeb
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        mov word ptr ds : [eax+8], bx
        jmp public_6ad3f36
        public_6ad3eeb : nop
        lea edi, ds:[ecx+0x3C01]
        mov dword ptr ss : [ebp-4], ebx
        public_6ad3ef4 : nop
        mov ecx, edx
        shr ecx, 0x15
        shl eax, 0xB
        or ecx, eax
        mov eax, dword ptr ss : [ebp+8]
        or ecx, dword ptr ss : [ebp-4]
        shl edx, 0xB
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], edx
        public_6ad3f0c : nop
        test esi, ecx
        jne public_6ad3f2d
        mov edx, dword ptr ds : [eax]
        add ecx, ecx
        mov ebx, edx
        shr ebx, 0x1F
        or ebx, ecx
        lea ecx, ds:[edx+edx]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ebx
        add edi, 0xFFFF
        mov ecx, ebx
        jmp public_6ad3f0c
        public_6ad3f2d : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        or ecx, edi
        mov word ptr ds : [eax+8], cx
        public_6ad3f36 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad3e85)
    }
}

#undef public_6ad3ecc
#undef public_6ad3ed3
#undef public_6ad3eeb
#undef public_6ad3ef4
#undef public_6ad3f0c
#undef public_6ad3f2d
#undef public_6ad3f36
