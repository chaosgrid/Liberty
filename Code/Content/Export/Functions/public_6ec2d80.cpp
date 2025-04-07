#include "Content-PCH.h"


#define public_6ec2dbc _public_6ec2dbc

PROC_DECLARE(0x6ec2d80, internal_6ec2d80, public_6ec2d80);
extern "C" NAKED register_t __cdecl internal_6ec2d80()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
/*FIXUP push offset public_6fb579c @0x6ec2d8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb579c
        mov esi, ecx
        push 0
        mov ecx, edi
        call ebx
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ec2dbc
        push 0
        mov ecx, edi
        call ebx
        push eax
        add esi, 0xC
        push esi
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        public_6ec2dbc : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec2d80)
    }
}

#undef public_6ec2dbc
