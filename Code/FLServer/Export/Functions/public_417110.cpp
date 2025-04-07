#include "FLServer-PCH.h"


#define public_417130 _public_417130
#define public_41713d _public_41713d

PROC_DECLARE(0x417110, internal_417110, public_417110);
extern "C" NAKED register_t __cdecl internal_417110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        dec eax
        js public_41713d
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[eax+1]
        lea ebx, ds:[ebx]
        public_417130 : nop
        mov ecx, esi
        call ebx
        add esi, ebp
        dec edi
        jne public_417130
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_41713d : nop
        ret 0x10
        UNREACHABLE_TRAP(0x417110)
    }
}

#undef public_417130
#undef public_41713d
