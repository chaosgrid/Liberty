#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d81bb);

PROC_DECLARE(0x65d81bb, internal_65d81bb, public_65d81bb);
extern "C" NAKED register_t __cdecl internal_65d81bb()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push edi
        push 8
        pop ecx
        mov esi, offset public_65e1600
        lea edi, ss:[ebp-0x20]
        rep movsd
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], eax
        lea eax, ss:[ebp-0xC]
        push eax
        push dword ptr ss : [ebp-0x10]
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp-0x20]
        call dword ptr ds : [public_65e105c]
        pop edi
        pop esi
        leave 
        ret 8
        UNREACHABLE_TRAP(0x65d81bb)
    }
}
