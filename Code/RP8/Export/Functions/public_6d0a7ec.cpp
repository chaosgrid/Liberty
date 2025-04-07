#include "RP8-PCH.h"


#define public_6d0a858 _public_6d0a858
#define public_6d0a85d _public_6d0a85d

PROC_DECLARE(0x6d0a7ec, internal_6d0a7ec, public_6d0a7ec);
extern "C" NAKED register_t __cdecl internal_6d0a7ec()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0a858
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-4]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-4], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-4]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-4], eax
/*FIXUP push offset public_6d65f78 @0x6d0a830*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65f78
        push 0xA0D
/*FIXUP push offset public_6d65fc0 @0x6d0a83a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65fc0
/*FIXUP push offset public_6d6600c @0x6d0a83f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6600c
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0a85d
        public_6d0a858 : nop
        mov eax, 0xFFFFFFF9
        public_6d0a85d : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0a7ec)
    }
}

#undef public_6d0a858
#undef public_6d0a85d
