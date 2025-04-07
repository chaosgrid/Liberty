#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f371a0);

#define public_6f371b7 _public_6f371b7
#define public_6f371d2 _public_6f371d2
#define public_6f371e7 _public_6f371e7

PROC_DECLARE(0x6f371a0, internal_6f371a0, public_6f371a0);
extern "C" NAKED register_t __cdecl internal_6f371a0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx]
        push esi
        mov esi, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+8]
        cmp esi, dword ptr ds : [ecx+8]
        je public_6f371b7
        mov dword ptr ds : [esi+4], edx
        public_6f371b7 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6f371d2
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6f371d2 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6f371e7
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6f371e7 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f371a0)
    }
}

#undef public_6f371b7
#undef public_6f371d2
#undef public_6f371e7
