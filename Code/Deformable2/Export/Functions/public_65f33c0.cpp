#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f33c0);

#define public_65f33d7 _public_65f33d7
#define public_65f33f2 _public_65f33f2
#define public_65f3407 _public_65f3407

PROC_DECLARE(0x65f33c0, internal_65f33c0, public_65f33c0);
extern "C" NAKED register_t __cdecl internal_65f33c0()
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
        je public_65f33d7
        mov dword ptr ds : [esi+4], edx
        public_65f33d7 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_65f33f2
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_65f33f2 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_65f3407
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_65f3407 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65f33c0)
    }
}

#undef public_65f33d7
#undef public_65f33f2
#undef public_65f3407
