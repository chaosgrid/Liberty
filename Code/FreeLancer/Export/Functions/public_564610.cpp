#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564610);

#define public_564620 _public_564620
#define public_56463f _public_56463f

PROC_DECLARE(0x564610, internal_564610, public_564610);
extern "C" NAKED register_t __cdecl internal_564610()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_5c6d24]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        xor esi, esi
        nop 
        public_564620 : nop
        mov eax, dword ptr ds : [esi*4+public_6149e8]
        push edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_56463f
        inc esi
        cmp esi, 0x2D
        jl public_564620
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 
        public_56463f : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x564610)
    }
}

#undef public_564620
#undef public_56463f
