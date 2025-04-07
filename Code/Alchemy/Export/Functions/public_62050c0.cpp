#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62050c0);
CLANG_FORWARD_PROC_SYMBOL(public_6206ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6206b30);
CLANG_FORWARD_PROC_SYMBOL(public_6206b80);
CLANG_FORWARD_PROC_SYMBOL(public_6206bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c10);
CLANG_FORWARD_PROC_SYMBOL(public_6206c40);
CLANG_FORWARD_PROC_SYMBOL(public_6208570);
CLANG_FORWARD_PROC_SYMBOL(public_6208590);
CLANG_FORWARD_PROC_SYMBOL(public_62085f0);
CLANG_FORWARD_PROC_SYMBOL(public_6208a70);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_JUMP_SYMBOL(public_62473e0);

#define public_620525f _public_620525f
#define public_62052ce _public_62052ce
#define public_62052d5 _public_62052d5
#define public_62052e3 _public_62052e3
#define public_62053ba _public_62053ba
#define public_6205429 _public_6205429
#define public_6205430 _public_6205430
#define public_6205442 _public_6205442
#define public_6205455 _public_6205455
#define public_62054ae _public_62054ae
#define public_62054b1 _public_62054b1

PROC_DECLARE(0x62050c0, internal_62050c0, public_62050c0);
extern "C" NAKED register_t __cdecl internal_62050c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62473e0 @0x62050c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62473e0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x64]
        lea eax, ss:[esp+0x64]
        push edi
        lea ebp, ds:[esi+0xE4]
        push eax
        mov ecx, ebp
        call public_6208590
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], edi
        lea ecx, ss:[esp+0x1C]
        xor eax, eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x6C], eax
        call public_6208570
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ebx
        cmp ebx, edi
        mov byte ptr ss : [esp+0x60], 1
        mov dword ptr ss : [esp+0x1C], 0
        je public_62054ae
        fld dword ptr ds : [ebx+0x24]
        fmul dword ptr ds : [ebx+0x2C]
        mov edx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [edx+0x78]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0x68]
        mov edi, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x7C]
        push edi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        lea eax, ds:[ebx+0xC]
        mov edi, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ds : [eax]
        mov ecx, edi
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        fmul dword ptr ds : [public_624bab8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[esp+0x68]
        push ecx
        mov ecx, ebp
        fstp dword ptr ds : [edi+0xC]
        call public_62085f0
        mov ebp, dword ptr ds : [eax]
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x18], ebp
        je public_6205442
        fld dword ptr ds : [ebx+0x24]
        fmul dword ptr ds : [ebx+0x2C]
        mov edx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [edx+0x78]
        fstp dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ds : [eax+0x7C]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        fstp dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[ebp+0xC]
        push edi
        fmul dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x3C], ecx
        lea ecx, ss:[esp+0x3C]
        mov edx, dword ptr ds : [eax+4]
        push ecx
        fmul dword ptr ds : [public_624bab8]
        mov dword ptr ss : [esp+0x44], edx
        mov eax, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x48], eax
        push edx
        fstp dword ptr ss : [esp+0x50]
        call public_6206c10
        add esp, 0xC
        lea ecx, ss:[esp+0x20]
        call public_6206ad0
        fst dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [edi+0xC]
        fcomp dword ptr ss : [esp+0x44]
        fnstsw ax
        test ah, 5
        jp public_620525f
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, edi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        jmp public_62052d5
        public_620525f : nop
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [edi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_62052d5
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [edi+0xC]
        fadd dword ptr ss : [esp+0x68]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x68]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_62052ce
        mov eax, dword ptr ss : [esp+0x68]
        lea ecx, ss:[esp+0x20]
        push eax
        call public_6206bb0
        push ecx
        lea ecx, ss:[esp+0x24]
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ds : [edi+0xC]
        lea edx, ss:[esp+0x30]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        call public_6206c40
        add esp, 0xC
        lea eax, ss:[esp+0x2C]
        mov ecx, edi
        push eax
        call public_6206b80
        public_62052ce : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [edi+0xC], ecx
        public_62052d5 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x14], ebx
        je public_6205442
        public_62052e3 : nop
        fld dword ptr ds : [ebx+0x2C]
        fmul dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [edx+0x78]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0x68]
        mov ebp, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x7C]
        push ebp
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        lea eax, ds:[ebx+0xC]
        push edi
        fmul dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x4C], ecx
        lea ecx, ss:[esp+0x4C]
        mov edx, dword ptr ds : [eax+4]
        push ecx
        fmul dword ptr ds : [public_624bab8]
        mov dword ptr ss : [esp+0x54], edx
        mov eax, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x58], eax
        push edx
        fstp dword ptr ss : [esp+0x60]
        call public_6206c10
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fstp dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x74]
        push eax
        call public_6206b30
        fmul dword ptr ss : [esp+0x78]
        add esp, 0x10
        fst dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [edi+0xC]
        fcomp dword ptr ss : [esp+0x54]
        fnstsw ax
        test ah, 5
        jp public_62053ba
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        jmp public_6205430
        public_62053ba : nop
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [edi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_6205430
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [edi+0xC]
        fadd dword ptr ss : [esp+0x68]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x68]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_6205429
        mov ecx, dword ptr ss : [esp+0x68]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6206bb0
        push ecx
        lea edx, ss:[esp+0x24]
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ds : [edi+0xC]
        lea eax, ss:[esp+0x30]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_6206c40
        add esp, 0xC
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, edi
        call public_6206b80
        public_6205429 : nop
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [edi+0xC], edx
        public_6205430 : nop
        mov ebx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x18]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x14], ebx
        jne public_62052e3
        public_6205442 : nop
        mov eax, dword ptr ds : [public_6257978]
        test eax, eax
        jne public_6205455
        call public_623e830
        mov dword ptr ds : [public_6257978], eax
        public_6205455 : nop
        mov ecx, dword ptr ds : [eax]
        add esi, 0x4C
        push edi
        lea edx, ss:[esp+0x24]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x30], ecx
        lea ecx, ss:[esp+0x2C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x3C], edx
        call public_6208a70
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], edx
        xor eax, eax
        jmp public_62054b1
        public_62054ae : nop
        or eax, 0xFFFFFFFF
        public_62054b1 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x62050c0)
    }
}

#undef public_620525f
#undef public_62052ce
#undef public_62052d5
#undef public_62052e3
#undef public_62053ba
#undef public_6205429
#undef public_6205430
#undef public_6205442
#undef public_6205455
#undef public_62054ae
#undef public_62054b1
