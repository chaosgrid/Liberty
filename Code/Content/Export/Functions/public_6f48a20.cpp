#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f48a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faefa8);

#define public_6f48a54 _public_6f48a54
#define public_6f48a5c _public_6f48a5c
#define public_6f48a69 _public_6f48a69
#define public_6f48ab6 _public_6f48ab6
#define public_6f48b15 _public_6f48b15
#define public_6f48b25 _public_6f48b25
#define public_6f48b42 _public_6f48b42

PROC_DECLARE(0x6f48a20, internal_6f48a20, public_6f48a20);
extern "C" NAKED register_t __cdecl internal_6f48a20()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faefa8 @0x6f48a28*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faefa8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xF0]
        cmp eax, dword ptr ds : [esi+0xF4]
        push edi
        je public_6f48a69
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, 1
        public_6f48a54 : nop
        cmp dword ptr ds : [eax+0xC], edx
        jne public_6f48a5c
        mov dword ptr ds : [eax+0xC], ecx
        public_6f48a5c : nop
        mov edi, dword ptr ds : [esi+0xF4]
        add eax, 0x10
        cmp eax, edi
        jne public_6f48a54
        public_6f48a69 : nop
        mov al, byte ptr ss : [esp+0x3C]
        xor ebx, ebx
        cmp al, bl
        je public_6f48b42
        mov al, byte ptr ss : [esp+0x3C]
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov edx, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x34], ebx
        call dword ptr ds : [public_6fb3530]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        cmp eax, ecx
        mov edi, eax
        je public_6f48b25
        push ebp
        mov ebp, dword ptr ds : [public_6fb3534]
        public_6f48ab6 : nop
        push edi
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, offset public_6fd0bbc
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x40]
        cmp eax, dword ptr ds : [public_6fd0bc0]
        je public_6f48b15
        mov esi, dword ptr ds : [eax+0x10]
        cmp esi, ebx
        je public_6f48b15
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x40]
        push 0x100B
        push eax
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x48], ebx
        call public_6f24070
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+0xD8]
        push ebx
        push ebx
        push eax
        push ecx
        push eax
        call ebp
        add esp, 0x20
        public_6f48b15 : nop
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 4
        cmp edi, eax
        jne public_6f48ab6
        mov eax, dword ptr ss : [esp+0x1C]
        pop ebp
        public_6f48b25 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 0xC
        public_6f48b42 : nop
        mov edx, dword ptr ds : [esi+0xC]
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x40]
        push 0x100B
        push ecx
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x48], ebx
        call public_6f24070
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+0xD8]
        push ebx
        push ebx
        push eax
        push edx
        push eax
        call dword ptr ds : [public_6fb3534]
        mov ecx, dword ptr ss : [esp+0x44]
        add esp, 0x20
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 0xC
        UNREACHABLE_TRAP(0x6f48a20)
    }
}

#undef public_6f48a54
#undef public_6f48a5c
#undef public_6f48a69
#undef public_6f48ab6
#undef public_6f48b15
#undef public_6f48b25
#undef public_6f48b42
