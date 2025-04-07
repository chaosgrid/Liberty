#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16080);

#define public_6d16097 _public_6d16097
#define public_6d160b1 _public_6d160b1
#define public_6d160c3 _public_6d160c3

PROC_DECLARE(0x6d16080, internal_6d16080, public_6d16080);
extern "C" NAKED register_t __cdecl internal_6d16080()
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
        je public_6d16097
        mov dword ptr ds : [esi+4], edx
        public_6d16097 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6d160b1
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6d160b1 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d160c3
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6d160c3 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d16080)
    }
}

#undef public_6d16097
#undef public_6d160b1
#undef public_6d160c3
