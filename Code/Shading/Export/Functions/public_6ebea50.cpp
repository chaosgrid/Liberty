#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebea50);

#define public_6ebea64 _public_6ebea64
#define public_6ebea7b _public_6ebea7b

PROC_DECLARE(0x6ebea50, internal_6ebea50, public_6ebea50);
extern "C" NAKED register_t __cdecl internal_6ebea50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed57c8]
        mov edx, dword ptr ds : [public_6ed57c4]
        push ebx
        mov ebx, eax
        cmp eax, ebx
        je public_6ebea7b
        push esi
        push edi
        public_6ebea64 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x34
        mov ecx, 0xD
        add edx, 0x34
        cmp eax, ebx
        rep movsd
        jne public_6ebea64
        pop edi
        pop esi
        public_6ebea7b : nop
        mov dword ptr ds : [public_6ed57c8], edx
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ebea50)
    }
}

#undef public_6ebea64
#undef public_6ebea7b
