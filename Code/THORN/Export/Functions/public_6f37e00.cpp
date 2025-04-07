#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f37f70);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bb10);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cf40);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d0a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58bfb);

#define public_6f37e5b _public_6f37e5b
#define public_6f37f48 _public_6f37f48

PROC_DECLARE(0x6f37e00, internal_6f37e00, public_6f37e00);
extern "C" NAKED register_t __cdecl internal_6f37e00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58bfb @0x6f37e02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58bfb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_6f5ad50
        mov dword ptr ds : [esi+4], offset public_6f5ad34
        mov dword ptr ds : [esi+8], offset public_6f5ad18
        mov eax, dword ptr ds : [esi+0x1C]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], 7
        je public_6f37e5b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, ebx
        je public_6f37e5b
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x1C], ebx
        public_6f37e5b : nop
        push edi
        mov ecx, esi
        call public_6f37f70
        mov eax, dword ptr ds : [esi+0xF8]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0xF4]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 6
        call public_6f3d0a0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6f57e26
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0xEC]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[esi+0xE8]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 5
        call public_6f3cf40
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6f57e26
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0xDC]
        push eax
        call public_6f57e26
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xE0], ebx
        mov dword ptr ds : [esi+0xE4], ebx
        mov eax, dword ptr ds : [esi+0xCC]
        push eax
        call public_6f57e26
        mov dword ptr ds : [esi+0xCC], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        mov eax, dword ptr ds : [esi+0xBC]
        push eax
        call public_6f57e26
        add esp, 0x10
        lea ecx, ds:[esi+0xA4]
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov byte ptr ss : [esp+0x1C], 1
        call public_6f3bb10
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1C], bl
        pop edi
        je public_6f37f48
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x1C], ebx
        public_6f37f48 : nop
        push 1
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_6f5a02c]
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f37e00)
    }
}

#undef public_6f37e5b
#undef public_6f37f48
