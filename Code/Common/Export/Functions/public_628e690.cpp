#include "Common-PCH.h"


#define public_628e6a5 _public_628e6a5
#define public_628e6b3 _public_628e6b3

PROC_DECLARE(0x628e690, internal_628e690, public_628e690);
extern "C" NAKED register_t __cdecl internal_628e690()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        lea edx, ds:[eax+4]
        cmp edx, esi
        je public_628e6b3
        push ebx
        push edi
        mov edi, eax
        sub edi, edx
        public_628e6a5 : nop
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [edi+edx], ebx
        add edx, 4
        cmp edx, esi
        jne public_628e6a5
        pop edi
        pop ebx
        public_628e6b3 : nop
        add dword ptr ds : [ecx+8], 0xFFFFFFFC
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x628e690)
    }
}

#undef public_628e6a5
#undef public_628e6b3
