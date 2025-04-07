#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb22b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c70);

#define public_6eb43aa _public_6eb43aa
#define public_6eb4422 _public_6eb4422
#define public_6eb443e _public_6eb443e
#define public_6eb446f _public_6eb446f

PROC_DECLARE(0x6eb4380, internal_6eb4380, public_6eb4380);
extern "C" NAKED register_t __cdecl internal_6eb4380()
{
    __asm
    {
        mov eax, 0x2018
        call public_6ed0c70
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x2024]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        push edi
        lea edi, ds:[esi+0xC]
        je public_6eb43aa
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6eb43aa : nop
        mov ebx, dword ptr ss : [esp+0x202C]
        lea edx, ds:[esi-4]
        neg edx
        sbb edx, edx
        and edx, esi
        add esi, 8
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x10], 0x14
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [public_6ed1008]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jl public_6eb443e
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi]
        push edi
/*FIXUP push offset public_6ed4268 @0x6eb4400*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4268
        push esi
        call dword ptr ds : [eax]
        test eax, eax
        jl public_6eb4422
        mov edi, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x2018
        ret 8
        public_6eb4422 : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6eb446f
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x2018
        ret 8
        public_6eb443e : nop
        push ebx
        lea eax, ss:[esp+0x28]
/*FIXUP push offset public_6ed4378 @0x6eb4443*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4378
        push eax
        call public_6eb22b0
        push eax
        push 0x159
/*FIXUP push offset public_6ed42c0 @0x6eb4454*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed42c0
        mov ecx, 0x100003
/*FIXUP push offset public_6ed40a0 @0x6eb445e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed40a0
        push ecx
        mov ecx, dword ptr ds : [public_6ed1004]
        call dword ptr ds : [ecx]
        add esp, 0x20
        public_6eb446f : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x2018
        ret 8
        UNREACHABLE_TRAP(0x6eb4380)
    }
}

#undef public_6eb43aa
#undef public_6eb4422
#undef public_6eb443e
#undef public_6eb446f
