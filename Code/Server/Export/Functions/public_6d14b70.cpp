#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdca0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdf70);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);
CLANG_FORWARD_PROC_SYMBOL(public_6d122f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d14b70);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);

#define public_6d14ba6 _public_6d14ba6
#define public_6d14bcb _public_6d14bcb
#define public_6d14bf6 _public_6d14bf6
#define public_6d14c06 _public_6d14c06
#define public_6d14c09 _public_6d14c09
#define public_6d14c0d _public_6d14c0d
#define public_6d14c33 _public_6d14c33
#define public_6d14c5e _public_6d14c5e
#define public_6d14c67 _public_6d14c67
#define public_6d14c96 _public_6d14c96
#define public_6d14ca0 _public_6d14ca0

PROC_DECLARE(0x6d14b70, internal_6d14b70, public_6d14b70);
extern "C" NAKED register_t __cdecl internal_6d14b70()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi+4]
        mov ebx, ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[ebx+0x1C]
        mov dword ptr ss : [esp+0x30], eax
        xor esi, esi
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+0x20]
        je public_6d14ba6
        mov esi, dword ptr ds : [eax+0x10]
        jmp public_6d14bcb
        public_6d14ba6 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x66D
/*FIXUP push offset public_6d6840c @0x6d14bb6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68480 @0x6d14bc0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68480
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d14bcb : nop
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        push edi
        mov ecx, esi
        call public_6d122f0
        mov ecx, dword ptr ds : [ebx+0x48]
        mov edx, dword ptr ds : [ebx+0x4C]
        add ebx, 0x44
        mov edi, eax
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], esi
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, edx
        mov ebp, ecx
        mov al, 1
        je public_6d14c0d
        public_6d14bf6 : nop
        cmp edi, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov ebp, esi
        je public_6d14c06
        mov esi, dword ptr ds : [esi]
        jmp public_6d14c09
        public_6d14c06 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6d14c09 : nop
        cmp esi, edx
        jne public_6d14bf6
        public_6d14c0d : nop
        mov dl, byte ptr ds : [ebx+0xC]
        test dl, dl
        je public_6d14c33
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebp
        push esi
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, ebx
        call public_6cfdca0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_6d14c33 : nop
        test al, al
        mov dword ptr ss : [esp+0x2C], ebp
        je public_6d14c67
        cmp ebp, dword ptr ds : [ecx]
        jne public_6d14c5e
        lea eax, ss:[esp+0x14]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, ebx
        call public_6cfdca0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_6d14c5e : nop
        lea ecx, ss:[esp+0x2C]
        call public_6cfdf70
        public_6d14c67 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        jae public_6d14c96
        lea edx, ss:[esp+0x18]
        push edx
        push ebp
        push esi
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        mov byte ptr ss : [esp+0x3C], 1
        call public_6cfdca0
        push eax
        jmp public_6d14ca0
        public_6d14c96 : nop
        lea edx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x2C], 0
        push edx
        public_6d14ca0 : nop
        lea ecx, ss:[esp+0x24]
        call public_6d0f600
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6d14b70)
    }
}

#undef public_6d14ba6
#undef public_6d14bcb
#undef public_6d14bf6
#undef public_6d14c06
#undef public_6d14c09
#undef public_6d14c0d
#undef public_6d14c33
#undef public_6d14c5e
#undef public_6d14c67
#undef public_6d14c96
#undef public_6d14ca0
