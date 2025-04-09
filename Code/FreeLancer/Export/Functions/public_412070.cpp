#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412070);

PROC_DECLARE(0x412070, internal_412070, public_412070);
extern "C" NAKED register_t __cdecl internal_412070()
{
    __asm
    {
        fld dword ptr ds : [public_5c8b64]
        mov eax, dword ptr ss : [esp+4]
        fdivr qword ptr ds : [public_5c89b8]
        mov edx, dword ptr ds : [public_5c8b64]
        mov ecx, eax
        mov dword ptr ds : [public_616510], eax
        mov eax, dword ptr ds : [public_6164fc]
        mov dword ptr ds : [public_6105a8], ecx
        mov ecx, dword ptr ds : [public_616500]
        mov dword ptr ds : [public_61650c], edx
        mov edx, dword ptr ds : [public_616504]
        mov byte ptr ds : [public_6105ac], 0
        mov dword ptr ds : [public_6164f0], eax
        mov dword ptr ds : [public_6164f4], ecx
        mov dword ptr ds : [public_6164f8], edx
        fstp dword ptr ds : [public_616508]
        ret 
        UNREACHABLE_TRAP(0x412070)
    }
}
