#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41f150);
CLANG_FORWARD_PROC_SYMBOL(public_424f30);
CLANG_FORWARD_PROC_SYMBOL(public_425080);
CLANG_FORWARD_PROC_SYMBOL(public_425140);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_45a9f0);
CLANG_FORWARD_PROC_SYMBOL(public_473e00);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_59e080);
CLANG_FORWARD_PROC_SYMBOL(public_59e500);
CLANG_FORWARD_PROC_SYMBOL(public_5b0b60);

#define public_473e27 _public_473e27
#define public_473e8f _public_473e8f
#define public_473ec1 _public_473ec1
#define public_473ecb _public_473ecb
#define public_473ef0 _public_473ef0
#define public_473f44 _public_473f44
#define public_473f59 _public_473f59

PROC_DECLARE(0x473e00, internal_473e00, public_473e00);
extern "C" NAKED register_t __cdecl internal_473e00()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x818
        push esi
        push edi
/*FIXUP push offset public_5d0610 @0x473e0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
        call public_59d9c0
        add esp, 4
        test eax, eax
        je public_473e27
        mov al, 1
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
/*FIXUP public_473e27 : nop
        push offset public_5d0610 @0x473e27*/
  FIXUP public_473e27 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_473ecb
        push eax
        push eax
/*FIXUP push offset public_5d0610 @0x473e3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
/*FIXUP push offset public_5d0610 @0x473e43*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_473ecb
        mov eax, dword ptr ds : [esi]
        push 0
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0x42
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [esi+0x340]
        test eax, eax
        je public_473e8f
        or byte ptr ds : [eax+0x6C], 3
        public_473e8f : nop
        mov edx, dword ptr ss : [ebp+8]
        push 0x400
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [public_5c70f8]
        mov ecx, dword ptr ds : [esi+0x334]
        add esp, 0xC
        test ecx, ecx
        je public_473ec1
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        public_473ec1 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x80]
        public_473ecb : nop
        mov edi, dword ptr ds : [public_5c6ed8]
        push 0xA
        mov dword ptr ss : [esp+0x10], 0
        call edi
        lea eax, ss:[esp+0xC]
        push eax
        call public_5b0b60
        add esp, 4
        test al, al
        je public_473f59
        mov edi, edi
        public_473ef0 : nop
        call public_42d680
        fstp qword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        call public_59e080
/*FIXUP push offset public_5d0610 @0x473f08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
        call public_59d9c0
        mov esi, eax
        add esp, 0xC
        test esi, esi
        je public_473f59
        call public_424f30
        test al, al
        je public_473f44
        call public_59e500
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x34]
        call public_45a9f0
        call public_41f150
        call public_425080
        call public_425140
        public_473f44 : nop
        push 0xA
        call edi
        lea ecx, ss:[esp+0xC]
        push ecx
        call public_5b0b60
        add esp, 4
        test al, al
        jne public_473ef0
        public_473f59 : nop
        mov ecx, dword ptr ds : [public_66dc04]
        xor eax, eax
        test ecx, ecx
        pop edi
        sete al
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x473e00)
    }
}

#undef public_473e27
#undef public_473e8f
#undef public_473ec1
#undef public_473ecb
#undef public_473ef0
#undef public_473f44
#undef public_473f59
