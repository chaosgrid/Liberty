#include "Content-PCH.h"


#define public_6ec3fa4 _public_6ec3fa4
#define public_6ec3fc0 _public_6ec3fc0

PROC_DECLARE(0x6ec3f80, internal_6ec3f80, public_6ec3f80);
extern "C" NAKED register_t __cdecl internal_6ec3f80()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ds : [public_6fb3380]
        push esi
        push edi
/*FIXUP push offset public_6fb5a20 @0x6ec3f8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5a20
        push ebx
        mov edi, ecx
        call ebp
        mov eax, dword ptr ds : [edi+0x28]
        mov esi, dword ptr ds : [eax]
        add esp, 8
        cmp esi, eax
        je public_6ec3fc0
        public_6ec3fa4 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
/*FIXUP push offset public_6fb5a00 @0x6ec3fac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5a00
        push ebx
        call ebp
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+0x28]
        add esp, 0x10
        cmp esi, eax
        jne public_6ec3fa4
        public_6ec3fc0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec3f80)
    }
}

#undef public_6ec3fa4
#undef public_6ec3fc0
