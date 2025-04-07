#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e020);
CLANG_FORWARD_PROC_SYMBOL(public_6f59450);
CLANG_FORWARD_PROC_SYMBOL(public_6f59480);
CLANG_FORWARD_PROC_SYMBOL(public_6f852e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f94b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f9af40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1921);

#define public_6f9af94 _public_6f9af94
#define public_6f9afba _public_6f9afba
#define public_6f9afbd _public_6f9afbd
#define public_6f9afc9 _public_6f9afc9
#define public_6f9afd7 _public_6f9afd7
#define public_6f9b019 _public_6f9b019
#define public_6f9b069 _public_6f9b069
#define public_6f9b135 _public_6f9b135
#define public_6f9b1d0 _public_6f9b1d0
#define public_6f9b1e5 _public_6f9b1e5
#define public_6f9b22b _public_6f9b22b
#define public_6f9b270 _public_6f9b270
#define public_6f9b28a _public_6f9b28a
#define public_6f9b320 _public_6f9b320
#define public_6f9b347 _public_6f9b347
#define public_6f9b352 _public_6f9b352
#define public_6f9b372 _public_6f9b372

PROC_DECLARE(0x6f9af40, internal_6f9af40, public_6f9af40);
extern "C" NAKED register_t __cdecl internal_6f9af40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1921 @0x6f9af42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1921
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x534
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x554]
        push edi
        mov dword ptr ss : [esp+0x28], ebx
        call public_6f59450
        mov ecx, dword ptr ss : [esp+0x55C]
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x18], eax
        cmp edi, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x24], edi
        je public_6f9b372
        push ebp
        push esi
        public_6f9af94 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [ebp+4]
        xor esi, esi
        sub eax, esi
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x1C], esi
        je public_6f9afba
        dec eax
        jne public_6f9afc9
        mov al, byte ptr ds : [ebx+0xF]
        jmp public_6f9afbd
        public_6f9afba : nop
        mov al, byte ptr ds : [ebx+0xD]
        public_6f9afbd : nop
        test al, al
        je public_6f9afc9
        mov dword ptr ss : [esp+0x1C], 2
        public_6f9afc9 : nop
        cmp dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x28], esi
        jle public_6f9b352
        public_6f9afd7 : nop
        mov ecx, dword ptr ss : [esp+0x560]
        push esi
        call public_6f59480
        mov ecx, dword ptr ss : [ebp+4]
        mov ebx, eax
        cmp ecx, dword ptr ds : [ebx+0x34]
        jne public_6f9b320
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6f9b019
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x55C]
        fnstsw ax
        test ah, 5
        jp public_6f9b320
        public_6f9b019 : nop
        lea ecx, ss:[esp+0x4C]
        call public_6f852e0
        mov eax, dword ptr ds : [public_6fd3d88]
        mov ecx, eax
        push ecx
        inc eax
/*FIXUP push offset public_6fbccec @0x6f9b02b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbccec
/*FIXUP push offset public_6fd3d00 @0x6f9b030*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd3d00
        mov dword ptr ss : [esp+0x558], 0
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
        jb public_6f9b069
        mov eax, 0x2F
        public_6f9b069 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fd3d00
        lea edi, ss:[esp+0x438]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x438], 0
        mov dword ptr ss : [esp+0x434], eax
        mov eax, dword ptr ss : [esp+0x558]
        fld dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [esp+0x4A8], eax
        mov eax, dword ptr ss : [esp+0x554]
        lea esi, ds:[ebx+4]
        lea edi, ss:[esp+0x468]
        fadd dword ptr ds : [eax+0x28]
        fld dword ptr ds : [ebx+0x2C]
        fadd dword ptr ds : [eax+0x24]
        fld dword ptr ds : [ebx+0x28]
        fadd dword ptr ds : [eax+0x20]
        fstp dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x48C], ecx
        fstp dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x490], edx
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [ebp+0x24]
        fsub dword ptr ss : [ebp+0x30]
        mov dword ptr ss : [esp+0x494], eax
        fld dword ptr ss : [ebp+0x34]
        mov ecx, 9
        fsub dword ptr ss : [ebp+0x30]
        rep movsd
        fdivp 
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ss : [esp+0x498], ecx
        mov dword ptr ss : [esp+0x4A0], edx
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fbd18c]
        fnstsw ax
        test ah, 1
        jne public_6f9b135
        mov dword ptr ss : [esp+0x14], 0x3F7FBE77
        public_6f9b135 : nop
        fild dword ptr ss : [ebp+0x3C]
        fmul dword ptr ss : [esp+0x14]
        call public_6fa9130
        lea eax, ds:[eax+eax*2]
        lea ecx, ds : [eax*8+public_6fbcbf8]
        push ecx
        call dword ptr ds : [public_6fb3000]
        lea edx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x44], eax
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        call public_6f3e020
        fld dword ptr ss : [ebp+0x2C]
        fsub dword ptr ss : [ebp+0x28]
        mov ecx, dword ptr ds : [public_6fbcbd0]
        mov edx, dword ptr ss : [esp+0x560]
        mov eax, dword ptr ds : [edx+0x30]
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x520], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [ebp+0x28]
        add esp, 0xC
        mov byte ptr ss : [esp+0x42C], 1
        mov dword ptr ss : [esp+0x520], eax
        mov dword ptr ss : [esp+0x524], ecx
        call public_6fa9130
        mov ecx, dword ptr ss : [esp+0x53C]
        mov dword ptr ss : [esp+0x530], eax
        mov eax, dword ptr ss : [esp+0x538]
        cmp eax, ecx
        mov ebx, eax
        mov edi, ecx
        mov esi, eax
        je public_6f9b1e5
        lea ebx, ds:[ebx]
        public_6f9b1d0 : nop
        lea ecx, ds:[esi+0xEC]
        call public_6f15350
        add esi, 0x108
        cmp esi, edi
        jne public_6f9b1d0
        public_6f9b1e5 : nop
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [ebp+4]
        fadd dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x568]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x53C], ebx
        mov dword ptr ss : [esp+0x51C], edx
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x518], ebp
        mov ebx, dword ptr ds : [esi+4]
        push 0x500
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6f9b22b
        mov ebx, eax
        public_6f9b22b : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        add eax, 8
        push eax
        call public_6fa3ec0
        mov edx, dword ptr ds : [edi+8]
        add esp, 8
        inc edx
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ss : [esp+0x53C]
        mov esi, dword ptr ss : [esp+0x538]
        cmp esi, eax
        mov dword ptr ss : [esp+0x54C], 1
        mov edi, eax
        je public_6f9b28a
        lea ecx, ds:[ecx]
        public_6f9b270 : nop
        push 0
        mov ecx, esi
        call public_6f94b00
        add esi, 0x108
        cmp esi, edi
        jne public_6f9b270
        mov esi, dword ptr ss : [esp+0x538]
        public_6f9b28a : nop
        push esi
        call public_6fa8fe0
        xor esi, esi
        add esp, 4
        mov dword ptr ss : [esp+0x538], esi
        mov dword ptr ss : [esp+0x53C], esi
        mov dword ptr ss : [esp+0x540], esi
        lea ecx, ss:[esp+0x4F8]
        mov dword ptr ss : [esp+0x54C], 2
        call dword ptr ds : [public_6fb3034]
        lea edx, ss:[esp+0x48]
        push edx
        lea ecx, ss:[esp+0x4BC]
        mov dword ptr ss : [esp+0x550], 0xFFFFFFFF
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x4BC]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x4C4]
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x4BC]
        push ecx
        call public_6fa8fe0
        mov edi, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x4C0], esi
        mov dword ptr ss : [esp+0x4C4], esi
        mov esi, dword ptr ss : [esp+0x2C]
        add esp, 4
        public_6f9b320 : nop
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x55C]
        fnstsw ax
        test ah, 1
        je public_6f9b347
        mov eax, dword ptr ss : [esp+0x20]
        inc esi
        cmp esi, eax
        mov dword ptr ss : [esp+0x28], esi
        jl public_6f9afd7
        public_6f9b347 : nop
        mov ebx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x564]
        public_6f9b352 : nop
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        fadd dword ptr ss : [esp+0x18]
        add edi, 8
        cmp edi, eax
        mov dword ptr ss : [esp+0x2C], edi
        fstp dword ptr ss : [esp+0x18]
        jne public_6f9af94
        pop esi
        pop ebp
        public_6f9b372 : nop
        mov ecx, dword ptr ss : [esp+0x53C]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x540
        ret 0x18
        UNREACHABLE_TRAP(0x6f9af40)
    }
}

#undef public_6f9af94
#undef public_6f9afba
#undef public_6f9afbd
#undef public_6f9afc9
#undef public_6f9afd7
#undef public_6f9b019
#undef public_6f9b069
#undef public_6f9b135
#undef public_6f9b1d0
#undef public_6f9b1e5
#undef public_6f9b22b
#undef public_6f9b270
#undef public_6f9b28a
#undef public_6f9b320
#undef public_6f9b347
#undef public_6f9b352
#undef public_6f9b372
