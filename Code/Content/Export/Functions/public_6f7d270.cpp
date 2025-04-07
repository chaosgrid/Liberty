#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7d270);

#define public_6f7d283 _public_6f7d283
#define public_6f7d29a _public_6f7d29a

PROC_DECLARE(0x6f7d270, internal_6f7d270, public_6f7d270);
extern "C" NAKED register_t __cdecl internal_6f7d270()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6f7d29a
        push esi
        push edi
        public_6f7d283 : nop
        mov esi, edx
        mov edi, eax
        add edx, 0x1C
        mov ecx, 7
        add eax, 0x1C
        cmp edx, ebx
        rep movsd
        jne public_6f7d283
        pop edi
        pop esi
        public_6f7d29a : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f7d270)
    }
}

#undef public_6f7d283
#undef public_6f7d29a
