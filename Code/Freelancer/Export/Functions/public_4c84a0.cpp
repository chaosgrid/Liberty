#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd822);

#define public_4c8516 _public_4c8516
#define public_4c857d _public_4c857d
#define public_4c85b4 _public_4c85b4
#define public_4c85d3 _public_4c85d3
#define public_4c85ee _public_4c85ee
#define public_4c85fa _public_4c85fa
#define public_4c8611 _public_4c8611

PROC_DECLARE(0x4c84a0, internal_4c84a0, public_4c84a0);
extern "C" NAKED register_t __cdecl internal_4c84a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd822 @0x4c84a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd822
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push 0x74
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_4c8611
        push ebp
        lea ebp, ds:[esi+0x28]
        mov ecx, ebp
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+8], bl
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        push ebx
        mov byte ptr ss : [esp+0x24], 1
        call dword ptr ds : [public_5c645c]
        mov dword ptr ds : [esi], offset public_5d6eac
        mov dword ptr ds : [esi+0x34], ebx
        cmp dword ptr ss : [ebp], ebx
        mov byte ptr ss : [esp+0x20], 2
        je public_4c8516
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c62a8]
        public_4c8516 : nop
        mov dword ptr ds : [esi+0x30], ebx
        lea edi, ds:[esi+0x4C]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 3
        call public_420d40
        mov eax, 0x3F800000
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x1C], eax
        mov dword ptr ds : [edi+0x18], eax
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0x24], eax
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
/*FIXUP push offset public_5d6e24 @0x4c8549*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6e24
        lea eax, ds:[esi+8]
        push 0x20
        push eax
        mov byte ptr ss : [esp+0x2C], 4
        mov dword ptr ds : [esi], offset public_5d6e7c
        call public_417c50
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ds : [esi+0x38], bl
        mov eax, dword ptr ss : [ebp]
        add esp, 0xC
        cmp eax, ebx
        je public_4c857d
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c62a8]
        public_4c857d : nop
        push 1
        push ebx
/*FIXUP push offset public_5d6e54 @0x4c8580*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6e54
        mov ecx, edi
        mov dword ptr ds : [esi+0x44], 0x3E4CCCCD
        mov dword ptr ds : [esi+0x40], 0x43480000
        mov dword ptr ds : [esi+0x3C], 0x42200000
        mov byte ptr ds : [esi+0x48], bl
        call public_59ec80
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, edi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4c85fa
/*FIXUP public_4c85b4 : nop
        push offset public_5d6e4c @0x4c85b4*/
  FIXUP public_4c85b4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6e4c
        mov ecx, edi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, edi
        je public_4c85d3
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x3C]
        jmp public_4c85ee
/*FIXUP public_4c85d3 : nop
        push offset public_5c8b24 @0x4c85d3*/
  FIXUP public_4c85d3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b24
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_4c85ee
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x40]
        public_4c85ee : nop
        mov ecx, edi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_4c85b4
        public_4c85fa : nop
        pop edi
        pop ebp
        mov eax, esi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        public_4c8611 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x4c84a0)
    }
}

#undef public_4c8516
#undef public_4c857d
#undef public_4c85b4
#undef public_4c85d3
#undef public_4c85ee
#undef public_4c85fa
#undef public_4c8611
