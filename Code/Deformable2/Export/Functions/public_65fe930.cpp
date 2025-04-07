#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fe930);

#define public_65fe945 _public_65fe945
#define public_65fe94f _public_65fe94f

PROC_DECLARE(0x65fe930, internal_65fe930, public_65fe930);
extern "C" NAKED register_t __cdecl internal_65fe930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx+4], eax
        je public_65fe945
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_65fe945 : nop
        test esi, esi
        je public_65fe94f
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_65fe94f : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65fe930)
    }
}

#undef public_65fe945
#undef public_65fe94f
