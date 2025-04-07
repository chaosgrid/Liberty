#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6309b20);
CLANG_FORWARD_PROC_SYMBOL(public_6309b30);
CLANG_FORWARD_PROC_SYMBOL(public_6309b40);
CLANG_FORWARD_PROC_SYMBOL(public_6309b50);
CLANG_FORWARD_PROC_SYMBOL(public_6309b80);
CLANG_FORWARD_PROC_SYMBOL(public_6332f50);
CLANG_FORWARD_PROC_SYMBOL(public_633bad0);

#define public_62957c9 _public_62957c9
#define public_62957d7 _public_62957d7

PROC_DECLARE(0x6295750, internal_6295750, public_6295750);
extern "C" NAKED register_t __cdecl internal_6295750()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        jbe public_62957d7
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+8]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, edi
        call public_6309b30
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        mov ecx, edi
        push edx
        call public_6309b20
        fld dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0xC]
        fdiv dword ptr ds : [eax+0x1C]
        push ecx
        mov ecx, edi
        fstp dword ptr ss : [esp]
        call public_6332f50
        mov ecx, dword ptr ds : [esi+0x28]
        push ecx
        mov ecx, edi
        call public_633bad0
        push 0
        mov ecx, edi
        call public_6309b50
        mov dl, byte ptr ds : [esi+0x12]
        mov byte ptr ds : [edi+0x18], dl
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        je public_62957c9
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [eax+0x60]
        push eax
        mov ecx, edi
        call public_6309b40
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62957c9 : nop
        mov ecx, edi
        call public_6309b80
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62957d7 : nop
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6295750)
    }
}

#undef public_62957c9
#undef public_62957d7
