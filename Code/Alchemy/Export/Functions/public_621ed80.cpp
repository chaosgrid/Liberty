#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621ed80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6248abb);

#define public_621edbc _public_621edbc
#define public_621edce _public_621edce
#define public_621eddc _public_621eddc
#define public_621ede3 _public_621ede3

PROC_DECLARE(0x621ed80, internal_621ed80, public_621ed80);
extern "C" NAKED register_t __cdecl internal_621ed80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248abb @0x621ed82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248abb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_624d7e8
        mov eax, dword ptr ds : [edi+0x1C]
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_621edbc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x1C], ebp
        public_621edbc : nop
        mov ebx, dword ptr ds : [edi+0x10]
        mov esi, dword ptr ds : [edi+0xC]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_621ede3
        public_621edce : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, ebp
        je public_621eddc
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi], ebp
        public_621eddc : nop
        add esi, 0x10
        cmp esi, ebx
        jne public_621edce
        public_621ede3 : nop
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ds : [edi+0xC], ebp
        mov dword ptr ds : [edi+0x10], ebp
        mov dword ptr ds : [edi+0x14], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x621ed80)
    }
}

#undef public_621edbc
#undef public_621edce
#undef public_621eddc
#undef public_621ede3
