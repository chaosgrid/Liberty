#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_460170);
CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_46bcd0);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba7fc);

#define public_4601b8 _public_4601b8

PROC_DECLARE(0x460170, internal_460170, public_460170);
extern "C" NAKED register_t __cdecl internal_460170()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba7fc @0x460172*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba7fc
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
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5cf124
        mov dword ptr ds : [esi+0x7C], offset public_5cf114
        mov eax, dword ptr ds : [public_66da84]
        xor ebx, ebx
        cmp eax, esi
        mov dword ptr ss : [esp+0x24], 0x1A
        jne public_4601b8
        mov dword ptr ds : [public_66da84], ebx
        public_4601b8 : nop
        lea ecx, ds:[esi+0x480]
        call public_46ba90
        lea ecx, ds:[esi+0x474]
        mov byte ptr ss : [esp+0x24], 0x19
        call public_46ba90
        lea ecx, ds:[esi+0x468]
        mov byte ptr ss : [esp+0x24], 0x18
        call public_46ba90
        lea ecx, ds:[esi+0x45C]
        mov byte ptr ss : [esp+0x24], 0x17
        call public_46ba90
        lea ecx, ds:[esi+0x450]
        mov byte ptr ss : [esp+0x24], 0x16
        call public_46ba90
        lea ecx, ds:[esi+0x444]
        mov byte ptr ss : [esp+0x24], 0x15
        call public_46ba90
        lea ecx, ds:[esi+0x438]
        mov byte ptr ss : [esp+0x24], 0x14
        call public_46ba90
        lea ecx, ds:[esi+0x42C]
        mov byte ptr ss : [esp+0x24], 0x13
        call public_46ba90
        lea ecx, ds:[esi+0x420]
        mov byte ptr ss : [esp+0x24], 0x12
        call public_46ba90
        lea ecx, ds:[esi+0x414]
        mov byte ptr ss : [esp+0x24], 0x11
        call public_46ba90
        lea ecx, ds:[esi+0x408]
        mov byte ptr ss : [esp+0x24], 0x10
        call public_46ba90
        lea ecx, ds:[esi+0x3FC]
        mov byte ptr ss : [esp+0x24], 0xF
        call public_46ba90
        lea ecx, ds:[esi+0x3F0]
        mov byte ptr ss : [esp+0x24], 0xE
        call public_46ba90
        lea ecx, ds:[esi+0x3E4]
        mov byte ptr ss : [esp+0x24], 0xD
        call public_46ba90
        lea ecx, ds:[esi+0x3D8]
        mov byte ptr ss : [esp+0x24], 0xC
        call public_46ba90
        lea ecx, ds:[esi+0x3CC]
        mov byte ptr ss : [esp+0x24], 0xB
        call public_46ba90
        lea ecx, ds:[esi+0x3C0]
        mov byte ptr ss : [esp+0x24], 0xA
        call public_46ba90
        mov ebp, dword ptr ds : [esi+0x3B8]
        lea edi, ds:[esi+0x3B4]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 9
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x3AC]
        add esp, 4
        lea edi, ds:[esi+0x3A8]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 8
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x3A0]
        add esp, 4
        lea edi, ds:[esi+0x39C]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 7
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x394]
        add esp, 4
        lea edi, ds:[esi+0x390]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 6
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x388]
        add esp, 4
        lea edi, ds:[esi+0x384]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 5
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x37C]
        add esp, 4
        lea edi, ds:[esi+0x378]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 4
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x370]
        add esp, 4
        lea edi, ds:[esi+0x36C]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 3
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x364]
        add esp, 4
        lea edi, ds:[esi+0x360]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 2
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x358]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[esi+0x354]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 1
        call public_4a2f80
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ds:[esi+0x340]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x24], bl
        call public_46bcd0
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x460170)
    }
}

#undef public_4601b8
