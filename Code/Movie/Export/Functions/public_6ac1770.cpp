#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1be0);

#define public_6ac177e _public_6ac177e
#define public_6ac178d _public_6ac178d

PROC_DECLARE(0x6ac1770, internal_6ac1770, public_6ac1770);
extern "C" NAKED register_t __cdecl internal_6ac1770()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ae0930]
        test eax, eax
        jne public_6ac177e
        jmp public_6ac1be0
        public_6ac177e : nop
        mov ecx, dword ptr ds : [public_6ae092c]
        test ecx, ecx
        je public_6ac178d
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x14]
        public_6ac178d : nop
        ret 
        UNREACHABLE_TRAP(0x6ac1770)
    }
}

#undef public_6ac177e
#undef public_6ac178d
