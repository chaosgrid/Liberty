#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d03fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d058a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d05d40);
CLANG_FORWARD_PROC_SYMBOL(public_6d06050);
CLANG_FORWARD_PROC_SYMBOL(public_6d06340);
CLANG_FORWARD_PROC_SYMBOL(public_6d069b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6107b);

#define public_6d03ff3 _public_6d03ff3
#define public_6d04020 _public_6d04020
#define public_6d04048 _public_6d04048
#define public_6d0406d _public_6d0406d
#define public_6d04071 _public_6d04071
#define public_6d04091 _public_6d04091
#define public_6d040de _public_6d040de
#define public_6d040e2 _public_6d040e2
#define public_6d04106 _public_6d04106

PROC_DECLARE(0x6d03fc0, internal_6d03fc0, public_6d03fc0);
extern "C" NAKED register_t __cdecl internal_6d03fc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6107b @0x6d03fc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6107b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov ecx, dword ptr ds : [esi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x24], ebp
        je public_6d03ff3
        call dword ptr ds : [public_6d6461c]
        public_6d03ff3 : nop
        mov edi, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [edi]
        add esi, 4
        cmp ecx, ebp
        push ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6d0406d
        mov ecx, eax
        cmp eax, ecx
        jne public_6d0406d
        cmp edi, edi
        jne public_6d0406d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d04048
        nop 
        lea esp, ss:[esp]
        public_6d04020 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d06050
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6d069b0
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d04020
        public_6d04048 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6d5c540
        jmp public_6d04091
        public_6d0406d : nop
        cmp eax, edi
        je public_6d04091
        public_6d04071 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6d05d40
        push ebx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_6d058a0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6d04071
        public_6d04091 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp dword ptr ds : [esi+0x10], ebp
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        pop ebx
        je public_6d040de
        mov ecx, eax
        cmp eax, ecx
        jne public_6d040de
        mov edx, dword ptr ds : [edi+4]
        push edx
        mov ecx, esi
        call public_6d06050
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6d5c540
        jmp public_6d04106
        public_6d040de : nop
        cmp eax, edi
        je public_6d04106
        public_6d040e2 : nop
        push ebp
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_6d06340
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_6d058a0
        cmp dword ptr ss : [esp+0xC], edi
        jne public_6d040e2
        public_6d04106 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        mov dword ptr ds : [esi+8], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d03fc0)
    }
}

#undef public_6d03ff3
#undef public_6d04020
#undef public_6d04048
#undef public_6d0406d
#undef public_6d04071
#undef public_6d04091
#undef public_6d040de
#undef public_6d040e2
#undef public_6d04106
