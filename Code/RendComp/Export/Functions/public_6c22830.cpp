#include "RendComp-PCH.h"


#define public_6c22845 _public_6c22845
#define public_6c22866 _public_6c22866
#define public_6c22870 _public_6c22870

PROC_DECLARE(0x6c22830, internal_6c22830, public_6c22830);
extern "C" NAKED register_t __cdecl internal_6c22830()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x1E8]
        cmp eax, dword ptr ds : [ecx+0x14]
        jne public_6c22845
        or eax, 0xFFFFFFFF
        ret 8
        public_6c22845 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6c22866
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        je public_6c22870
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 8
        public_6c22866 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0
        public_6c22870 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6c22830)
    }
}

#undef public_6c22845
#undef public_6c22866
#undef public_6c22870
