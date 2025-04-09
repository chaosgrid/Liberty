#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4221f0);
CLANG_FORWARD_PROC_SYMBOL(public_4227d0);

PROC_DECLARE(0x4227d0, internal_4227d0, public_4227d0);
extern "C" NAKED register_t __cdecl internal_4227d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+0xC]
        sub edx, ecx
        mov ecx, dword ptr ds : [eax+8]
        push 0x3F800000
        inc edx
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ds : [eax]
        fild dword ptr ss : [esp+8]
        push 0xBF800000
        push 0
        sub esp, 8
        sub ecx, edx
        fstp dword ptr ss : [esp+4]
        inc ecx
        mov dword ptr ss : [esp+0x18], ecx
        fild dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        push 0
        call public_4221f0
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4227d0)
    }
}
