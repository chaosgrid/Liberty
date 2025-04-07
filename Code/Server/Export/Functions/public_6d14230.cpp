#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d14230);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);

#define public_6d14272 _public_6d14272
#define public_6d1427e _public_6d1427e
#define public_6d1428b _public_6d1428b
#define public_6d14291 _public_6d14291

PROC_DECLARE(0x6d14230, internal_6d14230, public_6d14230);
extern "C" NAKED register_t __cdecl internal_6d14230()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6d15d10
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+0xC]
        je public_6d14291
        mov esi, dword ptr ds : [eax+0x10]
        test esi, esi
        je public_6d1428b
        mov eax, dword ptr ds : [esi+0xC]
        xor ebx, ebx
        test eax, eax
        jle public_6d1428b
        push ebp
        mov ebp, dword ptr ds : [public_6d647a0]
        push edi
        xor edi, edi
        public_6d14272 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, edi
        je public_6d1427e
        mov ecx, dword ptr ds : [eax+8]
        call ebp
        public_6d1427e : nop
        mov eax, dword ptr ds : [esi+0xC]
        inc ebx
        add edi, 0x68
        cmp ebx, eax
        jl public_6d14272
        pop edi
        pop ebp
        public_6d1428b : nop
        pop esi
        pop ebx
        pop ecx
        ret 8
        public_6d14291 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x659
/*FIXUP push offset public_6d6840c @0x6d142a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68458 @0x6d142ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68458
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d14230)
    }
}

#undef public_6d14272
#undef public_6d1427e
#undef public_6d1428b
#undef public_6d14291
