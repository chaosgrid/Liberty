#include "Common-PCH.h"


#define public_62d4a6f _public_62d4a6f
#define public_62d4a7c _public_62d4a7c

PROC_DECLARE(0x62d4a40, internal_62d4a40, public_62d4a40);
extern "C" NAKED register_t __cdecl internal_62d4a40()
{
    __asm
    {
        mov edx, ecx
        mov ecx, dword ptr ss : [esp+4]
        cmp ecx, 0xFFFFFFFF
        je public_62d4a7c
        mov eax, 2
        shl eax, cl
        mov cl, byte ptr ss : [esp+8]
        test cl, cl
        mov ecx, dword ptr ds : [edx+0xB8]
        je public_62d4a6f
        not eax
        and ecx, eax
        mov dword ptr ds : [edx+0xB8], ecx
        mov al, 1
        ret 8
        public_62d4a6f : nop
        or ecx, eax
        mov dword ptr ds : [edx+0xB8], ecx
        mov al, 1
        ret 8
        public_62d4a7c : nop
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x62d4a40)
    }
}

#undef public_62d4a6f
#undef public_62d4a7c
