#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_418f70);
CLANG_FORWARD_PROC_SYMBOL(public_4b5fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4b62f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd1db);

#define public_4b634e _public_4b634e
#define public_4b63b7 _public_4b63b7
#define public_4b63ca _public_4b63ca
#define public_4b63fc _public_4b63fc
#define public_4b640a _public_4b640a

PROC_DECLARE(0x4b62f0, internal_4b62f0, public_4b62f0);
extern "C" NAKED register_t __cdecl internal_4b62f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bd1db @0x4b62f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd1db
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_672288]
        mov dword ptr fs : [0], esp
        sub esp, 0x64
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push esi
        je public_4b640a
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x74], ebx
        call public_4144b0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+8], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x4C], ebx
        je public_4b634e
        cmp word ptr ds : [eax], bx
        je public_4b634e
        mov word ptr ds : [eax], bx
        public_4b634e : nop
        push edi
        mov byte ptr ss : [esp+0x6C], bl
        mov eax, dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x84]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [public_672288]
        mov dword ptr ss : [esp+0x80], 1
        call public_4b5fd0
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x78], 2
        mov dword ptr ss : [esp+0x80], edx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x78], 4
        call public_4144f0
        mov edi, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [esp+0x2C]
        cmp esi, edi
        mov byte ptr ss : [esp+0x78], 3
        je public_4b63ca
        public_4b63b7 : nop
        push ebx
        mov ecx, esi
        call public_418f70
        add esi, 8
        cmp esi, edi
        jne public_4b63b7
        mov esi, dword ptr ss : [esp+0x2C]
        public_4b63ca : nop
        push esi
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [public_5c71d8]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        pop edi
        je public_4b63fc
        push eax
        call esi
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        public_4b63fc : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        je public_4b640a
        push eax
        call esi
        add esp, 4
        public_4b640a : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 
        UNREACHABLE_TRAP(0x4b62f0)
    }
}

#undef public_4b634e
#undef public_4b63b7
#undef public_4b63ca
#undef public_4b63fc
#undef public_4b640a
