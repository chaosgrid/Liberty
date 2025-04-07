#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6221eb0);

#define public_6221ec7 _public_6221ec7
#define public_6221ee1 _public_6221ee1
#define public_6221ef3 _public_6221ef3

PROC_DECLARE(0x6221eb0, internal_6221eb0, public_6221eb0);
extern "C" NAKED register_t __cdecl internal_6221eb0()
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
        je public_6221ec7
        mov dword ptr ds : [esi+4], edx
        public_6221ec7 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6221ee1
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6221ee1 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6221ef3
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6221ef3 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6221eb0)
    }
}

#undef public_6221ec7
#undef public_6221ee1
#undef public_6221ef3
