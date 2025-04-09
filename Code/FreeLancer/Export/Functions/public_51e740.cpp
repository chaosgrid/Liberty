#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_51e7ce _public_51e7ce
#define public_51e7f8 _public_51e7f8

PROC_DECLARE(0x51e740, internal_51e740, public_51e740);
extern "C" NAKED register_t __cdecl internal_51e740()
{
    __asm
    {
        sub esp, 0x90
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr ds : [ebx+0xF8]
        test esi, esi
        je public_51e7f8
        fld dword ptr ss : [esp+0x9C]
        push edi
        fmul qword ptr ds : [public_5d3f50]
        mov edi, dword ptr ds : [esi]
        call public_5b7ec0
        push eax
        push esi
        call dword ptr ds : [edi+0x68]
        mov eax, dword ptr ds : [ebx+0xFC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [ebx+0xFC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, 9
        lea esi, ss:[esp+0x48]
        lea edi, ss:[esp+0x18]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [public_6752c8]
        test eax, eax
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x44], edx
        jne public_51e7ce
        call public_5b73e0
        mov dword ptr ds : [public_6752c8], eax
        public_51e7ce : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ds:[ebx+0x214]
        push edx
        lea edx, ss:[esp+0x74]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea edi, ds:[ebx+4]
        mov ecx, 0xC
        lea esi, ss:[esp+0x6C]
        rep movsd
        mov byte ptr ds : [ebx+0x34], 1
        pop edi
        public_51e7f8 : nop
        pop esi
        pop ebx
        add esp, 0x90
        ret 4
        UNREACHABLE_TRAP(0x51e740)
    }
}

#undef public_51e7ce
#undef public_51e7f8
