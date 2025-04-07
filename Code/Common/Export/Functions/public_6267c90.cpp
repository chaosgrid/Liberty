#include "Common-PCH.h"


#define public_6267ca4 _public_6267ca4
#define public_6267cb5 _public_6267cb5

PROC_DECLARE(0x6267c90, internal_6267c90, public_6267c90);
extern "C" NAKED register_t __cdecl internal_6267c90()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        cmp edx, edi
        mov esi, eax
        je public_6267cb5
        push ebx
        public_6267ca4 : nop
        mov bx, word ptr ds : [edx]
        mov word ptr ds : [esi], bx
        add edx, 2
        add esi, 2
        cmp edx, edi
        jne public_6267ca4
        pop ebx
        public_6267cb5 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6267c90)
    }
}

#undef public_6267ca4
#undef public_6267cb5
