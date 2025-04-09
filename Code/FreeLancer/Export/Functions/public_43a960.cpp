#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a960);
CLANG_FORWARD_PROC_SYMBOL(public_43c1b0);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_43a99c _public_43a99c
#define public_43a9a4 _public_43a9a4
#define public_43a9b0 _public_43a9b0
#define public_43a9d3 _public_43a9d3
#define public_43a9e2 _public_43a9e2

PROC_DECLARE(0x43a960, internal_43a960, public_43a960);
extern "C" NAKED register_t __cdecl internal_43a960()
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
        lea esi, ds:[edi+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        je public_43a99c
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_43a99c
        lea eax, ss:[esp+0xC]
        jmp public_43a9a4
        public_43a99c : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_43a9a4 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x24]
        je public_43a9b0
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43a9d3
        public_43a9b0 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x100
/*FIXUP push offset public_5caf30 @0x43a9bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caf78 @0x43a9c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43a9d3 : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_43a9e2
        push ebx
        mov ecx, eax
        call public_43c1b0
        public_43a9e2 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x43a960)
    }
}

#undef public_43a99c
#undef public_43a9a4
#undef public_43a9b0
#undef public_43a9d3
#undef public_43a9e2
