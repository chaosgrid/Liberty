#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef65a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef94e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac64d);

#define public_6ef9530 _public_6ef9530
#define public_6ef9571 _public_6ef9571
#define public_6ef9598 _public_6ef9598
#define public_6ef95a6 _public_6ef95a6

PROC_DECLARE(0x6ef94e0, internal_6ef94e0, public_6ef94e0);
extern "C" NAKED register_t __cdecl internal_6ef94e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac64d @0x6ef94e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac64d
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
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov eax, dword ptr ds : [edi+0x40]
        xor ebx, ebx
        push eax
        mov dword ptr ss : [esp+0x24], ebx
        call public_6fa8fe0
        mov dword ptr ds : [edi+0x40], ebx
        mov dword ptr ds : [edi+0x44], ebx
        mov dword ptr ds : [edi+0x48], ebx
        mov esi, dword ptr ds : [edi+0x30]
        mov ebp, dword ptr ds : [edi+0x34]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], esi
        je public_6ef9571
        nop 
        lea esp, ss:[esp]
        public_6ef9530 : nop
        lea ecx, ds:[esi+0x60]
        mov byte ptr ss : [esp+0x20], 3
        call public_6eec8d0
        lea ecx, ds:[esi+0x44]
        mov byte ptr ss : [esp+0x20], 2
        call public_6eec8d0
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x20], 1
        call public_6ef65a0
        lea ecx, ds:[esi+0x14]
        mov byte ptr ss : [esp+0x20], bl
        call public_6eec8d0
        add esi, 0x80
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ef9530
        public_6ef9571 : nop
        mov eax, dword ptr ds : [edi+0x30]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+0x30], ebx
        mov dword ptr ds : [edi+0x34], ebx
        mov dword ptr ds : [edi+0x38], ebx
        mov ebp, dword ptr ds : [edi+0x20]
        mov esi, dword ptr ds : [edi+0x1C]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_6ef95a6
        public_6ef9598 : nop
        mov ecx, esi
        call public_6eec8d0
        add esi, 0x14
        cmp esi, ebp
        jne public_6ef9598
        public_6ef95a6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x20], ebx
        mov dword ptr ds : [edi+0x24], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6ef94e0)
    }
}

#undef public_6ef9530
#undef public_6ef9571
#undef public_6ef9598
#undef public_6ef95a6
