#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da3470);

#define public_6da3487 _public_6da3487
#define public_6da34a1 _public_6da34a1
#define public_6da34b3 _public_6da34b3

PROC_DECLARE(0x6da3470, internal_6da3470, public_6da3470);
extern "C" NAKED register_t __cdecl internal_6da3470()
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
        je public_6da3487
        mov dword ptr ds : [esi+4], edx
        public_6da3487 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6da34a1
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6da34a1 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6da34b3
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6da34b3 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6da3470)
    }
}

#undef public_6da3487
#undef public_6da34a1
#undef public_6da34b3
