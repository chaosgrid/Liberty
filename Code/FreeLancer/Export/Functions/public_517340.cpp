#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_517340);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfe20);

#define public_517371 _public_517371
#define public_517373 _public_517373
#define public_517398 _public_517398

PROC_DECLARE(0x517340, internal_517340, public_517340);
extern "C" NAKED register_t __cdecl internal_517340()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bfe20 @0x517342*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfe20
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_517371
        lea ecx, ds:[esi+0xF8]
        jmp public_517373
        public_517371 : nop
        xor ecx, ecx
        public_517373 : nop
        call public_576010
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        lea ecx, ds:[esi+0xC0]
        mov dword ptr ss : [esp+0x10], 1
        je public_517398
        push 0
        call dword ptr ds : [public_5c62a8]
        public_517398 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_5c8944
        call public_401e90
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x517340)
    }
}

#undef public_517371
#undef public_517373
#undef public_517398
