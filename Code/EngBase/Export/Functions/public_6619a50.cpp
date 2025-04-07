#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6619a50);

#define public_6619a67 _public_6619a67
#define public_6619a82 _public_6619a82
#define public_6619a97 _public_6619a97

PROC_DECLARE(0x6619a50, internal_6619a50, public_6619a50);
extern "C" NAKED register_t __cdecl internal_6619a50()
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
        je public_6619a67
        mov dword ptr ds : [esi+4], edx
        public_6619a67 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6619a82
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6619a82 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6619a97
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6619a97 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6619a50)
    }
}

#undef public_6619a67
#undef public_6619a82
#undef public_6619a97
