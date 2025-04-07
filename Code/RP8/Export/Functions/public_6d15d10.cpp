#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a6);

PROC_DECLARE(0x6d15d10, internal_6d15d10, public_6d15d10);
extern "C" NAKED register_t __cdecl internal_6d15d10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-4]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        fld dword ptr ds : [edx+4]
        fmul dword ptr ds : [eax+4]
        faddp 
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-4]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [edx+8]
        faddp 
        call public_6d2f2a6
        fst dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d15d10)
    }
}
