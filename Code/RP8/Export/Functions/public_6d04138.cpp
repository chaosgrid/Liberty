#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04138);
CLANG_FORWARD_PROC_SYMBOL(public_6d15b80);
CLANG_FORWARD_PROC_SYMBOL(public_6d162b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16310);
CLANG_FORWARD_PROC_SYMBOL(public_6d163b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2bbba);
CLANG_FORWARD_PROC_SYMBOL(public_6d2d032);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d041e3 _public_6d041e3
#define public_6d041ed _public_6d041ed
#define public_6d042ae _public_6d042ae
#define public_6d042fb _public_6d042fb
#define public_6d04322 _public_6d04322
#define public_6d04331 _public_6d04331
#define public_6d043e9 _public_6d043e9
#define public_6d0440c _public_6d0440c
#define public_6d044c3 _public_6d044c3
#define public_6d04551 _public_6d04551
#define public_6d045df _public_6d045df
#define public_6d0466c _public_6d0466c

PROC_DECLARE(0x6d04138, internal_6d04138, public_6d04138);
extern "C" NAKED register_t __cdecl internal_6d04138()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x6074
        call public_6d2f270
        push esi
        push edi
        mov dword ptr ss : [ebp-0x6070], ecx
        mov eax, dword ptr ss : [ebp-0x6070]
        mov ecx, dword ptr ds : [eax+0x130]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x6070]
        add ecx, 0x44C
        call public_6d2bbba
        mov edx, dword ptr ss : [ebp-0x6070]
        mov eax, dword ptr ds : [edx+0x130]
        mov dword ptr ss : [ebp-0x603C], eax
        mov ecx, dword ptr ss : [ebp-0x6070]
        add ecx, 0x138
        mov dword ptr ss : [ebp-0x6038], ecx
        mov dword ptr ss : [ebp-8], 0
        mov edx, dword ptr ss : [ebp-0x6038]
        mov al, byte ptr ds : [edx+0x10]
        shr al, 1
        and al, 1
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d042ae
        mov edx, dword ptr ss : [ebp-0x6038]
        mov al, byte ptr ds : [edx+0x10]
        and al, 0xFD
        mov ecx, dword ptr ss : [ebp-0x6038]
        mov byte ptr ds : [ecx+0x10], al
        mov edx, dword ptr ss : [ebp-0x6038]
        cmp dword ptr ds : [edx+8], 0
        je public_6d041e3
        mov eax, dword ptr ss : [ebp-0x6038]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x6074], edx
        jmp public_6d041ed
        public_6d041e3 : nop
        mov dword ptr ss : [ebp-0x6074], 0
        public_6d041ed : nop
        mov eax, dword ptr ss : [ebp-0x6074]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0x6038]
        mov edx, dword ptr ds : [ecx+0xC]
        push edx
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x603C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x603C]
        push eax
        call dword ptr ds : [edx+0x154]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d042ae
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6af04 @0x6d04233*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6af04
        lea edx, ss:[ebp-0x2018]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x6028], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x201C]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x201C], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x201C]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x201C], eax
        mov ecx, dword ptr ss : [ebp-0x6028]
        push ecx
        push 0x34
/*FIXUP push offset public_6d6aeb0 @0x6d0428e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aeb0
/*FIXUP push offset public_6d6ade0 @0x6d04293*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov edx, dword ptr ss : [ebp-0x201C]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6d044c3
        public_6d042ae : nop
        mov ecx, dword ptr ss : [ebp-0x6038]
        mov dl, byte ptr ds : [ecx+0x10]
        and dl, 1
        xor eax, eax
        mov al, dl
        test eax, eax
        je public_6d044c3
        mov ecx, dword ptr ss : [ebp-0x6038]
        mov dl, byte ptr ds : [ecx+0x10]
        and dl, 0xFE
        mov eax, dword ptr ss : [ebp-0x6038]
        mov byte ptr ds : [eax+0x10], dl
        mov ecx, dword ptr ss : [ebp-0x6038]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d042fb
        mov dword ptr ss : [ebp-0x14], 0
        mov edx, dword ptr ss : [ebp-0x6038]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6d04331
        public_6d042fb : nop
        mov ecx, dword ptr ss : [ebp-0x6038]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+0x20]
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-0x6038]
        cmp dword ptr ds : [ecx], 0
        je public_6d04322
        mov edx, dword ptr ss : [ebp-0x6038]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6d04331
        public_6d04322 : nop
        mov ecx, dword ptr ss : [ebp-0x6038]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x18], eax
        public_6d04331 : nop
        cmp dword ptr ss : [ebp-0x18], 0
        je public_6d043e9
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        mov edx, dword ptr ss : [ebp-0x603C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x603C]
        push ecx
        call dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d043e9
        mov edx, dword ptr ss : [ebp-8]
        push edx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6ae94 @0x6d0436e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae94
        lea eax, ss:[ebp-0x401C]
        push eax
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x602C], eax
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x4020]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x4020], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x4020]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x4020], ecx
        mov edx, dword ptr ss : [ebp-0x602C]
        push edx
        push 0x4F
/*FIXUP push offset public_6d6aeb0 @0x6d043c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aeb0
/*FIXUP push offset public_6d6ade0 @0x6d043cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov eax, dword ptr ss : [ebp-0x4020]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_6d044c3
        public_6d043e9 : nop
        mov dword ptr ss : [ebp-0x6030], 0
        mov edx, dword ptr ss : [ebp-0x18]
        and edx, 0x10
        test edx, edx
        je public_6d0440c
        mov eax, dword ptr ss : [ebp-0x6030]
        add eax, 0xC
        mov dword ptr ss : [ebp-0x6030], eax
        public_6d0440c : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_6d16310
        add esp, 4
        mov esi, eax
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        call public_6d163b0
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_6d162b0
        add esp, 4
        add eax, dword ptr ss : [ebp-0x6030]
        add eax, edi
        add eax, esi
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        mov edx, dword ptr ss : [ebp-0x14]
        push edx
        push 0
        mov eax, dword ptr ss : [ebp-0x603C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x603C]
        push edx
        call dword ptr ds : [ecx+0x14C]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d044c3
        mov eax, dword ptr ss : [ebp-8]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6ae7c @0x6d04476*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae7c
        lea ecx, ss:[ebp-0x6020]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x6034], eax
        mov edx, dword ptr ss : [ebp-0x6034]
        push edx
        push 0x54
/*FIXUP push offset public_6d6aeb0 @0x6d04499*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aeb0
/*FIXUP push offset public_6d6ade0 @0x6d0449e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        push 2
        push 0x10000
        lea ecx, ss:[ebp-0x6024]
        call public_6d15b80
        mov eax, dword ptr ds : [eax]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d044c3 : nop
        mov dword ptr ss : [ebp-0x604C], 3
        mov edx, dword ptr ss : [ebp-0x6070]
        mov eax, dword ptr ds : [edx+0x130]
        mov dword ptr ss : [ebp-0x6048], eax
        mov ecx, dword ptr ss : [ebp-0x6070]
        add ecx, 0x2284
        mov dword ptr ss : [ebp-0x6044], ecx
        mov edx, dword ptr ss : [ebp-0x6044]
        movzx eax, byte ptr ds : [edx+0x40]
        test eax, eax
        jne public_6d04551
        mov ecx, dword ptr ss : [ebp-0x6044]
        mov byte ptr ds : [ecx+0x41], 0
        mov edx, dword ptr ss : [ebp-0x6044]
        mov byte ptr ds : [edx+0x40], 1
        mov eax, dword ptr ss : [ebp-0x6044]
        push eax
        mov ecx, dword ptr ss : [ebp-0x604C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x6048]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x6048]
        push ecx
        call dword ptr ds : [eax+0x94]
        mov dword ptr ss : [ebp-0x6040], eax
        xor edx, edx
        cmp dword ptr ss : [ebp-0x6040], 0
        setge dl
        mov eax, dword ptr ss : [ebp-0x6044]
        mov byte ptr ds : [eax+0x40], dl
        public_6d04551 : nop
        mov dword ptr ss : [ebp-0x605C], 2
        mov eax, dword ptr ss : [ebp-0x6070]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0x6058], ecx
        mov edx, dword ptr ss : [ebp-0x6070]
        add edx, 0x21FC
        mov dword ptr ss : [ebp-0x6054], edx
        mov eax, dword ptr ss : [ebp-0x6054]
        movzx ecx, byte ptr ds : [eax+0x40]
        test ecx, ecx
        jne public_6d045df
        mov edx, dword ptr ss : [ebp-0x6054]
        mov byte ptr ds : [edx+0x41], 0
        mov eax, dword ptr ss : [ebp-0x6054]
        mov byte ptr ds : [eax+0x40], 1
        mov ecx, dword ptr ss : [ebp-0x6054]
        push ecx
        mov edx, dword ptr ss : [ebp-0x605C]
        push edx
        mov eax, dword ptr ss : [ebp-0x6058]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x6058]
        push edx
        call dword ptr ds : [ecx+0x94]
        mov dword ptr ss : [ebp-0x6050], eax
        xor eax, eax
        cmp dword ptr ss : [ebp-0x6050], 0
        setge al
        mov ecx, dword ptr ss : [ebp-0x6054]
        mov byte ptr ds : [ecx+0x40], al
        public_6d045df : nop
        mov dword ptr ss : [ebp-0x606C], 0x100
        mov ecx, dword ptr ss : [ebp-0x6070]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0x6068], edx
        mov eax, dword ptr ss : [ebp-0x6070]
        add eax, 0x2240
        mov dword ptr ss : [ebp-0x6064], eax
        mov ecx, dword ptr ss : [ebp-0x6064]
        movzx edx, byte ptr ds : [ecx+0x40]
        test edx, edx
        jne public_6d0466c
        mov eax, dword ptr ss : [ebp-0x6064]
        mov byte ptr ds : [eax+0x41], 0
        mov ecx, dword ptr ss : [ebp-0x6064]
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ss : [ebp-0x6064]
        push edx
        mov eax, dword ptr ss : [ebp-0x606C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x6068]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x6068]
        push eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ss : [ebp-0x6060], eax
        xor ecx, ecx
        cmp dword ptr ss : [ebp-0x6060], 0
        setge cl
        mov edx, dword ptr ss : [ebp-0x6064]
        mov byte ptr ds : [edx+0x40], cl
        public_6d0466c : nop
        mov edx, dword ptr ss : [ebp-0x6070]
        mov eax, dword ptr ds : [edx+0x130]
        push eax
        mov ecx, dword ptr ss : [ebp-0x6070]
        add ecx, 0x21F4
        call public_6d2d032
        mov dword ptr ss : [ebp-4], eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d04138)
    }
}

#undef public_6d041e3
#undef public_6d041ed
#undef public_6d042ae
#undef public_6d042fb
#undef public_6d04322
#undef public_6d04331
#undef public_6d043e9
#undef public_6d0440c
#undef public_6d044c3
#undef public_6d04551
#undef public_6d045df
#undef public_6d0466c
