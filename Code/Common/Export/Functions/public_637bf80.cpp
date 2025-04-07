#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637bf80);

PROC_DECLARE(0x637bf80, internal_637bf80, public_637bf80);
extern "C" NAKED register_t __cdecl internal_637bf80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658c710]
        push ebx
        xor ebx, ebx
        mov byte ptr ds : [eax+public_658bfe8], bl
        mov edx, dword ptr ds : [public_658c710]
        push ebp
        or eax, 0xFFFFFFFF
        inc edx
        mov dword ptr ds : [public_658c710], edx
        mov dword ptr ds : [public_658c0b4], offset public_63f496c
        mov word ptr ds : [public_658c3bc], ax
        mov cl, 1
        mov byte ptr ds : [public_658c540], cl
        mov byte ptr ds : [edx+public_658bfe8], 2
        mov edx, dword ptr ds : [public_658c710]
        inc edx
        mov word ptr ds : [public_658c3c0], bx
        mov dword ptr ds : [public_658c710], edx
        push esi
        mov bl, 6
        mov byte ptr ds : [public_658c542], bl
        push edi
        mov edi, offset public_63f4950
        mov dword ptr ds : [public_658c0bc], edi
        mov byte ptr ds : [edx+public_658bfe8], cl
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov word ptr ds : [public_658c3be], ax
        mov esi, offset public_63f4934
        mov dword ptr ds : [public_658c0b8], esi
        mov dl, 7
        mov byte ptr ds : [public_658c541], dl
        mov byte ptr ss : [ebp+public_658bfe8], 0x19
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov dword ptr ds : [public_658c118], offset public_63f4914
        mov word ptr ds : [public_658c3ee], ax
        mov byte ptr ds : [public_658c559], cl
        mov byte ptr ss : [ebp+public_658bfe8], 0x1B
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov dword ptr ds : [public_658c120], edi
        mov word ptr ds : [public_658c3f2], 0x19
        mov byte ptr ds : [public_658c55b], bl
        mov byte ptr ss : [ebp+public_658bfe8], 0x1A
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov dword ptr ds : [public_658c11c], esi
        mov word ptr ds : [public_658c3f0], ax
        mov byte ptr ds : [public_658c55a], dl
        mov byte ptr ss : [ebp+public_658bfe8], 0x14
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov dword ptr ds : [public_658c104], offset public_63f48f4
        mov word ptr ds : [public_658c3e4], ax
        mov byte ptr ds : [public_658c554], cl
        mov byte ptr ss : [ebp+public_658bfe8], 0x16
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov dword ptr ds : [public_658c10c], edi
        mov word ptr ds : [public_658c3e8], 0x14
        mov byte ptr ds : [public_658c556], bl
        mov byte ptr ss : [ebp+public_658bfe8], 0x15
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov dword ptr ds : [public_658c108], esi
        mov word ptr ds : [public_658c3e6], ax
        mov byte ptr ds : [public_658c555], dl
        mov byte ptr ss : [ebp+public_658bfe8], 0xB
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov dword ptr ds : [public_658c0e0], offset public_63f48c0
        mov word ptr ds : [public_658c3d2], ax
        mov byte ptr ds : [public_658c54b], cl
        mov byte ptr ss : [ebp+public_658bfe8], 0xD
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov dword ptr ds : [public_658c0e8], edi
        mov word ptr ds : [public_658c3d6], 0xB
        mov byte ptr ds : [public_658c54d], bl
        mov byte ptr ss : [ebp+public_658bfe8], 0xC
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov dword ptr ds : [public_658c0e4], esi
        mov word ptr ds : [public_658c3d4], ax
        mov byte ptr ds : [public_658c54c], dl
        mov byte ptr ss : [ebp+public_658bfe8], 0x27
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov byte ptr ds : [public_658c567], cl
        mov dword ptr ds : [public_658c150], offset public_63f48a0
        mov word ptr ds : [public_658c40a], ax
        mov byte ptr ss : [ebp+public_658bfe8], 0x29
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov dword ptr ds : [public_658c158], edi
        mov word ptr ds : [public_658c40e], 0x27
        mov byte ptr ds : [public_658c569], bl
        mov byte ptr ss : [ebp+public_658bfe8], 0x28
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov dword ptr ds : [public_658c154], esi
        mov word ptr ds : [public_658c40c], ax
        mov byte ptr ds : [public_658c568], dl
        mov byte ptr ss : [ebp+public_658bfe8], 0x4C
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov byte ptr ds : [public_658c58c], cl
        mov dword ptr ds : [public_658c1e4], offset public_63f4878
        mov word ptr ds : [public_658c454], ax
        mov byte ptr ss : [ebp+public_658bfe8], 0x4E
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov dword ptr ds : [public_658c1ec], edi
        mov word ptr ds : [public_658c458], 0x4C
        mov byte ptr ds : [public_658c58e], bl
        mov byte ptr ss : [ebp+public_658bfe8], 0x4D
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov dword ptr ds : [public_658c710], ebp
        mov dword ptr ds : [public_658c1e8], esi
        mov word ptr ds : [public_658c456], ax
        mov byte ptr ds : [public_658c58d], dl
        mov byte ptr ss : [ebp+public_658bfe8], 0x46
        mov ebp, dword ptr ds : [public_658c710]
        inc ebp
        mov byte ptr ds : [public_658c586], cl
        mov dword ptr ds : [public_658c710], ebp
        mov dword ptr ds : [public_658c1cc], offset public_63f4858
        mov word ptr ds : [public_658c448], ax
        mov byte ptr ss : [ebp+public_658bfe8], 0x48
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c1d4], edi
        mov word ptr ds : [public_658c44c], 0x46
        mov byte ptr ds : [public_658c588], bl
        mov byte ptr ds : [ecx+public_658bfe8], 0x47
        mov ecx, dword ptr ds : [public_658c710]
        pop edi
        mov dword ptr ds : [public_658c1d0], esi
        inc ecx
        pop esi
        mov dword ptr ds : [public_658c710], ecx
        mov word ptr ds : [public_658c44a], ax
        mov byte ptr ds : [public_658c587], dl
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x637bf80)
    }
}
