#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637b000);

PROC_DECLARE(0x637b000, internal_637b000, public_637b000);
extern "C" NAKED register_t __cdecl internal_637b000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658c710]
        mov byte ptr ds : [eax+public_658bfe8], 0x40
        mov ecx, dword ptr ds : [public_658c710]
        or eax, 0xFFFFFFFF
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c1b4], offset public_63f3f74
        mov word ptr ds : [public_658c43c], ax
        mov byte ptr ds : [public_658c580], 0
        mov edx, 0x97
        mov byte ptr ds : [ecx+public_658bfe8], dl
        push ebx
        push esi
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c310], offset public_63f3f60
        mov word ptr ds : [public_658c4ea], ax
        mov cl, 1
        mov byte ptr ds : [public_658c5d7], cl
        mov byte ptr ds : [esi+public_658bfe8], 0x9D
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c328], offset public_63f3f3c
        mov word ptr ds : [public_658c4f6], ax
        mov byte ptr ds : [public_658c5dd], cl
        mov byte ptr ds : [esi+public_658bfe8], 0x9E
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c32c], offset public_63f3f24
        mov word ptr ds : [public_658c4f8], ax
        mov byte ptr ds : [public_658c5de], 7
        mov byte ptr ds : [esi+public_658bfe8], 0x60
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c234], offset public_63f3f04
        mov word ptr ds : [public_658c47c], ax
        mov bl, 3
        mov byte ptr ds : [public_658c5a0], bl
        mov byte ptr ds : [esi+public_658bfe8], 0xB5
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c388], offset public_63f3ee0
        mov word ptr ds : [public_658c526], dx
        mov byte ptr ds : [public_658c5f5], cl
        mov byte ptr ds : [esi+public_658bfe8], 0x56
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c20c], offset public_63f3eac
        mov word ptr ds : [public_658c468], dx
        mov byte ptr ds : [public_658c596], cl
        mov byte ptr ds : [esi+public_658bfe8], 0xBC
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c3a4], offset public_63f3e88
        mov word ptr ds : [public_658c534], dx
        mov byte ptr ds : [public_658c5fc], 2
        mov byte ptr ds : [esi+public_658bfe8], 0xBD
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c3a8], offset public_63f3e7c
        mov word ptr ds : [public_658c536], ax
        mov byte ptr ds : [public_658c5fd], bl
        mov byte ptr ds : [esi+public_658bfe8], 0xBE
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c3ac], offset public_63f3e58
        mov word ptr ds : [public_658c538], dx
        mov byte ptr ds : [public_658c5fe], 2
        mov byte ptr ds : [esi+public_658bfe8], 0xBF
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov byte ptr ds : [public_658c5ff], bl
        mov dword ptr ds : [public_658c3b0], offset public_63f3e7c
        mov word ptr ds : [public_658c53a], ax
        mov byte ptr ds : [esi+public_658bfe8], 0x2D
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov word ptr ds : [public_658c416], dx
        mov dword ptr ds : [public_658c168], offset public_63f3e30
        mov byte ptr ds : [public_658c56d], 2
        mov byte ptr ds : [esi+public_658bfe8], 0x2E
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov byte ptr ds : [public_658c56e], bl
        mov dword ptr ds : [public_658c16c], offset public_63f3e10
        mov word ptr ds : [public_658c418], ax
        mov byte ptr ds : [esi+public_658bfe8], 0xAF
        mov esi, dword ptr ds : [public_658c710]
        mov word ptr ds : [public_658c51a], dx
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c370], offset public_63f3dec
        mov byte ptr ds : [public_658c5ef], cl
        mov byte ptr ds : [esi+public_658bfe8], 0x7B
        mov esi, dword ptr ds : [public_658c710]
        mov word ptr ds : [public_658c4b2], dx
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c2a0], offset public_63f3dc4
        mov byte ptr ds : [public_658c5bb], 2
        mov byte ptr ds : [esi+public_658bfe8], 0x7C
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov byte ptr ds : [public_658c5bc], bl
        mov dword ptr ds : [public_658c2a4], offset public_63f3d9c
        mov word ptr ds : [public_658c4b4], ax
        mov byte ptr ds : [esi+public_658bfe8], 0x79
        mov esi, dword ptr ds : [public_658c710]
        mov word ptr ds : [public_658c4ae], dx
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov bl, 6
        mov dword ptr ds : [public_658c298], offset public_63f3d80
        mov byte ptr ds : [public_658c5b9], bl
        mov byte ptr ds : [esi+public_658bfe8], 0x7A
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov esi, offset public_63f3d68
        mov dword ptr ds : [public_658c29c], esi
        mov word ptr ds : [public_658c4b0], ax
        mov byte ptr ds : [public_658c5ba], bl
        mov byte ptr ds : [edx+public_658bfe8], 0x93
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov dword ptr ds : [public_658c300], offset public_63f3d4c
        mov word ptr ds : [public_658c4e2], 0x92
        mov byte ptr ds : [public_658c5d3], bl
        mov byte ptr ds : [edx+public_658bfe8], 0x94
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov dword ptr ds : [public_658c304], esi
        mov word ptr ds : [public_658c4e4], ax
        mov byte ptr ds : [public_658c5d4], bl
        mov byte ptr ds : [edx+public_658bfe8], 0x92
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov dword ptr ds : [public_658c2fc], offset public_63f3d38
        mov word ptr ds : [public_658c4e0], ax
        mov byte ptr ds : [public_658c5d2], cl
        mov byte ptr ds : [edx+public_658bfe8], 0xAB
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov dword ptr ds : [public_658c360], offset public_63f3d0c
        mov word ptr ds : [public_658c512], ax
        mov byte ptr ds : [public_658c5eb], cl
        mov byte ptr ds : [edx+public_658bfe8], 0x2F
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov word ptr ds : [public_658c41a], ax
        mov dword ptr ds : [public_658c170], offset public_63f3ce0
        mov byte ptr ds : [public_658c56f], cl
        mov byte ptr ds : [edx+public_658bfe8], 0x80
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov word ptr ds : [public_658c4bc], ax
        mov dword ptr ds : [public_658c2b4], offset public_63f3cac
        mov byte ptr ds : [public_658c5c0], cl
        mov byte ptr ds : [edx+public_658bfe8], 0x83
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov word ptr ds : [public_658c4c2], ax
        mov dword ptr ds : [public_658c2c0], offset public_63f3c84
        mov byte ptr ds : [public_658c5c3], cl
        mov byte ptr ds : [edx+public_658bfe8], 0x81
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov word ptr ds : [public_658c4be], ax
        mov dword ptr ds : [public_658c2b8], offset public_63f3c5c
        mov byte ptr ds : [public_658c5c1], cl
        mov byte ptr ds : [edx+public_658bfe8], 0x82
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov word ptr ds : [public_658c4c0], ax
        mov dword ptr ds : [public_658c2bc], offset public_63f3c2c
        mov byte ptr ds : [public_658c5c2], cl
        mov byte ptr ds : [edx+public_658bfe8], 0x51
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov word ptr ds : [public_658c45e], ax
        mov dword ptr ds : [public_658c1f8], offset public_63f3c18
        mov byte ptr ds : [public_658c591], cl
        mov byte ptr ds : [edx+public_658bfe8], 0x8A
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov word ptr ds : [public_658c4d0], ax
        mov dword ptr ds : [public_658c2dc], offset public_63f3bf4
        mov byte ptr ds : [public_658c5ca], cl
        mov byte ptr ds : [edx+public_658bfe8], 0x36
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov word ptr ds : [public_658c428], ax
        mov ebx, 0xAE
        mov dword ptr ds : [public_658c18c], offset public_63f3bcc
        mov byte ptr ds : [public_658c576], cl
        mov byte ptr ds : [edx+public_658bfe8], bl
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov word ptr ds : [public_658c518], ax
        mov dword ptr ds : [public_658c36c], offset public_63f3ba4
        mov byte ptr ds : [public_658c5ee], cl
        mov byte ptr ds : [edx+public_658bfe8], 0x12
        mov eax, dword ptr ds : [public_658c710]
        inc eax
        pop esi
        mov word ptr ds : [public_658c3e0], bx
        mov dword ptr ds : [public_658c710], eax
        mov dword ptr ds : [public_658c0fc], offset public_63f3b84
        mov byte ptr ds : [public_658c552], cl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x637b000)
    }
}
