#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f0a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0dd10);
CLANG_FORWARD_PROC_SYMBOL(public_6f0deb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad177);

#define public_6f0a4ad _public_6f0a4ad
#define public_6f0a59d _public_6f0a59d
#define public_6f0a5bb _public_6f0a5bb

PROC_DECLARE(0x6f0a3b0, internal_6f0a3b0, public_6f0a3b0);
extern "C" NAKED register_t __cdecl internal_6f0a3b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad177 @0x6f0a3b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad177
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        push ebp
        push 0x1B8
        mov ebx, ecx
        call public_6fa912a
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+8], ebp
        xor eax, eax
        cmp ebp, eax
        mov dword ptr ss : [esp+0x38], eax
        je public_6f0a5bb
        push esi
        push edi
        push ebx
        mov ecx, ebp
        call public_6f0a0f0
        lea esi, ds:[ebx+0x14]
        lea edi, ss:[ebp+0x14]
        mov ecx, 0x41
        rep movsd
        mov dword ptr ss : [ebp], offset public_6fb827c
        lea eax, ds:[ebx+0x118]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x118]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ds:[ebx+0x124]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[ebp+0x124]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [ebx+0x130]
        mov dword ptr ss : [ebp+0x130], edx
        lea edi, ss:[ebp+0x134]
        lea esi, ds:[ebx+0x134]
        mov ecx, 0xD
        rep movsd
        mov eax, dword ptr ds : [ebx+0x168]
        mov dword ptr ss : [ebp+0x168], eax
        mov cl, byte ptr ds : [ebx+0x16C]
        mov byte ptr ss : [ebp+0x16C], cl
        mov dl, byte ptr ds : [ebx+0x16D]
        mov byte ptr ss : [ebp+0x16D], dl
        mov al, byte ptr ds : [ebx+0x16E]
        mov byte ptr ss : [ebp+0x16E], al
        mov ecx, dword ptr ds : [ebx+0x170]
        test ecx, ecx
        pop edi
        mov byte ptr ss : [esp+0x3C], 1
        mov dword ptr ss : [ebp+0x170], ecx
        pop esi
        je public_6f0a4ad
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6f0a4ad : nop
        mov eax, dword ptr ds : [ebx+0x174]
        mov dword ptr ss : [ebp+0x174], eax
        mov ecx, dword ptr ds : [ebx+0x178]
        mov dword ptr ss : [ebp+0x178], ecx
        mov edx, dword ptr ds : [ebx+0x17C]
        lea eax, ds:[ebx+0x180]
        lea ecx, ss:[ebp+0x180]
        push eax
        mov byte ptr ss : [esp+0x3C], 2
        mov dword ptr ss : [ebp+0x17C], edx
        call public_6f0dd10
        lea ecx, ds:[ebx+0x18C]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[ebp+0x18C]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ds : [ebx+0x198]
        lea ecx, ds:[ebx+0x1A0]
        mov dword ptr ss : [ebp+0x198], edx
        mov eax, dword ptr ds : [ebx+0x19C]
        push ecx
        lea ecx, ss:[ebp+0x1A0]
        mov byte ptr ss : [esp+0x3C], 3
        mov dword ptr ss : [ebp+0x19C], eax
        call public_6f0deb0
        mov dl, byte ptr ds : [ebx+0x1AC]
        mov byte ptr ss : [ebp+0x1AC], dl
        mov al, byte ptr ds : [ebx+0x1AD]
        mov byte ptr ss : [ebp+0x1AD], al
        mov dword ptr ss : [ebp], offset public_6fb8490
        mov ecx, dword ptr ds : [ebx+0x1B0]
        mov dword ptr ss : [ebp+0x1B0], ecx
        mov dl, byte ptr ds : [ebx+0x1B4]
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov byte ptr ss : [esp+0x38], 4
        mov byte ptr ss : [ebp+0x1B4], dl
        mov byte ptr ss : [ebp+0x1B5], 0
        je public_6f0a59d
        mov eax, dword ptr ds : [ecx+0x170]
        push eax
        lea eax, ss:[ebp+0x134]
        push eax
        call public_6eea860
        mov ecx, eax
        call public_6f73ac0
        mov dword ptr ss : [ebp+0x168], eax
        public_6f0a59d : nop
        mov ecx, dword ptr ss : [ebp+0x1B0]
        lea eax, ss:[esp+0xC]
        push eax
        lea eax, ss:[ebp+0x124]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        mov eax, ebp
        public_6f0a5bb : nop
        mov ecx, dword ptr ss : [esp+0x30]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x6f0a3b0)
    }
}

#undef public_6f0a4ad
#undef public_6f0a59d
#undef public_6f0a5bb
