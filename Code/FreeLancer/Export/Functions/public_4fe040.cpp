#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7ef0);

#define public_4fe084 _public_4fe084

PROC_DECLARE(0x4fe040, internal_4fe040, public_4fe040);
extern "C" NAKED register_t __cdecl internal_4fe040()
{
    __asm
    {
        sub esp, 0x30
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        call public_4f7ef0
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [esi+0x6C]
        fld dword ptr ds : [ecx+0x7C]
        pop esi
        fld dword ptr ds : [ecx+0x78]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_4fe084
        fld dword ptr ds : [ecx+0x7C]
        add esp, 0x30
        ret 4
        public_4fe084 : nop
        fld dword ptr ds : [ecx+0x78]
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x4fe040)
    }
}

#undef public_4fe084
