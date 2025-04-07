#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdef0);

#define public_6cfdf07 _public_6cfdf07
#define public_6cfdf22 _public_6cfdf22
#define public_6cfdf37 _public_6cfdf37

PROC_DECLARE(0x6cfdef0, internal_6cfdef0, public_6cfdef0);
extern "C" NAKED register_t __cdecl internal_6cfdef0()
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
        je public_6cfdf07
        mov dword ptr ds : [esi+4], edx
        public_6cfdf07 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6cfdf22
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6cfdf22 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6cfdf37
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6cfdf37 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cfdef0)
    }
}

#undef public_6cfdf07
#undef public_6cfdf22
#undef public_6cfdf37
