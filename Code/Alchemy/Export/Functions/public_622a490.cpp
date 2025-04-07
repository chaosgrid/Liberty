#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a490);

#define public_622a4a7 _public_622a4a7
#define public_622a4c2 _public_622a4c2
#define public_622a4d7 _public_622a4d7

PROC_DECLARE(0x622a490, internal_622a490, public_622a490);
extern "C" NAKED register_t __cdecl internal_622a490()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov eax, dword ptr ds : [edx]
        mov esi, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+8]
        cmp esi, dword ptr ds : [ecx+8]
        je public_622a4a7
        mov dword ptr ds : [esi+4], edx
        public_622a4a7 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_622a4c2
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_622a4c2 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_622a4d7
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_622a4d7 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x622a490)
    }
}

#undef public_622a4a7
#undef public_622a4c2
#undef public_622a4d7
