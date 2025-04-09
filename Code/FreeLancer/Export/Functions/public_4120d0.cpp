#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4120d0);

#define public_412110 _public_412110
#define public_41213e _public_41213e

PROC_DECLARE(0x4120d0, internal_4120d0, public_4120d0);
extern "C" NAKED register_t __cdecl internal_4120d0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        je public_412110
        mov eax, dword ptr ds : [public_5c8b64]
        mov ecx, dword ptr ds : [public_6164fc]
        mov edx, dword ptr ds : [public_616500]
        mov dword ptr ds : [public_61650c], eax
        mov eax, dword ptr ds : [public_616504]
        mov dword ptr ds : [public_6105a8], 0x3F800000
        mov dword ptr ds : [public_6164f0], ecx
        mov dword ptr ds : [public_6164f4], edx
        mov dword ptr ds : [public_6164f8], eax
        jmp public_41213e
        public_412110 : nop
        mov ecx, dword ptr ds : [public_5c8b64]
        mov edx, dword ptr ds : [public_6164fc]
        mov eax, dword ptr ds : [public_616500]
        mov dword ptr ds : [public_61650c], ecx
        mov ecx, dword ptr ds : [public_616504]
        mov dword ptr ds : [public_6164f0], edx
        mov dword ptr ds : [public_6164f4], eax
        mov dword ptr ds : [public_6164f8], ecx
        public_41213e : nop
        fld dword ptr ds : [public_5c8b64]
        mov al, 1
        fdivr qword ptr ds : [public_5c89b8]
        mov dword ptr ds : [public_616510], 0
        mov byte ptr ds : [public_6105ac], al
        mov byte ptr ds : [public_616514], al
        fstp dword ptr ds : [public_616508]
        ret 
        UNREACHABLE_TRAP(0x4120d0)
    }
}

#undef public_412110
#undef public_41213e
