#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eaf390);
CLANG_FORWARD_PROC_SYMBOL(public_6eaf9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eafb00);
CLANG_FORWARD_PROC_SYMBOL(public_6eaffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0100);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0460);
CLANG_FORWARD_PROC_SYMBOL(public_6eb07f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9e72);

#define public_6ead458 _public_6ead458
#define public_6ead45e _public_6ead45e
#define public_6ead56c _public_6ead56c
#define public_6ead572 _public_6ead572

PROC_DECLARE(0x6ead3e0, internal_6ead3e0, public_6ead3e0);
extern "C" NAKED register_t __cdecl internal_6ead3e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9e72 @0x6ead3e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9e72
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        mov ebp, ecx
        push esi
        push edi
        lea esi, ds:[ebx+4]
        lea edi, ss:[ebp+4]
        mov ecx, 0x11
        rep movsd
        mov eax, dword ptr ds : [public_6fb3064]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+0x48]
        mov dword ptr ss : [ebp+0x48], ecx
        mov edx, dword ptr ds : [ebx+0x4C]
        mov dword ptr ss : [ebp+0x4C], edx
        mov eax, dword ptr ds : [ebx+0x50]
        mov dword ptr ss : [ebp+0x50], eax
        mov ecx, dword ptr ds : [ebx+0x54]
        mov dword ptr ss : [ebp+0x54], ecx
        mov dl, byte ptr ds : [ebx+0x58]
        lea esi, ss:[ebp+0x58]
        mov byte ptr ds : [esi], dl
        mov eax, dword ptr ds : [ebx+0x5C]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        je public_6ead458
        mov ecx, dword ptr ds : [ebx+0x60]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6ead458 : nop
        test eax, eax
        jge public_6ead45e
        xor eax, eax
        public_6ead45e : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 3
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0x60]
        mov edx, dword ptr ds : [ebx+0x5C]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6eaf390
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov edx, dword ptr ds : [ebx+0x68]
        mov dword ptr ss : [ebp+0x68], edx
        mov eax, dword ptr ds : [ebx+0x6C]
        mov dword ptr ss : [ebp+0x6C], eax
        mov cl, byte ptr ds : [ebx+0x70]
        lea edi, ds:[ebx+0x70]
        lea esi, ss:[ebp+0x70]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ds : [edi+0xC]
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0
        mov byte ptr ds : [esi+0xC], al
        call public_6eafb00
        push edi
        mov ecx, esi
        call public_6eaf9c0
        mov cl, byte ptr ds : [ebx+0x84]
        lea edi, ds:[ebx+0x84]
        lea esi, ss:[ebp+0x84]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ds : [edi+0xC]
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [esi+0xC], al
        call public_6eb0100
        push edi
        mov ecx, esi
        call public_6eaffb0
        mov cl, byte ptr ds : [ebx+0x98]
        lea esi, ss:[ebp+0x98]
        push 0x38
        mov byte ptr ss : [esp+0x20], 2
        mov byte ptr ds : [esi], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [ebx+0x9C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6eb0460
        mov dl, byte ptr ds : [ebx+0xA4]
        lea esi, ss:[ebp+0xA4]
        mov byte ptr ds : [esi], dl
        mov eax, dword ptr ds : [ebx+0xA8]
        test eax, eax
        mov byte ptr ss : [esp+0x1C], 3
        je public_6ead56c
        mov ecx, dword ptr ds : [ebx+0xAC]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6ead56c : nop
        test eax, eax
        jge public_6ead572
        xor eax, eax
        public_6ead572 : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0xAC]
        mov ebx, dword ptr ds : [ebx+0xA8]
        push eax
        push ecx
        push ebx
        mov ecx, esi
        call public_6eb07f0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop edi
        pop esi
        mov dword ptr ss : [ebp], offset public_6fb4484
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ead3e0)
    }
}

#undef public_6ead458
#undef public_6ead45e
#undef public_6ead56c
#undef public_6ead572
