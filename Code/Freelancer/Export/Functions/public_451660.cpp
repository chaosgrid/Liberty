#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4516aa _public_4516aa
#define public_4516f7 _public_4516f7

PROC_DECLARE(0x451660, internal_451660, public_451660);
extern "C" NAKED register_t __cdecl internal_451660()
{
    __asm
    {
        sub esp, 0x60
        push ebx
        mov ebx, dword ptr ss : [esp+0x68]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x74]
        lea eax, ds:[esi+0x24]
        mov edx, dword ptr ds : [eax]
        lea ebp, ds:[ebx+0xB0]
        mov ecx, ebp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        push edi
        lea edi, ds:[ebx+0xBC]
        mov ecx, 9
        rep movsd
        mov eax, dword ptr ds : [public_66d11c]
        test eax, eax
        jne public_4516aa
        call public_5b73e0
        mov dword ptr ds : [public_66d11c], eax
        public_4516aa : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x80]
        push ecx
        lea ecx, ds:[ebx+0xBC]
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [ebp]
        mov eax, dword ptr ds : [public_66d11c]
        test eax, eax
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [ebp+8]
        fstp dword ptr ss : [esp+0x24]
        jne public_4516f7
        call public_5b73e0
        mov dword ptr ds : [public_66d11c], eax
        public_4516f7 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x8C]
        push ecx
        lea ecx, ds:[ebx+0xBC]
        push ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [public_5c6d90]
        mov ecx, 9
        lea esi, ss:[esp+0x28]
        lea edi, ss:[esp+0x4C]
        rep movsd
        mov eax, dword ptr ds : [edx]
        mov edi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x14]
        lea esi, ds:[ebx+0x2C]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_5c6270]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [ebx+0x70]
        push eax
        push edx
        call dword ptr ds : [edi+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6274]
        mov ecx, dword ptr ds : [ebx+0x70]
        mov edx, dword ptr ds : [public_5c6d90]
        push eax
        mov eax, dword ptr ds : [edx]
        push ecx
        push eax
        call dword ptr ds : [edi+0x94]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx+0x70]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x451660)
    }
}

#undef public_4516aa
#undef public_4516f7
