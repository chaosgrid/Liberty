#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f06560);
CLANG_FORWARD_PROC_SYMBOL(public_6f07ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0ddb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ea40);
CLANG_FORWARD_PROC_SYMBOL(public_6f60d60);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6facfe2);

#define public_6f07ffa _public_6f07ffa
#define public_6f0800b _public_6f0800b
#define public_6f080e6 _public_6f080e6
#define public_6f08100 _public_6f08100

PROC_DECLARE(0x6f07ef0, internal_6f07ef0, public_6f07ef0);
extern "C" NAKED register_t __cdecl internal_6f07ef0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6facfe2 @0x6f07ef2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facfe2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push ebx
        mov dword ptr ss : [esp+0x14], ebp
        call public_6f06560
        lea esi, ds:[ebx+0x10]
        lea edi, ss:[ebp+0x14]
        mov ecx, 0x41
        rep movsd
        mov dword ptr ss : [ebp], offset public_6fb827c
        xor eax, eax
        lea edi, ss:[ebp+0x134]
        mov dword ptr ds : [edi], eax
        mov byte ptr ds : [edi+4], al
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [ebp+0x170], eax
        mov cl, byte ptr ss : [esp+0x30]
        lea esi, ss:[ebp+0x180]
        push eax
        mov byte ptr ds : [esi], cl
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 1
        call public_6f93640
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov dl, byte ptr ss : [esp+0x30]
        push 0xC
        mov byte ptr ss : [esp+0x2C], 2
        mov byte ptr ss : [ebp+0x1A0], dl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [ebp+0x1A4], eax
        mov dword ptr ss : [ebp+0x1A8], 0
        mov dword ptr ss : [ebp], offset public_6fb8404
        lea eax, ds:[ebx+0x124]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x118]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ds:[ebx+0x130]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[ebp+0x124]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [ebx+0x13C]
        lea eax, ds:[ebx+0x144]
        test eax, eax
        mov byte ptr ss : [esp+0x28], 3
        mov dword ptr ss : [ebp+0x130], edx
        jne public_6f07ffa
        mov dword ptr ds : [edi], eax
        mov byte ptr ds : [edi+4], al
        jmp public_6f0800b
        public_6f07ffa : nop
        push eax
        lea eax, ds:[edi+4]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [edi], eax
        public_6f0800b : nop
        mov cl, byte ptr ds : [ebx+0x174]
        mov byte ptr ss : [ebp+0x16C], cl
        mov dl, byte ptr ds : [ebx+0x175]
        lea eax, ds:[ebx+0x118]
        push eax
        mov ecx, esi
        mov byte ptr ss : [ebp+0x16D], dl
        mov byte ptr ss : [ebp+0x1AC], 0
        call public_6f0ddb0
        mov ecx, dword ptr ds : [ebx+0x114]
        mov dword ptr ss : [ebp+0x17C], ecx
        mov dl, byte ptr ds : [ebx+0x176]
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov byte ptr ss : [ebp+0x16E], dl
        mov byte ptr ss : [ebp+0x1AD], 0
        mov dword ptr ss : [ebp+0x174], 1
        je public_6f08100
        mov eax, dword ptr ds : [ecx+0x170]
        push eax
        push edi
        call public_6eea860
        mov ecx, eax
        call public_6f73ac0
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp+0x168], eax
        call public_6eea860
        mov ebx, eax
        test ebx, ebx
        je public_6f080e6
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax+0x170]
        push eax
        push edi
        mov ecx, ebx
        call public_6f73ac0
        mov dword ptr ss : [ebp+0x168], eax
        mov eax, dword ptr ss : [ebp+0x188]
        test eax, eax
        jne public_6f080e6
        push 0
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        push 0x19
        push esi
        lea eax, ss:[ebp+0x124]
        push eax
        lea edx, ss:[esp+0x28]
        push edx
        mov dword ptr ss : [esp+0x48], 0x447A0000
        call public_6eb70f0
        push eax
        push ebx
        call public_6f5ea40
        add esp, 0x1C
        public_6f080e6 : nop
        xor eax, eax
        mov dword ptr ss : [ebp+0x198], eax
        mov dword ptr ss : [ebp+0x19C], eax
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6f60d60
        add esp, 4
        public_6f08100 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6f07ef0)
    }
}

#undef public_6f07ffa
#undef public_6f0800b
#undef public_6f080e6
#undef public_6f08100
