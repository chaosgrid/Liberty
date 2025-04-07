#include "RendComp-PCH.h"


#define public_6c32504 _public_6c32504
#define public_6c32515 _public_6c32515

PROC_DECLARE(0x6c324f0, internal_6c324f0, public_6c324f0);
extern "C" NAKED register_t __cdecl internal_6c324f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [eax+0x20]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6c32515
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        public_6c32504 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6c32504
        pop ebx
        public_6c32515 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c324f0)
    }
}

#undef public_6c32504
#undef public_6c32515
