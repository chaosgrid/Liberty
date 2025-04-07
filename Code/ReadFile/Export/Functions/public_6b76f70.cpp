#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76f70);

#define public_6b76f87 _public_6b76f87
#define public_6b76fa2 _public_6b76fa2
#define public_6b76fb7 _public_6b76fb7

PROC_DECLARE(0x6b76f70, internal_6b76f70, public_6b76f70);
extern "C" NAKED register_t __cdecl internal_6b76f70()
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
        je public_6b76f87
        mov dword ptr ds : [esi+4], edx
        public_6b76f87 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6b76fa2
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6b76fa2 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6b76fb7
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6b76fb7 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b76f70)
    }
}

#undef public_6b76f87
#undef public_6b76fa2
#undef public_6b76fb7
