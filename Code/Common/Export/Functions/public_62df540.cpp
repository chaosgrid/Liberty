#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62df540);

#define public_62df560 _public_62df560
#define public_62df56f _public_62df56f
#define public_62df574 _public_62df574

PROC_DECLARE(0x62df540, internal_62df540, public_62df540);
extern "C" NAKED register_t __cdecl internal_62df540()
{
    __asm
    {
        mov edx, dword ptr ds : [public_63fca18]
        push esi
        xor eax, eax
        test edx, edx
        push edi
        jle public_62df56f
        mov edi, dword ptr ds : [public_63fca1c]
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, edi
        lea ebx, ds:[ebx]
        public_62df560 : nop
        cmp dword ptr ds : [ecx], esi
        je public_62df574
        inc eax
        add ecx, 0x72C
        cmp eax, edx
        jl public_62df560
        public_62df56f : nop
        pop edi
        pop esi
        xor eax, eax
        ret 
        public_62df574 : nop
        imul eax, 0x72C
        add eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62df540)
    }
}

#undef public_62df560
#undef public_62df56f
#undef public_62df574
