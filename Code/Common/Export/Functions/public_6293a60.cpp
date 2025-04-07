#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285740);
CLANG_FORWARD_PROC_SYMBOL(public_62857f0);
CLANG_FORWARD_PROC_SYMBOL(public_6288970);
CLANG_FORWARD_PROC_SYMBOL(public_628a410);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62aee50);
CLANG_FORWARD_PROC_SYMBOL(public_62af640);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_6293aa0 _public_6293aa0
#define public_6293aaf _public_6293aaf
#define public_6293ac0 _public_6293ac0
#define public_6293ae2 _public_6293ae2
#define public_6293af8 _public_6293af8
#define public_6293c18 _public_6293c18
#define public_6293c85 _public_6293c85
#define public_6293cc0 _public_6293cc0
#define public_6293cd1 _public_6293cd1

PROC_DECLARE(0x6293a60, internal_6293a60, public_6293a60);
extern "C" NAKED register_t __cdecl internal_6293a60()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        xor esi, esi
        test al, al
        push edi
        mov ebp, ecx
        je public_6293cc0
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x80]
        mov ebx, eax
        test ebx, ebx
        je public_6293af8
        mov eax, dword ptr ds : [ebx+0x68]
        mov ecx, dword ptr ds : [ebx+0x6C]
        cmp eax, ecx
        je public_6293af8
        mov edx, dword ptr ss : [ebp+8]
        mov edi, edi
        public_6293aa0 : nop
        mov esi, dword ptr ds : [eax]
        add eax, 0xC
        cmp edx, esi
        je public_6293aaf
        cmp eax, ecx
        jne public_6293aa0
        jmp public_6293af8
        public_6293aaf : nop
        mov ecx, dword ptr ds : [ebx+0x6C]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x58], ecx
        je public_6293ae2
        lea ecx, ds:[eax-0xC]
        lea ecx, ds:[ecx]
        public_6293ac0 : nop
        mov edx, eax
        mov edi, dword ptr ds : [edx]
        mov esi, ecx
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ss : [esp+0x58]
        add eax, 0xC
        add ecx, 0xC
        cmp eax, edx
        jne public_6293ac0
        public_6293ae2 : nop
        mov eax, dword ptr ds : [ebx+0x6C]
        lea esi, ds:[ebx+0x64]
        push eax
        add eax, 0xFFFFFFF4
        push eax
        mov ecx, esi
        call public_628f050
        add dword ptr ds : [esi+8], 0xFFFFFFF4
        public_6293af8 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xD4]
        mov esi, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0xC0]
        push 0x2001
        call public_62aee50
        mov edi, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [edi+0xC]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x4C]
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0x70]
        mov eax, dword ptr ds : [public_63eb360]
        mov ecx, dword ptr ds : [public_63fc0e8]
        mov edx, dword ptr ds : [public_63fc0ec]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_63fc0f0]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [edi+4]
        push 0x18
        lea ecx, ss:[esp+0x3E]
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 2
        mov byte ptr ss : [esp+0x3C], 0
        mov byte ptr ss : [esp+0x3D], 1
        mov byte ptr ss : [esp+0x46], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov byte ptr ss : [esp+0x3E], 0
        mov eax, dword ptr ds : [edx+0xB0]
        push ecx
        push eax
        call dword ptr ds : [public_639927c]
        mov eax, dword ptr ds : [edi+0xC]
        mov byte ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 2
        mov ecx, dword ptr ds : [ebx+0x50]
        mov dword ptr ss : [esp+0x3C], ecx
        mov edx, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x28], edx
        mov cl, byte ptr ds : [eax+0x38]
        add esp, 0xC
        test cl, cl
        je public_6293c18
        add eax, 0x2C
        mov byte ptr ss : [esp+0x42], 1
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x44], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x48], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x4C], eax
        public_6293c18 : nop
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x24], ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], 0
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], eax
        mov byte ptr ss : [esp+0x41], 1
        call public_6288970
        mov eax, dword ptr ds : [esi+0x54]
        add esp, 8
        test eax, eax
        je public_6293c85
        lea edx, ss:[esp+0x10]
        push ebx
        push edx
        call public_62857f0
        lea eax, ss:[esp+0x18]
        push eax
        push esi
        call public_6285740
        add esp, 0x10
        jmp public_6293cd1
        public_6293c85 : nop
        mov edi, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        lea ecx, ds:[edi+8]
        mov ebx, 0x100001
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x224
/*FIXUP push offset public_639c81c @0x6293ca5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c81c
/*FIXUP push offset public_639c918 @0x6293caa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c918
        push ebx
        call dword ptr ds : [ecx]
        add esp, 0x18
        mov ecx, esi
        call public_62af640
        xor esi, esi
        jmp public_6293cd1
        public_6293cc0 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+4]
        push eax
        call public_628a410
        add esp, 4
        public_6293cd1 : nop
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr ss : [ebp+4], 0xFFFFFFFF
        mov dword ptr ss : [ebp+8], 0
        mov byte ptr ss : [ebp+0xC], 0
        pop ebp
        pop ebx
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x6293a60)
    }
}

#undef public_6293aa0
#undef public_6293aaf
#undef public_6293ac0
#undef public_6293ae2
#undef public_6293af8
#undef public_6293c18
#undef public_6293c85
#undef public_6293cc0
#undef public_6293cd1
