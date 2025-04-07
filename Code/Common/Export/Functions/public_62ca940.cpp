#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6200);
CLANG_FORWARD_PROC_SYMBOL(public_62ee940);

#define public_62caa25 _public_62caa25

PROC_DECLARE(0x62ca940, internal_62ca940, public_62ca940);
extern "C" NAKED register_t __cdecl internal_62ca940()
{
    __asm
    {
        mov al, byte ptr ds : [public_63fce0d]
        sub esp, 0xC
        test al, al
        push esi
        push edi
        mov edi, ecx
        je public_62caa25
        mov ecx, dword ptr ds : [edi+0x14]
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x74]
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_62caa25
        mov ecx, dword ptr ds : [edi+0x14]
        lea edx, ss:[esp+0xB]
        mov byte ptr ss : [esp+0xB], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x134]
        mov al, byte ptr ss : [esp+0xB]
        test al, al
        jne public_62caa25
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        mov esi, ecx
        je public_62caa25
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+0x88]
        test eax, eax
        jne public_62caa25
        mov eax, dword ptr ss : [esp+0x10]
        test eax, 0x7F0000
        je public_62caa25
        test eax, 0x200000
        jne public_62caa25
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x148]
        cmp eax, 0xE
        je public_62caa25
        cmp eax, 0x11
        je public_62caa25
        cmp eax, 8
        je public_62caa25
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        call public_62e6200
        add esp, 4
        test eax, 0x7F0000
        je public_62caa25
        test eax, 0x600DE0
        jne public_62caa25
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edi+0x24]
        xor edx, edx
        mov dx, word ptr ds : [public_63a4aa4]
        add ecx, 0x142C
        push edx
        push eax
        call public_62ee940
        pop edi
        mov eax, 1
        pop esi
        add esp, 0xC
        ret 4
        public_62caa25 : nop
        pop edi
        mov eax, 2
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62ca940)
    }
}

#undef public_62caa25
