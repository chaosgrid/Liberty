#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f51170);
CLANG_FORWARD_PROC_SYMBOL(public_6f52dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53500);
CLANG_FORWARD_PROC_SYMBOL(public_6f540b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54120);

#define public_6f540d6 _public_6f540d6
#define public_6f540f9 _public_6f540f9

PROC_DECLARE(0x6f540b0, internal_6f540b0, public_6f540b0);
extern "C" NAKED register_t __cdecl internal_6f540b0()
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
        jne public_6f540d6
        lea ecx, ds:[edi+0x28]
        push ecx
/*FIXUP push offset public_6f61394 @0x6f540c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61394
        push esi
        call public_6f51170
        add esp, 0xC
        public_6f540d6 : nop
        mov edx, dword ptr ds : [esi+8]
        push edi
        push edx
        call public_6f53500
        add esp, 8
        test eax, eax
        jl public_6f540f9
        lea eax, ds:[edi+0x28]
        push eax
/*FIXUP push offset public_6f61368 @0x6f540eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61368
        push esi
        call public_6f51170
        add esp, 0xC
        public_6f540f9 : nop
        push 1
        push edi
        push esi
        call public_6f54120
        add esp, 8
        push eax
        push 0xC
        push esi
        call public_6f52dd0
        add esp, 0x10
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f540b0)
    }
}

#undef public_6f540d6
#undef public_6f540f9
