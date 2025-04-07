#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab0fa);

#define public_6ed2b5f _public_6ed2b5f
#define public_6ed2b75 _public_6ed2b75
#define public_6ed2b7d _public_6ed2b7d
#define public_6ed2b83 _public_6ed2b83
#define public_6ed2ba2 _public_6ed2ba2
#define public_6ed2bb0 _public_6ed2bb0
#define public_6ed2bba _public_6ed2bba
#define public_6ed2be8 _public_6ed2be8

PROC_DECLARE(0x6ed2a60, internal_6ed2a60, public_6ed2a60);
extern "C" NAKED register_t __cdecl internal_6ed2a60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab0fa @0x6ed2a62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab0fa
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+4], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x14], 0
        je public_6ed2be8
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push esi
        push edi
        lea esi, ds:[ebx+4]
        lea edi, ss:[ebp+4]
        mov ecx, 0xD
        rep movsd
        mov eax, dword ptr ds : [ebx+0x38]
        mov dword ptr ss : [ebp+0x38], eax
        mov cl, byte ptr ds : [ebx+0x3C]
        lea esi, ss:[ebp+0x3C]
        push 0xC
        mov byte ptr ds : [esi], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edi, dword ptr ds : [ebx+0x40]
        mov edx, dword ptr ds : [edi]
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edx
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push edx
        mov ecx, esi
        call public_6ed0230
        mov al, byte ptr ds : [ebx+0x48]
        mov byte ptr ss : [ebp+0x48], al
        mov cl, byte ptr ds : [ebx+0x49]
        mov byte ptr ss : [ebp+0x49], cl
        mov edx, dword ptr ds : [ebx+0x4C]
        mov dword ptr ss : [ebp+0x4C], edx
        mov al, byte ptr ds : [ebx+0x50]
        mov dl, byte ptr ss : [esp+0x28]
        mov byte ptr ss : [ebp+0x50], al
        mov ecx, dword ptr ds : [ebx+0x54]
        lea esi, ss:[ebp+0x58]
        mov dword ptr ss : [ebp+0x54], ecx
        push 0
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x34], esi
        mov byte ptr ds : [esi], dl
        call public_6f93790
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        lea eax, ds:[ebx+0x58]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 2
        call public_6f20230
        mov ecx, dword ptr ds : [ebx+0x64]
        mov dword ptr ss : [ebp+0x64], ecx
        mov ecx, dword ptr ds : [ebx+0x68]
        test ecx, ecx
        mov byte ptr ss : [esp+0x20], 3
        mov dword ptr ss : [ebp+0x68], ecx
        je public_6ed2b5f
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6ed2b5f : nop
        mov al, byte ptr ds : [ebx+0x6C]
        mov byte ptr ss : [ebp+0x6C], al
        mov ecx, dword ptr ds : [ebx+0x70]
        test ecx, ecx
        mov byte ptr ss : [esp+0x20], 4
        jne public_6ed2b75
        xor eax, eax
        jmp public_6ed2b7d
        public_6ed2b75 : nop
        mov eax, dword ptr ds : [ebx+0x74]
        sub eax, ecx
        sar eax, 3
        public_6ed2b7d : nop
        test eax, eax
        jge public_6ed2b83
        xor eax, eax
        public_6ed2b83 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6fa912a
        mov dword ptr ss : [ebp+0x70], eax
        mov edx, dword ptr ds : [ebx+0x74]
        mov ecx, eax
        mov eax, dword ptr ds : [ebx+0x70]
        add esp, 4
        cmp eax, edx
        je public_6ed2bba
        public_6ed2ba2 : nop
        test ecx, ecx
        je public_6ed2bb0
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        public_6ed2bb0 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6ed2ba2
        public_6ed2bba : nop
        mov dword ptr ss : [ebp+0x74], ecx
        mov dword ptr ss : [ebp+0x78], ecx
        mov edx, dword ptr ds : [ebx+0x7C]
        mov dword ptr ss : [ebp+0x7C], edx
        mov eax, dword ptr ds : [ebx+0x80]
        pop edi
        mov dword ptr ss : [ebp+0x80], eax
        mov ecx, dword ptr ds : [ebx+0x84]
        pop esi
        mov dword ptr ss : [ebp+0x84], ecx
        mov dword ptr ss : [ebp], offset public_6fb60a8
        pop ebx
        public_6ed2be8 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6ed2a60)
    }
}

#undef public_6ed2b5f
#undef public_6ed2b75
#undef public_6ed2b7d
#undef public_6ed2b83
#undef public_6ed2ba2
#undef public_6ed2bb0
#undef public_6ed2bba
#undef public_6ed2be8
