#include "Server-PCH.h"


#define public_6d5e8e0 _public_6d5e8e0
#define public_6d5e8f5 _public_6d5e8f5
#define public_6d5e8fb _public_6d5e8fb

PROC_DECLARE(0x6d5e8c0, internal_6d5e8c0, public_6d5e8c0);
extern "C" NAKED register_t __cdecl internal_6d5e8c0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        call dword ptr ds : [public_6d64720]
        mov esi, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [esi], 0
        je public_6d5e8fb
        test eax, eax
        je public_6d5e8f5
        mov edi, dword ptr ds : [public_6d6471c]
        lea esp, ss:[esp]
        public_6d5e8e0 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        cmp eax, dword ptr ds : [esi]
        sete bl
        call edi
        test bl, bl
        jne public_6d5e8fb
        test eax, eax
        jne public_6d5e8e0
        public_6d5e8f5 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 
        public_6d5e8fb : nop
        test eax, eax
        je public_6d5e8f5
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        pop edi
        mov dword ptr ds : [esi], eax
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d5e8c0)
    }
}

#undef public_6d5e8e0
#undef public_6d5e8f5
#undef public_6d5e8fb
