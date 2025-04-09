#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_418f70);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4f7b);

#define public_5a0583 _public_5a0583
#define public_5a05e0 _public_5a05e0
#define public_5a05f3 _public_5a05f3
#define public_5a0625 _public_5a0625
#define public_5a0633 _public_5a0633

PROC_DECLARE(0x5a0530, internal_5a0530, public_5a0530);
extern "C" NAKED register_t __cdecl internal_5a0530()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4f7b @0x5a0532*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4f7b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
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
        je public_5a0583
        cmp word ptr ds : [eax], bx
        je public_5a0583
        mov word ptr ds : [eax], bx
        public_5a0583 : nop
        push edi
        mov byte ptr ss : [esp+0x70], bl
        mov eax, dword ptr ds : [esi+0xCC]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x80], 1
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], eax
        call public_4be370
        add esp, 4
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x7C], 2
        mov dword ptr ss : [esp+0xC], edx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x7C], 4
        call public_4144f0
        mov edi, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x30]
        cmp esi, edi
        mov byte ptr ss : [esp+0x7C], 3
        je public_5a05f3
        lea ecx, ds:[ecx]
        public_5a05e0 : nop
        push ebx
        mov ecx, esi
        call public_418f70
        add esi, 8
        cmp esi, edi
        jne public_5a05e0
        mov esi, dword ptr ss : [esp+0x30]
        public_5a05f3 : nop
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
        je public_5a0625
        push eax
        call esi
        add esp, 4
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        public_5a0625 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_5a0633
        push eax
        call esi
        add esp, 4
        public_5a0633 : nop
        mov ecx, dword ptr ss : [esp+0x70]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x5a0530)
    }
}

#undef public_5a0583
#undef public_5a05e0
#undef public_5a05f3
#undef public_5a0625
#undef public_5a0633
