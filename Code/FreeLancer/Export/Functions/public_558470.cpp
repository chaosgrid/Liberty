#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_557860);
CLANG_FORWARD_PROC_SYMBOL(public_558470);

#define public_558492 _public_558492
#define public_55856e _public_55856e

PROC_DECLARE(0x558470, internal_558470, public_558470);
extern "C" NAKED register_t __cdecl internal_558470()
{
    __asm
    {
        sub esp, 0xC4
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], ecx
        je public_55856e
        push ebp
        mov ebp, dword ptr ss : [esp+0xD0]
        push esi
        push edi
        public_558492 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [public_5c61c0]
        push eax
        lea edx, ss:[esp+0xA8]
        push edx
        call dword ptr ds : [public_5c6bb8]
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [public_5c6214]
        add esp, 8
        push ecx
        mov ecx, ebp
        call esi
        add eax, 4
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x74], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x78], ecx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x7C], edx
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, ebp
        call esi
        mov esi, eax
        lea edx, ss:[esp+0x74]
        add esi, 0x10
        mov ecx, 9
        lea edi, ss:[esp+0x80]
        push edx
        lea eax, ss:[esp+0x18]
        rep movsd
        push eax
        lea ecx, ss:[esp+0xAC]
        call dword ptr ds : [public_5c6bb4]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, 9
        lea esi, ss:[esp+0x20]
        lea edi, ss:[esp+0x44]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x68], ecx
        mov ecx, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x6C], edx
        mov edx, dword ptr ss : [esp+0xDC]
        mov dword ptr ss : [esp+0x70], eax
        add edi, 0x4C
        mov ecx, 0xC
        lea esi, ss:[esp+0x44]
        rep movsd
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax]
        push edx
        call public_557860
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [ecx+4]
        jne public_558492
        pop edi
        pop esi
        pop ebp
        public_55856e : nop
        pop ebx
        add esp, 0xC4
        ret 8
        UNREACHABLE_TRAP(0x558470)
    }
}

#undef public_558492
#undef public_55856e
