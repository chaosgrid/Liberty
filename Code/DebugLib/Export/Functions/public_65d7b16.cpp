#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7b16);

PROC_DECLARE(0x65d7b16, internal_65d7b16, public_65d7b16);
extern "C" NAKED register_t __cdecl internal_65d7b16()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push 0xA
        cdq 
        pop ecx
        idiv ecx
        mov ecx, dword ptr ss : [esp+8]
        push 0xA
        pop esi
        add al, 0x30
        mov byte ptr ds : [ecx], al
        mov eax, dword ptr ss : [esp+0xC]
        cdq 
        idiv esi
        inc ecx
        pop esi
        lea eax, ds:[ecx+1]
        add dl, 0x30
        mov byte ptr ds : [ecx], dl
        ret 
        UNREACHABLE_TRAP(0x65d7b16)
    }
}
