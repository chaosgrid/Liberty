#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5301d0);
CLANG_FORWARD_PROC_SYMBOL(public_5306e0);
CLANG_FORWARD_PROC_SYMBOL(public_5392d0);
CLANG_FORWARD_PROC_SYMBOL(public_540c30);
CLANG_FORWARD_PROC_SYMBOL(public_554e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c065b);

#define public_53074a _public_53074a
#define public_53074c _public_53074c
#define public_530799 _public_530799
#define public_53079b _public_53079b

PROC_DECLARE(0x5306e0, internal_5306e0, public_5306e0);
extern "C" NAKED register_t __cdecl internal_5306e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c065b @0x5306e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c065b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        push esi
        push edi
        push 0xC0
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x4C], ebx
        je public_53074a
        push 0xA
        mov ecx, esi
        call public_5392d0
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov byte ptr ds : [esi+0xBC], 1
        mov dword ptr ds : [esi], offset public_5dddd4
        mov dword ptr ds : [esi+4], offset public_5ddd54
        mov dword ptr ds : [esi+0xC], offset public_5ddd4c
        jmp public_53074c
        public_53074a : nop
        xor esi, esi
        public_53074c : nop
        mov edi, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x168]
        mov ecx, edi
        call dword ptr ds : [public_5c65c8]
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_530799
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_530799
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 1
        cmp cl, 1
        jne public_530799
        mov edi, eax
        jmp public_53079b
        public_530799 : nop
        xor edi, edi
        public_53079b : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+0x2C]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [public_5c692c]
        mov eax, dword ptr ds : [public_5c6928]
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], 2
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], 1
        mov byte ptr ss : [esp+0x36], bl
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov byte ptr ss : [esp+0x2E], bl
        mov dword ptr ss : [esp+0x10], 0x3F800000
        call public_554e90
        lea ecx, ss:[esp+0x10]
        push ecx
        push edi
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [public_5c6924]
        mov edx, dword ptr ss : [esp+0x60]
        add esp, 8
        push edx
        mov ecx, esi
        call public_5301d0
        push ebx
        push esi
        call public_540c30
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 8
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x5306e0)
    }
}

#undef public_53074a
#undef public_53074c
#undef public_530799
#undef public_53079b
