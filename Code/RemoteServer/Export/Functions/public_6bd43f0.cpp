#include "RemoteServer-PCH.h"


#define public_6bd4410 _public_6bd4410
#define public_6bd441d _public_6bd441d

PROC_DECLARE(0x6bd43f0, internal_6bd43f0, public_6bd43f0);
extern "C" NAKED register_t __cdecl internal_6bd43f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        dec eax
        js public_6bd441d
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[eax+1]
        lea ebx, ds:[ebx]
        public_6bd4410 : nop
        mov ecx, esi
        call ebx
        add esi, ebp
        dec edi
        jne public_6bd4410
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6bd441d : nop
        ret 0x10
        UNREACHABLE_TRAP(0x6bd43f0)
    }
}

#undef public_6bd4410
#undef public_6bd441d
