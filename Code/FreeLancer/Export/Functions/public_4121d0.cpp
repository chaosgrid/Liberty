#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4121d0);

#define public_412231 _public_412231
#define public_412269 _public_412269

PROC_DECLARE(0x4121d0, internal_4121d0, public_4121d0);
extern "C" NAKED register_t __cdecl internal_4121d0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        je public_412231
        fld dword ptr ds : [public_5c8b64]
        mov eax, dword ptr ds : [public_5c8b64]
        fdivr qword ptr ds : [public_5c89b8]
        mov ecx, dword ptr ds : [public_6164fc]
        mov edx, dword ptr ds : [public_616500]
        mov dword ptr ds : [public_61650c], eax
        mov eax, dword ptr ds : [public_616504]
        mov dword ptr ds : [public_616510], 0x3F800000
        mov dword ptr ds : [public_6105a8], 0x3F800000
        mov byte ptr ds : [public_6105ac], 0
        mov dword ptr ds : [public_6164f0], ecx
        mov dword ptr ds : [public_6164f4], edx
        mov dword ptr ds : [public_6164f8], eax
        fstp dword ptr ds : [public_616508]
        public_412231 : nop
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c7474]
        mov dword ptr ds : [public_6164f0], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [public_6164f4], eax
        mov ecx, dword ptr ds : [ecx+8]
        fnstsw ax
        mov dword ptr ds : [public_6164f8], ecx
        test ah, 0x41
        jne public_412269
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_61650c], edx
        public_412269 : nop
        fld dword ptr ds : [public_61650c]
        mov al, 1
        fdivr qword ptr ds : [public_5c89b8]
        mov dword ptr ds : [public_616510], 0
        mov byte ptr ds : [public_6105ac], al
        mov byte ptr ds : [public_616514], al
        fstp dword ptr ds : [public_616508]
        ret 
        UNREACHABLE_TRAP(0x4121d0)
    }
}

#undef public_412231
#undef public_412269
