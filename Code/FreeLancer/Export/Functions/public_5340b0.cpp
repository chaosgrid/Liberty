#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5340b0);
CLANG_FORWARD_PROC_SYMBOL(public_539cd0);

#define public_5340ed _public_5340ed
#define public_5340ef _public_5340ef
#define public_534108 _public_534108
#define public_534116 _public_534116
#define public_534136 _public_534136

PROC_DECLARE(0x5340b0, internal_5340b0, public_5340b0);
extern "C" NAKED register_t __cdecl internal_5340b0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call dword ptr ds : [public_5c6910]
        add esp, 4
        test al, al
        je public_534116
        test esi, esi
        je public_5340ed
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_5340ed
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5340ed
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_5340ef
        public_5340ed : nop
        xor eax, eax
        public_5340ef : nop
        push ebx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c6574]
        mov edx, dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_534116
        public_534108 : nop
        mov edi, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [edi+4], eax
        je public_534136
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_534108
        public_534116 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        push ecx
        push ebx
        push edx
        mov ecx, esi
        call public_539cd0
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 0x10
        public_534136 : nop
        mov edi, dword ptr ds : [ecx+8]
        test edi, edi
        je public_534116
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+0x14], 0x100
        jne public_534116
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x30]
        fstp st(0)
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi]
        push ecx
        push esi
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0x14]
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 0x10
        UNREACHABLE_TRAP(0x5340b0)
    }
}

#undef public_5340ed
#undef public_5340ef
#undef public_534108
#undef public_534116
#undef public_534136
