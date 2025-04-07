#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5bb90);

#define public_6d56186 _public_6d56186
#define public_6d561ab _public_6d561ab

PROC_DECLARE(0x6d56170, internal_6d56170, public_6d56170);
extern "C" NAKED register_t __cdecl internal_6d56170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        cmp eax, ecx
        jne public_6d56186
        mov eax, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [eax], 1
        xor eax, eax
        ret 
        public_6d56186 : nop
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov eax, dword ptr ds : [eax+edx-0x14]
        test eax, eax
        je public_6d561ab
        push ecx
        mov ecx, eax
        call public_6d5bb90
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [ecx], al
        xor eax, eax
        ret 
        public_6d561ab : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [edx], 0
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d56170)
    }
}

#undef public_6d56186
#undef public_6d561ab
