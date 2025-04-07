#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55380);

#define public_6f553a1 _public_6f553a1
#define public_6f553a6 _public_6f553a6

PROC_DECLARE(0x6f55380, internal_6f55380, public_6f55380);
extern "C" NAKED register_t __cdecl internal_6f55380()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        jg public_6f553a1
        cmp ecx, 0xFFFFFFF5
        jl public_6f553a1
        lea edx, ds:[ecx*4]
        mov eax, offset public_6f609d0
        sub eax, edx
        mov edx, dword ptr ds : [eax]
        jmp public_6f553a6
        public_6f553a1 : nop
        mov edx, offset public_6f60590
        public_6f553a6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ds : [eax+0x14]
        push esi
        mov esi, dword ptr ds : [eax+0x18]
        add esi, 0x28
        push esi
        push eax
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push edx
/*FIXUP push offset public_6f6165c @0x6f553c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6165c
        call public_6f4f7a0
        UNREACHABLE_TRAP(0x6f55380)
    }
}

#undef public_6f553a1
#undef public_6f553a6
