#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7af0);

#define public_4f7b38 _public_4f7b38
#define public_4f7b41 _public_4f7b41
#define public_4f7b44 _public_4f7b44

PROC_DECLARE(0x4f7af0, internal_4f7af0, public_4f7af0);
extern "C" NAKED register_t __cdecl internal_4f7af0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x68]
        test eax, eax
        jne public_4f7b44
        test byte ptr ds : [ecx+8], 2
        jne public_4f7b44
        mov edx, dword ptr ds : [ecx+0x5C]
        lea eax, ds:[ecx+0x60]
        test eax, eax
        lea edx, ds:[edx+edx*2]
        mov dword ptr ds : [ecx+0x68], ecx
        lea edx, ds : [edx*4+public_674ce0]
        je public_4f7b41
        push esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [eax], 0
        mov esi, dword ptr ds : [edx+4]
        test esi, esi
        je public_4f7b38
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [edx+4], eax
        inc dword ptr ds : [edx]
        mov eax, dword ptr ds : [ecx+0x58]
        inc eax
        pop esi
        mov dword ptr ds : [ecx+0x58], eax
        ret 
        public_4f7b38 : nop
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+4], eax
        inc dword ptr ds : [edx]
        pop esi
        public_4f7b41 : nop
        inc dword ptr ds : [ecx+0x58]
        public_4f7b44 : nop
        ret 
        UNREACHABLE_TRAP(0x4f7af0)
    }
}

#undef public_4f7b38
#undef public_4f7b41
#undef public_4f7b44
