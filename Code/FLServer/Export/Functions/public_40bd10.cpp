#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40bd10);
CLANG_FORWARD_PROC_SYMBOL(public_415cf0);

#define public_40bd35 _public_40bd35

PROC_DECLARE(0x40bd10, internal_40bd10, public_40bd10);
extern "C" NAKED register_t __cdecl internal_40bd10()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xBA8]
        test al, al
        je public_40bd35
        push esi
        lea esi, ds:[ecx+0xBAC]
        push 0
        mov ecx, esi
        call public_415cf0
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        pop esi
        jmp dword ptr ds : [eax+0xC0]
        public_40bd35 : nop
        ret 
        UNREACHABLE_TRAP(0x40bd10)
    }
}

#undef public_40bd35
