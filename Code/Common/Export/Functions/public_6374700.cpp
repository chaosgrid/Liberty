#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_6374700);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);

#define public_6374720 _public_6374720
#define public_637483a _public_637483a
#define public_6374852 _public_6374852
#define public_637486a _public_637486a
#define public_6374882 _public_6374882
#define public_6374894 _public_6374894
#define public_63748d2 _public_63748d2
#define public_63748f2 _public_63748f2
#define public_637490c _public_637490c

PROC_DECLARE(0x6374700, internal_6374700, public_6374700);
extern "C" NAKED register_t __cdecl internal_6374700()
{
    __asm
    {
        cmp dword ptr ds : [public_658b078], 5
        push edi
        mov edi, dword ptr ds : [public_63991e8]
        jl public_6374720
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f11f4 @0x6374715*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f11f4
        push eax
        call edi
        add esp, 8
        public_6374720 : nop
        mov ecx, dword ptr ds : [public_658b24c]
        mov eax, dword ptr ds : [public_658b6f4]
        push esi
        lea edx, ds:[ecx*8]
        push edx
        push eax
        call public_6377fe0
        mov ecx, dword ptr ds : [public_658b250]
        mov eax, dword ptr ds : [public_658b67c]
        lea edx, ds:[ecx*8+8]
        push edx
        push eax
        call public_6377fe0
        mov ecx, dword ptr ds : [public_658b250]
        mov eax, dword ptr ds : [public_658b678]
        lea edx, ds:[ecx*8+8]
        push edx
        push eax
        call public_6377fe0
        mov ecx, dword ptr ds : [public_658b250]
        mov eax, dword ptr ds : [public_658b684]
        lea edx, ds:[ecx*8+8]
        push edx
        push eax
        call public_6377fe0
        mov ecx, dword ptr ds : [public_658b250]
        mov eax, dword ptr ds : [public_658b680]
        lea edx, ds:[ecx*8+8]
        push edx
        push eax
        call public_6377fe0
        mov eax, dword ptr ds : [public_658b24c]
        mov edx, dword ptr ds : [public_658b904]
        lea ecx, ds:[eax+1]
        imul ecx, eax
        shl ecx, 3
        push ecx
        push edx
        call public_6377fe0
        mov eax, dword ptr ds : [public_658b24c]
        mov edx, dword ptr ds : [public_658b908]
        lea ecx, ds:[eax*4+4]
        push ecx
        push edx
        call public_6377fe0
        xor esi, esi
/*FIXUP push offset public_658b8fc @0x63747d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b8fc
        mov dword ptr ds : [public_658b678], esi
        mov dword ptr ds : [public_658b67c], esi
        mov dword ptr ds : [public_658b6f4], esi
        mov dword ptr ds : [public_658b680], esi
        mov dword ptr ds : [public_658b684], esi
        mov dword ptr ds : [public_658b904], esi
        mov dword ptr ds : [public_658b908], esi
        call public_636e740
/*FIXUP push offset public_658b900 @0x6374808*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b900
        call public_636e740
        add esp, 0x40
/*FIXUP push offset public_658b958 @0x6374815*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b958
        call public_636e740
        mov eax, dword ptr ds : [public_658b90c]
        add esp, 4
        cmp eax, esi
        je public_637483a
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [public_658b90c], esi
        public_637483a : nop
        mov eax, dword ptr ds : [public_658b914]
        cmp eax, esi
        je public_6374852
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [public_658b914], esi
        public_6374852 : nop
        mov eax, dword ptr ds : [public_658b918]
        cmp eax, esi
        je public_637486a
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [public_658b918], esi
        public_637486a : nop
        mov eax, dword ptr ds : [public_658b240]
        cmp eax, esi
        je public_6374882
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [public_658b240], esi
        public_6374882 : nop
        mov eax, dword ptr ds : [public_658b23c]
        cmp eax, esi
        je public_6374894
        push eax
        call public_6343fb0
        add esp, 4
        public_6374894 : nop
        mov eax, dword ptr ds : [public_658b258]
        cmp eax, esi
        mov dword ptr ds : [public_658b23c], esi
        mov dword ptr ds : [public_658b90c], esi
        mov dword ptr ds : [public_658b918], esi
        mov dword ptr ds : [public_658b240], esi
        mov dword ptr ds : [public_658b914], esi
        je public_63748d2
        cmp dword ptr ds : [public_658b25c], esi
        je public_63748d2
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [public_658b258], esi
        public_63748d2 : nop
        mov eax, dword ptr ds : [public_658b260]
        cmp eax, esi
        je public_63748f2
        cmp dword ptr ds : [public_658b264], esi
        je public_63748f2
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [public_658b260], esi
        public_63748f2 : nop
        cmp dword ptr ds : [public_658b078], 5
        pop esi
        jl public_637490c
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f11d8 @0x6374901*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f11d8
        push eax
        call edi
        add esp, 8
        public_637490c : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6374700)
    }
}

#undef public_6374720
#undef public_637483a
#undef public_6374852
#undef public_637486a
#undef public_6374882
#undef public_6374894
#undef public_63748d2
#undef public_63748f2
#undef public_637490c
