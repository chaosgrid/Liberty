#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284e20);
CLANG_FORWARD_PROC_SYMBOL(public_62af420);
CLANG_FORWARD_PROC_SYMBOL(public_62b5d00);

#define public_62ac6e9 _public_62ac6e9

PROC_DECLARE(0x62ac680, internal_62ac680, public_62ac680);
extern "C" NAKED register_t __cdecl internal_62ac680()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        push edi
        push ebx
        mov esi, ecx
        call public_62b5d00
        fld dword ptr ds : [esi+0xF8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62ac6e9
        fld dword ptr ds : [esi+0xF8]
        fsub dword ptr ss : [esp+0x18]
        fst dword ptr ds : [esi+0xF8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62ac6e9
        mov ecx, dword ptr ds : [esi+0xB0]
        push 0x18
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        call dword ptr ds : [public_639927c]
        lea edx, ss:[esp+0x18]
        push edx
        push esi
        call public_6284e20
        add esp, 0x14
        public_62ac6e9 : nop
        push edi
        push ebx
        mov ecx, esi
        call public_62af420
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x62ac680)
    }
}

#undef public_62ac6e9
