#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415e40);
CLANG_FORWARD_PROC_SYMBOL(public_415ea0);
CLANG_FORWARD_PROC_SYMBOL(public_416f50);
CLANG_FORWARD_PROC_SYMBOL(public_418430);
CLANG_FORWARD_PROC_SYMBOL(public_418b30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_41732f _public_41732f
#define public_4173bf _public_4173bf
#define public_4173e9 _public_4173e9
#define public_417408 _public_417408
#define public_417434 _public_417434
#define public_41747a _public_41747a
#define public_41747e _public_41747e

PROC_DECLARE(0x4172b0, internal_4172b0, public_4172b0);
extern "C" NAKED register_t __cdecl internal_4172b0()
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
        je public_4173e9
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
        jnp public_4173bf
/*FIXUP push offset public_610850 @0x417300*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610850
        lea ecx, ss:[esp+0x18]
        lea ebp, ds:[esi+0x15C]
        push ecx
        mov ecx, ebp
        call public_418b30
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+0x160]
        je public_41732f
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x10], edx
        jmp public_4173bf
        public_41732f : nop
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
/*FIXUP push offset public_610850 @0x41739d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610850
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], edi
        call public_418430
        test bl, bl
        mov dword ptr ds : [eax], edi
        je public_4173bf
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, esi
        call public_415ea0
        public_4173bf : nop
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
        public_4173e9 : nop
        mov eax, dword ptr ss : [esp+0x30]
        xor edi, edi
        xor ebp, ebp
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], edi
        jne public_417408
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        public_417408 : nop
        mov ebx, dword ptr ds : [esi+0xD8]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [esi+0x118]
        push eax
        push ebx
        mov dword ptr ss : [esp+0x28], ebx
        call dword ptr ds : [public_5c6e0c]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        jbe public_41747e
        mov ebx, dword ptr ss : [esp+0x28]
        public_417434 : nop
        cmp ebp, ebx
        jae public_41747a
        mov eax, dword ptr ss : [esp+0x2C]
        movzx eax, word ptr ds : [eax+edi*2]
        mov edx, dword ptr ds : [esi+0xD8]
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        push eax
        push edx
        mov dword ptr ss : [esp+0x38], 0
        call dword ptr ds : [public_616410]
        mov eax, dword ptr ss : [esp+0x28]
        add eax, ebp
        cmp eax, ebx
        ja public_41747a
        mov edx, dword ptr ss : [esp+0x10]
        inc edx
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x30]
        inc edi
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], edx
        jb public_417434
        public_41747a : nop
        mov ebx, dword ptr ss : [esp+0x20]
        public_41747e : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push ebx
        call dword ptr ds : [public_5c6e0c]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x4172b0)
    }
}

#undef public_41732f
#undef public_4173bf
#undef public_4173e9
#undef public_417408
#undef public_417434
#undef public_41747a
#undef public_41747e
