#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612e70);
CLANG_FORWARD_PROC_SYMBOL(public_6614e20);
CLANG_FORWARD_PROC_SYMBOL(public_6617320);
CLANG_FORWARD_PROC_SYMBOL(public_6618120);
CLANG_FORWARD_PROC_SYMBOL(public_6618810);
CLANG_FORWARD_PROC_SYMBOL(public_6618ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6619050);
CLANG_FORWARD_PROC_SYMBOL(public_6619c80);
CLANG_FORWARD_PROC_SYMBOL(public_6619e00);
CLANG_FORWARD_PROC_SYMBOL(public_6627a70);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6614e51 _public_6614e51
#define public_6614ef0 _public_6614ef0
#define public_6614f18 _public_6614f18
#define public_6614f20 _public_6614f20

PROC_DECLARE(0x6614e20, internal_6614e20, public_6614e20);
extern "C" NAKED register_t __cdecl internal_6614e20()
{
    __asm
    {
        sub esp, 0x54
        lea eax, ss:[esp+0x58]
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0xC]
        lea edi, ds:[esi+0x3C]
        push eax
        push ecx
        mov ecx, edi
        call public_6612e70
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x40]
        cmp eax, ecx
        je public_6614e51
        pop edi
        add eax, 0x10
        pop esi
        add esp, 0x54
        ret 4
        public_6614e51 : nop
        mov dl, byte ptr ss : [esp+0x60]
        mov al, byte ptr ss : [esp+0x60]
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1C], dl
        mov byte ptr ss : [esp+0x1D], al
        mov byte ptr ss : [esp+0x28], 0
        call public_6619e00
        lea ecx, ss:[esp+0xA]
        lea edx, ss:[esp+0xB]
        push ecx
        push 0
        push edx
        lea ecx, ss:[esp+0x3C]
        call public_6618810
        mov eax, dword ptr ss : [esp+0x60]
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x48], eax
        call public_6619050
        lea edx, ss:[esp+0x44]
        lea eax, ss:[esp+0x10]
        push edx
        push eax
        mov ecx, edi
        call public_6618120
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x48]
        call public_6617320
        lea ecx, ss:[esp+0x30]
        call public_6617320
        add esi, 0x10
        lea ecx, ss:[esp+0x1C]
        cmp esi, ecx
        je public_6614ef0
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x18]
        push eax
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edx
        mov ecx, esi
        call public_6618ef0
        mov al, byte ptr ss : [esp+0x1D]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        mov byte ptr ds : [esi+1], al
        call public_6619c80
        public_6614ef0 : nop
        lea edx, ss:[esp+0x60]
        mov ecx, edi
        push edx
        call public_6627a70
        mov edi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x10], eax
        cmp eax, edi
        je public_6614f18
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jl public_6614f18
        lea eax, ss:[esp+0x10]
        jmp public_6614f20
        public_6614f18 : nop
        mov dword ptr ss : [esp+0x18], edi
        lea eax, ss:[esp+0x18]
        public_6614f20 : nop
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        lea esi, ds:[eax+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6618ef0
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call public_66281d0
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x24], 0
        push ecx
        mov dword ptr ss : [esp+0x34], 0
        call public_66281d0
        add esp, 8
        mov eax, esi
        pop edi
        pop esi
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x6614e20)
    }
}

#undef public_6614e51
#undef public_6614ef0
#undef public_6614f18
#undef public_6614f20
