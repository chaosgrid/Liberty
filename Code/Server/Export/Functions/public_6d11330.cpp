#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f660);
CLANG_FORWARD_PROC_SYMBOL(public_6d10760);
CLANG_FORWARD_PROC_SYMBOL(public_6d109c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d10a30);
CLANG_FORWARD_PROC_SYMBOL(public_6d10aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d10ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6d11330);
CLANG_FORWARD_PROC_SYMBOL(public_6d11550);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61a47);

#define public_6d1144f _public_6d1144f
#define public_6d11534 _public_6d11534

PROC_DECLARE(0x6d11330, internal_6d11330, public_6d11330);
extern "C" NAKED register_t __cdecl internal_6d11330()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61a47 @0x6d11332*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61a47
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x24], 0
        je public_6d11534
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        add esi, 4
        mov dword ptr ds : [esi], offset public_6d67cec
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+4], ecx
        mov dl, byte ptr ds : [edi+0xC]
        lea ebp, ds:[edi+0xC]
        lea ebx, ds:[esi+8]
        push 0
        push 0
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], esi
        mov byte ptr ds : [ebx], dl
        call public_6d0f3e0
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov eax, dword ptr ss : [ebp+4]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], eax
        call public_6d5c540
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebx
        mov ebp, eax
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call public_6d109c0
        mov cl, byte ptr ds : [edi+0x18]
        lea ebp, ds:[edi+0x18]
        lea ebx, ds:[esi+0x14]
        push 0
        mov byte ptr ds : [ebx], cl
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x38], 1
        call public_6d10aa0
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov edx, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], edx
        call public_6d5c540
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebx
        mov ebp, eax
        call public_6d5c540
        mov edx, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [ebp]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        mov ecx, ebx
        call public_6d10a30
        mov eax, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi+0x20], eax
        mov cl, byte ptr ds : [edi+0x28]
        lea ebp, ds:[edi+0x28]
        lea ebx, ds:[esi+0x24]
        mov byte ptr ds : [ebx], cl
        mov ecx, ebp
        mov byte ptr ss : [esp+0x30], 2
        call public_6d11550
        test eax, eax
        jge public_6d1144f
        xor eax, eax
        public_6d1144f : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_6d60012
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, ebx
        call public_6d10ad0
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        lea ebx, ds:[esi+0x34]
        push 0
        mov ecx, ebx
        call public_6d0f660
        mov dword ptr ds : [ebx], offset public_6d67ce4
        lea ebx, ds:[esi+0x48]
        push 0
        mov ecx, ebx
        call public_6d0f660
        lea eax, ds:[edi+0x60]
        push eax
        lea ecx, ds:[esi+0x5C]
        mov dword ptr ds : [ebx], offset public_6d67ce4
        call public_6d10760
        lea ecx, ds:[edi+0x74]
        push ecx
        lea ecx, ds:[esi+0x70]
        call public_6d10760
        lea edx, ds:[edi+0x88]
        push edx
        lea ecx, ds:[esi+0x84]
        call public_6d10760
        lea eax, ds:[edi+0x9C]
        push eax
        lea ecx, ds:[esi+0x98]
        call public_6d10760
        lea ecx, ds:[edi+0xB0]
        push ecx
        lea ecx, ds:[esi+0xAC]
        call public_6d10760
        lea edx, ds:[edi+0xC4]
        push edx
        lea ecx, ds:[esi+0xC0]
        call public_6d10760
        lea eax, ds:[edi+0xD8]
        push eax
        lea ecx, ds:[esi+0xD4]
        call public_6d10760
        lea ecx, ds:[edi+0xEC]
        push ecx
        lea ecx, ds:[esi+0xE8]
        call public_6d10760
        mov dl, byte ptr ds : [edi+0x100]
        pop edi
        pop ebp
        mov byte ptr ds : [esi+0xFC], dl
        mov dword ptr ds : [esi], offset public_6d67cd0
        pop ebx
        public_6d11534 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6d11330)
    }
}

#undef public_6d1144f
#undef public_6d11534
