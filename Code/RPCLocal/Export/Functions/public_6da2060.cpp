#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da2060);

#define public_6da2077 _public_6da2077
#define public_6da2092 _public_6da2092
#define public_6da20a7 _public_6da20a7

PROC_DECLARE(0x6da2060, internal_6da2060, public_6da2060);
extern "C" NAKED register_t __cdecl internal_6da2060()
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
        je public_6da2077
        mov dword ptr ds : [esi+4], edx
        public_6da2077 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6da2092
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6da2092 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6da20a7
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6da20a7 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6da2060)
    }
}

#undef public_6da2077
#undef public_6da2092
#undef public_6da20a7
