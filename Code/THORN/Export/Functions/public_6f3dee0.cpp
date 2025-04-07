#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3dee0);

#define public_6f3def7 _public_6f3def7
#define public_6f3df12 _public_6f3df12
#define public_6f3df27 _public_6f3df27

PROC_DECLARE(0x6f3dee0, internal_6f3dee0, public_6f3dee0);
extern "C" NAKED register_t __cdecl internal_6f3dee0()
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
        je public_6f3def7
        mov dword ptr ds : [esi+4], edx
        public_6f3def7 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6f3df12
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6f3df12 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6f3df27
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6f3df27 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f3dee0)
    }
}

#undef public_6f3def7
#undef public_6f3df12
#undef public_6f3df27
