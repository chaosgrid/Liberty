#include "Common-PCH.h"


#define public_6329b83 _public_6329b83
#define public_6329b94 _public_6329b94

PROC_DECLARE(0x6329b70, internal_6329b70, public_6329b70);
extern "C" NAKED register_t __cdecl internal_6329b70()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6329b94
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_6329b83 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_6329b83
        pop ebx
        public_6329b94 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6329b70)
    }
}

#undef public_6329b83
#undef public_6329b94
