#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebec10);
CLANG_FORWARD_PROC_SYMBOL(public_6ec09a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3880);

#define public_6ec074b _public_6ec074b
#define public_6ec07a3 _public_6ec07a3
#define public_6ec07be _public_6ec07be
#define public_6ec0830 _public_6ec0830
#define public_6ec0856 _public_6ec0856
#define public_6ec0876 _public_6ec0876
#define public_6ec0892 _public_6ec0892
#define public_6ec08ab _public_6ec08ab
#define public_6ec0911 _public_6ec0911
#define public_6ec0920 _public_6ec0920
#define public_6ec0927 _public_6ec0927
#define public_6ec0936 _public_6ec0936
#define public_6ec0938 _public_6ec0938
#define public_6ec097c _public_6ec097c
#define public_6ec098b _public_6ec098b

PROC_DECLARE(0x6ec06f0, internal_6ec06f0, public_6ec06f0);
extern "C" NAKED register_t __cdecl internal_6ec06f0()
{
    __asm
    {
        sub esp, 0x44
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [edi+8]
        lea esi, ds:[edi+4]
        push esi
        xor ebp, ebp
/*FIXUP push offset public_6ed4064 @0x6ec0703*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4064
        mov dword ptr ds : [edi+0x2C], ebp
        mov dword ptr ds : [edi+0x34], ebp
        mov dword ptr ds : [edi+0x30], ebp
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_6ec074b
        mov edx, dword ptr ds : [public_6ed1004]
/*FIXUP push offset public_6ed4c58 @0x6ec0720*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4c58
        push 0x308
/*FIXUP push offset public_6ed4c00 @0x6ec072a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4c00
        mov eax, 0x100001
/*FIXUP push offset public_6ed42a4 @0x6ec0734*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed42a4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebp
        add esp, 0x44
        ret 4
        public_6ec074b : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+8]
        call public_6ebec10
        call dword ptr ds : [public_6ed1008]
        mov ebx, eax
        lea eax, ss:[esp+0x18]
        push eax
/*FIXUP push offset public_6ed48b4 @0x6ec0766*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed48b4
        mov dword ptr ss : [esp+0x20], ebp
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6ec097c
        mov esi, dword ptr ss : [esp+0x18]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x14], ebp
        je public_6ec07a3
        lea ecx, ss:[esp+0x14]
        call public_6ec3880
        mov dword ptr ss : [esp+0x14], esi
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        jne public_6ec07be
        public_6ec07a3 : nop
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x14]
        push eax
/*FIXUP push offset public_6ed48b4 @0x6ec07aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed48b4
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        jne public_6ec0938
        mov eax, dword ptr ss : [esp+0x14]
        public_6ec07be : nop
        push 3
/*FIXUP push offset public_6ed4bf0 @0x6ec07c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4bf0
        mov dword ptr ss : [esp+0x18], 1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        mov ebp, eax
        test ebp, ebp
        je public_6ec0936
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push 0x400
/*FIXUP push offset public_6ed5860 @0x6ec07e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
/*FIXUP push offset public_6ed4bdc @0x6ec07ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4bdc
        push ebp
        push eax
        call dword ptr ds : [edx+0x20]
        test eax, eax
        je public_6ec0927
        mov ecx, 9
        mov esi, offset public_6ed4bb4
        lea edi, ss:[esp+0x2C]
        rep movsd
        lea eax, ss:[esp+0x2C]
        push eax
        movsb 
        mov edi, dword ptr ds : [public_6ed1050]
/*FIXUP push offset public_6ed5860 @0x6ec081b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call edi
        add esp, 8
        test eax, eax
        je public_6ec0830
        mov byte ptr ds : [eax+public_6ed5860], 0
        public_6ec0830 : nop
        mov esi, dword ptr ds : [public_6ed100c]
/*FIXUP push offset public_6ed4bac @0x6ec0836*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4bac
/*FIXUP push offset public_6ed5860 @0x6ec083b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec0856
        mov dword ptr ss : [esp+0x10], 1
        jmp public_6ec0927
/*FIXUP public_6ec0856 : nop
        push offset public_6ed4ba8 @0x6ec0856*/
  FIXUP public_6ec0856 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ba8
/*FIXUP push offset public_6ed5860 @0x6ec085b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec0876
        mov dword ptr ss : [esp+0x10], 1
        jmp public_6ec0927
/*FIXUP public_6ec0876 : nop
        push offset public_6ed4ba0 @0x6ec0876*/
  FIXUP public_6ec0876 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ba0
/*FIXUP push offset public_6ed5860 @0x6ec087b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec0892
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6ec0927
/*FIXUP public_6ec0892 : nop
        push offset public_6ed4b9c @0x6ec0892*/
  FIXUP public_6ec0892 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4b9c
/*FIXUP push offset public_6ed5860 @0x6ec0897*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec08ab
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6ec0927
        public_6ec08ab : nop
        mov esi, dword ptr ds : [public_6ed1048]
        push 0x78
/*FIXUP push offset public_6ed5860 @0x6ec08b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec0911
        push 0x58
/*FIXUP push offset public_6ed5860 @0x6ec08c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec0911
        mov edx, dword ptr ds : [public_6ed4b90]
        mov ecx, dword ptr ds : [public_6ed4b8c]
        mov eax, dword ptr ds : [public_6ed4b94]
        mov dword ptr ss : [esp+0x20], edx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], ecx
        mov cl, byte ptr ds : [public_6ed4b98]
        push edx
/*FIXUP push offset public_6ed5860 @0x6ec08f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        mov dword ptr ss : [esp+0x2C], eax
        mov byte ptr ss : [esp+0x30], cl
        call edi
/*FIXUP push offset public_6ed5860 @0x6ec0904*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call dword ptr ds : [public_6ed1040]
        jmp public_6ec0920
        public_6ec0911 : nop
        push 0x10
        push 0
/*FIXUP push offset public_6ed5860 @0x6ec0915*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call dword ptr ds : [public_6ed104c]
        public_6ec0920 : nop
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], eax
        public_6ec0927 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x18]
        mov edi, dword ptr ss : [esp+0x58]
        public_6ec0936 : nop
        xor ebp, ebp
        public_6ec0938 : nop
        lea ecx, ss:[esp+0x14]
        call public_6ec3880
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi-4]
        push eax
        lea esi, ds:[edi-4]
        push ebp
        push esi
        call dword ptr ds : [edx+0xC]
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebp
/*FIXUP push offset public_6ed4b74 @0x6ec095b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4b74
/*FIXUP push offset public_6ed4bf0 @0x6ec0960*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4bf0
        push edx
        push ebx
        call public_6ec09a0
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        add esp, 0x18
        push ecx
        push 4
        push esi
        call dword ptr ds : [eax+0xC]
        public_6ec097c : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebp
        pop ebx
        je public_6ec098b
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6ec098b : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x6ec06f0)
    }
}

#undef public_6ec074b
#undef public_6ec07a3
#undef public_6ec07be
#undef public_6ec0830
#undef public_6ec0856
#undef public_6ec0876
#undef public_6ec0892
#undef public_6ec08ab
#undef public_6ec0911
#undef public_6ec0920
#undef public_6ec0927
#undef public_6ec0936
#undef public_6ec0938
#undef public_6ec097c
#undef public_6ec098b
