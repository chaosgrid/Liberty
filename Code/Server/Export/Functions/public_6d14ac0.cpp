#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d14ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);

#define public_6d14b00 _public_6d14b00
#define public_6d14b10 _public_6d14b10
#define public_6d14b3d _public_6d14b3d
#define public_6d14b3f _public_6d14b3f
#define public_6d14b5b _public_6d14b5b
#define public_6d14b66 _public_6d14b66

PROC_DECLARE(0x6d14ac0, internal_6d14ac0, public_6d14ac0);
extern "C" NAKED register_t __cdecl internal_6d14ac0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, ecx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x20], edi
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+0x34]
        je public_6d14b10
        mov ebx, dword ptr ds : [eax+0x10]
        test ebx, ebx
        je public_6d14b66
        mov dword ptr ss : [esp+0x10], edi
        xor edi, edi
        xor esi, esi
        lea ebx, ds:[ebx]
        public_6d14b00 : nop
        test esi, esi
        jne public_6d14b3d
        mov esi, dword ptr ds : [ebx+0x14]
        jmp public_6d14b3f
        lea esp, ss:[esp]
        public_6d14b10 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push 0x720
/*FIXUP push offset public_6d6840c @0x6d14b1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d684ac @0x6d14b24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d684ac
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        public_6d14b3d : nop
        mov esi, dword ptr ds : [esi]
        public_6d14b3f : nop
        test esi, esi
        je public_6d14b5b
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx+8]
        test al, al
        je public_6d14b00
        test esi, esi
        je public_6d14b5b
        mov edi, dword ptr ds : [esi+8]
        public_6d14b5b : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+0x68], ecx
        mov byte ptr ds : [edi+8], 1
        public_6d14b66 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d14ac0)
    }
}

#undef public_6d14b00
#undef public_6d14b10
#undef public_6d14b3d
#undef public_6d14b3f
#undef public_6d14b5b
#undef public_6d14b66
