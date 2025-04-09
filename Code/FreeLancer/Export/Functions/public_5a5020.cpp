#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5a50d2 _public_5a50d2
#define public_5a50ef _public_5a50ef
#define public_5a5106 _public_5a5106
#define public_5a511d _public_5a511d

PROC_DECLARE(0x5a5020, internal_5a5020, public_5a5020);
extern "C" NAKED register_t __cdecl internal_5a5020()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+4]
        push esi
        push edi
        mov dword ptr ds : [ebx+4], eax
        lea esi, ss:[ebp+8]
        lea edi, ds:[ebx+8]
        mov ecx, 0x12
        rep movsd
        lea esi, ss:[ebp+0x50]
        lea edi, ds:[ebx+0x50]
        mov ecx, 0x82
        rep movsd
        lea esi, ss:[ebp+0x258]
        lea edi, ds:[ebx+0x258]
        mov ecx, 0x82
        rep movsd
        lea esi, ss:[ebp+0x460]
        lea edi, ds:[ebx+0x460]
        mov ecx, 0x40
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x560]
        mov dword ptr ds : [ebx+0x560], ecx
        mov dl, byte ptr ss : [ebp+0x564]
        mov byte ptr ds : [ebx+0x564], dl
        mov eax, dword ptr ss : [ebp+0x568]
        mov dword ptr ds : [ebx+0x568], eax
        mov cl, byte ptr ss : [ebp+0x570]
        push 0xC
        mov byte ptr ds : [ebx+0x570], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+0x574], eax
        mov dword ptr ds : [ebx+0x578], 0
        mov ecx, dword ptr ss : [ebp+0x574]
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_5a511d
        public_5a50d2 : nop
        mov edx, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x1C], edx
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], esi
        jne public_5a50ef
        mov ecx, eax
        public_5a50ef : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_5a5106
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], edx
        public_5a5106 : nop
        mov ecx, dword ptr ds : [ebx+0x578]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [ebx+0x578], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_5a50d2
        public_5a511d : nop
        lea esi, ss:[ebp+0x57C]
        lea edi, ds:[ebx+0x57C]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ss : [ebp+0x594]
        mov dword ptr ds : [ebx+0x594], eax
        mov dword ptr ds : [ebx+0x56C], offset public_5c9350
        lea esi, ss:[ebp+0x598]
        lea edi, ds:[ebx+0x598]
        mov ecx, 0x100
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x998]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x998], ecx
        mov dword ptr ds : [ebx], offset public_5e631c
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5a5020)
    }
}

#undef public_5a50d2
#undef public_5a50ef
#undef public_5a5106
#undef public_5a511d
