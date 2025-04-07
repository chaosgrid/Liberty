#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6278b30);
CLANG_FORWARD_PROC_SYMBOL(public_627b2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);

PROC_DECLARE(0x6276180, internal_6276180, public_6276180);
extern "C" NAKED register_t __cdecl internal_6276180()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        add ecx, 0x164
        call public_6278b30
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ebx, eax
        push ebp
        push ebx
        call public_6334400
        mov esi, dword ptr ss : [esp+0x20]
        add esp, 8
        lea edi, ds:[ebx+4]
        mov ecx, 0xC
        rep movsd
        push ebp
        lea ecx, ds:[ebx+0x34]
        call public_627b2b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6276180)
    }
}
