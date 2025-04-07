#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636d960);
CLANG_FORWARD_PROC_SYMBOL(public_636da20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_636d9ad _public_636d9ad

PROC_DECLARE(0x636d960, internal_636d960, public_636d960);
extern "C" NAKED register_t __cdecl internal_636d960()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+4]
        xor ebx, ebx
        push ecx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+0x14]
        add esp, 8
        cmp eax, ebx
        mov dword ptr ds : [esi+4], ebx
        je public_636d9ad
        mov edx, dword ptr ds : [eax-4]
        push edi
        lea edi, ds:[eax-4]
/*FIXUP push offset _public_636da20 @0x636d98f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_636da20
        push edx
        push 0x20
        push eax
        call public_6391dfc
        push edi
        call public_6391d5a
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x14], ebx
        pop esi
        pop ebx
        ret 
        public_636d9ad : nop
        mov dword ptr ds : [esi+0x14], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636d960)
    }
}

#undef public_636d9ad
