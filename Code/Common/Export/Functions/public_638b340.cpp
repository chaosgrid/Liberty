#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_638b340);
CLANG_FORWARD_PROC_SYMBOL(public_638c530);

#define public_638b372 _public_638b372

PROC_DECLARE(0x638b340, internal_638b340, public_638b340);
extern "C" NAKED register_t __cdecl internal_638b340()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        mov ecx, dword ptr ss : [ebp+0xC]
        push ebx
        push esi
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        call public_638c530
        mov edi, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [public_63991e8]
        add esp, 8
        lea esi, ss:[esp+0x10]
        mov dword ptr ss : [esp+0xC], 3
        public_638b372 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push edx
        push eax
/*FIXUP push offset public_63f82f8 @0x638b379*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f82f8
        push edi
        call ebx
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0x10
        add esi, 8
        dec eax
        mov dword ptr ss : [esp+0xC], eax
        jne public_638b372
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f99c4 @0x638b39f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f99c4
        push edi
        call ebx
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638b340)
    }
}

#undef public_638b372
