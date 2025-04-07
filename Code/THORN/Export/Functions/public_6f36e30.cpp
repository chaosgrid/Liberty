#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f36e30);

#define public_6f36e47 _public_6f36e47
#define public_6f36e61 _public_6f36e61
#define public_6f36e73 _public_6f36e73

PROC_DECLARE(0x6f36e30, internal_6f36e30, public_6f36e30);
extern "C" NAKED register_t __cdecl internal_6f36e30()
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
        je public_6f36e47
        mov dword ptr ds : [esi+4], edx
        public_6f36e47 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6f36e61
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6f36e61 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6f36e73
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6f36e73 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f36e30)
    }
}

#undef public_6f36e47
#undef public_6f36e61
#undef public_6f36e73
