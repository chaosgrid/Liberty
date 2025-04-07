#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f660);
CLANG_FORWARD_PROC_SYMBOL(public_6d10520);
CLANG_FORWARD_PROC_SYMBOL(public_6d10760);
CLANG_FORWARD_PROC_SYMBOL(public_6d109c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d10a30);
CLANG_FORWARD_PROC_SYMBOL(public_6d10aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d10ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61a13);

#define public_6d10609 _public_6d10609
#define public_6d1060f _public_6d1060f

PROC_DECLARE(0x6d10520, internal_6d10520, public_6d10520);
extern "C" NAKED register_t __cdecl internal_6d10520()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61a13 @0x6d10522*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61a13
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi], offset public_6d67cec
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        mov cl, byte ptr ds : [edi+8]
        lea ebx, ds:[esi+8]
        push 0
        mov byte ptr ds : [ebx], cl
        push 0
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], esi
        call public_6d0f3e0
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov ebp, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x30], edx
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax]
        push ebp
        push ecx
        push edx
        mov ecx, ebx
        call public_6d109c0
        mov al, byte ptr ds : [edi+0x14]
        xor ebp, ebp
        lea ebx, ds:[esi+0x14]
        push ebp
        push ebp
        mov ecx, ebx
        mov dword ptr ss : [esp+0x2C], ebp
        mov byte ptr ds : [ebx], al
        call public_6d10aa0
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], ebp
        mov ebp, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x2C], ecx
        push edx
        mov ecx, ebx
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax]
        push ebp
        push ecx
        push edx
        mov ecx, ebx
        call public_6d10a30
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], eax
        mov cl, byte ptr ds : [edi+0x24]
        lea ebx, ds:[esi+0x24]
        mov byte ptr ds : [ebx], cl
        mov eax, dword ptr ds : [edi+0x28]
        test eax, eax
        mov byte ptr ss : [esp+0x24], 1
        je public_6d10609
        mov ecx, dword ptr ds : [edi+0x2C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6d10609 : nop
        test eax, eax
        jge public_6d1060f
        xor eax, eax
        public_6d1060f : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 2
        push ecx
        call public_6d60012
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [edi+0x2C]
        mov edx, dword ptr ds : [edi+0x28]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_6d10ad0
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        lea ebx, ds:[esi+0x34]
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 2
        call public_6d0f660
        mov dword ptr ds : [ebx], offset public_6d67ce4
        lea ebx, ds:[esi+0x48]
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 3
        call public_6d0f660
        mov dword ptr ds : [ebx], offset public_6d67ce4
        lea ebx, ds:[esi+0x5C]
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 4
        call public_6d0f660
        mov dword ptr ds : [ebx], offset public_6d67ce4
        lea ebx, ds:[esi+0x70]
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 5
        call public_6d0f660
        mov dword ptr ds : [ebx], offset public_6d67ce4
        lea ebx, ds:[esi+0x84]
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 6
        call public_6d0f660
        mov dword ptr ds : [ebx], offset public_6d67ce4
        lea ebx, ds:[esi+0x98]
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 7
        call public_6d0f660
        mov dword ptr ds : [ebx], offset public_6d67ce4
        lea ebx, ds:[esi+0xAC]
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 8
        call public_6d0f660
        mov dword ptr ds : [ebx], offset public_6d67ce4
        lea ebx, ds:[esi+0xC0]
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 9
        call public_6d0f660
        mov dword ptr ds : [ebx], offset public_6d67ce4
        lea ebx, ds:[esi+0xD4]
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 0xA
        call public_6d0f660
        mov dword ptr ds : [ebx], offset public_6d67ce4
        mov byte ptr ss : [esp+0x24], 0xB
        lea edx, ds:[edi+0xE8]
        push edx
        lea ecx, ds:[esi+0xE8]
        call public_6d10760
        mov al, byte ptr ds : [edi+0xFC]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0xFC], al
        pop edi
        mov dword ptr ds : [esi], offset public_6d67cd0
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6d10520)
    }
}

#undef public_6d10609
#undef public_6d1060f
