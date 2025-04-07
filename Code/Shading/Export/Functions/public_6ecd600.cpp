#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecaa00);
CLANG_FORWARD_PROC_SYMBOL(public_6ecaaf0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ece6e0);

#define public_6ecd633 _public_6ecd633
#define public_6ecd63f _public_6ecd63f
#define public_6ecd659 _public_6ecd659
#define public_6ecd68e _public_6ecd68e
#define public_6ecd6cb _public_6ecd6cb
#define public_6ecd6e8 _public_6ecd6e8

PROC_DECLARE(0x6ecd600, internal_6ecd600, public_6ecd600);
extern "C" NAKED register_t __cdecl internal_6ecd600()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x14
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        xor ebx, ebx
        test eax, eax
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        je public_6ecd659
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ds:[edi+0x28]
        call public_6ecaa00
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [edi+0x2C]
        jne public_6ecd63f
        public_6ecd633 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x14
        ret 0x10
        public_6ecd63f : nop
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ds:[eax+0x14]
        lea eax, ss:[esp+0x2C]
        push eax
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [ecx+8]
        push 1
        push edx
        call public_6ece6e0
        public_6ecd659 : nop
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], eax
        call public_6ecc4e0
        test eax, eax
        je public_6ecd68e
        mov ecx, dword ptr ss : [esp+0x28]
        test ecx, ecx
        je public_6ecd633
        inc dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x14
        ret 0x10
        public_6ecd68e : nop
        mov edx, dword ptr ds : [esi+4]
        xor eax, eax
        xor ecx, ecx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ds:[edi+0x14]
        mov dword ptr ss : [esp+0x1C], edx
        call public_6ecaaf0
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        lea esi, ds:[edx+0x10]
        mov dword ptr ds : [esi+4], eax
        je public_6ecd6cb
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6ecd6cb : nop
        mov dword ptr ds : [esi], 1
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        je public_6ecd6e8
        mov dword ptr ds : [esi], 2
        mov esi, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_6ecd6e8 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x14
        ret 0x10
        UNREACHABLE_TRAP(0x6ecd600)
    }
}

#undef public_6ecd633
#undef public_6ecd63f
#undef public_6ecd659
#undef public_6ecd68e
#undef public_6ecd6cb
#undef public_6ecd6e8
