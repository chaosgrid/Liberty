#include "Common-PCH.h"


#define public_6267c75 _public_6267c75
#define public_6267c85 _public_6267c85

PROC_DECLARE(0x6267c60, internal_6267c60, public_6267c60);
extern "C" NAKED register_t __cdecl internal_6267c60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        lea edx, ds:[eax+2]
        cmp edx, esi
        je public_6267c85
        push ebx
        push edi
        mov edi, eax
        sub edi, edx
        public_6267c75 : nop
        mov bx, word ptr ds : [edx]
        mov word ptr ds : [edi+edx], bx
        add edx, 2
        cmp edx, esi
        jne public_6267c75
        pop edi
        pop ebx
        public_6267c85 : nop
        add dword ptr ds : [ecx+8], 0xFFFFFFFE
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6267c60)
    }
}

#undef public_6267c75
#undef public_6267c85
