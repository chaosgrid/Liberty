#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e460);

#define public_636e48c _public_636e48c
#define public_636e49c _public_636e49c

PROC_DECLARE(0x636e460, internal_636e460, public_636e460);
extern "C" NAKED register_t __cdecl internal_636e460()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_636e49c
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_636e49c
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ds : [ecx+edx*4+4]
        test esi, esi
        je public_636e48c
        mov eax, dword ptr ds : [ecx+esi*4-4]
        mov dword ptr ds : [ecx+esi*4-4], 0
        dec dword ptr ds : [ecx+edx*4+4]
        pop esi
        ret 
        public_636e48c : nop
        mov eax, dword ptr ds : [ecx+edx*4]
        mov dword ptr ds : [ecx+edx*4], 0
        mov dword ptr ds : [ecx+edx*4+4], edx
        pop esi
        ret 
        public_636e49c : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x636e460)
    }
}

#undef public_636e48c
#undef public_636e49c
