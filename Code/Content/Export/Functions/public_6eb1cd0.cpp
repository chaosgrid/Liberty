#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaf390);
CLANG_FORWARD_PROC_SYMBOL(public_6eaf9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eafb00);
CLANG_FORWARD_PROC_SYMBOL(public_6eaffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0100);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0460);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1e80);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb23d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9ff3);

#define public_6eb1d59 _public_6eb1d59
#define public_6eb1e67 _public_6eb1e67

PROC_DECLARE(0x6eb1cd0, internal_6eb1cd0, public_6eb1cd0);
extern "C" NAKED register_t __cdecl internal_6eb1cd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9ff3 @0x6eb1cd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9ff3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+8], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x1C], 0
        je public_6eb1e67
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx], eax
        add ebx, 4
        push esi
        push edi
        lea esi, ss:[ebp+8]
        lea edi, ds:[ebx+4]
        mov ecx, 0x11
        rep movsd
        mov ecx, dword ptr ds : [public_6fb3064]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ss : [ebp+0x4C]
        mov dword ptr ds : [ebx+0x48], edx
        mov eax, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [ebx+0x4C], eax
        mov ecx, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [ebx+0x50], ecx
        mov edx, dword ptr ss : [ebp+0x58]
        mov dword ptr ds : [ebx+0x54], edx
        mov al, byte ptr ss : [ebp+0x5C]
        lea edi, ss:[ebp+0x5C]
        lea esi, ds:[ebx+0x58]
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ds : [esi], al
        call public_6eb23d0
        test eax, eax
        jge public_6eb1d59
        xor eax, eax
        public_6eb1d59 : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 3
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6eaf390
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov edx, dword ptr ss : [ebp+0x6C]
        mov dword ptr ds : [ebx+0x68], edx
        mov eax, dword ptr ss : [ebp+0x70]
        mov dword ptr ds : [ebx+0x6C], eax
        mov cl, byte ptr ss : [ebp+0x74]
        lea edi, ss:[ebp+0x74]
        lea esi, ds:[ebx+0x70]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ds : [edi+0xC]
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 1
        mov byte ptr ds : [esi+0xC], al
        call public_6eafb00
        push edi
        mov ecx, esi
        call public_6eaf9c0
        mov cl, byte ptr ss : [ebp+0x88]
        lea edi, ss:[ebp+0x88]
        lea esi, ds:[ebx+0x84]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ds : [edi+0xC]
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 2
        mov byte ptr ds : [esi+0xC], al
        call public_6eb0100
        push edi
        mov ecx, esi
        call public_6eaffb0
        mov cl, byte ptr ss : [ebp+0x9C]
        lea edi, ss:[ebp+0x9C]
        lea esi, ds:[ebx+0x98]
        push 0
        mov byte ptr ds : [esi], cl
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 3
        call public_6eb1e80
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x14], eax
        call public_6f1df30
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_6eb0460
        add ebp, 0xA8
        mov byte ptr ss : [esp+0x28], 4
        push ebp
        lea ecx, ds:[ebx+0xA4]
        call public_6eb1eb0
        pop edi
        pop esi
        mov dword ptr ds : [ebx], offset public_6fb4484
        pop ebp
        public_6eb1e67 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6eb1cd0)
    }
}

#undef public_6eb1d59
#undef public_6eb1e67
