#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41bde0);

#define public_41bdf2 _public_41bdf2
#define public_41be07 _public_41be07
#define public_41be14 _public_41be14
#define public_41be20 _public_41be20
#define public_41be2a _public_41be2a
#define public_41be2f _public_41be2f
#define public_41be31 _public_41be31
#define public_41be36 _public_41be36

PROC_DECLARE(0x41bde0, internal_41bde0, public_41bde0);
extern "C" NAKED register_t __cdecl internal_41bde0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp eax, esi
        je public_41be36
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        public_41bdf2 : nop
        inc dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        jne public_41be14
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_41be2f
        public_41be07 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_41be07
        jmp public_41be2f
        public_41be14 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_41be2a
        lea esp, ss:[esp]
        public_41be20 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_41be20
        public_41be2a : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_41be31
        public_41be2f : nop
        mov eax, ecx
        public_41be31 : nop
        cmp eax, esi
        jne public_41bdf2
        pop ebx
        public_41be36 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x41bde0)
    }
}

#undef public_41bdf2
#undef public_41be07
#undef public_41be14
#undef public_41be20
#undef public_41be2a
#undef public_41be2f
#undef public_41be31
#undef public_41be36
