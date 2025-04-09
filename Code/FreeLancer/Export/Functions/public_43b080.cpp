#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43b080);
CLANG_FORWARD_PROC_SYMBOL(public_43c9f0);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_43b0bc _public_43b0bc
#define public_43b0c4 _public_43b0c4
#define public_43b0d0 _public_43b0d0
#define public_43b0f3 _public_43b0f3
#define public_43b103 _public_43b103

PROC_DECLARE(0x43b080, internal_43b080, public_43b080);
extern "C" NAKED register_t __cdecl internal_43b080()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+4]
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x18]
        lea esi, ds:[edi+0xC]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        je public_43b0bc
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_43b0bc
        lea eax, ss:[esp+0xC]
        jmp public_43b0c4
        public_43b0bc : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_43b0c4 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x10]
        je public_43b0d0
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43b0f3
        public_43b0d0 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x110
/*FIXUP push offset public_5caf30 @0x43b0dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x43b0e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43b0f3 : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_43b103
        push ebx
        lea ecx, ds:[eax+0x30]
        call public_43c9f0
        public_43b103 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x43b080)
    }
}

#undef public_43b0bc
#undef public_43b0c4
#undef public_43b0d0
#undef public_43b0f3
#undef public_43b103
