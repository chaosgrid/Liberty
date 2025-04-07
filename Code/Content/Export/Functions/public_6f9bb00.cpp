#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e020);
CLANG_FORWARD_PROC_SYMBOL(public_6f59450);
CLANG_FORWARD_PROC_SYMBOL(public_6f59480);
CLANG_FORWARD_PROC_SYMBOL(public_6f852e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f94b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f9bb00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1921);

#define public_6f9bb50 _public_6f9bb50
#define public_6f9bb73 _public_6f9bb73
#define public_6f9bbb5 _public_6f9bbb5
#define public_6f9bc05 _public_6f9bc05
#define public_6f9bcd1 _public_6f9bcd1
#define public_6f9bd66 _public_6f9bd66
#define public_6f9bd7b _public_6f9bd7b
#define public_6f9bdc1 _public_6f9bdc1
#define public_6f9be03 _public_6f9be03
#define public_6f9be1d _public_6f9be1d
#define public_6f9be74 _public_6f9be74
#define public_6f9be9b _public_6f9be9b
#define public_6f9bea2 _public_6f9bea2
#define public_6f9bec3 _public_6f9bec3

PROC_DECLARE(0x6f9bb00, internal_6f9bb00, public_6f9bb00);
extern "C" NAKED register_t __cdecl internal_6f9bb00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1921 @0x6f9bb02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1921
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x524
        mov ecx, dword ptr ss : [esp+0x540]
        push edi
        call public_6f59450
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x548]
        mov edi, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x14], edi
        je public_6f9bec3
        push ebx
        push ebp
        push esi
        mov edi, edi
        public_6f9bb50 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        xor esi, esi
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x1C], esi
        jle public_6f9bea2
        public_6f9bb73 : nop
        mov ecx, dword ptr ss : [esp+0x550]
        push esi
        call public_6f59480
        mov edx, dword ptr ss : [ebp+4]
        mov ebx, eax
        cmp edx, dword ptr ds : [ebx+0x34]
        jne public_6f9be74
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6f9bbb5
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x54C]
        fnstsw ax
        test ah, 5
        jp public_6f9be74
        public_6f9bbb5 : nop
        lea ecx, ss:[esp+0x3C]
        call public_6f852e0
        mov eax, dword ptr ds : [public_6fd3d88]
        mov ecx, eax
        push ecx
        inc eax
/*FIXUP push offset public_6fbccec @0x6f9bbc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbccec
/*FIXUP push offset public_6fd3d00 @0x6f9bbcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd3d00
        mov dword ptr ss : [esp+0x548], 0
        mov dword ptr ds : [public_6fd3d88], eax
        call dword ptr ds : [public_6fb3360]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 0xC
        mov edi, offset public_6fd3d00
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f9bc05
        mov eax, 0x2F
        public_6f9bc05 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fd3d00
        lea edi, ss:[esp+0x428]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x428], 0
        mov dword ptr ss : [esp+0x424], eax
        mov eax, dword ptr ss : [esp+0x548]
        fld dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [esp+0x498], eax
        mov eax, dword ptr ss : [esp+0x544]
        lea esi, ds:[ebx+4]
        lea edi, ss:[esp+0x458]
        fadd dword ptr ds : [eax+0x28]
        fld dword ptr ds : [ebx+0x2C]
        fadd dword ptr ds : [eax+0x24]
        fld dword ptr ds : [ebx+0x28]
        fadd dword ptr ds : [eax+0x20]
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x47C], ecx
        fstp dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x480], edx
        fstp dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [ebp+0x24]
        fsub dword ptr ss : [ebp+0x30]
        mov dword ptr ss : [esp+0x484], eax
        fld dword ptr ss : [ebp+0x34]
        mov ecx, 9
        fsub dword ptr ss : [ebp+0x30]
        rep movsd
        fdivp 
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ss : [esp+0x488], ecx
        mov dword ptr ss : [esp+0x490], edx
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fbd18c]
        fnstsw ax
        test ah, 1
        jne public_6f9bcd1
        mov dword ptr ss : [esp+0x14], 0x3F7FBE77
        public_6f9bcd1 : nop
        fild dword ptr ss : [ebp+0x3C]
        fmul dword ptr ss : [esp+0x14]
        call public_6fa9130
        lea eax, ds:[eax+eax*2]
        lea ecx, ds : [eax*8+public_6fbcbf8]
        push ecx
        call dword ptr ds : [public_6fb3000]
        lea edx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x30], eax
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        call public_6f3e020
        fld dword ptr ss : [ebp+0x2C]
        fsub dword ptr ss : [ebp+0x28]
        mov edx, dword ptr ss : [esp+0x550]
        mov ecx, dword ptr ds : [public_6fbcbd0]
        mov eax, dword ptr ds : [edx+0x30]
        fmul dword ptr ss : [esp+0x20]
        add esp, 0xC
        mov byte ptr ss : [esp+0x41C], 1
        fadd dword ptr ss : [ebp+0x28]
        mov dword ptr ss : [esp+0x504], ecx
        mov dword ptr ss : [esp+0x510], eax
        mov dword ptr ss : [esp+0x514], 0
        call public_6fa9130
        mov ecx, dword ptr ss : [esp+0x52C]
        mov dword ptr ss : [esp+0x520], eax
        mov eax, dword ptr ss : [esp+0x528]
        cmp eax, ecx
        mov ebx, eax
        mov edi, ecx
        mov esi, eax
        je public_6f9bd7b
        public_6f9bd66 : nop
        lea ecx, ds:[esi+0xEC]
        call public_6f15350
        add esi, 0x108
        cmp esi, edi
        jne public_6f9bd66
        public_6f9bd7b : nop
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [ebp+4]
        fadd dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x558]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x52C], ebx
        mov dword ptr ss : [esp+0x50C], ecx
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x508], ebp
        mov ebx, dword ptr ds : [esi+4]
        push 0x500
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6f9bdc1
        mov ebx, eax
        public_6f9bdc1 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x3C]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6fa3ec0
        mov edx, dword ptr ds : [edi+8]
        add esp, 8
        inc edx
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ss : [esp+0x52C]
        mov esi, dword ptr ss : [esp+0x528]
        cmp esi, eax
        mov dword ptr ss : [esp+0x53C], 1
        mov edi, eax
        je public_6f9be1d
        public_6f9be03 : nop
        push 0
        mov ecx, esi
        call public_6f94b00
        add esi, 0x108
        cmp esi, edi
        jne public_6f9be03
        mov esi, dword ptr ss : [esp+0x528]
        public_6f9be1d : nop
        push esi
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ss : [esp+0x528], eax
        mov dword ptr ss : [esp+0x52C], eax
        mov dword ptr ss : [esp+0x530], eax
        lea ecx, ss:[esp+0x4E8]
        mov dword ptr ss : [esp+0x53C], 2
        call dword ptr ds : [public_6fb3034]
        lea ecx, ss:[esp+0x4A8]
        mov dword ptr ss : [esp+0x53C], 0xFFFFFFFF
        call public_6f15350
        mov edi, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6f9be74 : nop
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x54C]
        fnstsw ax
        test ah, 1
        je public_6f9be9b
        mov eax, dword ptr ss : [esp+0x24]
        inc esi
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], esi
        jl public_6f9bb73
        public_6f9be9b : nop
        mov eax, dword ptr ss : [esp+0x554]
        public_6f9bea2 : nop
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        fadd dword ptr ss : [esp+0x18]
        add edi, 8
        cmp edi, ecx
        mov dword ptr ss : [esp+0x20], edi
        fstp dword ptr ss : [esp+0x18]
        jne public_6f9bb50
        pop esi
        pop ebp
        pop ebx
        public_6f9bec3 : nop
        mov ecx, dword ptr ss : [esp+0x528]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x530
        ret 0x18
        UNREACHABLE_TRAP(0x6f9bb00)
    }
}

#undef public_6f9bb50
#undef public_6f9bb73
#undef public_6f9bbb5
#undef public_6f9bc05
#undef public_6f9bcd1
#undef public_6f9bd66
#undef public_6f9bd7b
#undef public_6f9bdc1
#undef public_6f9be03
#undef public_6f9be1d
#undef public_6f9be74
#undef public_6f9be9b
#undef public_6f9bea2
#undef public_6f9bec3
