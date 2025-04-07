#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348ef0);

#define public_6348f0c _public_6348f0c
#define public_6348f18 _public_6348f18
#define public_6348f29 _public_6348f29
#define public_6348f3e _public_6348f3e

PROC_DECLARE(0x6348ef0, internal_6348ef0, public_6348ef0);
extern "C" NAKED register_t __cdecl internal_6348ef0()
{
    __asm
    {
        push esi
        xor esi, esi
        mov si, word ptr ds : [ecx+0xE]
        push edi
        mov eax, esi
        and eax, 0xFFFF
        dec eax
        js public_6348f18
        mov edx, dword ptr ds : [ecx+0x10]
        mov edi, dword ptr ss : [esp+0xC]
        lea edx, ds:[edx+eax*4]
        public_6348f0c : nop
        cmp dword ptr ds : [edx], edi
        je public_6348f18
        dec eax
        sub edx, 4
        test eax, eax
        jge public_6348f0c
        public_6348f18 : nop
        lea edx, ds:[esi-1]
        mov word ptr ds : [ecx+0xE], dx
        and edx, 0xFFFF
        cmp eax, edx
        jge public_6348f3e
        public_6348f29 : nop
        mov edx, dword ptr ds : [ecx+0x10]
        mov esi, dword ptr ds : [edx+eax*4+4]
        mov dword ptr ds : [edx+eax*4], esi
        xor edx, edx
        mov dx, word ptr ds : [ecx+0xE]
        inc eax
        cmp eax, edx
        jl public_6348f29
        public_6348f3e : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6348ef0)
    }
}

#undef public_6348f0c
#undef public_6348f18
#undef public_6348f29
#undef public_6348f3e
