#include "Content-PCH.h"


#define public_6ec9103 _public_6ec9103
#define public_6ec911f _public_6ec911f
#define public_6ec913c _public_6ec913c

PROC_DECLARE(0x6ec90b0, internal_6ec90b0, public_6ec90b0);
extern "C" NAKED register_t __cdecl internal_6ec90b0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebp, ecx
        push 0
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 1
        mov ecx, esi
        mov dword ptr ss : [ebp+0xC], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec913c
        push ebx
/*FIXUP push offset public_6fb5cd0 @0x6ec90e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5cd0
        push 1
        mov ecx, esi
        call edi
        mov ebx, dword ptr ds : [public_6fb3294]
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec9103
        mov dword ptr ss : [ebp+0x10], 0x12A
/*FIXUP public_6ec9103 : nop
        push offset public_6fb5cc4 @0x6ec9103*/
  FIXUP public_6ec9103 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5cc4
        push 1
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec911f
        mov dword ptr ss : [ebp+0x10], 0x11A
/*FIXUP public_6ec911f : nop
        push offset public_6fb5cb0 @0x6ec911f*/
  FIXUP public_6ec911f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5cb0
        push 1
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        pop ebx
        jne public_6ec913c
        mov dword ptr ss : [ebp+0x10], 0x13A
        public_6ec913c : nop
        pop edi
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6ec90b0)
    }
}

#undef public_6ec9103
#undef public_6ec911f
#undef public_6ec913c
