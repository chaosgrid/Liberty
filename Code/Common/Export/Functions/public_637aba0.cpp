#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637aba0);

PROC_DECLARE(0x637aba0, internal_637aba0, public_637aba0);
extern "C" NAKED register_t __cdecl internal_637aba0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov eax, dword ptr ds : [public_658c710]
        mov byte ptr ds : [eax+public_658bfe8], 0x38
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [public_658c194], offset public_63f3b70
        mov word ptr ds : [public_658c42c], ax
        mov byte ptr ds : [public_658c578], 0
        mov byte ptr ds : [ecx+public_658bfe8], 0xBB
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c3a0], offset public_63f3b50
        mov word ptr ds : [public_658c532], ax
        mov dl, 1
        mov byte ptr ds : [public_658c5fb], dl
        mov byte ptr ds : [ecx+public_658bfe8], 0x84
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c2c4], offset public_63f3b34
        mov word ptr ds : [public_658c4c4], ax
        mov byte ptr ds : [public_658c5c4], dl
        mov bl, 0x88
        mov byte ptr ds : [ecx+public_658bfe8], bl
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov byte ptr ds : [ecx+public_658bfe8], bl
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c2d4], offset public_63f3b10
        mov bl, 2
        mov byte ptr ds : [public_658c5c8], bl
        mov edi, 0x84
        mov word ptr ds : [public_658c4cc], di
        mov byte ptr ds : [ecx+public_658bfe8], 0x5F
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c230], offset public_63f3af4
        mov word ptr ds : [public_658c47a], ax
        mov ecx, 3
        mov byte ptr ds : [public_658c59f], cl
        mov byte ptr ds : [esi+public_658bfe8], 0x87
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c2d0], offset public_63f3acc
        mov word ptr ds : [public_658c4ca], di
        mov byte ptr ds : [public_658c5c7], bl
        mov byte ptr ds : [esi+public_658bfe8], 0x5C
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c224], offset public_63f3ab0
        mov word ptr ds : [public_658c474], ax
        mov byte ptr ds : [public_658c59c], cl
        mov byte ptr ds : [esi+public_658bfe8], 0x89
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c2d8], offset public_63f3a88
        mov word ptr ds : [public_658c4ce], di
        mov byte ptr ds : [public_658c5c9], bl
        mov byte ptr ds : [esi+public_658bfe8], 0x61
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c238], offset public_63f3a6c
        mov word ptr ds : [public_658c47e], ax
        mov byte ptr ds : [public_658c5a1], cl
        mov byte ptr ds : [esi+public_658bfe8], 0x8B
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov byte ptr ds : [public_658c5cb], bl
        mov dword ptr ds : [public_658c2e0], offset public_63f3a44
        mov word ptr ds : [public_658c4d2], 0xBB
        mov byte ptr ds : [esi+public_658bfe8], 0x62
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov byte ptr ds : [public_658c5a2], cl
        mov dword ptr ds : [public_658c23c], offset public_63f3ab0
        mov word ptr ds : [public_658c480], ax
        mov byte ptr ds : [esi+public_658bfe8], 0x22
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov dword ptr ds : [public_658c13c], offset public_63f3a20
        mov word ptr ds : [public_658c400], ax
        mov byte ptr ds : [public_658c562], 6
        mov byte ptr ds : [esi+public_658bfe8], 0xB4
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov byte ptr ds : [public_658c5f4], dl
        mov dword ptr ds : [public_658c384], offset public_63f3a04
        mov word ptr ds : [public_658c524], ax
        mov byte ptr ds : [esi+public_658bfe8], 0xAC
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov byte ptr ds : [public_658c5ec], dl
        mov dword ptr ds : [public_658c364], offset public_63f39e8
        mov word ptr ds : [public_658c514], ax
        mov byte ptr ds : [esi+public_658bfe8], 0xB3
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov byte ptr ds : [public_658c5f3], dl
        mov dword ptr ds : [public_658c380], offset public_63f39cc
        mov word ptr ds : [public_658c522], ax
        mov byte ptr ds : [esi+public_658bfe8], 0x95
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov byte ptr ds : [public_658c5d5], dl
        mov dword ptr ds : [public_658c308], offset public_63f39b0
        mov word ptr ds : [public_658c4e6], ax
        mov byte ptr ds : [esi+public_658bfe8], 0x86
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov byte ptr ds : [public_658c5c6], bl
        mov dword ptr ds : [public_658c2cc], offset public_63f3988
        mov word ptr ds : [public_658c4c8], di
        mov byte ptr ds : [esi+public_658bfe8], 0x85
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov byte ptr ds : [public_658c5c5], cl
        mov dword ptr ds : [public_658c2c8], offset public_63f395c
        mov word ptr ds : [public_658c4c6], ax
        mov byte ptr ds : [esi+public_658bfe8], cl
        mov esi, dword ptr ds : [public_658c710]
        inc esi
        mov dword ptr ds : [public_658c710], esi
        mov byte ptr ds : [public_658c543], dl
        mov dword ptr ds : [public_658c0c0], 0
        mov word ptr ds : [public_658c3c2], ax
        mov byte ptr ds : [esi+public_658bfe8], 4
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov word ptr ds : [public_658c3c4], cx
        mov dword ptr ds : [public_658c0c4], offset public_63f3934
        mov byte ptr ds : [public_658c544], 6
        mov byte ptr ds : [edx+public_658bfe8], 5
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov bl, 7
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c0c8], offset public_63f3910
        mov word ptr ds : [public_658c3c6], ax
        mov byte ptr ds : [public_658c545], bl
        mov byte ptr ds : [ecx+public_658bfe8], 6
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dl, 8
        mov dword ptr ds : [public_658c0cc], offset public_63f38ec
        mov word ptr ds : [public_658c3c8], ax
        mov byte ptr ds : [public_658c546], dl
        mov byte ptr ds : [ecx+public_658bfe8], dl
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c0d4], offset public_63f38d4
        mov word ptr ds : [public_658c3cc], ax
        mov byte ptr ds : [public_658c548], 6
        mov byte ptr ds : [ecx+public_658bfe8], 9
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov byte ptr ds : [public_658c549], bl
        mov dword ptr ds : [public_658c0d8], offset public_63f38bc
        mov word ptr ds : [public_658c3ce], ax
        mov byte ptr ds : [ecx+public_658bfe8], 0xA
        mov ecx, dword ptr ds : [public_658c710]
        pop edi
        inc ecx
        pop esi
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c0dc], offset public_63f38a4
        mov word ptr ds : [public_658c3d0], ax
        mov byte ptr ds : [public_658c54a], dl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x637aba0)
    }
}
