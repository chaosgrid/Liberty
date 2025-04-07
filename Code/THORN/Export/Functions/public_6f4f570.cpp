#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4bc70);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4beb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);

#define public_6f4f5a7 _public_6f4f5a7
#define public_6f4f5c0 _public_6f4f5c0

PROC_DECLARE(0x6f4f570, internal_6f4f570, public_6f4f570);
extern "C" NAKED register_t __cdecl internal_6f4f570()
{
    __asm
    {
        push ecx
        push esi
        push 0
        call public_6f4bc70
        mov esi, eax
        lea eax, ss:[esp+8]
        push eax
        push esi
        call public_6f4beb0
        push esi
        call public_6f4bcc0
        mov ecx, dword ptr ss : [esp+0x1C]
        sub ecx, eax
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 0x10
        test eax, eax
        pop esi
        jne public_6f4f5a7
        mov eax, offset public_6f60590
        mov dword ptr ss : [esp], eax
        public_6f4f5a7 : nop
        mov edx, dword ptr ss : [esp+0xC]
        test edx, edx
        jne public_6f4f5c0
        push eax
        push ecx
/*FIXUP push offset public_6f60910 @0x6f4f5b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60910
        call public_6f4f7a0
        add esp, 0xC
        pop ecx
        ret 
        public_6f4f5c0 : nop
        push edx
        push eax
        push ecx
/*FIXUP push offset public_6f608e0 @0x6f4f5c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f608e0
        call public_6f4f7a0
        add esp, 0x10
        pop ecx
        ret 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        UNREACHABLE_TRAP(0x6f4f570)
    }
}

#undef public_6f4f5a7
#undef public_6f4f5c0
