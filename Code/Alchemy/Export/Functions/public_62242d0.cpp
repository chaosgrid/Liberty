#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62242d0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6248d73);

#define public_62242f0 _public_62242f0
#define public_62242f2 _public_62242f2
#define public_6224312 _public_6224312
#define public_622433f _public_622433f
#define public_6224353 _public_6224353
#define public_6224378 _public_6224378

PROC_DECLARE(0x62242d0, internal_62242d0, public_62242d0);
extern "C" NAKED register_t __cdecl internal_62242d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248d73 @0x62242d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248d73
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        test ecx, ecx
        push esi
        je public_62242f0
        lea esi, ds:[ecx+4]
        jmp public_62242f2
        public_62242f0 : nop
        xor esi, esi
        public_62242f2 : nop
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x4C]
        mov dword ptr ss : [esp+0x10], 0
        test eax, eax
        je public_6224312
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x4C], 0
        public_6224312 : nop
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 1
        mov dword ptr ds : [esi+0x30], offset public_624bd80
        je public_622433f
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_622433f
        push eax
        call public_62460e0
        add esp, 4
        public_622433f : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6224353
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x24], 0
        public_6224353 : nop
        mov dword ptr ds : [esi+4], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov dword ptr ds : [esi+0xC], offset public_624bd80
        je public_6224378
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        je public_6224378
        push esi
        call public_62460e0
        add esp, 4
        public_6224378 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62242d0)
    }
}

#undef public_62242f0
#undef public_62242f2
#undef public_6224312
#undef public_622433f
#undef public_6224353
#undef public_6224378
