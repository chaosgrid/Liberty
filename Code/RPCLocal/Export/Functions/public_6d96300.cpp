#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6d96e60);

#define public_6d96316 _public_6d96316
#define public_6d96353 _public_6d96353
#define public_6d9635b _public_6d9635b
#define public_6d96371 _public_6d96371

PROC_DECLARE(0x6d96300, internal_6d96300, public_6d96300);
extern "C" NAKED register_t __cdecl internal_6d96300()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        test ebx, ebx
        push edi
        mov edi, ecx
        jne public_6d96316
        pop edi
        mov eax, 4
        pop ebx
        ret 0xC
        public_6d96316 : nop
        movzx eax, word ptr ss : [esp+0xC]
        movzx ecx, word ptr ss : [esp+0x10]
        push esi
        shl eax, 0x10
        or eax, ecx
        lea edx, ss:[esp+0x10]
        lea esi, ds:[edi+8]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_6d96e60
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6d96353
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6d96353
        lea eax, ss:[esp+0x14]
        jmp public_6d9635b
        public_6d96353 : nop
        mov dword ptr ss : [esp+0x18], esi
        lea eax, ss:[esp+0x18]
        public_6d9635b : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0xC]
        pop esi
        je public_6d96371
        mov eax, dword ptr ds : [eax+0x10]
        push ebx
        call dword ptr ds : [eax]
        add esp, 4
        pop edi
        pop ebx
        ret 0xC
        public_6d96371 : nop
        pop edi
        mov eax, 0x19
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d96300)
    }
}

#undef public_6d96316
#undef public_6d96353
#undef public_6d9635b
#undef public_6d96371
