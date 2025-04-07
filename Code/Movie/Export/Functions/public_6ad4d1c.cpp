#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad4d1c);

#define public_6ad4d41 _public_6ad4d41
#define public_6ad4d69 _public_6ad4d69

PROC_DECLARE(0x6ad4d1c, internal_6ad4d1c, public_6ad4d1c);
extern "C" NAKED register_t __cdecl internal_6ad4d1c()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x8000
        push 0
        push dword ptr ds : [esi+0x10]
        call dword ptr ds : [public_6ada0c4]
        cmp dword ptr ds : [public_6adfc70], esi
        jne public_6ad4d41
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [public_6adfc70], eax
        public_6ad4d41 : nop
        cmp esi, offset public_6addc50
        je public_6ad4d69
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        push esi
        push 0
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada134]
        pop esi
        ret 
        public_6ad4d69 : nop
        or dword ptr ds : [public_6addc60], 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad4d1c)
    }
}

#undef public_6ad4d41
#undef public_6ad4d69
