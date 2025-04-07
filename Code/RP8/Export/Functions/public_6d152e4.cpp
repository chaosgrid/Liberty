#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f6b6);

#define public_6d15346 _public_6d15346
#define public_6d15357 _public_6d15357

PROC_DECLARE(0x6d152e4, internal_6d152e4, public_6d152e4);
extern "C" NAKED register_t __cdecl internal_6d152e4()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x118], 0
        jne public_6d15346
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-4]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-4], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-4]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-4], ecx
/*FIXUP push offset public_6d6a9c8 @0x6d1531f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a9c8
        push 0x12AC
/*FIXUP push offset public_6d6aa00 @0x6d15329*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aa00
/*FIXUP push offset public_6d6aa4c @0x6d1532e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aa4c
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d15357
        public_6d15346 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        call public_6d2f6b6
        public_6d15357 : nop
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d152e4)
    }
}

#undef public_6d15346
#undef public_6d15357
