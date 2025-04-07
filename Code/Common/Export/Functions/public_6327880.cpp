#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6306fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6327880);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6397107);

#define public_63278f2 _public_63278f2
#define public_6327938 _public_6327938
#define public_6327981 _public_6327981
#define public_6327983 _public_6327983
#define public_6327991 _public_6327991
#define public_6327a08 _public_6327a08
#define public_6327a12 _public_6327a12
#define public_6327a46 _public_6327a46
#define public_6327a62 _public_6327a62
#define public_6327a6d _public_6327a6d
#define public_6327a7c _public_6327a7c

PROC_DECLARE(0x6327880, internal_6327880, public_6327880);
extern "C" NAKED register_t __cdecl internal_6327880()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6397107 @0x6327888*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397107
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x206C
        mov dword ptr fs : [0], esp
        call public_6391dc0
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x20], ebp
        mov edi, dword ptr ss : [esp+0x2088]
        xor esi, esi
        cmp edi, esi
        mov dword ptr ss : [esp+0x2080], esi
        mov dword ptr ss : [ebp], offset public_63a4608
        je public_6327a6d
        mov al, byte ptr ss : [esp+0xF]
        push ebx
        push esi
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x18], al
        call dword ptr ds : [public_63991b8]
        cmp byte ptr ds : [edi], 0x5C
        mov byte ptr ss : [esp+0x2084], 1
        jne public_63278f2
        cmp byte ptr ds : [edi+1], 0x5C
        je public_6327991
        public_63278f2 : nop
        cmp byte ptr ds : [edi+1], 0x3A
        je public_6327991
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push esi
/*FIXUP push offset public_640956c @0x6327906*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_640956c
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_63991a8]
        mov edx, dword ptr ss : [esp+0x1C]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [public_63991c0]
        not ecx
        dec ecx
        mov edi, ecx
        mov ecx, dword ptr ds : [eax]
        sub ecx, edx
        cmp ecx, edi
        ja public_6327938
        call dword ptr ds : [public_63991b4]
        public_6327938 : nop
        cmp edi, esi
        jbe public_6327983
        mov edx, dword ptr ss : [esp+0x1C]
        lea ebx, ds:[edx+edi]
        push esi
        push ebx
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6327981
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x208C]
        mov ecx, edi
        lea edi, ds:[edx+eax]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [ecx+ebx], 0
        public_6327981 : nop
        xor esi, esi
        public_6327983 : nop
        mov edi, dword ptr ss : [esp+0x18]
        cmp edi, esi
        jne public_6327991
        mov edi, dword ptr ds : [public_63991d0]
        public_6327991 : nop
        push 0x2010
        push esi
        push esi
        push esi
        push edi
        push esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov dword ptr ss : [ebp+0x14], esi
        call dword ptr ds : [public_639938c]
        cmp eax, esi
        mov dword ptr ss : [ebp+0x10], eax
        je public_6327a12
        push esi
        call dword ptr ds : [public_639939c]
        mov ebx, eax
        push ebx
        call dword ptr ds : [public_639908c]
        cmp eax, esi
        mov dword ptr ss : [ebp+0xC], eax
        je public_6327a08
        xor eax, eax
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, 0x15
        lea edi, ss:[esp+0x2C]
        rep stosd
        mov eax, dword ptr ss : [ebp+0x10]
        push 0x54
        push eax
        call dword ptr ds : [public_6399094]
        mov ecx, dword ptr ss : [ebp+0x10]
        fild dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [ebp+0xC]
        push ecx
        push edx
        fstp dword ptr ss : [ebp+4]
        fild dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [ebp+8]
        call dword ptr ds : [public_6399088]
        mov dword ptr ss : [ebp+0x14], eax
        public_6327a08 : nop
        push ebx
        push esi
        call dword ptr ds : [public_6399388]
        jmp public_6327a46
        public_6327a12 : nop
        push edi
        lea eax, ss:[esp+0x80]
/*FIXUP push offset public_63a45e4 @0x6327a1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a45e4
        push eax
        call public_6306fe0
        push eax
        push 0x43E
/*FIXUP push offset public_63a4588 @0x6327a2b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4588
        mov ecx, 0x100003
/*FIXUP push offset public_63a456c @0x6327a35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a456c
        push ecx
        mov ecx, dword ptr ds : [public_6399028]
        call dword ptr ds : [ecx]
        add esp, 0x20
        public_6327a46 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        pop ebx
        je public_6327a7c
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6327a62
        cmp cl, 0xFF
        je public_6327a62
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6327a7c
        public_6327a62 : nop
        push eax
        call public_6391d5a
        add esp, 4
        jmp public_6327a7c
        public_6327a6d : nop
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov dword ptr ss : [ebp+0x10], esi
        mov dword ptr ss : [ebp+0x14], esi
        public_6327a7c : nop
        mov ecx, dword ptr ss : [esp+0x2078]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x2078
        ret 4
        UNREACHABLE_TRAP(0x6327880)
    }
}

#undef public_63278f2
#undef public_6327938
#undef public_6327981
#undef public_6327983
#undef public_6327991
#undef public_6327a08
#undef public_6327a12
#undef public_6327a46
#undef public_6327a62
#undef public_6327a6d
#undef public_6327a7c
