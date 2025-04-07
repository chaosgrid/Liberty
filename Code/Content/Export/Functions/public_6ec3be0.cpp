#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3be0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faae6e);

#define public_6ec3c15 _public_6ec3c15
#define public_6ec3c2a _public_6ec3c2a
#define public_6ec3c54 _public_6ec3c54
#define public_6ec3c69 _public_6ec3c69
#define public_6ec3c93 _public_6ec3c93
#define public_6ec3cb7 _public_6ec3cb7

PROC_DECLARE(0x6ec3be0, internal_6ec3be0, public_6ec3be0);
extern "C" NAKED register_t __cdecl internal_6ec3be0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faae6e @0x6ec3be2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faae6e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov ebp, dword ptr ds : [ecx+0x28]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ecx+0x24]
        mov dword ptr ss : [esp+0x28], 2
        je public_6ec3c2a
        public_6ec3c15 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebp
        jne public_6ec3c15
        public_6ec3c2a : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov esi, dword ptr ss : [ebp]
        lea edi, ds:[ecx+0x18]
        add esp, 4
        cmp esi, ebp
        mov byte ptr ss : [esp+0x28], 1
        je public_6ec3c69
        public_6ec3c54 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebp
        jne public_6ec3c54
        public_6ec3c69 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0xC]
        add esp, 4
        cmp eax, edi
        mov byte ptr ss : [esp+0x28], bl
        mov dword ptr ss : [esp+0x14], eax
        je public_6ec3cb7
        public_6ec3c93 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6f68e30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x14], edi
        jne public_6ec3c93
        public_6ec3cb7 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        pop edi
        pop esi
        mov dword ptr ss : [ebp], offset public_6fb565c
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6ec3be0)
    }
}

#undef public_6ec3c15
#undef public_6ec3c2a
#undef public_6ec3c54
#undef public_6ec3c69
#undef public_6ec3c93
#undef public_6ec3cb7
