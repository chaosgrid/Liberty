#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b50b40);

#define public_6b50b57 _public_6b50b57
#define public_6b50b71 _public_6b50b71
#define public_6b50b83 _public_6b50b83

PROC_DECLARE(0x6b50b40, internal_6b50b40, public_6b50b40);
extern "C" NAKED register_t __cdecl internal_6b50b40()
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
        je public_6b50b57
        mov dword ptr ds : [esi+4], edx
        public_6b50b57 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6b50b71
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6b50b71 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6b50b83
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6b50b83 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b50b40)
    }
}

#undef public_6b50b57
#undef public_6b50b71
#undef public_6b50b83
