#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415e40);
CLANG_FORWARD_PROC_SYMBOL(public_415ea0);
CLANG_FORWARD_PROC_SYMBOL(public_416f50);
CLANG_FORWARD_PROC_SYMBOL(public_418430);
CLANG_FORWARD_PROC_SYMBOL(public_418b30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_41715f _public_41715f
#define public_4171ef _public_4171ef
#define public_417219 _public_417219
#define public_417250 _public_417250
#define public_417256 _public_417256
#define public_41728c _public_41728c

PROC_DECLARE(0x4170e0, internal_4170e0, public_4170e0);
extern "C" NAKED register_t __cdecl internal_4170e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6105b0]
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0x158], eax
        push edi
        je public_417219
        mov dword ptr ds : [esi+0x158], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        fimul dword ptr ds : [public_610854]
        mov dword ptr ss : [esp+0x10], 0
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0xD0]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_4171ef
/*FIXUP push offset public_610850 @0x417130*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610850
        lea ecx, ss:[esp+0x18]
        lea ebp, ds:[esi+0x15C]
        push ecx
        mov ecx, ebp
        call public_418b30
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+0x160]
        je public_41715f
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x10], edx
        jmp public_4171ef
        public_41715f : nop
        fld dword ptr ds : [esi+0xD0]
        mov ecx, dword ptr ds : [esi+0x118]
        fmul dword ptr ds : [public_5c8da4]
        mov eax, dword ptr ds : [esi+0x11C]
        test ecx, ecx
        setne bl
        fadd qword ptr ds : [public_5c75e8]
        sub esp, 8
        mov dword ptr ss : [esp+0x20], eax
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        push 0x320
        push eax
        mov ecx, esi
        call public_415e40
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_610854]
        mov eax, dword ptr ds : [public_610850]
        push edx
        push ecx
        push eax
        mov eax, dword ptr ds : [esi+0xD0]
        push eax
        mov ecx, esi
        call public_416f50
        mov edi, eax
/*FIXUP push offset public_610850 @0x4171cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610850
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], edi
        call public_418430
        test bl, bl
        mov dword ptr ds : [eax], edi
        je public_4171ef
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, esi
        call public_415ea0
        public_4171ef : nop
        fild dword ptr ss : [esp+0x10]
        sub esp, 8
        fadd dword ptr ss : [esp+0x28]
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        push eax
        mov ecx, esi
        call public_415ea0
        public_417219 : nop
        mov eax, dword ptr ds : [esi+0x118]
        mov ecx, dword ptr ds : [esi+0xD8]
        push eax
        push ecx
        xor ebx, ebx
        mov dword ptr ss : [esp+0x28], ecx
        call dword ptr ds : [public_5c6e0c]
        mov ebp, dword ptr ss : [esp+0x2C]
        cmp ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], eax
        jne public_417250
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov ebp, eax
        public_417250 : nop
        xor edi, edi
        test ebp, ebp
        jbe public_41728c
        public_417256 : nop
        mov eax, dword ptr ss : [esp+0x28]
        movzx eax, word ptr ds : [eax+edi*2]
        mov edx, dword ptr ds : [esi+0xD8]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        push eax
        push edx
        mov dword ptr ss : [esp+0x3C], 0
        call dword ptr ds : [public_616410]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        add ebx, eax
        mov dword ptr ds : [ecx+edi*4], eax
        inc edi
        cmp edi, ebp
        jb public_417256
        public_41728c : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        push edx
        push eax
        call dword ptr ds : [public_5c6e0c]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x4170e0)
    }
}

#undef public_41715f
#undef public_4171ef
#undef public_417219
#undef public_417250
#undef public_417256
#undef public_41728c
