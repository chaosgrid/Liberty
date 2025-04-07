#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3350);

#define public_65f3367 _public_65f3367
#define public_65f3381 _public_65f3381
#define public_65f3393 _public_65f3393

PROC_DECLARE(0x65f3350, internal_65f3350, public_65f3350);
extern "C" NAKED register_t __cdecl internal_65f3350()
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
        je public_65f3367
        mov dword ptr ds : [esi+4], edx
        public_65f3367 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_65f3381
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_65f3381 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_65f3393
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_65f3393 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65f3350)
    }
}

#undef public_65f3367
#undef public_65f3381
#undef public_65f3393
