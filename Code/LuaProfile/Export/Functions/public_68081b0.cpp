#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6807600);
CLANG_FORWARD_PROC_SYMBOL(public_68081b0);
CLANG_FORWARD_PROC_SYMBOL(public_6808220);
CLANG_FORWARD_PROC_SYMBOL(public_680a800);

#define public_68081d6 _public_68081d6
#define public_68081f9 _public_68081f9

PROC_DECLARE(0x68081b0, internal_68081b0, public_68081b0);
extern "C" NAKED register_t __cdecl internal_68081b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        jne public_68081d6
        lea ecx, ds:[edi+0x28]
        push ecx
/*FIXUP push offset public_680dcc4 @0x68081c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dcc4
        push esi
        call public_680a800
        add esp, 0xC
        public_68081d6 : nop
        mov edx, dword ptr ds : [esi+8]
        push edi
        push edx
        call public_6807600
        add esp, 8
        test eax, eax
        jl public_68081f9
        lea eax, ds:[edi+0x28]
        push eax
/*FIXUP push offset public_680dc98 @0x68081eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dc98
        push esi
        call public_680a800
        add esp, 0xC
        public_68081f9 : nop
        push 1
        push edi
        push esi
        call public_6808220
        add esp, 8
        push eax
        push 0xC
        push esi
        call public_6806ed0
        add esp, 0x10
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68081b0)
    }
}

#undef public_68081d6
#undef public_68081f9
