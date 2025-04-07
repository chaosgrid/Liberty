#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3b90);
CLANG_FORWARD_PROC_SYMBOL(public_6eb59a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb59f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7120);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7180);
CLANG_FORWARD_PROC_SYMBOL(public_6eb71b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7910);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7950);
CLANG_FORWARD_PROC_SYMBOL(public_6ebb890);

#define public_6ebbceb _public_6ebbceb
#define public_6ebbd9d _public_6ebbd9d
#define public_6ebbdeb _public_6ebbdeb
#define public_6ebbe52 _public_6ebbe52
#define public_6ebbe7d _public_6ebbe7d

PROC_DECLARE(0x6ebbc40, internal_6ebbc40, public_6ebbc40);
extern "C" NAKED register_t __cdecl internal_6ebbc40()
{
    __asm
    {
        sub esp, 0x70
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ds : [esi+0x78]
        push edi
        mov ebx, 1
        lea edx, ss:[esp+0x18]
        push edx
        cmp eax, ebx
        mov eax, dword ptr ds : [esi+4]
        push 0xF
        mov dword ptr ss : [esp+0x1C], 0xF
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        jne public_6ebbe7d
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+0x78]
        lea edx, ds:[esi+0x20]
        cmp eax, ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        jne public_6ebbceb
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x18]
        push 0
        push eax
        call public_6eb7120
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed225c @0x6ebbcb9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed225c
        push 0
        push ecx
        call public_6eb71b0
        mov edx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed22cc @0x6ebbcc9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed22cc
        push ebx
        push edx
        call public_6eb71b0
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed220c @0x6ebbcd8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed220c
        push eax
        call public_6eb7180
        add esp, 0x20
        jmp public_6ebbd9d
        public_6ebbceb : nop
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x18]
        push 0
        push eax
        call public_6eb7120
        mov ecx, dword ptr ds : [esi+4]
        push ebx
        push ecx
        mov ecx, dword ptr ds : [esi+0x18]
        add ecx, 0x2C
        call public_6eb7120
        mov edx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed225c @0x6ebbd12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed225c
        push 0
        push edx
        call public_6eb71b0
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed2294 @0x6ebbd22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed2294
        push ebx
        push eax
        call public_6eb71b0
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed22cc @0x6ebbd31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed22cc
        push 2
        push ecx
        call public_6eb71b0
        mov edx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed220c @0x6ebbd41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed220c
        push edx
        call public_6eb7180
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x2C
        push 0
        push 0xB
        push ebx
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 2
        push 0x18
        push ebx
        push eax
        call dword ptr ds : [edx+0xF8]
        xor eax, eax
        mov ecx, 0x10
        lea edi, ss:[esp+0x40]
        rep stosd
        mov eax, dword ptr ds : [esi+0x68]
        mov ecx, eax
        mov dword ptr ss : [esp+0x54], ecx
        lea ecx, ss:[esp+0x40]
        push ecx
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [edx+0x100]
        public_6ebbd9d : nop
        mov eax, dword ptr ss : [esp+0xA0]
        test ah, 1
        mov edi, dword ptr ss : [esp+0x9C]
        mov ebx, dword ptr ss : [esp+0x94]
        mov ebp, dword ptr ss : [esp+0x88]
        je public_6ebbdeb
        mov ecx, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [ecx+4]
        add ecx, dword ptr ss : [esp+0x98]
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        mov ecx, dword ptr ss : [esp+0x98]
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x9C]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jge public_6ebbe52
        public_6ebbdeb : nop
        mov edx, dword ptr ss : [esp+0xA0]
        mov eax, dword ptr ss : [esp+0x98]
        mov ecx, dword ptr ss : [esp+0x90]
        push edx
        mov edx, dword ptr ss : [esp+0x90]
        push edi
        push eax
        push ebx
        push ecx
        push edx
        push ebp
        mov ecx, esi
        call public_6eb59a0
        test eax, eax
        jge public_6ebbe52
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6ebbe52
        test ebx, ebx
        jbe public_6ebbe52
        test edi, edi
        jbe public_6ebbe52
        mov eax, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ss : [esp+0x98]
        mov edx, dword ptr ss : [esp+0x90]
        push eax
        mov eax, dword ptr ss : [esp+0x90]
        push edi
        push ecx
        push ebx
        push edx
        push eax
        push ebp
        mov ecx, esi
        call public_6eb59f0
        public_6ebbe52 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x70
        ret 0x20
        public_6ebbe7d : nop
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        push 0xFE
        push 0x18
        push eax
        lea ecx, ss:[esp+0x40]
        call public_6eb7910
        mov ecx, dword ptr ds : [esi+4]
        push 2
        push 0x19
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_6eb7910
        push 0
        mov ecx, esi
        call public_6ebb890
        mov edi, dword ptr ss : [esp+0xA0]
        mov ebx, dword ptr ss : [esp+0x9C]
        mov ebp, dword ptr ss : [esp+0x98]
        mov edx, dword ptr ss : [esp+0x94]
        mov eax, dword ptr ss : [esp+0x90]
        mov ecx, dword ptr ss : [esp+0x8C]
        push edi
        push ebx
        push ebp
        push edx
        mov edx, dword ptr ss : [esp+0x98]
        push eax
        push ecx
        push edx
        push esi
        call public_6eb3b90
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 5
        push 0x19
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        push 4
        push 0x17
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6eb7910
        push 1
        mov ecx, esi
        call public_6ebb890
        mov ecx, dword ptr ss : [esp+0x94]
        mov edx, dword ptr ss : [esp+0x90]
        mov eax, dword ptr ss : [esp+0x8C]
        push edi
        push ebx
        push ebp
        push ecx
        mov ecx, dword ptr ss : [esp+0x98]
        push edx
        push eax
        push ecx
        push esi
        call public_6eb3b90
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        lea ecx, ss:[esp+0x28]
        call public_6eb7950
        lea ecx, ss:[esp+0x34]
        call public_6eb7950
        lea ecx, ss:[esp+0x10]
        call public_6eb7950
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x70
        ret 0x20
        UNREACHABLE_TRAP(0x6ebbc40)
    }
}

#undef public_6ebbceb
#undef public_6ebbd9d
#undef public_6ebbdeb
#undef public_6ebbe52
#undef public_6ebbe7d
