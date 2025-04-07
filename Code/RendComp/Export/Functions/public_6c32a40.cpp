#include "RendComp-PCH.h"


#define public_6c32a60 _public_6c32a60
#define public_6c32a73 _public_6c32a73

PROC_DECLARE(0x6c32a40, internal_6c32a40, public_6c32a40);
extern "C" NAKED register_t __cdecl internal_6c32a40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [eax+0x20]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6c32a73
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6c32a60 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push eax
        call dword ptr ds : [ecx+0x24]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6c32a60
        pop ebp
        pop ebx
        public_6c32a73 : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6c32a40)
    }
}

#undef public_6c32a60
#undef public_6c32a73
