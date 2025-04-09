#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_4214d0);
CLANG_FORWARD_PROC_SYMBOL(public_4215e0);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_51b500);

#define public_51b598 _public_51b598
#define public_51b5ac _public_51b5ac
#define public_51b5b9 _public_51b5b9
#define public_51b5c8 _public_51b5c8
#define public_51b62a _public_51b62a
#define public_51b631 _public_51b631

PROC_DECLARE(0x51b500, internal_51b500, public_51b500);
extern "C" NAKED register_t __cdecl internal_51b500()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xE8]
        push edi
        xor edi, edi
        xor bl, bl
        test al, 1
        je public_51b5b9
        movzx eax, byte ptr ds : [esi+0xE9]
        movzx ecx, byte ptr ds : [esi+0xEA]
        movzx edx, byte ptr ds : [esi+0xEB]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0xC], edx
        fild dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+0x14]
        fild dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+0x10]
        fild dword ptr ss : [esp+0xC]
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+0xC]
        call public_41a3e0
        test al, al
        je public_51b598
        mov al, byte ptr ds : [esi+0xE9]
        test al, al
        jne public_51b631
        mov al, byte ptr ds : [esi+0xEA]
        test al, al
        jne public_51b631
        mov al, byte ptr ds : [esi+0xEB]
        test al, al
        jne public_51b631
        public_51b598 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        push 0x3F800000
        push eax
        push ecx
        push edx
        public_51b5ac : nop
        call public_4214d0
        add esp, 0x10
        mov edi, 0x4000
        public_51b5b9 : nop
        test byte ptr ds : [esi+0xE8], 2
        je public_51b5c8
        or edi, 0x100
        public_51b5c8 : nop
        test edi, edi
        je public_51b62a
        push 0xB7
/*FIXUP push offset public_5dbfe8 @0x51b5d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbfe8
        push 0
        call public_422610
        push edi
        call public_4215e0
        mov al, byte ptr ds : [esi+0xE8]
        add esp, 0x10
        test al, 1
        je public_51b62a
        test bl, bl
        je public_51b62a
        push 0xC0
/*FIXUP push offset public_5dbfe8 @0x51b5f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbfe8
        push esi
        call public_422610
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        push 0x3F800000
        push eax
        push ecx
        push edx
        call public_4214d0
        push 0x4000
        call public_4215e0
        add esp, 0x20
        public_51b62a : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_51b631 : nop
        push 0x3F800000
        push 0
        push 0
        mov bl, 1
        push 0
        jmp public_51b5ac
        UNREACHABLE_TRAP(0x51b500)
    }
}

#undef public_51b598
#undef public_51b5ac
#undef public_51b5b9
#undef public_51b5c8
#undef public_51b62a
#undef public_51b631
