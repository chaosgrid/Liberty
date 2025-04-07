#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355310);

#define public_635532c _public_635532c
#define public_6355338 _public_6355338
#define public_6355349 _public_6355349
#define public_635535e _public_635535e

PROC_DECLARE(0x6355310, internal_6355310, public_6355310);
extern "C" NAKED register_t __cdecl internal_6355310()
{
    __asm
    {
        push esi
        xor esi, esi
        mov si, word ptr ds : [ecx+2]
        push edi
        mov eax, esi
        and eax, 0xFFFF
        dec eax
        js public_6355338
        mov edx, dword ptr ds : [ecx+4]
        mov edi, dword ptr ss : [esp+0xC]
        lea edx, ds:[edx+eax*4]
        public_635532c : nop
        cmp dword ptr ds : [edx], edi
        je public_6355338
        dec eax
        sub edx, 4
        test eax, eax
        jge public_635532c
        public_6355338 : nop
        lea edx, ds:[esi-1]
        mov word ptr ds : [ecx+2], dx
        and edx, 0xFFFF
        cmp eax, edx
        jge public_635535e
        public_6355349 : nop
        mov edx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [edx+eax*4+4]
        mov dword ptr ds : [edx+eax*4], esi
        xor edx, edx
        mov dx, word ptr ds : [ecx+2]
        inc eax
        cmp eax, edx
        jl public_6355349
        public_635535e : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6355310)
    }
}

#undef public_635532c
#undef public_6355338
#undef public_6355349
#undef public_635535e
