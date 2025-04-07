#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ad30);

#define public_6f4ad42 _public_6f4ad42
#define public_6f4ad57 _public_6f4ad57

PROC_DECLARE(0x6f4ad30, internal_6f4ad30, public_6f4ad30);
extern "C" NAKED register_t __cdecl internal_6f4ad30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd0c40]
        mov ecx, dword ptr ds : [public_6fd0c3c]
        mov edx, eax
        cmp eax, edx
        je public_6f4ad57
        push esi
        public_6f4ad42 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6f4ad42
        pop esi
        public_6f4ad57 : nop
        mov dword ptr ds : [public_6fd0c40], ecx
        ret 
        UNREACHABLE_TRAP(0x6f4ad30)
    }
}

#undef public_6f4ad42
#undef public_6f4ad57
