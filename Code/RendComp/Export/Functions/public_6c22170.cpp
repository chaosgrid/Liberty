#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c22170);

#define public_6c22187 _public_6c22187
#define public_6c221a2 _public_6c221a2
#define public_6c221b7 _public_6c221b7

PROC_DECLARE(0x6c22170, internal_6c22170, public_6c22170);
extern "C" NAKED register_t __cdecl internal_6c22170()
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
        je public_6c22187
        mov dword ptr ds : [esi+4], edx
        public_6c22187 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6c221a2
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6c221a2 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6c221b7
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6c221b7 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c22170)
    }
}

#undef public_6c22187
#undef public_6c221a2
#undef public_6c221b7
