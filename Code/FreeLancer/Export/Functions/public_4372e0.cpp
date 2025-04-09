#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_424f30);
CLANG_FORWARD_PROC_SYMBOL(public_425080);
CLANG_FORWARD_PROC_SYMBOL(public_425140);
CLANG_FORWARD_PROC_SYMBOL(public_45a100);
CLANG_FORWARD_PROC_SYMBOL(public_46a4a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4900);
CLANG_FORWARD_PROC_SYMBOL(public_4c4a00);
CLANG_FORWARD_PROC_SYMBOL(public_5588a0);
CLANG_FORWARD_PROC_SYMBOL(public_558c10);
CLANG_FORWARD_PROC_SYMBOL(public_564f90);
CLANG_FORWARD_PROC_SYMBOL(public_579190);
CLANG_FORWARD_PROC_SYMBOL(public_59e300);
CLANG_FORWARD_PROC_SYMBOL(public_5b2c60);

#define public_43734b _public_43734b
#define public_437366 _public_437366
#define public_437389 _public_437389
#define public_43738d _public_43738d
#define public_4373a6 _public_4373a6
#define public_4373de _public_4373de
#define public_4373e8 _public_4373e8

PROC_DECLARE(0x4372e0, internal_4372e0, public_4372e0);
extern "C" NAKED register_t __cdecl internal_4372e0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        cmp byte ptr ds : [esi+4], 1
        jne public_43738d
        push ebp
        mov ebp, dword ptr ds : [public_5c60f8]
        push edi
        mov byte ptr ds : [esi+4], 0
        call ebp
        push 1
        call public_45a100
        add esp, 4
        call ebp
        call public_4c4900
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], eax
        call public_4c4a00
        mov edi, eax
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_43734b
        test edi, edi
        je public_43734b
        mov ecx, dword ptr ds : [public_5c6d18]
        push edi
        push 0xA7
/*FIXUP push offset public_5caea4 @0x437334*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caea4
        mov eax, 0x100001
/*FIXUP push offset public_5cae60 @0x43733e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cae60
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor edi, edi
        public_43734b : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, 0x3FFFFFFF
        je public_437366
        xor edx, edx
        mov dl, byte ptr ds : [esi+6]
        push edx
        push edi
        push eax
        call public_5588a0
        add esp, 0xC
        public_437366 : nop
        call ebp
        mov byte ptr ds : [esi+5], 1
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_437389
        call public_5b2c60
        test al, al
        jne public_437389
        push 1
        call public_46a4a0
        add esp, 4
        public_437389 : nop
        call ebp
        pop edi
        pop ebp
        public_43738d : nop
        call public_5b2c60
        test al, al
        jne public_4373a6
        cmp byte ptr ds : [esi+5], 1
        jne public_4373a6
        call public_558c10
        pop esi
        pop ecx
        ret 4
        public_4373a6 : nop
        lea eax, ss:[esp+4]
        push eax
        mov byte ptr ss : [esp+8], 0
        mov byte ptr ss : [esp+9], 0
        mov byte ptr ss : [esp+0xA], 0
        mov byte ptr ss : [esp+0xB], 0xFF
        call public_564f90
        add esp, 4
        call public_424f30
        test al, al
        je public_4373e8
        call public_5b2c60
        test al, al
        jne public_4373de
        call public_59e300
        public_4373de : nop
        call public_425080
        call public_425140
        public_4373e8 : nop
        call public_579190
        xor eax, eax
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4372e0)
    }
}

#undef public_43734b
#undef public_437366
#undef public_437389
#undef public_43738d
#undef public_4373a6
#undef public_4373de
#undef public_4373e8
