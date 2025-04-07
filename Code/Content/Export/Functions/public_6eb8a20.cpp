#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9640);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8a20);
CLANG_FORWARD_PROC_SYMBOL(public_6ed4420);
CLANG_FORWARD_PROC_SYMBOL(public_6ed44a0);
CLANG_FORWARD_PROC_SYMBOL(public_6efeb00);
CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6f487c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaf8b);

#define public_6eb8a65 _public_6eb8a65
#define public_6eb8a67 _public_6eb8a67
#define public_6eb8acc _public_6eb8acc
#define public_6eb8af9 _public_6eb8af9
#define public_6eb8afb _public_6eb8afb
#define public_6eb8b30 _public_6eb8b30
#define public_6eb8b40 _public_6eb8b40
#define public_6eb8b5b _public_6eb8b5b

PROC_DECLARE(0x6eb8a20, internal_6eb8a20, public_6eb8a20);
extern "C" NAKED register_t __cdecl internal_6eb8a20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faaf8b @0x6eb8a22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faaf8b
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
        push 0x54
        mov dword ptr ss : [esp+0x14], edi
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_6eb8a65
        mov ecx, eax
        call public_6ed4420
        mov esi, eax
        jmp public_6eb8a67
        public_6eb8a65 : nop
        xor esi, esi
        public_6eb8a67 : nop
        lea eax, ds:[edi+0xC]
        push eax
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6eb8afb
        mov ecx, dword ptr ds : [edi+8]
        call public_6f47980
        mov edi, eax
        cmp edi, ebp
        je public_6eb8afb
        mov ebx, dword ptr ss : [esp+0x28]
        lea eax, ds:[ebx+4]
        push eax
        mov ecx, esi
        call public_6ed44a0
        test al, al
        je public_6eb8af9
        mov ecx, dword ptr ds : [edi+0x48]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eb8af9
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6eb8acc
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+8]
        call public_6f487c0
        test eax, 0x3FFFFFFF
        jne public_6eb8acc
        mov eax, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [esi+0x2C], eax
        public_6eb8acc : nop
        call public_6efeb00
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x40], eax
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        push ecx
        push esi
        mov ecx, edi
        call public_6ea9640
        mov dword ptr ds : [ebx+0x84], eax
        mov dword ptr ds : [ebx+0x88], esi
        jmp public_6eb8b5b
        public_6eb8af9 : nop
        xor ebp, ebp
        public_6eb8afb : nop
        cmp esi, ebp
        je public_6eb8b5b
        mov edx, dword ptr ds : [esi+0x48]
        push edx
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x48], ebp
        mov dword ptr ds : [esi+0x4C], ebp
        mov dword ptr ds : [esi+0x50], ebp
        mov eax, dword ptr ds : [esi+0x20]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x20], ebp
        mov dword ptr ds : [esi+0x24], ebp
        mov dword ptr ds : [esi+0x28], ebp
        mov ebx, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [esi+0x10]
        add esp, 8
        cmp edi, ebx
        je public_6eb8b40
        public_6eb8b30 : nop
        lea ecx, ds:[edi+0x2C]
        call dword ptr ds : [public_6fb330c]
        add edi, 0x3C
        cmp edi, ebx
        jne public_6eb8b30
        public_6eb8b40 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        call public_6fa8fe0
        push esi
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi+0x18], ebp
        call public_6fa8fe0
        add esp, 8
        public_6eb8b5b : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6eb8a20)
    }
}

#undef public_6eb8a65
#undef public_6eb8a67
#undef public_6eb8acc
#undef public_6eb8af9
#undef public_6eb8afb
#undef public_6eb8b30
#undef public_6eb8b40
#undef public_6eb8b5b
