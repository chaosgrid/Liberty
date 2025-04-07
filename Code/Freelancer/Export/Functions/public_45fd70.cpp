#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_45fd70);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_46d100);
CLANG_FORWARD_PROC_SYMBOL(public_489f40);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba65c);

PROC_DECLARE(0x45fd70, internal_45fd70, public_45fd70);
extern "C" NAKED register_t __cdecl internal_45fd70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba65c @0x45fd72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba65c
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
        mov dword ptr ss : [esp+0x10], esi
        call public_59f860
        xor ebx, ebx
        lea eax, ss:[esp+0xE]
        push eax
        push ebx
        lea edx, ss:[esp+0x17]
        lea ecx, ds:[esi+0x340]
        push edx
        mov dword ptr ss : [esp+0x28], ebx
        mov word ptr ds : [esi+0x334], bx
        mov byte ptr ds : [esi+0x336], bl
        mov byte ptr ds : [esi+0x337], bl
        call public_46d100
        mov al, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x354]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [edi], al
        call public_489f40
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x360]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 2
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea edx, ss:[esp+0xF]
        lea ecx, ds:[esi+0x36C]
        push edx
        mov byte ptr ss : [esp+0x20], 3
        call public_46ba60
        lea eax, ss:[esp+0xE]
        lea ecx, ds:[esi+0x378]
        push eax
        mov byte ptr ss : [esp+0x20], 4
        call public_46ba60
        lea edx, ss:[esp+0xF]
        lea ecx, ds:[esi+0x384]
        push edx
        mov byte ptr ss : [esp+0x20], 5
        call public_46ba60
        lea eax, ss:[esp+0xE]
        lea ecx, ds:[esi+0x390]
        push eax
        mov byte ptr ss : [esp+0x20], 6
        call public_46ba60
        lea edx, ss:[esp+0xF]
        lea ecx, ds:[esi+0x39C]
        push edx
        mov byte ptr ss : [esp+0x20], 7
        call public_46ba60
        mov al, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x3A8]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 8
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea edx, ss:[esp+0xF]
        lea ecx, ds:[esi+0x3B4]
        push edx
        mov byte ptr ss : [esp+0x20], 9
        call public_46ba60
        lea eax, ss:[esp+0xE]
        lea ecx, ds:[esi+0x3C0]
        push eax
        mov byte ptr ss : [esp+0x20], 0xA
        call public_46ba60
        lea edx, ss:[esp+0xF]
        lea ecx, ds:[esi+0x3CC]
        push edx
        mov byte ptr ss : [esp+0x20], 0xB
        call public_46ba60
        lea eax, ss:[esp+0xE]
        lea ecx, ds:[esi+0x3D8]
        push eax
        mov byte ptr ss : [esp+0x20], 0xC
        call public_46ba60
        lea edx, ss:[esp+0xF]
        lea ecx, ds:[esi+0x3E4]
        push edx
        mov byte ptr ss : [esp+0x20], 0xD
        call public_46ba60
        lea eax, ss:[esp+0xE]
        lea ecx, ds:[esi+0x3F0]
        push eax
        mov byte ptr ss : [esp+0x20], 0xE
        call public_46ba60
        mov cl, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x3FC]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 0xF
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea edx, ss:[esp+0xF]
        lea ecx, ds:[esi+0x408]
        push edx
        mov byte ptr ss : [esp+0x20], 0x10
        call public_46ba60
        lea eax, ss:[esp+0xE]
        lea ecx, ds:[esi+0x414]
        push eax
        mov byte ptr ss : [esp+0x20], 0x11
        call public_46ba60
        lea edx, ss:[esp+0xF]
        lea ecx, ds:[esi+0x420]
        push edx
        mov byte ptr ss : [esp+0x20], 0x12
        call public_46ba60
        lea eax, ss:[esp+0xE]
        lea ecx, ds:[esi+0x42C]
        push eax
        mov byte ptr ss : [esp+0x20], 0x13
        call public_46ba60
        lea edx, ss:[esp+0xF]
        lea ecx, ds:[esi+0x438]
        push edx
        mov byte ptr ss : [esp+0x20], 0x14
        call public_46ba60
        mov byte ptr ss : [esp+0x1C], 0x15
        lea ecx, ds:[esi+0x444]
        lea eax, ss:[esp+0xE]
        push eax
        call public_46ba60
        lea edx, ss:[esp+0xF]
        lea ecx, ds:[esi+0x450]
        push edx
        mov byte ptr ss : [esp+0x20], 0x16
        call public_46ba60
        mov al, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x45C]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 0x17
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea edx, ss:[esp+0xF]
        lea ecx, ds:[esi+0x468]
        push edx
        mov byte ptr ss : [esp+0x20], 0x18
        call public_46ba60
        lea eax, ss:[esp+0xE]
        lea ecx, ds:[esi+0x474]
        push eax
        mov byte ptr ss : [esp+0x20], 0x19
        call public_46ba60
        lea ecx, ss:[esp+0xF]
        push ecx
        lea ecx, ds:[esi+0x480]
        mov byte ptr ss : [esp+0x20], 0x1A
        call public_46ba60
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x48C], ebx
        mov dword ptr ds : [esi+0x490], ebx
        mov dword ptr ds : [esi+0x494], ebx
        mov dword ptr ds : [esi+0x498], ebx
        mov dword ptr ds : [esi+0x49C], ebx
        mov dword ptr ds : [esi+0x4A0], ebx
        mov dword ptr ds : [esi], offset public_5cf124
        mov dword ptr ds : [esi+0x7C], offset public_5cf114
        mov edx, dword ptr ds : [public_66da48]
        mov dword ptr ds : [esi+0x338], ebx
        mov dword ptr ds : [esi+0x33C], ebx
        mov dword ptr ds : [esi+0x330], ebx
        mov dword ptr ds : [esi+0x32C], ebx
        pop edi
        mov dword ptr ds : [esi+0x334], edx
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x45fd70)
    }
}
