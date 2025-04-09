#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412170);

PROC_DECLARE(0x412170, internal_412170, public_412170);
extern "C" NAKED register_t __cdecl internal_412170()
{
    __asm
    {
        fld dword ptr ds : [public_5c8b64]
        mov eax, dword ptr ds : [public_5c8b64]
        fdivr qword ptr ds : [public_5c89b8]
        mov ecx, dword ptr ds : [public_6164fc]
        mov edx, dword ptr ds : [public_616500]
        mov dword ptr ds : [public_61650c], eax
        mov eax, dword ptr ds : [public_616504]
        mov dword ptr ds : [public_6164f8], eax
        mov al, 1
        mov dword ptr ds : [public_6105a8], 0
        mov dword ptr ds : [public_6164f0], ecx
        mov dword ptr ds : [public_6164f4], edx
        mov dword ptr ds : [public_616510], 0x3F800000
        mov byte ptr ds : [public_6105ac], al
        mov byte ptr ds : [public_616514], al
        fstp dword ptr ds : [public_616508]
        ret 
        UNREACHABLE_TRAP(0x412170)
    }
}
