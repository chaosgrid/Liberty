#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6809480);

#define public_68094a1 _public_68094a1
#define public_68094a6 _public_68094a6

PROC_DECLARE(0x6809480, internal_6809480, public_6809480);
extern "C" NAKED register_t __cdecl internal_6809480()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        jg public_68094a1
        cmp ecx, 0xFFFFFFF5
        jl public_68094a1
        lea edx, ds:[ecx*4]
        mov eax, offset public_680d930
        sub eax, edx
        mov edx, dword ptr ds : [eax]
        jmp public_68094a6
        public_68094a1 : nop
        mov edx, offset public_680d4f0
        public_68094a6 : nop
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
/*FIXUP push offset public_680df8c @0x68094c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680df8c
        call public_6805fb0
        UNREACHABLE_TRAP(0x6809480)
    }
}

#undef public_68094a1
#undef public_68094a6
