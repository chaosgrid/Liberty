#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d321a1);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);

#define public_6d321c1 _public_6d321c1

PROC_DECLARE(0x6d321a1, internal_6d321a1, public_6d321a1);
extern "C" NAKED register_t __cdecl internal_6d321a1()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ds : [eax+0x54]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        cmp esi, dword ptr ds : [ebx+4]
        push edi
        jbe public_6d321c1
/*FIXUP push offset public_6d5f578 @0x6d321b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5f578
        push eax
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d321c1 : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, esi
        mov esi, dword ptr ds : [ebx]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x18]
        and ecx, 3
        rep movsb
        add dword ptr ds : [ebx], eax
        sub dword ptr ds : [ebx+4], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d321a1)
    }
}

#undef public_6d321c1
