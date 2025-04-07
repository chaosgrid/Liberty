#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e920);
CLANG_FORWARD_PROC_SYMBOL(public_63703c0);
CLANG_FORWARD_PROC_SYMBOL(public_6377e60);

#define public_63703e9 _public_63703e9
#define public_63703f5 _public_63703f5
#define public_6370414 _public_6370414
#define public_6370469 _public_6370469
#define public_637047a _public_637047a
#define public_63704a2 _public_63704a2

PROC_DECLARE(0x63703c0, internal_63703c0, public_63703c0);
extern "C" NAKED register_t __cdecl internal_63703c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b980]
        mov ecx, dword ptr ds : [eax+0x160]
        mov edx, dword ptr ds : [public_658b978]
        lea eax, ds:[edx+ecx*4]
        push esi
        mov esi, dword ptr ds : [eax]
        test esi, esi
        je public_63703e9
        inc dword ptr ds : [public_658b99c]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        jmp public_63703f5
        public_63703e9 : nop
        push 0x58
        call public_6377e60
        add esp, 4
        mov esi, eax
        public_63703f5 : nop
        push edi
        xor eax, eax
        mov ecx, 0x16
        mov edi, esi
        rep stosd
        mov eax, dword ptr ds : [public_658b854]
        cmp eax, dword ptr ds : [public_658b828]
        jne public_6370414
        mov dword ptr ds : [public_658b82c], esi
        public_6370414 : nop
        mov dword ptr ds : [esi+0x4C], eax
        mov edi, dword ptr ds : [public_658b854]
        mov eax, dword ptr ds : [public_658b24c]
        inc edi
        push eax
        mov dword ptr ds : [public_658b854], edi
        call public_636e920
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+4], 0
        mov eax, dword ptr ds : [public_658b05c]
        add esp, 4
        test eax, eax
        pop edi
        je public_6370469
        mov eax, dword ptr ds : [public_658b018]
        test eax, eax
        je public_6370469
        mov ecx, dword ptr ds : [public_658b020]
        mov edx, dword ptr ds : [public_658b024]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], edx
        jmp public_637047a
        public_6370469 : nop
        mov eax, dword ptr ds : [public_658b6a0]
        mov ecx, dword ptr ds : [public_658b6a4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ecx
        public_637047a : nop
        or dword ptr ds : [esi+0x50], 0x41200
        cmp dword ptr ds : [public_658b078], 4
        jl public_63704a2
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [public_658b7fc]
        push edx
/*FIXUP push offset public_63ef400 @0x6370493*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef400
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_63704a2 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63703c0)
    }
}

#undef public_63703e9
#undef public_63703f5
#undef public_6370414
#undef public_6370469
#undef public_637047a
#undef public_63704a2
