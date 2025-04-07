#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d460f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d466f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d467b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d48e80);
CLANG_FORWARD_PROC_SYMBOL(public_6d533a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d53d50);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);

#define public_6d533f8 _public_6d533f8
#define public_6d53412 _public_6d53412
#define public_6d53467 _public_6d53467
#define public_6d53474 _public_6d53474
#define public_6d5349a _public_6d5349a
#define public_6d534db _public_6d534db
#define public_6d534ff _public_6d534ff
#define public_6d5350e _public_6d5350e
#define public_6d5352b _public_6d5352b
#define public_6d535b0 _public_6d535b0
#define public_6d535c9 _public_6d535c9
#define public_6d535fe _public_6d535fe
#define public_6d53627 _public_6d53627
#define public_6d53648 _public_6d53648
#define public_6d53650 _public_6d53650
#define public_6d53669 _public_6d53669
#define public_6d53689 _public_6d53689
#define public_6d53698 _public_6d53698

PROC_DECLARE(0x6d533a0, internal_6d533a0, public_6d533a0);
extern "C" NAKED register_t __cdecl internal_6d533a0()
{
    __asm
    {
        mov eax, 0x1310
        call public_6d60160
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d5349a
        mov ebp, dword ptr ss : [esp+0x1324]
        push ebp
        call dword ptr ds : [public_6d64c98]
        mov esi, eax
        push esi
        call dword ptr ds : [public_6d64ca0]
        push esi
        call dword ptr ds : [public_6d64c80]
        mov ebx, eax
        mov eax, dword ptr ds : [public_6d90144]
        mov dword ptr ds : [public_6d90150], eax
        lea eax, ds:[ebx+ebx]
        add esp, 0xC
        test eax, eax
        mov edi, esi
        jle public_6d53412
        mov ebp, eax
        public_6d533f8 : nop
        xor eax, eax
        mov al, byte ptr ds : [edi]
        mov ecx, offset public_6d8fd38
        inc edi
        push eax
        call public_6d466f0
        dec ebp
        jne public_6d533f8
        mov ebp, dword ptr ss : [esp+0x1324]
        public_6d53412 : nop
        mov ecx, offset public_6d8fd38
        call public_6d467b0
        push eax
        push ebx
        lea ecx, ss:[esp+0x1C]
/*FIXUP push offset public_6d6aec0 @0x6d53422*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aec0
        push ecx
        call dword ptr ds : [public_6d64c74]
        push esi
        call dword ptr ds : [public_6d64c94]
        lea edx, ss:[esp+0x230]
        push edx
        call dword ptr ds : [public_6d64874]
        add esp, 0x18
        call dword ptr ds : [public_6d647e8]
        test al, al
        mov esi, dword ptr ds : [public_6d64bc0]
        push 0
        je public_6d53467
/*FIXUP push offset public_6d8d308 @0x6d53458*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea eax, ss:[esp+0x224]
        push eax
        jmp public_6d53474
/*FIXUP public_6d53467 : nop
        push offset public_6d8d200 @0x6d53467*/
  FIXUP public_6d53467 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea ecx, ss:[esp+0x224]
        push ecx
        public_6d53474 : nop
        push 0
/*FIXUP push offset public_6d90158 @0x6d53476*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call esi
        add esp, 0x14
        push 0
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_6d90158 @0x6d53487*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        lea eax, ss:[esp+0x124]
        push 0
        push eax
        call esi
        jmp public_6d534db
        public_6d5349a : nop
        mov ecx, dword ptr ss : [esp+0x1324]
        push 0x104
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [public_6d64be0]
        add esp, 0xC
        lea eax, ss:[esp+0x14]
        push 0
        push eax
        call public_6d460f0
        mov esi, dword ptr ds : [public_6d64bc0]
        push eax
        lea ecx, ss:[esp+0x124]
        push 0
        push ecx
        call esi
        mov ebp, dword ptr ss : [esp+0x1338]
        public_6d534db : nop
        add esp, 0x14
        lea edx, ss:[esp+0x118]
        push 6
        push edx
        call dword ptr ds : [public_6d64c00]
        add esp, 8
        test eax, eax
        je public_6d5352b
        mov al, byte ptr ss : [ebp+0xC0]
        test al, al
        jne public_6d5350e
        public_6d534ff : nop
        pop edi
        pop esi
        pop ebp
        mov al, 2
        pop ebx
        add esp, 0x1310
        ret 8
        public_6d5350e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ebp
        call public_6d53d50
        test eax, eax
        je public_6d5352b
        pop edi
        pop esi
        pop ebp
        mov al, 2
        pop ebx
        add esp, 0x1310
        ret 8
        public_6d5352b : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d53698
        push 0
/*FIXUP push offset public_6d6b2e8 @0x6d5353b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b2e8
        lea eax, ss:[esp+0x120]
        push eax
        lea ecx, ss:[esp+0x20]
        push 0
        push ecx
        call esi
        lea edx, ss:[esp+0x28]
/*FIXUP push offset public_6d6aea8 @0x6d53555*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea8
        push edx
        call dword ptr ds : [public_6d64bd8]
        mov esi, eax
        add esp, 0x1C
        test esi, esi
        je public_6d534ff
        push esi
        push 0x400
        lea eax, ss:[esp+0x328]
        push 2
        push eax
        call dword ptr ds : [public_6d64bd4]
        push esi
        mov ebx, eax
        call dword ptr ds : [public_6d64bd0]
        mov esi, dword ptr ds : [public_6d8d158]
        push esi
        call dword ptr ds : [public_6d64c80]
        mov edi, dword ptr ds : [public_6d90144]
        shl eax, 1
        add esp, 0x18
        test eax, eax
        mov dword ptr ds : [public_6d90150], edi
        jle public_6d535c9
        mov edi, eax
        lea ecx, ds:[ecx]
        public_6d535b0 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        mov ecx, offset public_6d8fd38
        inc esi
        push eax
        call public_6d466f0
        dec edi
        jne public_6d535b0
        mov edi, dword ptr ds : [public_6d90150]
        public_6d535c9 : nop
        mov al, byte ptr ds : [public_6d9014c]
        test al, al
        mov eax, dword ptr ds : [public_6d9013c]
        lea ecx, ds:[eax-1]
        jne public_6d535fe
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [public_6d90148]
        xor ecx, edi
        lea edx, ds:[edx+edx-1]
        or edx, 1
        and edx, ecx
        mov ecx, dword ptr ds : [public_6d90138]
        sub ecx, eax
        shl edx, cl
        jmp public_6d53648
        public_6d535fe : nop
        mov eax, 1
        shl eax, cl
        mov ecx, dword ptr ds : [public_6d90148]
        xor ecx, edi
        mov edi, dword ptr ds : [public_6d90138]
        lea eax, ds:[eax+eax-1]
        or eax, 1
        mov esi, 8
        xor edx, edx
        and eax, ecx
        cmp edi, esi
        jb public_6d53648
        public_6d53627 : nop
        mov ebp, eax
        mov ecx, edi
        sub ecx, esi
        and ebp, 0xFF
        shl ebp, cl
        add esi, 8
        shr eax, 8
        or edx, ebp
        cmp esi, edi
        jbe public_6d53627
        mov ebp, dword ptr ss : [esp+0x1324]
        public_6d53648 : nop
        test ebx, ebx
        je public_6d53669
        xor eax, eax
        mov ecx, ebx
        public_6d53650 : nop
        mov si, word ptr ss : [esp+eax+0x320]
        xor si, dx
        mov word ptr ss : [esp+eax+0xB20], si
        add eax, 2
        dec ecx
        jne public_6d53650
        public_6d53669 : nop
        push ebp
        call dword ptr ds : [public_6d64c80]
        add esp, 4
        cmp ebx, eax
        jne public_6d53689
        lea ecx, ds:[ebx+ebx]
        mov edi, ebp
        lea esi, ss:[esp+0xB20]
        xor edx, edx
        repe cmpsb
        je public_6d53698
        public_6d53689 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 2
        pop ebx
        add esp, 0x1310
        ret 8
        public_6d53698 : nop
        mov eax, dword ptr ss : [esp+0x1328]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        imul eax, 0x418
        push ebp
        lea ecx, ss:[esp+0x120]
        push ecx
        mov ecx, dword ptr ds : [edx]
        lea ecx, ds:[eax+ecx-0x418]
        call public_6d48e80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1310
        ret 8
        UNREACHABLE_TRAP(0x6d533a0)
    }
}

#undef public_6d533f8
#undef public_6d53412
#undef public_6d53467
#undef public_6d53474
#undef public_6d5349a
#undef public_6d534db
#undef public_6d534ff
#undef public_6d5350e
#undef public_6d5352b
#undef public_6d535b0
#undef public_6d535c9
#undef public_6d535fe
#undef public_6d53627
#undef public_6d53648
#undef public_6d53650
#undef public_6d53669
#undef public_6d53689
#undef public_6d53698
