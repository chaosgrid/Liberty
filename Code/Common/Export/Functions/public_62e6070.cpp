#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6070);

#define public_62e6094 _public_62e6094
#define public_62e60cc _public_62e60cc

PROC_DECLARE(0x62e6070, internal_62e6070, public_62e6070);
extern "C" NAKED register_t __cdecl internal_62e6070()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        jne public_62e6094
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62e6094 : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x84]
        mov dword ptr ss : [esp+4], eax
        lea eax, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x140]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp+4]
        pop esi
        fnstsw ax
        test ah, 0x41
        jne public_62e60cc
        fld dword ptr ss : [esp+8]
        pop ecx
        ret 
        public_62e60cc : nop
        fld dword ptr ss : [esp]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62e6070)
    }
}

#undef public_62e6094
#undef public_62e60cc
