#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4397a0);
CLANG_FORWARD_PROC_SYMBOL(public_43b570);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_43b5a0 _public_43b5a0
#define public_43b5cd _public_43b5cd
#define public_43b5d5 _public_43b5d5
#define public_43b5e1 _public_43b5e1
#define public_43b604 _public_43b604
#define public_43b613 _public_43b613

PROC_DECLARE(0x43b570, internal_43b570, public_43b570);
extern "C" NAKED register_t __cdecl internal_43b570()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x5A]
        test al, al
        mov dword ptr ds : [edi+0x34], ebx
        jne public_43b5a0
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        je public_43b5a0
        mov edx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [ecx]
        push edx
        push ebx
        call dword ptr ds : [eax+0x8C]
        public_43b5a0 : nop
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x20]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], ebx
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        je public_43b5cd
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_43b5cd
        lea eax, ss:[esp+0xC]
        jmp public_43b5d5
        public_43b5cd : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_43b5d5 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x24]
        je public_43b5e1
        mov esi, dword ptr ds : [eax+0x10]
        jmp public_43b604
        public_43b5e1 : nop
        push ecx
        mov ecx, dword ptr ds : [public_5c6d18]
        push 0x100
/*FIXUP push offset public_5caf30 @0x43b5ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caf78 @0x43b5f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor esi, esi
        public_43b604 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jne public_43b613
        push ebx
        mov ecx, edi
        call public_4397a0
        public_43b613 : nop
        mov eax, dword ptr ds : [esi+8]
        inc eax
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x43b570)
    }
}

#undef public_43b5a0
#undef public_43b5cd
#undef public_43b5d5
#undef public_43b5e1
#undef public_43b604
#undef public_43b613
