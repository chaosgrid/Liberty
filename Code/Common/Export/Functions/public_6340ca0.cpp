#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);

#define public_6340cb7 _public_6340cb7
#define public_6340cd1 _public_6340cd1
#define public_6340ce3 _public_6340ce3

PROC_DECLARE(0x6340ca0, internal_6340ca0, public_6340ca0);
extern "C" NAKED register_t __cdecl internal_6340ca0()
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
        je public_6340cb7
        mov dword ptr ds : [esi+4], edx
        public_6340cb7 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6340cd1
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6340cd1 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6340ce3
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6340ce3 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6340ca0)
    }
}

#undef public_6340cb7
#undef public_6340cd1
#undef public_6340ce3
