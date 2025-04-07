#include "Content-PCH.h"


#define public_6ec3285 _public_6ec3285
#define public_6ec32a1 _public_6ec32a1

PROC_DECLARE(0x6ec3250, internal_6ec3250, public_6ec3250);
extern "C" NAKED register_t __cdecl internal_6ec3250()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fb59dc @0x6ec325e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb59dc
        mov ebp, ecx
        push 0
        mov ecx, esi
        call edi
        mov ebx, dword ptr ds : [public_6fb3294]
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec3285
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xC], eax
        pop ebp
        pop ebx
        ret 4
/*FIXUP public_6ec3285 : nop
        push offset public_6fb59d4 @0x6ec3285*/
  FIXUP public_6ec3285 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb59d4
        push 0
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec32a1
        mov dword ptr ss : [ebp+0xC], 1
        public_6ec32a1 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec3250)
    }
}

#undef public_6ec3285
#undef public_6ec32a1
