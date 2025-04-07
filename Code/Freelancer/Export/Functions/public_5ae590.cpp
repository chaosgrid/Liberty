#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_5ae5a7 _public_5ae5a7
#define public_5ae5c2 _public_5ae5c2
#define public_5ae5d7 _public_5ae5d7

PROC_DECLARE(0x5ae590, internal_5ae590, public_5ae590);
extern "C" NAKED register_t __cdecl internal_5ae590()
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
        je public_5ae5a7
        mov dword ptr ds : [esi+4], edx
        public_5ae5a7 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_5ae5c2
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_5ae5c2 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_5ae5d7
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_5ae5d7 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5ae590)
    }
}

#undef public_5ae5a7
#undef public_5ae5c2
#undef public_5ae5d7
