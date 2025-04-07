#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333110);
CLANG_FORWARD_JUMP_SYMBOL(public_63975a8);

#define public_633313a _public_633313a

PROC_DECLARE(0x6333110, internal_6333110, public_6333110);
extern "C" NAKED register_t __cdecl internal_6333110()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63975a8 @0x6333112*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63975a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_633313a
        lea eax, ds:[esi+0x10]
        public_633313a : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax], offset public_63a49cc
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_63a49e4
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6333110)
    }
}

#undef public_633313a
