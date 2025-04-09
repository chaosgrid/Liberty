#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4122a0);

#define public_412331 _public_412331

PROC_DECLARE(0x4122a0, internal_4122a0, public_4122a0);
extern "C" NAKED register_t __cdecl internal_4122a0()
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
        mov dword ptr ds : [public_6164f0], ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_6164f8], eax
        mov dword ptr ds : [public_6164f4], edx
        mov dword ptr ds : [public_616510], 0
        mov dword ptr ds : [public_6105a8], 0
        mov byte ptr ds : [public_6105ac], 0
        fstp dword ptr ds : [public_616508]
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c7474]
        mov dword ptr ds : [public_6164f0], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [public_6164f4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6164f8], ecx
        fnstsw ax
        test ah, 0x41
        jne public_412331
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_61650c], edx
        public_412331 : nop
        fld dword ptr ds : [public_61650c]
        mov al, 1
        fdivr qword ptr ds : [public_5c89b8]
        mov dword ptr ds : [public_616510], 0x3F800000
        mov byte ptr ds : [public_6105ac], al
        mov byte ptr ds : [public_616514], al
        fstp dword ptr ds : [public_616508]
        ret 
        UNREACHABLE_TRAP(0x4122a0)
    }
}

#undef public_412331
