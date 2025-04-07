#include "Content-PCH.h"


#define public_6f92692 _public_6f92692
#define public_6f926a4 _public_6f926a4

PROC_DECLARE(0x6f92680, internal_6f92680, public_6f92680);
extern "C" NAKED register_t __cdecl internal_6f92680()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, ecx
        je public_6f926a4
        public_6f92692 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ds:[esi+8]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x5C]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+4]
        jne public_6f92692
        public_6f926a4 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f92680)
    }
}

#undef public_6f92692
#undef public_6f926a4
