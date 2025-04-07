#include "Common-PCH.h"


#define public_62b234b _public_62b234b
#define public_62b234d _public_62b234d
#define public_62b2377 _public_62b2377
#define public_62b2379 _public_62b2379
#define public_62b239a _public_62b239a
#define public_62b239c _public_62b239c
#define public_62b23b0 _public_62b23b0

PROC_DECLARE(0x62b2310, internal_62b2310, public_62b2310);
extern "C" NAKED register_t __cdecl internal_62b2310()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x220]
        test eax, eax
        je public_62b23b0
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b23b0
        mov ax, word ptr ds : [esi+0x228]
        cmp ax, word ptr ds : [public_63a4aa4]
        je public_62b23b0
        mov eax, dword ptr ds : [esi+0x220]
        test eax, eax
        je public_62b234b
        lea ecx, ds:[eax-8]
        jmp public_62b234d
        public_62b234b : nop
        xor ecx, ecx
        public_62b234d : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62b23b0
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_62b23b0
        mov eax, dword ptr ds : [esi+0x220]
        test eax, eax
        je public_62b2377
        lea ecx, ds:[eax-8]
        jmp public_62b2379
        public_62b2377 : nop
        xor ecx, ecx
        public_62b2379 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62b239a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62b239a
        mov ecx, eax
        jmp public_62b239c
        public_62b239a : nop
        xor ecx, ecx
        public_62b239c : nop
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov ax, word ptr ds : [esi+0x228]
        push eax
        call dword ptr ds : [edx+0xF8]
        pop esi
        ret 
        public_62b23b0 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62b2310)
    }
}

#undef public_62b234b
#undef public_62b234d
#undef public_62b2377
#undef public_62b2379
#undef public_62b239a
#undef public_62b239c
#undef public_62b23b0
