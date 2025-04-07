#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220a00);
CLANG_FORWARD_PROC_SYMBOL(public_6220a40);
CLANG_FORWARD_PROC_SYMBOL(public_6222e00);
CLANG_FORWARD_PROC_SYMBOL(public_6222ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6222f30);
CLANG_FORWARD_PROC_SYMBOL(public_6223070);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248bc6);

#define public_622038e _public_622038e
#define public_62203a2 _public_62203a2
#define public_62203ac _public_62203ac
#define public_62203c3 _public_62203c3
#define public_622042f _public_622042f
#define public_6220431 _public_6220431
#define public_62204ae _public_62204ae
#define public_62204f1 _public_62204f1
#define public_6220517 _public_6220517
#define public_6220543 _public_6220543
#define public_6220561 _public_6220561
#define public_6220587 _public_6220587
#define public_6220597 _public_6220597
#define public_62205b4 _public_62205b4
#define public_62205bb _public_62205bb
#define public_62205dc _public_62205dc

PROC_DECLARE(0x6220310, internal_6220310, public_6220310);
extern "C" NAKED register_t __cdecl internal_6220310()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6248bc6 @0x6220318*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248bc6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x164
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x188]
/*FIXUP push offset public_625617c @0x6220336*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625617c
        push edi
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x60]
        test eax, eax
        je public_62203a2
        xor ebx, ebx
        lea ecx, ss:[esp+0x10]
        push ebx
/*FIXUP push offset public_625617c @0x622034c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625617c
        push edi
        call public_6222e00
        lea ecx, ss:[esp+0x28]
        push 4
        push ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x184], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x24], ebx
        call public_6222f30
        cmp eax, ebx
        jl public_622038e
        lea edx, ss:[esp+0x1C]
        push 4
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6222f30
        cmp eax, ebx
        jge public_62203ac
        public_622038e : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x17C], 0xFFFFFFFF
        call public_6222ec0
        public_62203a2 : nop
        mov eax, 0xFFFFFFFA
        jmp public_62205dc
        public_62203ac : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x24], ebx
        cmp eax, ebx
        jle public_62205bb
        mov ebp, dword ptr ss : [esp+0x184]
        public_62203c3 : nop
        push 0x4C
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x48], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x17C], 1
        je public_622042f
        lea eax, ss:[esp+0x23]
        lea ecx, ds:[esi+4]
        push eax
        mov dword ptr ds : [esi], offset public_624d928
        call dword ptr ds : [public_624b030]
        lea ecx, ss:[esp+0x21]
        mov byte ptr ss : [esp+0x17C], 2
        push ecx
        lea ecx, ds:[esi+0x14]
        call public_6220a00
        lea edx, ss:[esp+0x22]
        lea ecx, ds:[esi+0x24]
        push edx
        mov byte ptr ss : [esp+0x180], 3
        call public_6220a40
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi], offset public_624d8d0
        mov dword ptr ds : [esi+0x48], 1
        jmp public_6220431
        public_622042f : nop
        xor esi, esi
        public_6220431 : nop
        lea eax, ss:[esp+0x74]
        push 0x100
        push eax
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x184], bl
        call public_6223070
        cmp eax, ebx
        jl public_6220597
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x74]
        push edx
        push esi
        call dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_624d8cc]
        fnstsw ax
        and eax, 0x100
        jne public_62204ae
        lea eax, ss:[esp+0x54]
        push 0xC
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6222f30
        cmp eax, ebx
        jl public_622038e
        lea ecx, ss:[esp+0x60]
        push 4
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6222f30
        cmp eax, ebx
        jl public_622038e
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x54]
        push eax
        push esi
        call dword ptr ds : [edx+0x4C]
        jmp public_62204f1
        public_62204ae : nop
        mov dword ptr ss : [esp+0x30], 0
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x2C], 0
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x3C], edx
        lea edx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x34], 0
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ds : [esi]
        push edx
        push esi
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x4C], 0
        call dword ptr ds : [ecx+0x4C]
        public_62204f1 : nop
        lea eax, ss:[esp+0x18]
        push 4
        push eax
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x20], ebx
        call public_6222f30
        cmp eax, ebx
        jl public_62205bb
        mov eax, dword ptr ss : [esp+0x18]
        xor edi, edi
        cmp eax, ebx
        jle public_6220543
        public_6220517 : nop
        lea ecx, ss:[esp+0x64]
        push 0x10
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6222f30
        test eax, eax
        jl public_6220543
        mov eax, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x68]
        push ebx
        push ecx
        push esi
        call dword ptr ds : [edx+0x18]
        inc edi
        cmp edi, dword ptr ss : [esp+0x18]
        jl public_6220517
        public_6220543 : nop
        lea edx, ss:[esp+0x18]
        push 4
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6222f30
        cmp eax, ebx
        jl public_62205b4
        mov eax, dword ptr ss : [esp+0x18]
        xor edi, edi
        cmp eax, ebx
        jle public_6220587
        public_6220561 : nop
        lea eax, ss:[esp+0x4C]
        push 8
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6222f30
        cmp eax, ebx
        jl public_6220587
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x4C]
        push edx
        push esi
        call dword ptr ds : [ecx+0x24]
        inc edi
        cmp edi, dword ptr ss : [esp+0x18]
        jl public_6220561
        public_6220587 : nop
        mov eax, dword ptr ss : [ebp]
        push ebx
        push esi
        push ebp
        call dword ptr ds : [eax+0x10]
        mov edi, dword ptr ss : [esp+0x188]
        public_6220597 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        jl public_62203c3
        jmp public_62205bb
        public_62205b4 : nop
        mov edi, dword ptr ss : [esp+0x188]
        public_62205bb : nop
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_6256178 @0x62205bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256178
        push edi
        call dword ptr ds : [edx+0x60]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x17C], 0xFFFFFFFF
        call public_6222ec0
        xor eax, eax
        public_62205dc : nop
        mov ecx, dword ptr ss : [esp+0x174]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x170
        ret 8
        UNREACHABLE_TRAP(0x6220310)
    }
}

#undef public_622038e
#undef public_62203a2
#undef public_62203ac
#undef public_62203c3
#undef public_622042f
#undef public_6220431
#undef public_62204ae
#undef public_62204f1
#undef public_6220517
#undef public_6220543
#undef public_6220561
#undef public_6220587
#undef public_6220597
#undef public_62205b4
#undef public_62205bb
#undef public_62205dc
