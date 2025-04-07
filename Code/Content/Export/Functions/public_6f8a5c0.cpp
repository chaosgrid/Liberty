#include "Content-PCH.h"


#define public_6f8a5dc _public_6f8a5dc
#define public_6f8a5f1 _public_6f8a5f1
#define public_6f8a601 _public_6f8a601

PROC_DECLARE(0x6f8a5c0, internal_6f8a5c0, public_6f8a5c0);
extern "C" NAKED register_t __cdecl internal_6f8a5c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx]
        test eax, eax
        jl public_6f8a601
        jne public_6f8a5dc
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax+0x34]
        xor al, al
        ret 8
        public_6f8a5dc : nop
        cmp eax, 1
        jne public_6f8a5f1
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax+0x38]
        xor al, al
        ret 8
        public_6f8a5f1 : nop
        cmp eax, 2
        jne public_6f8a601
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax+0x3C]
        public_6f8a601 : nop
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x6f8a5c0)
    }
}

#undef public_6f8a5dc
#undef public_6f8a5f1
#undef public_6f8a601
