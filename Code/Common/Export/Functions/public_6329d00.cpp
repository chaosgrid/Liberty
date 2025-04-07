#include "Common-PCH.h"


#define public_6329d12 _public_6329d12
#define public_6329d23 _public_6329d23

PROC_DECLARE(0x6329d00, internal_6329d00, public_6329d00);
extern "C" NAKED register_t __cdecl internal_6329d00()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6329d23
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_6329d12 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_6329d12
        pop ebx
        public_6329d23 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6329d00)
    }
}

#undef public_6329d12
#undef public_6329d23
