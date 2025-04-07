#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23090);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e440);
CLANG_FORWARD_PROC_SYMBOL(public_6f37570);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b670);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b970);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f444c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f44ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f445cd _public_6f445cd
#define public_6f4463e _public_6f4463e
#define public_6f446e1 _public_6f446e1
#define public_6f4471f _public_6f4471f
#define public_6f447a0 _public_6f447a0
#define public_6f447df _public_6f447df
#define public_6f4480b _public_6f4480b
#define public_6f44829 _public_6f44829
#define public_6f44847 _public_6f44847

PROC_DECLARE(0x6f444f0, internal_6f444f0, public_6f444f0);
extern "C" NAKED register_t __cdecl internal_6f444f0()
{
    __asm
    {
        sub esp, 0x134
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        mov esi, dword ptr ss : [esp+0x148]
        lea eax, ds:[ebx+0x14]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, esi
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f44829
        mov ebp, dword ptr ds : [eax+0x10]
        lea edx, ds:[ebx+0x18]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6f4aa40
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [esi+4]
        je public_6f44829
        mov eax, dword ptr ss : [ebp+0xD0]
        test eax, eax
        je public_6f44829
        mov eax, dword ptr ss : [ebp+0xCC]
        test eax, eax
        push edi
        je public_6f445cd
        mov ecx, dword ptr ds : [ebx+0x70]
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[ebx+0x7C]
        push edi
        push ecx
        push 2
        push eax
        call dword ptr ds : [edx+0x24]
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_6f445cd
        lea edx, ds:[esi+0x24]
        push edx
        lea eax, ss:[esp+0x18]
        push esi
        push eax
        call public_6f3b9a0
        add esp, 0xC
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f23090
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0xC4]
        push eax
        mov ecx, esi
        call public_6f3b670
        push eax
        lea ecx, ss:[esp+0x74]
        call public_6f3b970
        push edi
        lea ecx, ss:[esp+0xE8]
        push ecx
        lea ecx, ss:[esp+0x74]
        call public_6f44ce0
        mov ecx, 0xC
        lea esi, ss:[esp+0xE4]
        rep movsd
        public_6f445cd : nop
        lea ecx, ss:[esp+0x3C]
        call public_6f37570
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        mov ecx, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x60], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x64], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x68], eax
        mov eax, dword ptr ds : [ebx+0x74]
        test eax, eax
        je public_6f4471f
        mov eax, dword ptr ds : [ebx+0x78]
        test eax, eax
        je public_6f4471f
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 2
        je public_6f4463e
        cmp eax, 1
        jne public_6f4471f
        public_6f4463e : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xCC]
        test eax, eax
        je public_6f4471f
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        mov edx, dword ptr ds : [ebx+0x74]
        push edx
        mov edx, dword ptr ds : [ebx+0x78]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_6f4471f
        lea eax, ds:[esi+0x24]
        push eax
        lea ecx, ss:[esp+0x34]
        push esi
        push ecx
        call public_6f3b9a0
        add esp, 0xC
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x34]
        call public_6f23090
        lea eax, ss:[esp+0xC0]
        push eax
        mov ecx, esi
        call public_6f3b670
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, 9
        lea edi, ss:[esp+0x6C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x98], eax
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        mov dword ptr ss : [esp+0x90], ecx
        mov dword ptr ss : [esp+0x94], edx
        jne public_6f446e1
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f446e1 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        lea edx, ss:[esp+0x70]
        push edx
        lea edx, ss:[esp+0xEC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0xE4]
        push eax
        lea ecx, ss:[esp+0x118]
        call public_6f444c0
        mov ecx, 0xC
        lea esi, ss:[esp+0x114]
        lea edi, ss:[esp+0x3C]
        rep movsd
        public_6f4471f : nop
        fld dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x60]
        fsub dword ptr ds : [ebx+0xA0]
        mov edx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [ebx+0x20]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x64]
        push ecx
        fsub dword ptr ds : [ebx+0xA4]
        mov ecx, dword ptr ds : [ebx+0x60]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [ebx+0x24]
        push edx
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [ebx+0x5C]
        push eax
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x74]
        push ecx
        fsub dword ptr ds : [ebx+0xA8]
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0xB0]
        fstp dword ptr ss : [esp+0x30]
        push eax
        call public_6f2e440
        mov esi, dword ptr ds : [ebx+4]
        add esp, 0x18
        test esi, esi
        je public_6f4480b
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f447a0
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f447a0 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        jne public_6f447df
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f447df : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x9C]
        push edx
        push esi
        lea edx, ss:[esp+0xC8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0xC0]
        lea edi, ss:[esp+0x9C]
        rep movsd
        public_6f4480b : nop
        mov eax, dword ptr ss : [ebp+0xD0]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x9C]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ds:[ebx+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        pop edi
        public_6f44829 : nop
        mov ebx, dword ptr ds : [ebx+0x1C]
        cmp dword ptr ss : [esp+0x144], ebx
        jb public_6f44847
        test ebx, ebx
        jl public_6f44847
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x134
        ret 8
        public_6f44847 : nop
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x134
        ret 8
        UNREACHABLE_TRAP(0x6f444f0)
    }
}

#undef public_6f445cd
#undef public_6f4463e
#undef public_6f446e1
#undef public_6f4471f
#undef public_6f447a0
#undef public_6f447df
#undef public_6f4480b
#undef public_6f44829
#undef public_6f44847
