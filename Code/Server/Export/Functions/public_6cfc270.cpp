#include "Server-PCH.h"


#define public_6cfc295 _public_6cfc295
#define public_6cfc2a0 _public_6cfc2a0
#define public_6cfc2bd _public_6cfc2bd
#define public_6cfc2bf _public_6cfc2bf

PROC_DECLARE(0x6cfc270, internal_6cfc270, public_6cfc270);
extern "C" NAKED register_t __cdecl internal_6cfc270()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6d8d928]
        test cl, cl
        push esi
        mov eax, 0xFFFFFFFB
        jne public_6cfc2bf
        mov edx, dword ptr ds : [public_6d8d8f8]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        mov eax, 0xFFFFFFFE
        je public_6cfc2a0
        mov esi, dword ptr ss : [esp+8]
        public_6cfc295 : nop
        cmp dword ptr ds : [ecx+8], esi
        je public_6cfc2a0
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6cfc295
        public_6cfc2a0 : nop
        cmp ecx, edx
        je public_6cfc2bf
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax+0x20]
        push ecx
        or esi, 0xFFFFFFFF
        call dword ptr ds : [public_6d6450c]
        add esp, 4
        test eax, eax
        jne public_6cfc2bd
        pop esi
        ret 
        public_6cfc2bd : nop
        mov eax, esi
        public_6cfc2bf : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfc270)
    }
}

#undef public_6cfc295
#undef public_6cfc2a0
#undef public_6cfc2bd
#undef public_6cfc2bf
