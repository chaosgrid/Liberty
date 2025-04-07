#include "Common-PCH.h"


#define public_6267cd0 _public_6267cd0
#define public_6267ce1 _public_6267ce1

PROC_DECLARE(0x6267cc0, internal_6267cc0, public_6267cc0);
extern "C" NAKED register_t __cdecl internal_6267cc0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov eax, esi
        cmp eax, esi
        je public_6267ce1
        push edi
        mov edi, edi
        public_6267cd0 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [edx], di
        add eax, 2
        add edx, 2
        cmp eax, esi
        jne public_6267cd0
        pop edi
        public_6267ce1 : nop
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6267cc0)
    }
}

#undef public_6267cd0
#undef public_6267ce1
