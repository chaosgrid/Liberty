#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555f00);

#define public_555f25 _public_555f25
#define public_555f3c _public_555f3c
#define public_555f4f _public_555f4f

PROC_DECLARE(0x555f00, internal_555f00, public_555f00);
extern "C" NAKED register_t __cdecl internal_555f00()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        push esi
        je public_555f4f
        mov edx, dword ptr ss : [esp+8]
        cmp edx, 1
        jne public_555f25
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+0x28]
        pop esi
        ret 8
        public_555f25 : nop
        cmp edx, 2
        jne public_555f3c
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+0x2C]
        pop esi
        ret 8
        public_555f3c : nop
        cmp edx, 3
        jne public_555f4f
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+0x30]
        public_555f4f : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x555f00)
    }
}

#undef public_555f25
#undef public_555f3c
#undef public_555f4f
