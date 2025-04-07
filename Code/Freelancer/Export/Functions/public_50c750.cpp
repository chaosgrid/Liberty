#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50c750);
CLANG_FORWARD_PROC_SYMBOL(public_50c940);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bc80);
CLANG_FORWARD_PROC_SYMBOL(public_554e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_50c794 _public_50c794
#define public_50c798 _public_50c798
#define public_50c7cb _public_50c7cb
#define public_50c7cf _public_50c7cf
#define public_50c7f0 _public_50c7f0
#define public_50c840 _public_50c840
#define public_50c850 _public_50c850
#define public_50c85d _public_50c85d
#define public_50c868 _public_50c868
#define public_50c8a1 _public_50c8a1
#define public_50c8df _public_50c8df
#define public_50c912 _public_50c912
#define public_50c926 _public_50c926
#define public_50c930 _public_50c930

PROC_DECLARE(0x50c750, internal_50c750, public_50c750);
extern "C" NAKED register_t __cdecl internal_50c750()
{
    __asm
    {
        mov edx, dword ptr ds : [public_675198]
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebp
        inc edx
        push esi
        mov dword ptr ds : [public_675198], edx
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        cmp eax, esi
        push edi
        je public_50c794
        add eax, 0xC
        cmp eax, esi
        je public_50c794
        mov eax, dword ptr ds : [eax+4]
        cmp eax, esi
        je public_50c794
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        mov dword ptr ss : [esp+0x10], eax
        je public_50c798
        public_50c794 : nop
        mov dword ptr ss : [esp+0x10], esi
        public_50c798 : nop
        mov dword ptr ss : [esp+0x38], esi
        call public_54bc80
        test al, al
        je public_50c7cf
        call public_54baf0
        cmp eax, esi
        je public_50c7cb
        add eax, 0xC
        cmp eax, esi
        je public_50c7cb
        mov eax, dword ptr ds : [eax+4]
        cmp eax, esi
        je public_50c7cb
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 1
        cmp dl, 1
        mov dword ptr ss : [esp+0x38], eax
        je public_50c7cf
        public_50c7cb : nop
        mov dword ptr ss : [esp+0x38], esi
        public_50c7cf : nop
        mov al, byte ptr ds : [public_675178]
        test al, 1
        jne public_50c7f0
        mov dl, al
        or dl, 1
/*FIXUP push offset _public_50c940 @0x50c7dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_50c940
        mov byte ptr ds : [public_675178], dl
        call public_5b7e6c
        add esp, 4
        public_50c7f0 : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x3C]
        push 6
/*FIXUP push offset public_6750b8 @0x50c7fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6750b8
        push eax
        push ecx
        call public_554e90
        push eax
        call dword ptr ds : [public_5c6608]
        fld dword ptr ds : [ebx+0x88]
        fmul dword ptr ds : [public_5db53c]
        mov edi, eax
        add esp, 0x14
        cmp edi, esi
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x40], esi
        jle public_50c926
        mov ebx, dword ptr ss : [esp+0x44]
        mov ebp, offset public_6750b8
        nop 
        lea esp, ss:[esp]
        public_50c840 : nop
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [ecx+0x68]
        mov edx, dword ptr ds : [ecx+0x6C]
        cmp eax, edx
        je public_50c868
        mov esi, dword ptr ss : [ebp+0x1C]
        public_50c850 : nop
        cmp dword ptr ds : [eax], esi
        je public_50c85d
        add eax, 0xC
        cmp eax, edx
        jne public_50c850
        jmp public_50c868
        public_50c85d : nop
        mov dl, byte ptr ds : [eax+8]
        test dl, dl
        jne public_50c912
        public_50c868 : nop
        cmp ecx, dword ptr ss : [esp+0x10]
        je public_50c912
        cmp ecx, dword ptr ss : [esp+0x38]
        je public_50c912
        mov edx, dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ds : [ebx]
        push ebx
        mov dword ptr ss : [esp+0x48], edx
        lea esi, ds:[ecx+0x2C]
        call dword ptr ds : [eax+0x40]
        mov edi, eax
        mov eax, dword ptr ds : [public_675194]
        test eax, eax
        jne public_50c8a1
        call public_5b73e0
        mov dword ptr ds : [public_675194], eax
        public_50c8a1 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_5db538]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], eax
        fnstsw ax
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], edx
        test ah, 0x41
        jne public_50c8df
        mov dword ptr ss : [esp+0x30], 0xBDCCCCCD
        public_50c8df : nop
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+0x2C]
        fstp dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0x20]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [public_5c7500]
        fdiv dword ptr ss : [esp+0x30]
        fmulp 
        fmul dword ptr ss : [esp+0x44]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        je public_50c930
        mov edi, dword ptr ss : [esp+0x18]
        public_50c912 : nop
        mov eax, dword ptr ss : [esp+0x40]
        inc eax
        add ebp, 0x20
        cmp eax, edi
        mov dword ptr ss : [esp+0x40], eax
        jl public_50c840
        public_50c926 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x24
        ret 
        public_50c930 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x50c750)
    }
}

#undef public_50c794
#undef public_50c798
#undef public_50c7cb
#undef public_50c7cf
#undef public_50c7f0
#undef public_50c840
#undef public_50c850
#undef public_50c85d
#undef public_50c868
#undef public_50c8a1
#undef public_50c8df
#undef public_50c912
#undef public_50c926
#undef public_50c930
