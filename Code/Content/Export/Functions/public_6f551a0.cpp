#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f551a0);

#define public_6f551b9 _public_6f551b9
#define public_6f551d0 _public_6f551d0
#define public_6f551dc _public_6f551dc
#define public_6f551e0 _public_6f551e0
#define public_6f551f0 _public_6f551f0
#define public_6f551fb _public_6f551fb

PROC_DECLARE(0x6f551a0, internal_6f551a0, public_6f551a0);
extern "C" NAKED register_t __cdecl internal_6f551a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x30]
        test dl, dl
        push ebx
        jne public_6f551b9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f551b9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f551b9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x31]
        test bl, bl
        jne public_6f551e0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        jne public_6f551dc
        lea esp, ss:[esp]
        public_6f551d0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        je public_6f551d0
        public_6f551dc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f551e0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f551fb
        lea esp, ss:[esp]
        public_6f551f0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f551f0
        public_6f551fb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f551a0)
    }
}

#undef public_6f551b9
#undef public_6f551d0
#undef public_6f551dc
#undef public_6f551e0
#undef public_6f551f0
#undef public_6f551fb
