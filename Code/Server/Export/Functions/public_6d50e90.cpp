#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7720);
CLANG_FORWARD_PROC_SYMBOL(public_6d49230);
CLANG_FORWARD_PROC_SYMBOL(public_6d50e90);
CLANG_FORWARD_PROC_SYMBOL(public_6d56fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d574f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d57bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6378f);

PROC_DECLARE(0x6d50e90, internal_6d50e90, public_6d50e90);
extern "C" NAKED register_t __cdecl internal_6d50e90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6378f @0x6d50e92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6378f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x1C], 8
        call public_6d49230
        mov eax, dword ptr ds : [esi+0x3D8]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x3D4]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 7
        call public_6cf7720
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x3B8]
        push eax
        call public_6d5ffb0
        add esp, 8
        lea ecx, ds:[esi+0x3A0]
        mov dword ptr ds : [esi+0x3B8], ebx
        mov dword ptr ds : [esi+0x3BC], ebx
        mov dword ptr ds : [esi+0x3C0], ebx
        mov byte ptr ss : [esp+0x1C], 5
        call public_6d56fd0
        mov eax, dword ptr ds : [esi+0x394]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x390]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 4
        call public_6d574f0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        add esp, 4
        push 1
        lea ecx, ds:[esi+0x380]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x20], 3
        call dword ptr ds : [public_6d64b74]
        mov eax, dword ptr ds : [esi+0x32C]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x328]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 2
        call dword ptr ds : [public_6d64884]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x27C]
        lea edi, ds:[esi+0x278]
        add esp, 4
        mov byte ptr ss : [esp+0x1C], 1
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d64884]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x270]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[esi+0x26C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], bl
        call dword ptr ds : [public_6d643a8]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        add esp, 4
        add esi, 0x50
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, dword ptr ds : [esi+4]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6d5c540
        mov eax, dword ptr ds : [eax]
        push edi
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_6d57bb0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d50e90)
    }
}
