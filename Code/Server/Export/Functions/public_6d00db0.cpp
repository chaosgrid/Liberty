#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00db0);

#define public_6d00dd0 _public_6d00dd0
#define public_6d00dde _public_6d00dde
#define public_6d00de2 _public_6d00de2
#define public_6d00df0 _public_6d00df0
#define public_6d00dfc _public_6d00dfc
#define public_6d00e05 _public_6d00e05

PROC_DECLARE(0x6d00db0, internal_6d00db0, public_6d00db0);
extern "C" NAKED register_t __cdecl internal_6d00db0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x111]
        test bl, bl
        jne public_6d00de2
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x111]
        test bl, bl
        jne public_6d00dde
        lea esp, ss:[esp]
        public_6d00dd0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x111]
        test bl, bl
        je public_6d00dd0
        public_6d00dde : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6d00de2 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6d00dfc
        lea esp, ss:[esp]
        public_6d00df0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6d00df0
        public_6d00dfc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6d00e05
        mov dword ptr ds : [ecx], eax
        public_6d00e05 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d00db0)
    }
}

#undef public_6d00dd0
#undef public_6d00dde
#undef public_6d00de2
#undef public_6d00df0
#undef public_6d00dfc
#undef public_6d00e05
