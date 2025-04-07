#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2b920);

#define public_6d2b954 _public_6d2b954
#define public_6d2b960 _public_6d2b960

PROC_DECLARE(0x6d2b920, internal_6d2b920, public_6d2b920);
extern "C" NAKED register_t __cdecl internal_6d2b920()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr ss : [ebp+8], 0
        je public_6d2b954
        lea eax, ss:[ebp+0xC]
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        push edx
/*FIXUP push offset public_6d70848 @0x6d2b938*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d70848
        call dword ptr ds : [public_6d5e128]
        add esp, 0xC
        mov dword ptr ss : [ebp-4], 0
        mov eax, offset public_6d70848
        jmp public_6d2b960
        public_6d2b954 : nop
        mov byte ptr ds : [public_6d70848], 0
        mov eax, offset public_6d70848
        public_6d2b960 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2b920)
    }
}

#undef public_6d2b954
#undef public_6d2b960
