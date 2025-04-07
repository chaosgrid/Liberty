#include "Common-PCH.h"


#define public_6262f33 _public_6262f33

PROC_DECLARE(0x6262f10, internal_6262f10, public_6262f10);
extern "C" NAKED register_t __cdecl internal_6262f10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x404]
        cmp eax, dword ptr ds : [ecx+0x400]
        jae public_6262f33
        mov dl, byte ptr ds : [eax+ecx]
        cmp dl, byte ptr ss : [esp+4]
        jne public_6262f33
        inc eax
        mov dword ptr ds : [ecx+0x404], eax
        mov al, 1
        ret 4
        public_6262f33 : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x6262f10)
    }
}

#undef public_6262f33
