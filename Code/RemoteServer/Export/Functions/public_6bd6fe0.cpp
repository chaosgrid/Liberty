#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd705b _public_6bd705b

PROC_DECLARE(0x6bd6fe0, internal_6bd6fe0, public_6bd6fe0);
extern "C" NAKED register_t __cdecl internal_6bd6fe0()
{
    __asm
    {
        sub esp, 0x408
        push ebx
        lea eax, ss:[esp+4]
        push eax
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        push 1
        push 3
        call public_6be1750
        test eax, eax
        jne public_6bd705b
        push esi
        mov esi, dword ptr ss : [esp+0x414]
        push edi
        mov edi, dword ptr ds : [public_6c0b220]
        lea ecx, ss:[esp+0x10]
        push esi
        push ecx
        call edi
        lea edx, ds:[esi+0xA0]
        push edx
        lea eax, ss:[esp+0x21C]
        push eax
        call edi
        mov cl, byte ptr ds : [esi+0xC0]
        mov edx, dword ptr ss : [esp+0x1C]
        mov byte ptr ss : [esp+0x420], cl
        lea edi, ds:[edx+0x20]
        mov ecx, 0x100
        lea esi, ss:[esp+0x20]
        rep movsd
        movsw 
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx]
        add esp, 0x10
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x170]
        pop edi
        pop esi
        public_6bd705b : nop
        pop ebx
        add esp, 0x408
        ret 8
        UNREACHABLE_TRAP(0x6bd6fe0)
    }
}

#undef public_6bd705b
