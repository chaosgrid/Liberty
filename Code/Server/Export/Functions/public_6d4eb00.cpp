#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d48b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d4eb00);

#define public_6d4eb86 _public_6d4eb86
#define public_6d4eb92 _public_6d4eb92
#define public_6d4ebbe _public_6d4ebbe
#define public_6d4ebdb _public_6d4ebdb

PROC_DECLARE(0x6d4eb00, internal_6d4eb00, public_6d4eb00);
extern "C" NAKED register_t __cdecl internal_6d4eb00()
{
    __asm
    {
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        push esi
        lea esi, ss:[ebp+4]
        je public_6d4ebdb
        push ebx
        push edi
        mov edi, dword ptr ds : [public_6d64bf0]
        push 2
        push 0
        push eax
        call edi
        mov ecx, dword ptr ds : [esi]
        push ecx
        call dword ptr ds : [public_6d64bec]
        mov edx, dword ptr ds : [esi]
        push 0
        push 0
        push edx
        mov ebx, eax
        call edi
        add esp, 0x1C
        lea edi, ds:[esi+4]
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6d64b40]
        push 0
        mov ecx, edi
        call dword ptr ds : [public_6d64b14]
        mov ecx, dword ptr ds : [esi]
        push ecx
        push ebx
        push 1
        push eax
        call dword ptr ds : [public_6d64bd4]
        add esp, 0x10
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d64b40]
        mov ecx, esi
        call public_6d48b60
        mov eax, dword ptr ds : [esi]
        test eax, eax
        mov edi, dword ptr ds : [public_6d64bd0]
        je public_6d4eb86
        push eax
        call edi
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_6d4eb86 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d4eb92
        mov eax, dword ptr ds : [public_6d64b7c]
/*FIXUP public_6d4eb92 : nop
        push offset public_6d6b4e4 @0x6d4eb92*/
  FIXUP public_6d4eb92 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b4e4
        push eax
        call dword ptr ds : [public_6d64bd8]
/*FIXUP push offset public_6d6b30c @0x6d4eb9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b30c
        push eax
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6d64c08]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0x10]
        add esp, 0x10
        test eax, eax
        jne public_6d4ebbe
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d4ebbe : nop
        mov edx, dword ptr ds : [esi]
        push edx
        push ecx
        push 1
        push eax
        call dword ptr ds : [public_6d64c04]
        mov eax, dword ptr ds : [esi]
        push eax
        call edi
        add esp, 0x14
        pop edi
        mov dword ptr ds : [esi], 0
        pop ebx
        public_6d4ebdb : nop
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4eb00)
    }
}

#undef public_6d4eb86
#undef public_6d4eb92
#undef public_6d4ebbe
#undef public_6d4ebdb
