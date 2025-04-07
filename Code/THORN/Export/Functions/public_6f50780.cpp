#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b960);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f730);

PROC_DECLARE(0x6f50780, internal_6f50780, public_6f50780);
extern "C" NAKED register_t __cdecl internal_6f50780()
{
    __asm
    {
        push ecx
        push esi
        push 1
        call public_6f4f730
        mov esi, eax
        push esi
        call public_6f4af60
        mov eax, dword ptr ds : [eax]
        shl eax, 2
        mov ecx, offset public_6f609d0
        sub ecx, eax
        mov edx, dword ptr ds : [ecx]
        push edx
        call public_6f4b790
        push esi
        call public_6f4b960
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        add esp, 8
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f50780)
    }
}
