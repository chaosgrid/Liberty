#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_4e7090);
CLANG_FORWARD_PROC_SYMBOL(public_4fcc40);
CLANG_FORWARD_PROC_SYMBOL(public_503330);
CLANG_FORWARD_PROC_SYMBOL(public_5139d0);
CLANG_FORWARD_PROC_SYMBOL(public_513b40);
CLANG_FORWARD_PROC_SYMBOL(public_514010);
CLANG_FORWARD_PROC_SYMBOL(public_514050);
CLANG_FORWARD_PROC_SYMBOL(public_514070);
CLANG_FORWARD_PROC_SYMBOL(public_5140c0);
CLANG_FORWARD_PROC_SYMBOL(public_514110);
CLANG_FORWARD_PROC_SYMBOL(public_5142e0);
CLANG_FORWARD_PROC_SYMBOL(public_514f20);
CLANG_FORWARD_PROC_SYMBOL(public_515200);
CLANG_FORWARD_PROC_SYMBOL(public_516060);
CLANG_FORWARD_PROC_SYMBOL(public_5163e0);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_5160b0 _public_5160b0
#define public_5160bb _public_5160bb
#define public_5160f8 _public_5160f8
#define public_51610a _public_51610a
#define public_51614b _public_51614b
#define public_51614d _public_51614d
#define public_5161c0 _public_5161c0
#define public_5161c2 _public_5161c2
#define public_5161d9 _public_5161d9
#define public_5161db _public_5161db
#define public_516205 _public_516205
#define public_516207 _public_516207
#define public_516213 _public_516213
#define public_516215 _public_516215
#define public_516233 _public_516233
#define public_516266 _public_516266
#define public_51627e _public_51627e
#define public_5162e0 _public_5162e0
#define public_5162fe _public_5162fe
#define public_516331 _public_516331
#define public_516343 _public_516343
#define public_516365 _public_516365
#define public_5163b6 _public_5163b6
#define public_5163d2 _public_5163d2

PROC_DECLARE(0x516060, internal_516060, public_516060);
extern "C" NAKED register_t __cdecl internal_516060()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x84
        push ebx
        push ebp
        push esi
        push edi
        push 1
        push eax
        call public_5416c0
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_5163d2
        mov al, byte ptr ss : [esp+0xA0]
        test al, al
        jne public_51627e
        mov esi, dword ptr ds : [edi+0x160]
        test esi, esi
        je public_5163d2
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+0xC]
        mov ebx, dword ptr ds : [ecx]
        cmp ecx, ebx
        je public_5160bb
        public_5160b0 : nop
        cmp dword ptr ds : [ebx+8], eax
        je public_5160f8
        mov ebx, dword ptr ds : [ebx]
        cmp ecx, ebx
        jne public_5160b0
        public_5160bb : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x18]
        call public_411c50
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5db7c8 @0x5160d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db7c8
        push 0x367
/*FIXUP push offset public_5db798 @0x5160dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db798
/*FIXUP push offset public_5c862c @0x5160e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x84
        ret 
        public_5160f8 : nop
        mov al, byte ptr ds : [edi+0x184]
        test al, al
        jns public_51610a
        push edi
        mov ecx, esi
        call public_514f20
        public_51610a : nop
        push edi
        mov ecx, esi
        call public_5139d0
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[esi+8]
        call public_516f70
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_5163d2
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_5163d2
        mov ecx, esi
        call public_5163e0
        mov ebx, eax
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_51614b
        lea edi, ds:[eax-8]
        jmp public_51614d
        public_51614b : nop
        xor edi, edi
        public_51614d : nop
        mov al, byte ptr ds : [esi+0x1C]
        mov byte ptr ss : [esp+0x10], al
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edi
        push edx
        call public_514110
        mov ebp, eax
        mov eax, dword ptr ds : [edi]
        add esp, 0xC
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        push ebp
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, eax
        call public_4e7090
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x68]
        call public_514010
        xor ebp, ebp
        test ebx, ebx
        je public_516233
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax]
        lea ecx, ds:[esi+0x30]
        mov ebp, eax
        call public_503330
        test al, al
        jne public_516233
        mov al, byte ptr ds : [esi+0x1D]
        test al, al
        je public_516233
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_5161c0
        add eax, 0xFFFFFFF8
        jmp public_5161c2
        public_5161c0 : nop
        xor eax, eax
        public_5161c2 : nop
        push eax
        call public_5140c0
        mov ebx, eax
        mov eax, dword ptr ds : [esi+0x14]
        add esp, 4
        test eax, eax
        je public_5161d9
        add eax, 0xFFFFFFF8
        jmp public_5161db
        public_5161d9 : nop
        xor eax, eax
        public_5161db : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x1C]
        lea edx, ss:[esp+0x28]
        push ecx
        push eax
        push edx
        call public_514110
        add esp, 0xC
        push eax
        lea ecx, ss:[esp+0x38]
        call public_514010
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_516205
        lea ecx, ds:[eax-8]
        jmp public_516207
        public_516205 : nop
        xor ecx, ecx
        public_516207 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_516213
        lea edi, ds:[eax-8]
        jmp public_516215
        public_516213 : nop
        xor edi, edi
        public_516215 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x30]
        push eax
        lea eax, ss:[esp+0x38]
        push eax
        call dword ptr ds : [edx+0x1C]
        push eax
        push edi
        add ebx, 0x7C
        push ebx
        mov ecx, offset public_674c60
        call public_514070
        public_516233 : nop
        push ebp
        lea eax, ss:[esp+0x8C]
        push eax
        push 0
        lea ecx, ds:[esi+0x20]
        call public_4fcc40
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_516266
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        test ah, 0x41
        jne public_5163d2
        public_516266 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea ecx, ds:[esi+0x30]
        call public_514050
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x84
        ret 
        public_51627e : nop
        mov eax, dword ptr ds : [edi+0x160]
        test eax, eax
        je public_516365
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5db890 @0x516292*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db890
        push 0x424
/*FIXUP push offset public_5db798 @0x51629c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db798
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x5162a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [edx]
        mov esi, dword ptr ds : [edi+0x160]
        add esp, 0x14
        test esi, esi
        je public_516365
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x10]
        lea ebx, ds:[esi+8]
        push ecx
        mov ecx, ebx
        mov ebp, eax
        call public_53e430
        mov eax, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [esi+0xC], eax
        je public_5162fe
        public_5162e0 : nop
        cmp dword ptr ds : [eax+8], ebp
        je public_516331
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov eax, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [esi+0xC], eax
        jne public_5162e0
        public_5162fe : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x1C]
        call public_411c50
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5db7c8 @0x516315*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db7c8
        push 0x367
/*FIXUP push offset public_5db798 @0x51631f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db798
/*FIXUP push offset public_5c862c @0x516324*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_516365
        public_516331 : nop
        mov al, byte ptr ds : [edi+0x184]
        test al, al
        jns public_516343
        push edi
        mov ecx, esi
        call public_514f20
        public_516343 : nop
        push edi
        mov ecx, esi
        call public_5139d0
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call public_516f70
        push 0
        mov ecx, esi
        call public_513b40
        public_516365 : nop
        mov esi, dword ptr ss : [esp+0x98]
        mov edx, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        push eax
        mov ecx, esi
        call dword ptr ds : [ebx+0x128]
        test eax, eax
        je public_5163b6
/*FIXUP push offset public_5db84c @0x516387*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db84c
        push 0x42D
/*FIXUP push offset public_5db798 @0x516391*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db798
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x51639b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x84
        ret 
        public_5163b6 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push 1
        push ecx
        push esi
        call public_515200
        add esp, 0xC
        test eax, eax
        je public_5163d2
        push edi
        mov ecx, eax
        call public_5142e0
        public_5163d2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x84
        ret 
        UNREACHABLE_TRAP(0x516060)
    }
}

#undef public_5160b0
#undef public_5160bb
#undef public_5160f8
#undef public_51610a
#undef public_51614b
#undef public_51614d
#undef public_5161c0
#undef public_5161c2
#undef public_5161d9
#undef public_5161db
#undef public_516205
#undef public_516207
#undef public_516213
#undef public_516215
#undef public_516233
#undef public_516266
#undef public_51627e
#undef public_5162e0
#undef public_5162fe
#undef public_516331
#undef public_516343
#undef public_516365
#undef public_5163b6
#undef public_5163d2
