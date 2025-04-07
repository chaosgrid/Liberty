#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46410);

#define public_6f46427 _public_6f46427
#define public_6f46442 _public_6f46442
#define public_6f46457 _public_6f46457

PROC_DECLARE(0x6f46410, internal_6f46410, public_6f46410);
extern "C" NAKED register_t __cdecl internal_6f46410()
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
        je public_6f46427
        mov dword ptr ds : [esi+4], edx
        public_6f46427 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6f46442
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6f46442 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6f46457
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6f46457 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f46410)
    }
}

#undef public_6f46427
#undef public_6f46442
#undef public_6f46457
