#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa7ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6fa807c _public_6fa807c
#define public_6fa80da _public_6fa80da

PROC_DECLARE(0x6fa7ff0, internal_6fa7ff0, public_6fa7ff0);
extern "C" NAKED register_t __cdecl internal_6fa7ff0()
{
    __asm
    {
        sub esp, 0x78
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x20]
        push eax
        push ecx
        call dword ptr ds : [public_6fb35c0]
        mov edx, dword ptr ds : [esi]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_6fb3480]
        lea ecx, ss:[esp+0x3C]
        push ecx
        push esi
        call dword ptr ds : [public_6fb357c]
        fld dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_6fb605c]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x44]
        lea edi, ss:[esp+0x68]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 0x18
        mov dword ptr ss : [esp+0x78], eax
        mov eax, dword ptr ds : [public_6fd3de0]
        test eax, eax
        pop edi
        mov dword ptr ss : [esp+0x70], edx
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x78], ecx
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+0xC], 0
        pop esi
        jne public_6fa807c
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd3de0], eax
        public_6fa807c : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp]
        push ecx
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_6fbd6c4]
        mov edx, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [public_6fd3de0]
        test eax, eax
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x14], 0
        jne public_6fa80da
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd3de0], eax
        public_6fa80da : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ss:[esp+0x4C]
        push edx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp]
        mov eax, dword ptr ss : [esp+0x80]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov al, 1
        add esp, 0x78
        ret 8
        UNREACHABLE_TRAP(0x6fa7ff0)
    }
}

#undef public_6fa807c
#undef public_6fa80da
