#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_63704b0);
CLANG_FORWARD_PROC_SYMBOL(public_6377e60);

#define public_63704d6 _public_63704d6
#define public_63704e2 _public_63704e2
#define public_637051c _public_637051c
#define public_6370569 _public_6370569

PROC_DECLARE(0x63704b0, internal_63704b0, public_63704b0);
extern "C" NAKED register_t __cdecl internal_63704b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b980]
        mov ecx, dword ptr ds : [eax+0x40]
        mov edx, dword ptr ds : [public_658b978]
        lea eax, ds:[edx+ecx*4]
        push esi
        mov esi, dword ptr ds : [eax]
        test esi, esi
        je public_63704d6
        inc dword ptr ds : [public_658b99c]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        jmp public_63704e2
        public_63704d6 : nop
        push 0x10
        call public_6377e60
        add esp, 4
        mov esi, eax
        public_63704e2 : nop
        xor eax, eax
        mov ecx, esi
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ds : [public_658bf70]
        mov eax, dword ptr ds : [public_658b858]
        inc ecx
        cmp eax, 0xFFFFFF
        mov dword ptr ds : [public_658bf70], ecx
        jne public_637051c
        push 0xFFFFFF
/*FIXUP push offset public_63ef440 @0x637050f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef440
        call public_6356960
        add esp, 8
        public_637051c : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [public_658b858]
        mov edx, eax
        xor edx, ecx
        and edx, 0xFFFFFF
        xor edx, eax
        mov dword ptr ds : [esi+0xC], edx
        mov ecx, dword ptr ds : [public_658b858]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        cmp eax, 4
        mov dword ptr ds : [public_658b858], ecx
        jl public_6370569
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [public_658b7fc]
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63ef420 @0x637055a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef420
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6370569 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63704b0)
    }
}

#undef public_63704d6
#undef public_63704e2
#undef public_637051c
#undef public_6370569
