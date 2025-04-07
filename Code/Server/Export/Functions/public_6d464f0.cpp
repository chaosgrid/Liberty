#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d464f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d466f0);

#define public_6d46550 _public_6d46550
#define public_6d46569 _public_6d46569
#define public_6d4659e _public_6d4659e
#define public_6d465c7 _public_6d465c7
#define public_6d465e5 _public_6d465e5
#define public_6d46630 _public_6d46630
#define public_6d4663a _public_6d4663a
#define public_6d4666c _public_6d4666c
#define public_6d466af _public_6d466af
#define public_6d466b9 _public_6d466b9

PROC_DECLARE(0x6d464f0, internal_6d464f0, public_6d464f0);
extern "C" NAKED register_t __cdecl internal_6d464f0()
{
    __asm
    {
        sub esp, 0x20C
        push esi
        mov esi, dword ptr ds : [public_6d647e8]
        call esi
        test al, al
        je public_6d4666c
        mov eax, dword ptr ss : [esp+0x218]
        push ebx
        push ebp
        push edi
        push eax
        call dword ptr ds : [public_6d64c98]
        mov ebx, eax
        push ebx
        call dword ptr ds : [public_6d64ca0]
        push ebx
        call dword ptr ds : [public_6d64c80]
        mov edi, dword ptr ds : [public_6d90144]
        mov ebp, eax
        lea eax, ss:[ebp+ebp]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ds : [public_6d90150], edi
        mov esi, ebx
        jle public_6d46569
        mov edi, eax
        lea esp, ss:[esp]
        public_6d46550 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        mov ecx, offset public_6d8fd38
        inc esi
        push eax
        call public_6d466f0
        dec edi
        jne public_6d46550
        mov edi, dword ptr ds : [public_6d90150]
        public_6d46569 : nop
        mov al, byte ptr ds : [public_6d9014c]
        test al, al
        mov eax, dword ptr ds : [public_6d9013c]
        lea ecx, ds:[eax-1]
        jne public_6d4659e
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
        jmp public_6d465e5
        public_6d4659e : nop
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
        jb public_6d465e5
        public_6d465c7 : nop
        mov ebp, eax
        mov ecx, edi
        sub ecx, esi
        and ebp, 0xFF
        shl ebp, cl
        add esi, 8
        shr eax, 8
        or edx, ebp
        cmp esi, edi
        jbe public_6d465c7
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d465e5 : nop
        push edx
        push ebp
        lea edx, ss:[esp+0x120]
/*FIXUP push offset public_6d6aec0 @0x6d465ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aec0
        push edx
        call dword ptr ds : [public_6d64c74]
        push ebx
        call dword ptr ds : [public_6d64c94]
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [public_6d64874]
        add esp, 0x18
        call dword ptr ds : [public_6d647e8]
        test al, al
        mov esi, dword ptr ds : [public_6d64bc0]
        pop edi
        pop ebp
        pop ebx
        push 0
        je public_6d46630
/*FIXUP push offset public_6d8d308 @0x6d46624*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea ecx, ss:[esp+0x10]
        push ecx
        jmp public_6d4663a
/*FIXUP public_6d46630 : nop
        push offset public_6d8d200 @0x6d46630*/
  FIXUP public_6d46630 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea edx, ss:[esp+0x10]
        push edx
        public_6d4663a : nop
        push 0
/*FIXUP push offset public_6d90158 @0x6d4663c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call esi
        mov ecx, dword ptr ss : [esp+0x228]
        add esp, 0x14
        push 0
        lea eax, ss:[esp+0x110]
        push eax
/*FIXUP push offset public_6d90158 @0x6d46657*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        push 0
        push ecx
        call esi
        add esp, 0x14
        pop esi
        add esp, 0x20C
        ret 
        public_6d4666c : nop
        mov edx, dword ptr ss : [esp+0x218]
        push 0x104
        push edx
        lea eax, ss:[esp+0x114]
        push eax
        call dword ptr ds : [public_6d64be0]
        lea ecx, ss:[esp+0x14]
        push ecx
        call dword ptr ds : [public_6d64874]
        add esp, 0x10
        call esi
        test al, al
        mov esi, dword ptr ds : [public_6d64bc0]
        push 0
        je public_6d466af
/*FIXUP push offset public_6d8d308 @0x6d466a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea edx, ss:[esp+0x10]
        push edx
        jmp public_6d466b9
/*FIXUP public_6d466af : nop
        push offset public_6d8d200 @0x6d466af*/
  FIXUP public_6d466af : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea eax, ss:[esp+0x10]
        push eax
        public_6d466b9 : nop
        push 0
/*FIXUP push offset public_6d90158 @0x6d466bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call esi
        mov edx, dword ptr ss : [esp+0x228]
        add esp, 0x14
        push 0
        lea ecx, ss:[esp+0x110]
        push ecx
/*FIXUP push offset public_6d90158 @0x6d466d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        push 0
        push edx
        call esi
        add esp, 0x14
        pop esi
        add esp, 0x20C
        ret 
        UNREACHABLE_TRAP(0x6d464f0)
    }
}

#undef public_6d46550
#undef public_6d46569
#undef public_6d4659e
#undef public_6d465c7
#undef public_6d465e5
#undef public_6d46630
#undef public_6d4663a
#undef public_6d4666c
#undef public_6d466af
#undef public_6d466b9
