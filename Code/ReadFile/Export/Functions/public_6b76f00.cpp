#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76f00);

#define public_6b76f17 _public_6b76f17
#define public_6b76f31 _public_6b76f31
#define public_6b76f43 _public_6b76f43

PROC_DECLARE(0x6b76f00, internal_6b76f00, public_6b76f00);
extern "C" NAKED register_t __cdecl internal_6b76f00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx+8], esi
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [ecx+8]
        je public_6b76f17
        mov dword ptr ds : [esi+4], edx
        public_6b76f17 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6b76f31
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6b76f31 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6b76f43
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6b76f43 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b76f00)
    }
}

#undef public_6b76f17
#undef public_6b76f31
#undef public_6b76f43
