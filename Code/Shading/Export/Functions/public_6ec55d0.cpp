#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec55d0);

#define public_6ec55e7 _public_6ec55e7
#define public_6ec5602 _public_6ec5602
#define public_6ec5617 _public_6ec5617

PROC_DECLARE(0x6ec55d0, internal_6ec55d0, public_6ec55d0);
extern "C" NAKED register_t __cdecl internal_6ec55d0()
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
        je public_6ec55e7
        mov dword ptr ds : [esi+4], edx
        public_6ec55e7 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6ec5602
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6ec5602 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6ec5617
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6ec5617 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec55d0)
    }
}

#undef public_6ec55e7
#undef public_6ec5602
#undef public_6ec5617
