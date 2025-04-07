#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c349f0);

#define public_6c34a07 _public_6c34a07
#define public_6c34a21 _public_6c34a21
#define public_6c34a33 _public_6c34a33

PROC_DECLARE(0x6c349f0, internal_6c349f0, public_6c349f0);
extern "C" NAKED register_t __cdecl internal_6c349f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+8]
        push esi
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx+8], esi
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [ecx+8]
        je public_6c34a07
        mov dword ptr ds : [esi+4], edx
        public_6c34a07 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6c34a21
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6c34a21 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6c34a33
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6c34a33 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c349f0)
    }
}

#undef public_6c34a07
#undef public_6c34a21
#undef public_6c34a33
