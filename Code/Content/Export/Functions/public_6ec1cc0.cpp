#include "Content-PCH.h"


#define public_6ec1cf8 _public_6ec1cf8
#define public_6ec1cfa _public_6ec1cfa

PROC_DECLARE(0x6ec1cc0, internal_6ec1cc0, public_6ec1cc0);
extern "C" NAKED register_t __cdecl internal_6ec1cc0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push ebx
        push esi
        xor bl, bl
        test edx, edx
        je public_6ec1cf8
        mov eax, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [eax+0xC]
        cmp esi, dword ptr ds : [edx]
        jne public_6ec1cf8
        mov esi, dword ptr ds : [ecx+0xC]
        cmp esi, dword ptr ds : [eax+0x308]
        jne public_6ec1cf8
        add edx, 8
        push edx
        add ecx, 0x14
        push ecx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        mov al, 1
        je public_6ec1cfa
        public_6ec1cf8 : nop
        mov al, bl
        public_6ec1cfa : nop
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec1cc0)
    }
}

#undef public_6ec1cf8
#undef public_6ec1cfa
