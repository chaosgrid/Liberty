#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4247c0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b2d60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_5b2dcb _public_5b2dcb
#define public_5b2e02 _public_5b2e02
#define public_5b2e12 _public_5b2e12
#define public_5b2e41 _public_5b2e41
#define public_5b2e95 _public_5b2e95
#define public_5b2ecc _public_5b2ecc
#define public_5b2ee0 _public_5b2ee0
#define public_5b2f0f _public_5b2f0f

PROC_DECLARE(0x5b2d60, internal_5b2d60, public_5b2d60);
extern "C" NAKED register_t __cdecl internal_5b2d60()
{
    __asm
    {
        mov eax, 0x2200
        call public_5b7e90
        push esi
        push edi
        mov edi, dword ptr ds : [public_5c6f00]
/*FIXUP push offset public_5e6d80 @0x5b2d72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6d80
        call edi
        mov esi, eax
        test esi, esi
        jne public_5b2e41
/*FIXUP push offset public_5e6d74 @0x5b2d83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6d74
        call edi
        mov esi, eax
        test esi, esi
        jne public_5b2e41
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x100
        lea eax, ss:[esp+0xC]
        push eax
        push 0xD1
        push ecx
        call public_4347e0
        mov esi, dword ptr ds : [public_5c70b4]
        add esp, 0x10
        test eax, eax
        jne public_5b2dcb
        lea edx, ss:[esp+8]
/*FIXUP push offset public_5e68f4 @0x5b2dc0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e68f4
        push edx
        call esi
        add esp, 8
        public_5b2dcb : nop
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x1000
        lea eax, ss:[esp+0x20C]
        push eax
        push 0xD9
        push ecx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_5b2e02
        lea edx, ss:[esp+0x208]
/*FIXUP push offset public_5e6870 @0x5b2df7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6870
        push edx
        call esi
        add esp, 8
        public_5b2e02 : nop
        push 1
        call public_4247c0
        mov esi, dword ptr ds : [public_5c72c8]
        add esp, 4
        public_5b2e12 : nop
        push 1
        call esi
        test eax, eax
        jl public_5b2e12
        mov edx, dword ptr ds : [public_67eca0]
        push 0x10030
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x210]
        push ecx
        push edx
        call dword ptr ds : [public_616430]
        push 1
        call dword ptr ds : [public_5c713c]
/*FIXUP public_5b2e41 : nop
        push offset public_5e6d6c @0x5b2e41*/
  FIXUP public_5b2e41 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6d6c
        push esi
        call dword ptr ds : [public_616418]
        mov edi, eax
        test edi, edi
        jne public_5b2f0f
        push esi
        call dword ptr ds : [public_5c6f08]
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x100
        lea eax, ss:[esp+0xC]
        push eax
        push 0xD1
        push ecx
        call public_4347e0
        mov esi, dword ptr ds : [public_5c70b4]
        add esp, 0x10
        test eax, eax
        jne public_5b2e95
        lea edx, ss:[esp+8]
/*FIXUP push offset public_5e68f4 @0x5b2e8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e68f4
        push edx
        call esi
        add esp, 8
        public_5b2e95 : nop
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x1000
        lea eax, ss:[esp+0x20C]
        push eax
        push 0xD9
        push ecx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_5b2ecc
        lea edx, ss:[esp+0x208]
/*FIXUP push offset public_5e6870 @0x5b2ec1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6870
        push edx
        call esi
        add esp, 8
        public_5b2ecc : nop
        push 1
        call public_4247c0
        mov esi, dword ptr ds : [public_5c72c8]
        add esp, 4
        lea esp, ss:[esp]
        public_5b2ee0 : nop
        push 1
        call esi
        test eax, eax
        jl public_5b2ee0
        mov edx, dword ptr ds : [public_67eca0]
        push 0x10030
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x210]
        push ecx
        push edx
        call dword ptr ds : [public_616430]
        push 1
        call dword ptr ds : [public_5c713c]
/*FIXUP public_5b2f0f : nop
        push offset public_615bbc @0x5b2f0f*/
  FIXUP public_5b2f0f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_615bbc
        call dword ptr ds : [public_5c6f58]
        inc eax
        neg eax
        sbb eax, eax
        push 1
        and eax, offset public_615bbc
        push eax
/*FIXUP push offset public_615bb0 @0x5b2f27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_615bb0
/*FIXUP push offset public_5e1f64 @0x5b2f2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1f64
        call edi
        add esp, 0x10
        push esi
        mov edi, eax
        call dword ptr ds : [public_5c6f08]
        xor eax, eax
        test edi, edi
        pop edi
        setne al
        pop esi
        add esp, 0x2200
        ret 
        UNREACHABLE_TRAP(0x5b2d60)
    }
}

#undef public_5b2dcb
#undef public_5b2e02
#undef public_5b2e12
#undef public_5b2e41
#undef public_5b2e95
#undef public_5b2ecc
#undef public_5b2ee0
#undef public_5b2f0f
