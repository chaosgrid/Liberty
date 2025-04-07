#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b989e);

#define public_444f28 _public_444f28
#define public_444f33 _public_444f33
#define public_444f3a _public_444f3a
#define public_444f66 _public_444f66
#define public_444f7d _public_444f7d

PROC_DECLARE(0x444ee0, internal_444ee0, public_444ee0);
extern "C" NAKED register_t __cdecl internal_444ee0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b989e @0x444ee2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b989e
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
        mov dword ptr ss : [esp+0x10], ecx
        xor ebp, ebp
        lea esi, ds:[ecx+0x10]
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x14], esi
        mov ecx, esi
        mov byte ptr ss : [esp+0x20], 2
        call public_4144f0
        mov ebx, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov byte ptr ss : [esp+0x20], 1
        je public_444f3a
        public_444f28 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebp
        je public_444f33
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_444f33 : nop
        add edi, 8
        cmp edi, ebx
        jne public_444f28
        public_444f3a : nop
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        call public_5b7e1d
        mov edi, dword ptr ds : [public_5c71d8]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi+0x18], ebp
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, ebp
        je public_444f66
        push eax
        call edi
        add esp, 4
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        public_444f66 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        je public_444f7d
        push eax
        call edi
        add esp, 4
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        public_444f7d : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x444ee0)
    }
}

#undef public_444f28
#undef public_444f33
#undef public_444f3a
#undef public_444f66
#undef public_444f7d
