#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23d9b);
CLANG_FORWARD_PROC_SYMBOL(public_6d26699);
CLANG_FORWARD_PROC_SYMBOL(public_6d27198);

#define public_6d266a0 _public_6d266a0
#define public_6d266d6 _public_6d266d6
#define public_6d266ee _public_6d266ee

PROC_DECLARE(0x6d26699, internal_6d26699, public_6d26699);
extern "C" NAKED register_t __cdecl internal_6d26699()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
/*FIXUP public_6d266a0 : nop
        push offset public_6d5e740 @0x6d266a0*/
  FIXUP public_6d266a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e740
        mov ecx, dword ptr ss : [ebp-4]
        call public_6d23d9b
        movzx eax, al
        test eax, eax
        je public_6d266d6
        mov ecx, dword ptr ss : [ebp-4]
        call public_6d22ed0
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+0x18]
        push edx
        mov ecx, dword ptr ss : [ebp-4]
        call public_6d27198
        movzx eax, al
        test eax, eax
        jne public_6d266d6
        xor al, al
        jmp public_6d266ee
        public_6d266d6 : nop
        mov ecx, dword ptr ss : [ebp-4]
        call public_6d22ed0
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx+8]
        cmp eax, dword ptr ds : [edx+0xC]
        jb public_6d266a0
        mov al, 1
        public_6d266ee : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d26699)
    }
}

#undef public_6d266a0
#undef public_6d266d6
#undef public_6d266ee
