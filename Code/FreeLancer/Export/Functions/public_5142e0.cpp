#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411350);
CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_411f70);
CLANG_FORWARD_PROC_SYMBOL(public_41c1a0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4b5150);
CLANG_FORWARD_PROC_SYMBOL(public_5139d0);
CLANG_FORWARD_PROC_SYMBOL(public_514070);
CLANG_FORWARD_PROC_SYMBOL(public_5142e0);
CLANG_FORWARD_PROC_SYMBOL(public_514750);
CLANG_FORWARD_PROC_SYMBOL(public_514f20);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_514351 _public_514351
#define public_514353 _public_514353
#define public_51436c _public_51436c
#define public_514377 _public_514377
#define public_51437a _public_51437a
#define public_5143ac _public_5143ac
#define public_5143ae _public_5143ae
#define public_5143fd _public_5143fd
#define public_51445c _public_51445c
#define public_51448f _public_51448f
#define public_5144b0 _public_5144b0
#define public_5144bf _public_5144bf
#define public_5144f0 _public_5144f0
#define public_514517 _public_514517
#define public_51453b _public_51453b
#define public_51455e _public_51455e
#define public_514568 _public_514568
#define public_51457a _public_51457a

PROC_DECLARE(0x5142e0, internal_5142e0, public_5142e0);
extern "C" NAKED register_t __cdecl internal_5142e0()
{
    __asm
    {
        sub esp, 0x74
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ss : [ebp+0x160]
        test eax, eax
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        je public_5144f0
        cmp eax, ebx
        jne public_51448f
        mov al, byte ptr ss : [ebp+0x184]
        test al, al
        jns public_51455e
        call public_54baf0
        cmp ebp, eax
        mov eax, dword ptr ds : [ebx+0x14]
        sete byte ptr ss : [esp+0x13]
        test eax, eax
        je public_514351
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_514351
        add eax, 0xC
        test eax, eax
        je public_514351
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_514351
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_514353
        public_514351 : nop
        xor eax, eax
        public_514353 : nop
        push 0x800000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        test eax, eax
        jne public_51436c
        xor ebx, ebx
        jmp public_51437a
        public_51436c : nop
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        jne public_514377
        xor ebx, ebx
        jmp public_51437a
        public_514377 : nop
        mov ebx, dword ptr ds : [eax+4]
        public_51437a : nop
        mov al, byte ptr ss : [ebp+0x184]
        test al, 0x20
        jne public_51455e
        or al, 0x20
        mov byte ptr ss : [ebp+0x184], al
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_51445c
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x14]
        test eax, eax
        je public_5143ac
        lea ecx, ds:[eax-8]
        jmp public_5143ae
        public_5143ac : nop
        xor ecx, ecx
        public_5143ae : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        mov esi, eax
        test byte ptr ss : [ebp+0x184], 1
        mov ecx, 9
        lea edi, ss:[esp+0x30]
        rep movsd
        jne public_5143fd
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x38]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x24]
        call public_422b80
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_411350
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x34]
        call public_411f70
        public_5143fd : nop
        push 0
        lea ecx, ss:[esp+0x58]
        call public_41c1a0
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x78], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x7C], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x80], eax
        mov ecx, 9
        lea esi, ss:[esp+0x30]
        lea edi, ss:[esp+0x54]
        rep movsd
        lea ecx, ss:[ebp+0x174]
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        push 0xFFFFFFFF
        push ebp
        add ebx, 0x58
        push ebx
        mov ecx, offset public_6751cc
        call public_514070
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x74
        ret 4
        public_51445c : nop
        lea eax, ss:[ebp+0x164]
        push eax
        lea ecx, ss:[esp+0x58]
        call public_4b5150
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x1C]
        push eax
        push ebp
        add ebx, 0x6C
        push ebx
        mov ecx, offset public_674c60
        call public_514070
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x74
        ret 4
        public_51448f : nop
        mov edi, dword ptr ss : [ebp+0x160]
        test edi, edi
        je public_5144f0
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [ecx]
        cmp ecx, esi
        je public_5144bf
        lea ebx, ds:[ebx]
        public_5144b0 : nop
        cmp dword ptr ds : [esi+8], eax
        je public_514568
        mov esi, dword ptr ds : [esi]
        cmp ecx, esi
        jne public_5144b0
        public_5144bf : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x1C]
        call public_411c50
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5db7c8 @0x5144d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db7c8
        push 0x367
/*FIXUP push offset public_5db798 @0x5144e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db798
/*FIXUP push offset public_5c862c @0x5144e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        public_5144f0 : nop
        mov cl, byte ptr ss : [ebp+0x185]
        mov al, byte ptr ss : [ebp+0x184]
        and cl, 0xFA
        test al, al
        mov dword ptr ss : [ebp+0x160], ebx
        mov byte ptr ss : [ebp+0x185], cl
        jns public_514517
        push ebp
        mov ecx, ebx
        call public_514750
        public_514517 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov esi, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_51453b
        mov edi, eax
        public_51453b : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_5999b0
        mov eax, dword ptr ds : [ebx+0x10]
        add esp, 8
        inc eax
        mov dword ptr ds : [ebx+0x10], eax
        public_51455e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x74
        ret 4
        public_514568 : nop
        mov al, byte ptr ss : [ebp+0x184]
        test al, al
        jns public_51457a
        push ebp
        mov ecx, edi
        call public_514f20
        public_51457a : nop
        push ebp
        mov ecx, edi
        call public_5139d0
        push esi
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ds:[edi+8]
        call public_516f70
        jmp public_5144f0
        UNREACHABLE_TRAP(0x5142e0)
    }
}

#undef public_514351
#undef public_514353
#undef public_51436c
#undef public_514377
#undef public_51437a
#undef public_5143ac
#undef public_5143ae
#undef public_5143fd
#undef public_51445c
#undef public_51448f
#undef public_5144b0
#undef public_5144bf
#undef public_5144f0
#undef public_514517
#undef public_51453b
#undef public_51455e
#undef public_514568
#undef public_51457a
