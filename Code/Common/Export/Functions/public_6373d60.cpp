#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6373d60);
CLANG_FORWARD_PROC_SYMBOL(public_6377e60);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_6373db3 _public_6373db3
#define public_6373dc1 _public_6373dc1
#define public_6373e12 _public_6373e12

PROC_DECLARE(0x6373d60, internal_6373d60, public_6373d60);
extern "C" NAKED register_t __cdecl internal_6373d60()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_658bf78]
        push edi
        inc esi
        push 0x18
        mov dword ptr ds : [public_658bf78], esi
        call public_6377e60
        mov esi, eax
        xor eax, eax
        mov ecx, 6
        mov edi, esi
        rep stosd
        mov ecx, dword ptr ds : [public_658b85c]
        add esp, 4
        cmp ecx, 0xFFFFFF
        jne public_6373db3
        push ecx
/*FIXUP push offset public_63f0f7c @0x6373d95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0f7c
        call public_6356960
        push 0
        push 0
        push 1
        call public_6378600
        mov ecx, dword ptr ds : [public_658b85c]
        add esp, 0x14
        public_6373db3 : nop
        cmp ecx, dword ptr ds : [public_658b830]
        jne public_6373dc1
        mov dword ptr ds : [public_658b834], esi
        public_6373dc1 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, eax
        xor edx, ecx
        and edx, 0xFFFFFF
        xor edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x14], edx
        inc dword ptr ds : [public_658b85c]
        mov dword ptr ds : [esi+8], eax
        cmp dword ptr ds : [public_658b078], 4
        jl public_6373e12
        mov ecx, dword ptr ds : [esi+0x14]
        and ecx, 0xFFFFFF
        push ecx
        push eax
        call public_6370570
        mov edx, dword ptr ds : [public_658b7fc]
        add esp, 4
        push eax
/*FIXUP push offset public_63f0f54 @0x6373e03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0f54
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_6373e12 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6373d60)
    }
}

#undef public_6373db3
#undef public_6373dc1
#undef public_6373e12
