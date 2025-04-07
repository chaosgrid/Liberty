#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15cb0);

PROC_DECLARE(0x6d15cb0, internal_6d15cb0, public_6d15cb0);
extern "C" NAKED register_t __cdecl internal_6d15cb0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov dword ptr ss : [ebp-4], ecx
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, 0xC
        mov edi, dword ptr ss : [ebp-4]
        rep movsd
        mov eax, dword ptr ss : [ebp-4]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d15cb0)
    }
}
