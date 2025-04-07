#include "Common-PCH.h"


#define public_6329b58 _public_6329b58
#define public_6329b6b _public_6329b6b

PROC_DECLARE(0x6329b40, internal_6329b40, public_6329b40);
extern "C" NAKED register_t __cdecl internal_6329b40()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6329b6b
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        public_6329b58 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push ebx
        call dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_6329b58
        pop ebp
        pop ebx
        public_6329b6b : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6329b40)
    }
}

#undef public_6329b58
#undef public_6329b6b
