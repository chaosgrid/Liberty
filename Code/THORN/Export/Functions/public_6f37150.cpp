#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37150);

#define public_6f37167 _public_6f37167
#define public_6f37181 _public_6f37181
#define public_6f37193 _public_6f37193

PROC_DECLARE(0x6f37150, internal_6f37150, public_6f37150);
extern "C" NAKED register_t __cdecl internal_6f37150()
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
        je public_6f37167
        mov dword ptr ds : [esi+4], edx
        public_6f37167 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6f37181
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6f37181 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6f37193
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6f37193 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f37150)
    }
}

#undef public_6f37167
#undef public_6f37181
#undef public_6f37193
