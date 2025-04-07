#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6a350);

#define public_6f6a363 _public_6f6a363
#define public_6f6a37a _public_6f6a37a

PROC_DECLARE(0x6f6a350, internal_6f6a350, public_6f6a350);
extern "C" NAKED register_t __cdecl internal_6f6a350()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6f6a37a
        push esi
        push edi
        public_6f6a363 : nop
        mov esi, edx
        mov edi, eax
        add edx, 0x20
        mov ecx, 8
        add eax, 0x20
        cmp edx, ebx
        rep movsd
        jne public_6f6a363
        pop edi
        pop esi
        public_6f6a37a : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f6a350)
    }
}

#undef public_6f6a363
#undef public_6f6a37a
