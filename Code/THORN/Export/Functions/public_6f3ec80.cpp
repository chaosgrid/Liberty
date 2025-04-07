#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ec80);

#define public_6f3ec97 _public_6f3ec97
#define public_6f3ecb1 _public_6f3ecb1
#define public_6f3ecc3 _public_6f3ecc3

PROC_DECLARE(0x6f3ec80, internal_6f3ec80, public_6f3ec80);
extern "C" NAKED register_t __cdecl internal_6f3ec80()
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
        je public_6f3ec97
        mov dword ptr ds : [esi+4], edx
        public_6f3ec97 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6f3ecb1
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6f3ecb1 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6f3ecc3
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6f3ecc3 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f3ec80)
    }
}

#undef public_6f3ec97
#undef public_6f3ecb1
#undef public_6f3ecc3
