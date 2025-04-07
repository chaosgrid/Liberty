#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23d9b);
CLANG_FORWARD_PROC_SYMBOL(public_6d26627);
CLANG_FORWARD_PROC_SYMBOL(public_6d27198);

#define public_6d2662e _public_6d2662e
#define public_6d26664 _public_6d26664
#define public_6d26666 _public_6d26666
#define public_6d2667d _public_6d2667d
#define public_6d26693 _public_6d26693
#define public_6d26695 _public_6d26695

PROC_DECLARE(0x6d26627, internal_6d26627, public_6d26627);
extern "C" NAKED register_t __cdecl internal_6d26627()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
/*FIXUP public_6d2662e : nop
        push offset public_6d5e740 @0x6d2662e*/
  FIXUP public_6d2662e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e740
        mov ecx, dword ptr ss : [ebp-4]
        call public_6d23d9b
        movzx eax, al
        test eax, eax
        je public_6d26666
        mov ecx, dword ptr ss : [ebp-4]
        call public_6d22ed0
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+0x18]
        push edx
        mov ecx, dword ptr ss : [ebp-4]
        call public_6d27198
        movzx eax, al
        test eax, eax
        jne public_6d26664
        xor al, al
        jmp public_6d26695
        public_6d26664 : nop
        jmp public_6d2667d
/*FIXUP public_6d26666 : nop
        push offset public_6d5e738 @0x6d26666*/
  FIXUP public_6d26666 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e738
        mov ecx, dword ptr ss : [ebp-4]
        call public_6d23d9b
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d2667d
        jmp public_6d26693
        public_6d2667d : nop
        mov ecx, dword ptr ss : [ebp-4]
        call public_6d22ed0
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6d2662e
        public_6d26693 : nop
        mov al, 1
        public_6d26695 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d26627)
    }
}

#undef public_6d2662e
#undef public_6d26664
#undef public_6d26666
#undef public_6d2667d
#undef public_6d26693
#undef public_6d26695
