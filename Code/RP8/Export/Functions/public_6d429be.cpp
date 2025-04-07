#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d429be);

#define public_6d429ec _public_6d429ec
#define public_6d429fe _public_6d429fe
#define public_6d42a0c _public_6d42a0c
#define public_6d42a1e _public_6d42a1e
#define public_6d42a31 _public_6d42a31
#define public_6d42a4f _public_6d42a4f
#define public_6d42a5e _public_6d42a5e
#define public_6d42a7a _public_6d42a7a
#define public_6d42a7b _public_6d42a7b

PROC_DECLARE(0x6d429be, internal_6d429be, public_6d429be);
extern "C" NAKED register_t __cdecl internal_6d429be()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        mov dl, byte ptr ds : [eax+8]
        test dl, 2
        je public_6d42a7b
        mov ecx, dword ptr ds : [eax]
        mov al, byte ptr ds : [eax+9]
        cmp al, 8
        push esi
        jne public_6d42a1e
        cmp dl, 2
        jne public_6d429fe
        test ecx, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        jbe public_6d42a7a
        mov esi, ecx
        public_6d429ec : nop
        mov dl, byte ptr ds : [eax]
        mov cl, byte ptr ds : [eax+2]
        mov byte ptr ds : [eax], cl
        mov byte ptr ds : [eax+2], dl
        add eax, 3
        dec esi
        jne public_6d429ec
        jmp public_6d42a7a
        public_6d429fe : nop
        cmp dl, 6
        jne public_6d42a7a
        test ecx, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        jbe public_6d42a7a
        mov esi, ecx
        public_6d42a0c : nop
        mov dl, byte ptr ds : [eax]
        mov cl, byte ptr ds : [eax+2]
        mov byte ptr ds : [eax], cl
        mov byte ptr ds : [eax+2], dl
        add eax, 4
        dec esi
        jne public_6d42a0c
        jmp public_6d42a7a
        public_6d42a1e : nop
        cmp al, 0x10
        jne public_6d42a7a
        cmp dl, 2
        jne public_6d42a4f
        test ecx, ecx
        jbe public_6d42a7a
        mov eax, dword ptr ss : [ebp+0xC]
        inc eax
        mov esi, ecx
        public_6d42a31 : nop
        mov cl, byte ptr ds : [eax-1]
        mov dl, byte ptr ds : [eax+3]
        mov byte ptr ds : [eax-1], dl
        mov dl, byte ptr ds : [eax+4]
        mov byte ptr ds : [eax+3], cl
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [eax], dl
        mov byte ptr ds : [eax+4], cl
        add eax, 6
        dec esi
        jne public_6d42a31
        jmp public_6d42a7a
        public_6d42a4f : nop
        cmp dl, 6
        jne public_6d42a7a
        test ecx, ecx
        jbe public_6d42a7a
        mov eax, dword ptr ss : [ebp+0xC]
        inc eax
        mov esi, ecx
        public_6d42a5e : nop
        mov cl, byte ptr ds : [eax-1]
        mov dl, byte ptr ds : [eax+3]
        mov byte ptr ds : [eax-1], dl
        mov dl, byte ptr ds : [eax+4]
        mov byte ptr ds : [eax+3], cl
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [eax], dl
        mov byte ptr ds : [eax+4], cl
        add eax, 8
        dec esi
        jne public_6d42a5e
        public_6d42a7a : nop
        pop esi
        public_6d42a7b : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d429be)
    }
}

#undef public_6d429ec
#undef public_6d429fe
#undef public_6d42a0c
#undef public_6d42a1e
#undef public_6d42a31
#undef public_6d42a4f
#undef public_6d42a5e
#undef public_6d42a7a
#undef public_6d42a7b
