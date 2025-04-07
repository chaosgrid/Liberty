#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637c720);

PROC_DECLARE(0x637c720, internal_637c720, public_637c720);
extern "C" NAKED register_t __cdecl internal_637c720()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658c710]
        mov dword ptr ds : [public_658c718], eax
        mov byte ptr ds : [eax+public_658bfe8], 0x42
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [public_658c1bc], offset public_63f4e90
        mov word ptr ds : [public_658c440], ax
        mov byte ptr ds : [public_658c582], 0
        mov edx, 0x9F
        mov byte ptr ds : [ecx+public_658bfe8], dl
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c330], offset public_63f4e60
        mov word ptr ds : [public_658c4fa], ax
        mov byte ptr ds : [public_658c5df], 1
        mov byte ptr ds : [ecx+public_658bfe8], 0xA0
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov word ptr ds : [public_658c4fc], dx
        mov dword ptr ds : [public_658c334], offset public_63f4e44
        push ebx
        mov bl, 6
        mov byte ptr ds : [public_658c5e0], bl
        mov byte ptr ds : [ecx+public_658bfe8], 0xA1
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c338], offset public_63f4e28
        mov word ptr ds : [public_658c4fe], ax
        mov dl, 7
        mov byte ptr ds : [public_658c5e1], dl
        mov byte ptr ds : [ecx+public_658bfe8], 0xA5
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c348], offset public_63f4e18
        mov word ptr ds : [public_658c506], ax
        mov byte ptr ds : [public_658c5e5], 1
        mov byte ptr ds : [ecx+public_658bfe8], 0xA6
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c34c], offset public_63f4df0
        mov word ptr ds : [public_658c508], 0xA5
        mov byte ptr ds : [public_658c5e6], bl
        mov byte ptr ds : [ecx+public_658bfe8], 0xA7
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c350], offset public_63f4dc8
        mov word ptr ds : [public_658c50a], ax
        mov byte ptr ds : [public_658c5e7], dl
        mov byte ptr ds : [ecx+public_658bfe8], 0xA8
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c354], offset public_63f4da8
        mov word ptr ds : [public_658c50c], ax
        mov byte ptr ds : [public_658c5e8], 1
        mov byte ptr ds : [ecx+public_658bfe8], 0xA9
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c358], offset public_63f4d90
        mov word ptr ds : [public_658c50e], 0xA8
        mov byte ptr ds : [public_658c5e9], bl
        mov byte ptr ds : [ecx+public_658bfe8], 0xAA
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c35c], offset public_63f4d78
        mov word ptr ds : [public_658c510], ax
        mov byte ptr ds : [public_658c5ea], dl
        mov byte ptr ds : [ecx+public_658bfe8], 0xA2
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov dword ptr ds : [public_658c33c], offset public_63f4d50
        mov word ptr ds : [public_658c500], ax
        mov byte ptr ds : [public_658c5e2], 1
        mov byte ptr ds : [ecx+public_658bfe8], 0xA3
        mov ecx, dword ptr ds : [public_658c710]
        inc ecx
        mov dword ptr ds : [public_658c710], ecx
        mov byte ptr ds : [public_658c5e3], bl
        mov dword ptr ds : [public_658c340], offset public_63f4d90
        mov word ptr ds : [public_658c502], 0xA2
        mov byte ptr ds : [ecx+public_658bfe8], 0xA4
        inc dword ptr ds : [public_658c710]
        mov dword ptr ds : [public_658c344], offset public_63f4d78
        mov word ptr ds : [public_658c504], ax
        mov byte ptr ds : [public_658c5e4], dl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x637c720)
    }
}
