#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6f78070);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f7809d _public_6f7809d
#define public_6f780a5 _public_6f780a5
#define public_6f780d4 _public_6f780d4
#define public_6f780f8 _public_6f780f8

PROC_DECLARE(0x6f78070, internal_6f78070, public_6f78070);
extern "C" NAKED register_t __cdecl internal_6f78070()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[ecx+0xF8]
        push edi
        mov ecx, esi
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6f7809d
        mov ecx, dword ptr ds : [edi]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f7809d
        lea eax, ss:[esp+0x14]
        jmp public_6f780a5
        public_6f7809d : nop
        mov dword ptr ss : [esp+8], esi
        lea eax, ss:[esp+8]
        public_6f780a5 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax]
        cmp dword ptr ds : [edx], 1
        jne public_6f780d4
        mov eax, dword ptr ds : [esi+0x10]
        fld dword ptr ds : [eax+0x78]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jnp public_6f780f8
        call public_6efec10
        mov ecx, dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [ecx+0x78]
        pop edi
        pop esi
        pop ecx
        ret 8
        public_6f780d4 : nop
        mov edx, dword ptr ds : [esi+0x10]
        fld dword ptr ds : [edx+0x7C]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jnp public_6f780f8
        call public_6efec10
        mov eax, dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [eax+0x7C]
        pop edi
        pop esi
        pop ecx
        ret 8
        public_6f780f8 : nop
        fld dword ptr ds : [public_6fb5e84]
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f78070)
    }
}

#undef public_6f7809d
#undef public_6f780a5
#undef public_6f780d4
#undef public_6f780f8
