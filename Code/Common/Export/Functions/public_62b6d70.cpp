#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b90a0);
CLANG_FORWARD_PROC_SYMBOL(public_62b91f0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9340);
CLANG_FORWARD_PROC_SYMBOL(public_62b9560);
CLANG_FORWARD_PROC_SYMBOL(public_62b9650);
CLANG_FORWARD_PROC_SYMBOL(public_62b9780);
CLANG_FORWARD_PROC_SYMBOL(public_62b9840);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63947bf);

#define public_62b6ef0 _public_62b6ef0

PROC_DECLARE(0x62b6d70, internal_62b6d70, public_62b6d70);
extern "C" NAKED register_t __cdecl internal_62b6d70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63947bf @0x62b6d72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63947bf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        mov al, byte ptr ds : [edi]
        mov esi, ecx
        push 0x18
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ds : [esi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ebx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_632c410
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebp
        push edx
        mov ecx, esi
        call public_62b9560
        mov al, byte ptr ds : [edi+0xC]
        lea ebp, ds:[edi+0xC]
        lea ebx, ds:[esi+0xC]
        push 0x18
        mov dword ptr ss : [esp+0x30], 0
        mov byte ptr ds : [ebx], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], ecx
        push edx
        mov ecx, ebp
        call public_632c410
        mov ebp, eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call public_62b9560
        mov cl, byte ptr ds : [edi+0x18]
        lea ebp, ds:[edi+0x18]
        lea ebx, ds:[esi+0x18]
        push 0x14
        mov byte ptr ss : [esp+0x30], 1
        mov byte ptr ds : [ebx], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        add esp, 4
        mov dword ptr ds : [ebx+8], 0
        mov edx, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x38], edx
        call public_632c410
        mov ebp, eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebx
        call public_632c410
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [ebp]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        mov ecx, ebx
        call public_62b9650
        mov al, byte ptr ds : [edi+0x24]
        lea ebx, ds:[esi+0x24]
        push 0
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x34], 2
        mov byte ptr ds : [ebx], al
        call public_62b9840
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov ebp, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x34], ecx
        push edx
        mov ecx, ebx
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [eax]
        push ebp
        push ecx
        push edx
        mov ecx, ebx
        call public_62b9780
        lea ebp, ds:[esi+0x30]
        lea ebx, ds:[edi+0x30]
        mov byte ptr ss : [esp+0x2C], 3
        sub ebx, ebp
        mov dword ptr ss : [esp+0x34], 4
        lea ebx, ds:[ebx]
        public_62b6ef0 : nop
        lea eax, ds:[ebx+ebp]
        push eax
        mov ecx, ebp
        call public_62b90a0
        mov eax, dword ptr ss : [esp+0x34]
        add ebp, 0x14
        dec eax
        mov byte ptr ss : [esp+0x2C], 4
        mov dword ptr ss : [esp+0x34], eax
        jne public_62b6ef0
        lea edx, ds:[edi+0x80]
        lea ecx, ds:[esi+0x80]
        push edx
        mov dword ptr ss : [esp+0x38], ebp
        call public_62b91f0
        add edi, 0x94
        push edi
        lea ecx, ds:[esi+0x94]
        mov byte ptr ss : [esp+0x30], 5
        call public_62b9340
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x62b6d70)
    }
}

#undef public_62b6ef0
