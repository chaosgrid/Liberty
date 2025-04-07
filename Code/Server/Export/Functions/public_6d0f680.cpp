#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f680);

#define public_6d0f691 _public_6d0f691
#define public_6d0f6a2 _public_6d0f6a2

PROC_DECLARE(0x6d0f680, internal_6d0f680, public_6d0f680);
extern "C" NAKED register_t __cdecl internal_6d0f680()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6d0f6a2
        push esi
        public_6d0f691 : nop
        mov si, word ptr ds : [ecx]
        mov word ptr ds : [eax], si
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d0f691
        pop esi
        public_6d0f6a2 : nop
        ret 
        UNREACHABLE_TRAP(0x6d0f680)
    }
}

#undef public_6d0f691
#undef public_6d0f6a2
