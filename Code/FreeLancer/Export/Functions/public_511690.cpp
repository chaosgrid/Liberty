#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_4205c0);
CLANG_FORWARD_PROC_SYMBOL(public_420690);
CLANG_FORWARD_PROC_SYMBOL(public_4206c0);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_512660);
CLANG_FORWARD_PROC_SYMBOL(public_5b7010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7030);

#define public_5116cd _public_5116cd
#define public_5116f2 _public_5116f2
#define public_5116f4 _public_5116f4
#define public_511739 _public_511739
#define public_511759 _public_511759
#define public_5117b1 _public_5117b1
#define public_5117bd _public_5117bd
#define public_5117c0 _public_5117c0
#define public_5117ff _public_5117ff
#define public_51181a _public_51181a
#define public_511829 _public_511829
#define public_511856 _public_511856
#define public_5118b7 _public_5118b7
#define public_5118c6 _public_5118c6

PROC_DECLARE(0x511690, internal_511690, public_511690);
extern "C" NAKED register_t __cdecl internal_511690()
{
    __asm
    {
        fld dword ptr ds : [public_5c75dc]
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x24
        push ebx
        mov ebx, ecx
        fsub dword ptr ds : [ebx+0x38]
        mov dword ptr ds : [ebx+0x60], eax
        push esi
        push edi
        fcom dword ptr ds : [ebx+0x64]
        fnstsw ax
        test ah, 0x41
        jne public_5116cd
        fld dword ptr ss : [esp+0x34]
        fdiv dword ptr ds : [ebx+0x20]
        fadd dword ptr ds : [ebx+0x64]
        fst dword ptr ds : [ebx+0x64]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_5116f2
        fstp dword ptr ds : [ebx+0x64]
        jmp public_5116f4
        public_5116cd : nop
        fcom dword ptr ds : [ebx+0x64]
        fnstsw ax
        test ah, 5
        jp public_5116f2
        fld dword ptr ss : [esp+0x34]
        fdiv dword ptr ds : [ebx+0x24]
        fsubr dword ptr ds : [ebx+0x64]
        fst dword ptr ds : [ebx+0x64]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_5116f2
        fstp dword ptr ds : [ebx+0x64]
        jmp public_5116f4
        public_5116f2 : nop
        fstp st(0)
        public_5116f4 : nop
        mov esi, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        jne public_5117c0
        push ebp
        lea edi, ds:[esi+4]
        push edi
        lea ecx, ss:[esp+0x1C]
        xor ebp, ebp
        call public_4205c0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6750a0
        call public_512660
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6750a4]
        je public_511739
        lea ebp, ds:[eax+0x28]
        test ebp, ebp
        jne public_511759
        public_511739 : nop
        push edi
        push 0xF2
/*FIXUP push offset public_5da4a0 @0x51173f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4a0
        mov eax, 0x100002
/*FIXUP push offset public_5c958c @0x511749*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_511759 : nop
        push 0
        mov dword ptr ds : [esi+0x48], ebp
        mov byte ptr ds : [esi+0x4C], 0
        call public_5b7010
        mov ecx, dword ptr ds : [esi+0x48]
        add esp, 4
        test ecx, ecx
        mov dword ptr ss : [esp+0x38], eax
        pop ebp
        je public_5117c0
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edi, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
        push 0
        call public_425640
        push eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [edi+0xC8]
        test eax, eax
        jne public_5117c0
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, 0xA
        jl public_5117b1
        cmp eax, 0xE
        jg public_5117b1
        mov al, 1
        jmp public_5117bd
        public_5117b1 : nop
        push eax
        call public_5b7030
        mov al, byte ptr ds : [eax+0x48]
        add esp, 4
        public_5117bd : nop
        mov byte ptr ds : [esi+0x4C], al
        public_5117c0 : nop
        mov esi, dword ptr ds : [ebx+0xC]
        test esi, esi
        je public_5118c6
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        jne public_5118c6
        lea edi, ds:[esi+4]
        push edi
        lea ecx, ss:[esp+0x18]
        xor ebx, ebx
        call public_4205c0
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6750a0
        call public_420690
        test al, al
        je public_5117ff
        mov eax, dword ptr ds : [public_6750b4]
        jmp public_51181a
        public_5117ff : nop
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6750a0
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_6750b4], eax
        public_51181a : nop
        cmp eax, dword ptr ds : [public_6750a4]
        je public_511829
        lea ebx, ds:[eax+0x28]
        test ebx, ebx
        jne public_511856
        public_511829 : nop
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x18]
        call public_411c50
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_5c6d18]
        push edi
        push 0xF2
/*FIXUP push offset public_5da4a0 @0x511846*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4a0
/*FIXUP push offset public_5c958c @0x51184b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        public_511856 : nop
        push 0
        mov dword ptr ds : [esi+0x48], ebx
        mov byte ptr ds : [esi+0x4C], 0
        call public_5b7010
        mov ecx, dword ptr ds : [esi+0x48]
        add esp, 4
        test ecx, ecx
        mov dword ptr ss : [esp+0x34], eax
        je public_5118c6
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edi, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
        push 0
        call public_425640
        push eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [edi+0xC8]
        test eax, eax
        jne public_5118c6
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, 0xA
        jl public_5118b7
        cmp eax, 0xE
        jg public_5118b7
        mov al, 1
        pop edi
        mov byte ptr ds : [esi+0x4C], al
        pop esi
        pop ebx
        add esp, 0x24
        ret 4
        public_5118b7 : nop
        push eax
        call public_5b7030
        mov al, byte ptr ds : [eax+0x48]
        add esp, 4
        mov byte ptr ds : [esi+0x4C], al
        public_5118c6 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x511690)
    }
}

#undef public_5116cd
#undef public_5116f2
#undef public_5116f4
#undef public_511739
#undef public_511759
#undef public_5117b1
#undef public_5117bd
#undef public_5117c0
#undef public_5117ff
#undef public_51181a
#undef public_511829
#undef public_511856
#undef public_5118b7
#undef public_5118c6
