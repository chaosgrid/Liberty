#include "Common-PCH.h"


#define public_6329ce7 _public_6329ce7
#define public_6329cfa _public_6329cfa

PROC_DECLARE(0x6329cd0, internal_6329cd0, public_6329cd0);
extern "C" NAKED register_t __cdecl internal_6329cd0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6329cfa
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        public_6329ce7 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push ebx
        call dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_6329ce7
        pop ebp
        pop ebx
        public_6329cfa : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6329cd0)
    }
}

#undef public_6329ce7
#undef public_6329cfa
