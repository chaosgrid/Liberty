#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5351d0);
CLANG_FORWARD_PROC_SYMBOL(public_544b90);

#define public_544bc7 _public_544bc7
#define public_544be3 _public_544be3
#define public_544be5 _public_544be5
#define public_544c1a _public_544c1a

PROC_DECLARE(0x544b90, internal_544b90, public_544b90);
extern "C" NAKED register_t __cdecl internal_544b90()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [esi+4]
        push ecx
        lea edi, ds:[esi+4]
        push ebx
        push ebp
        mov ecx, edi
        call dword ptr ds : [eax+0x48]
        push 0x80
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c64f4]
        add esi, 0xC
        public_544bc7 : nop
        test esi, esi
        je public_544be3
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_544be3
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_544be5
        public_544be3 : nop
        xor eax, eax
        public_544be5 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c64f0]
        test eax, eax
        je public_544c1a
        xor edx, edx
        mov dx, word ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_673344]
        push eax
        push ebx
        push ebp
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], edx
        call public_5351d0
        jmp public_544bc7
        public_544c1a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x544b90)
    }
}

#undef public_544bc7
#undef public_544be3
#undef public_544be5
#undef public_544c1a
