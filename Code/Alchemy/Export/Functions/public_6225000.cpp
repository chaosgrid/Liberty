#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206b30);
CLANG_FORWARD_PROC_SYMBOL(public_6206b80);
CLANG_FORWARD_PROC_SYMBOL(public_6206bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c10);
CLANG_FORWARD_PROC_SYMBOL(public_6206c40);
CLANG_FORWARD_PROC_SYMBOL(public_6208a70);
CLANG_FORWARD_PROC_SYMBOL(public_6225000);
CLANG_FORWARD_PROC_SYMBOL(public_6225890);
CLANG_FORWARD_PROC_SYMBOL(public_62258b0);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_JUMP_SYMBOL(public_6248e50);

#define public_6225065 _public_6225065
#define public_6225100 _public_6225100
#define public_6225104 _public_6225104
#define public_6225113 _public_6225113
#define public_6225126 _public_6225126
#define public_622519d _public_622519d
#define public_6225210 _public_6225210
#define public_622521c _public_622521c

PROC_DECLARE(0x6225000, internal_6225000, public_6225000);
extern "C" NAKED register_t __cdecl internal_6225000()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248e50 @0x6225002*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248e50
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        mov eax, dword ptr ss : [esp+0x54]
        push ebx
        push ebp
        push esi
        lea ecx, ss:[esp+0x10]
        push edi
        lea esi, ds:[eax+0xB4]
        push ecx
        mov ecx, esi
        xor ebp, ebp
        xor edi, edi
        call public_62258b0
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ebx
        lea edx, ss:[esp+0x10]
        mov ecx, esi
        push edx
        mov dword ptr ss : [esp+0x60], ebp
        mov dword ptr ss : [esp+0x18], ebp
        call public_6225890
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x68]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x5C], 1
        je public_6225113
        public_6225065 : nop
        cmp edi, ebp
        jle public_622521c
        add eax, 0xC
        push esi
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x38], ecx
        lea ecx, ss:[esp+0x38]
        mov edx, dword ptr ds : [eax+4]
        push ecx
        mov dword ptr ss : [esp+0x40], edx
        lea edx, ss:[esp+0x24]
        mov eax, dword ptr ds : [eax+8]
        push edx
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x4C], 0
        call public_6206c10
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fstp dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x74]
        push eax
        call public_6206b30
        fmul dword ptr ss : [esp+0x78]
        add esp, 0x10
        fst dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [esi+0xC]
        fcomp dword ptr ss : [esp+0x40]
        fnstsw ax
        test ah, 5
        jp public_622519d
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        public_6225100 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6225104 : nop
        mov eax, dword ptr ds : [eax]
        inc edi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6225065
        public_6225113 : nop
        mov eax, dword ptr ds : [public_6257a6c]
        cmp eax, ebp
        jne public_6225126
        call public_623e830
        mov dword ptr ds : [public_6257a6c], eax
        public_6225126 : nop
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x4C
        push esi
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x30], ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x4C]
        call public_6208a70
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        mov eax, edi
        neg eax
        sbb eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x54]
        pop edi
        neg eax
        pop esi
        pop ebp
        dec eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 8
        public_622519d : nop
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_6225100
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [esi+0xC]
        fadd dword ptr ss : [esp+0x68]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x68]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_6225210
        mov ecx, dword ptr ss : [esp+0x68]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6206bb0
        push ecx
        lea edx, ss:[esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi+0xC]
        lea eax, ss:[esp+0x2C]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_6206c40
        add esp, 0xC
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call public_6206b80
        public_6225210 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0xC], edx
        jmp public_6225100
        public_622521c : nop
        lea ecx, ds:[eax+0xC]
        mov edx, esi
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebp
        xor ebp, ebp
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], ebp
        mov dword ptr ds : [edx+8], ecx
        jmp public_6225104
        UNREACHABLE_TRAP(0x6225000)
    }
}

#undef public_6225065
#undef public_6225100
#undef public_6225104
#undef public_6225113
#undef public_6225126
#undef public_622519d
#undef public_6225210
#undef public_622521c
