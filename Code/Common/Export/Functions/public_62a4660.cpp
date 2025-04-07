#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62a4660);
CLANG_FORWARD_PROC_SYMBOL(public_62a7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393dde);

#define public_62a4770 _public_62a4770
#define public_62a4785 _public_62a4785

PROC_DECLARE(0x62a4660, internal_62a4660, public_62a4660);
extern "C" NAKED register_t __cdecl internal_62a4660()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393dde @0x62a4662*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393dde
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0x40
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ds : [esi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        mov cl, byte ptr ss : [esp+0x13]
        mov dl, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x14]
        push 1
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ds : [edi+1], dl
        mov byte ptr ds : [edi+0xC], bl
        call public_62a7c30
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0x69], 1
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [edi+8]
        push ebx
        push ecx
        mov ecx, edi
        call public_62a7c30
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        mov dl, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x34]
        push 0xC
        mov byte ptr ss : [esp+0x28], 1
        mov byte ptr ds : [edi], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov eax, 0x3FC90FDB
        mov dword ptr ds : [esi+0x74], eax
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi+0x54], eax
        mov eax, 0x40490FDB
        mov dword ptr ds : [esi+0x78], eax
        mov dword ptr ds : [esi+0x68], eax
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov eax, 0x4096CBE4
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ds : [esi+0x6C], eax
        mov dword ptr ds : [esi+0x5C], eax
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x44], 0xFA
        mov dword ptr ds : [esi+0x48], 0x3E8
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov ebp, dword ptr ds : [edi+4]
        mov byte ptr ss : [esp+0x24], 2
        mov ebx, dword ptr ss : [ebp]
        cmp ebx, ebp
        je public_62a4785
        mov edi, edi
        public_62a4770 : nop
        mov eax, ebx
        mov ebx, dword ptr ds : [ebx]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_6271cc0
        cmp ebx, ebp
        jne public_62a4770
        public_62a4785 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62a4660)
    }
}

#undef public_62a4770
#undef public_62a4785
