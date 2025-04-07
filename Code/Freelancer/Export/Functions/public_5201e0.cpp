#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f10);
CLANG_FORWARD_PROC_SYMBOL(public_5201e0);
CLANG_FORWARD_PROC_SYMBOL(public_527310);
CLANG_FORWARD_PROC_SYMBOL(public_5274a0);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_54c580);
CLANG_FORWARD_PROC_SYMBOL(public_554e90);
CLANG_FORWARD_PROC_SYMBOL(public_5995c0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bffe1);

#define public_5203b6 _public_5203b6
#define public_5203da _public_5203da

PROC_DECLARE(0x5201e0, internal_5201e0, public_5201e0);
extern "C" NAKED register_t __cdecl internal_5201e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bffe1 @0x5201e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bffe1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov al, byte ptr ss : [esp+2]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [esp+0xE]
        lea ebp, ds:[esi+8]
        mov byte ptr ss : [ebp+1], cl
        xor ebx, ebx
        push edi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ss : [ebp], al
        mov byte ptr ss : [ebp+0xC], bl
        call public_5274a0
        mov edi, 0x3F800000
        lea edx, ss:[esp+0x12]
        mov dword ptr ds : [esi+0xB4], edi
        mov dword ptr ds : [esi+0xB8], edi
        mov dword ptr ds : [esi+0xBC], edi
        push edx
        lea eax, ss:[esp+0x17]
        lea ecx, ds:[esi+0xE0]
        push eax
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ds : [esi+0xC0], edi
        mov dword ptr ds : [esi+0xC4], edi
        mov dword ptr ds : [esi+0xC8], edi
        call public_4a2f10
        mov eax, dword ptr ds : [esi+0xE4]
        mov dword ptr ds : [esi+0xF4], eax
        lea ecx, ds:[esi+0xFC]
        mov byte ptr ss : [esp+0x2C], 1
        call public_54c580
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0x184], cl
        mov dword ptr ds : [esi+0x188], ebx
        mov dword ptr ds : [esi+0x18C], ebx
        mov dword ptr ds : [esi+0x190], ebx
        push edi
        push edi
        mov dword ptr ds : [esi+0x1D0], ebx
        mov dword ptr ds : [esi+0x1D4], edi
        mov dword ptr ds : [esi+0x1D8], ebx
        push edi
        lea ecx, ds:[esi+0x1E8]
        mov byte ptr ss : [esp+0x38], 3
        mov dword ptr ds : [esi+0x1E4], 4
        call public_422b80
        push edi
        push edi
        push edi
        lea ecx, ds:[esi+0x1F4]
        call public_422b80
        push edi
        push edi
        push edi
        lea ecx, ds:[esi+0x200]
        call public_422b80
        mov ecx, 0x44BB8000
        mov eax, 0x64
        mov dword ptr ds : [esi+0x19C], 0x451C4000
        mov dword ptr ds : [esi+0x1A4], ecx
        mov dword ptr ds : [esi+0x1A0], 0x457A0000
        mov dword ptr ds : [esi+0x1A8], ebx
        mov dword ptr ds : [esi+0x1AC], eax
        mov dword ptr ds : [esi+0x1B0], eax
        mov dword ptr ds : [esi+0x1B4], ebx
        mov dword ptr ds : [esi+0x1B8], edi
        mov dword ptr ds : [esi+0x1BC], ebx
        mov dword ptr ds : [esi+0x1C0], 0x43FA0000
        mov dword ptr ds : [esi+0x1C4], 0x42C80000
        mov dword ptr ds : [esi+0x1C8], 0x442F0000
        mov dword ptr ds : [esi+0x1CC], 0x3E99999A
        mov dword ptr ds : [esi+0x1DC], 0x44FA0000
        mov dword ptr ds : [esi+0x1E0], ecx
        mov dword ptr ds : [esi+0x20C], edi
        mov dword ptr ds : [esi+0x210], edi
        mov dword ptr ds : [esi+0x214], edi
        mov byte ptr ds : [esi+0x218], bl
        mov dl, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x220]
        mov byte ptr ds : [edi], dl
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x2C], 5
        call public_554e90
        push eax
        call dword ptr ds : [public_5c665c]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [esi+4], eax
        je public_5203b6
        mov ecx, eax
        call dword ptr ds : [public_5c6658]
        jmp public_5203da
/*FIXUP public_5203b6 : nop
        push offset public_5dc4b0 @0x5203b6*/
  FIXUP public_5203b6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc4b0
        push 0x11E
/*FIXUP push offset public_5dc47c @0x5203c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x5203ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_5203da : nop
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x20], 0x190
        mov dword ptr ds : [esi+0x24], 0x4B0
        mov dword ptr ds : [esi+0xCC], eax
        mov dword ptr ds : [esi+0x230], eax
        mov byte ptr ds : [esi+0x2C], bl
        mov byte ptr ds : [esi+0xD3], bl
        mov dword ptr ds : [esi+0x28], ebx
        mov byte ptr ds : [esi+0xD0], bl
        mov byte ptr ds : [esi+0xD1], bl
        mov byte ptr ds : [esi+0xD2], bl
        mov ecx, dword ptr ss : [ebp+4]
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        mov ecx, ebp
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, ebp
        call public_527310
        lea ecx, ds:[esi+0x184]
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0xD8], 0x42C80000
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push eax
        call public_5995c0
        mov dword ptr ds : [esi+0x194], ebx
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        push ecx
        push eax
        push eax
        call public_527820
        mov ecx, dword ptr ds : [edi+8]
        add esp, 0xC
        push ecx
        mov ebp, eax
        push ebp
        mov ecx, edi
        call public_53aaa0
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi+8], ebp
        pop edi
        mov dword ptr ds : [esi+0x1C], ebx
        mov byte ptr ds : [esi+0xF8], bl
        mov byte ptr ds : [esi+0x180], bl
        mov byte ptr ds : [esi+0x198], bl
        mov byte ptr ds : [esi+0x234], 1
        mov byte ptr ds : [esi+0x21C], 1
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x5201e0)
    }
}

#undef public_5203b6
#undef public_5203da
