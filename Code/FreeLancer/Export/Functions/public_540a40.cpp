#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540a40);

#define public_540a60 _public_540a60
#define public_540a71 _public_540a71
#define public_540a75 _public_540a75

PROC_DECLARE(0x540a40, internal_540a40, public_540a40);
extern "C" NAKED register_t __cdecl internal_540a40()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_678ac4]
        mov edx, dword ptr ds : [public_678ac8]
        cmp ecx, edx
        push esi
        je public_540a71
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_540a71
        mov esi, dword ptr ss : [esp+8]
        nop 
        lea esp, ss:[esp]
        public_540a60 : nop
        cmp eax, esi
        je public_540a75
        add ecx, 4
        cmp ecx, edx
        je public_540a71
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        jne public_540a60
        public_540a71 : nop
        xor al, al
        pop esi
        ret 
        public_540a75 : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x540a40)
    }
}

#undef public_540a60
#undef public_540a71
#undef public_540a75
