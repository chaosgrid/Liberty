#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f169a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f171e0);

#define public_6f17210 _public_6f17210
#define public_6f1728b _public_6f1728b
#define public_6f172c6 _public_6f172c6
#define public_6f172da _public_6f172da

PROC_DECLARE(0x6f171e0, internal_6f171e0, public_6f171e0);
extern "C" NAKED register_t __cdecl internal_6f171e0()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC8]
        mov ebx, dword ptr ds : [ecx]
        xor al, al
        cmp ebx, ecx
        mov dword ptr ss : [esp+0xC], esi
        mov byte ptr ss : [esp+0xB], al
        je public_6f172da
        mov eax, dword ptr ss : [esp+0x44]
        push ebp
        add eax, 4
        push edi
        mov dword ptr ss : [esp+0x4C], eax
        mov edi, edi
        public_6f17210 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        push ecx
        lea edx, ds:[ebx+0x3F4]
        push edx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f172c6
        lea ecx, ss:[esp+0x18]
        call public_6efc7a0
        lea ebp, ds:[ebx+0x448]
        mov eax, ebp
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x3C], ecx
        lea eax, ds:[ebx+0x424]
        mov ecx, 9
        mov esi, eax
        lea edi, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x40], edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x50]
        test esi, esi
        je public_6f1728b
        lea ecx, ds:[esi+0x24]
        mov edi, dword ptr ds : [ecx]
        mov edx, ebp
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, 9
        mov edi, eax
        rep movsd
        public_6f1728b : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ds:[ebx+8]
        push edx
        call public_6f169a0
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x44]
        mov byte ptr ss : [esp+0x13], al
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        mov ecx, 9
        lea esi, ss:[esp+0x18]
        lea edi, ds:[ebx+0x424]
        mov dword ptr ss : [ebp+8], edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x14]
        public_6f172c6 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [esi+0xC8]
        jne public_6f17210
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop ebp
        public_6f172da : nop
        pop esi
        pop ebx
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x6f171e0)
    }
}

#undef public_6f17210
#undef public_6f1728b
#undef public_6f172c6
#undef public_6f172da
