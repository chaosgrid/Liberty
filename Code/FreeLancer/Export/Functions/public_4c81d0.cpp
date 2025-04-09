#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_418f70);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_4c81d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd7db);

#define public_4c822e _public_4c822e
#define public_4c8287 _public_4c8287
#define public_4c829a _public_4c829a
#define public_4c82cc _public_4c82cc
#define public_4c82da _public_4c82da

PROC_DECLARE(0x4c81d0, internal_4c81d0, public_4c81d0);
extern "C" NAKED register_t __cdecl internal_4c81d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bd7db @0x4c81d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd7db
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x30]
        xor ebx, ebx
        cmp eax, ebx
        je public_4c82da
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x78], ebx
        call public_4144b0
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x50], ebx
        je public_4c822e
        cmp word ptr ds : [eax], bx
        je public_4c822e
        mov word ptr ds : [eax], bx
        public_4c822e : nop
        push edi
        mov byte ptr ss : [esp+0x70], bl
        mov eax, dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x14], eax
        add eax, esi
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x80], 1
        call public_4be370
        add esp, 4
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x7C], 2
        mov dword ptr ss : [esp+0xC], ecx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x7C], 4
        call public_4144f0
        mov edi, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x30]
        cmp esi, edi
        mov byte ptr ss : [esp+0x7C], 3
        je public_4c829a
        public_4c8287 : nop
        push ebx
        mov ecx, esi
        call public_418f70
        add esi, 8
        cmp esi, edi
        jne public_4c8287
        mov esi, dword ptr ss : [esp+0x30]
        public_4c829a : nop
        push esi
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [public_5c71d8]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        pop edi
        je public_4c82cc
        push eax
        call esi
        add esp, 4
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        public_4c82cc : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_4c82da
        push eax
        call esi
        add esp, 4
        public_4c82da : nop
        mov ecx, dword ptr ss : [esp+0x70]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x4c81d0)
    }
}

#undef public_4c822e
#undef public_4c8287
#undef public_4c829a
#undef public_4c82cc
#undef public_4c82da
