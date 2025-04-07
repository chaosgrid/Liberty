#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce38a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5920);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d603c7);

#define public_6ce16c0 _public_6ce16c0
#define public_6ce16dd _public_6ce16dd
#define public_6ce1705 _public_6ce1705

PROC_DECLARE(0x6ce1620, internal_6ce1620, public_6ce1620);
extern "C" NAKED register_t __cdecl internal_6ce1620()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d603c7 @0x6ce1622*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d603c7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov dl, byte ptr ds : [edi+4]
        xor ebx, ebx
        push 0xFFFFFFFF
        mov esi, ecx
        lea eax, ds:[edi+4]
        lea ecx, ds:[esi+4]
        push ebx
        push eax
        mov dword ptr ss : [esp+0x20], esi
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ds : [ecx+0xC], ebx
        call public_6ce38a0
        mov al, byte ptr ds : [edi+0x14]
        lea ecx, ds:[esi+0x14]
        lea ebp, ds:[edi+0x14]
        mov byte ptr ds : [ecx], al
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ds : [ecx+0xC], ebx
        mov edx, dword ptr ds : [public_6d64b80]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x2C], ebx
        call dword ptr ds : [public_6d64b70]
        mov cl, byte ptr ds : [edi+0x24]
        push 0x18
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [esi+0x24], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], ebx
        mov ebp, dword ptr ds : [edi+0x28]
        mov edi, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ebp
        je public_6ce1705
        lea ebx, ds:[ebx]
        public_6ce16c0 : nop
        mov edx, dword ptr ds : [ebx+4]
        push 0x18
        mov dword ptr ss : [esp+0x14], edx
        call public_6d60012
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], ebx
        jne public_6ce16dd
        mov ecx, eax
        public_6ce16dd : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[edi+8]
        push ecx
        add eax, 8
        push eax
        call public_6ce5920
        mov ecx, dword ptr ds : [esi+0x2C]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+0x2C], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6ce16c0
        public_6ce1705 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov dl, byte ptr ds : [eax+0x30]
        mov byte ptr ds : [esi+0x30], dl
        mov cl, byte ptr ds : [eax+0x31]
        mov byte ptr ds : [esi+0x31], cl
        mov dl, byte ptr ds : [eax+0x32]
        mov ecx, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [esi+0x32], dl
        mov eax, dword ptr ds : [eax+0x34]
        mov dword ptr ds : [esi+0x34], eax
        pop edi
        mov dword ptr ds : [esi], offset public_6d64ef8
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6ce1620)
    }
}

#undef public_6ce16c0
#undef public_6ce16dd
#undef public_6ce1705
