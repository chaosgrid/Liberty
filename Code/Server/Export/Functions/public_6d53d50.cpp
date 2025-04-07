#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4520);
CLANG_FORWARD_PROC_SYMBOL(public_6d460f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d466f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d467b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d523e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d536d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d53d50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6395b);

#define public_6d53dc5 _public_6d53dc5
#define public_6d53ddc _public_6d53ddc
#define public_6d53e41 _public_6d53e41
#define public_6d53e5e _public_6d53e5e
#define public_6d53e7d _public_6d53e7d
#define public_6d53ebd _public_6d53ebd
#define public_6d53ee9 _public_6d53ee9
#define public_6d53f04 _public_6d53f04
#define public_6d53f68 _public_6d53f68
#define public_6d53f83 _public_6d53f83
#define public_6d53fa2 _public_6d53fa2
#define public_6d53fae _public_6d53fae
#define public_6d53fb4 _public_6d53fb4
#define public_6d53fb6 _public_6d53fb6

PROC_DECLARE(0x6d53d50, internal_6d53d50, public_6d53d50);
extern "C" NAKED register_t __cdecl internal_6d53d50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6395b @0x6d53d52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6395b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x328
        push ebx
        push esi
        mov ebx, ecx
        or esi, 0xFFFFFFFF
        push edi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0xC], esi
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d53e7d
        mov eax, dword ptr ss : [esp+0x344]
        push ebp
        push eax
        call dword ptr ds : [public_6d64c98]
        mov esi, eax
        push esi
        call dword ptr ds : [public_6d64ca0]
        push esi
        call dword ptr ds : [public_6d64c80]
        mov ecx, dword ptr ds : [public_6d90144]
        mov ebp, eax
        lea eax, ss:[ebp+ebp]
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [public_6d90150], ecx
        mov edi, esi
        jle public_6d53ddc
        mov ebx, eax
        public_6d53dc5 : nop
        xor eax, eax
        mov al, byte ptr ds : [edi]
        mov ecx, offset public_6d8fd38
        inc edi
        push eax
        call public_6d466f0
        dec ebx
        jne public_6d53dc5
        mov ebx, dword ptr ss : [esp+0x28]
        public_6d53ddc : nop
        mov ecx, offset public_6d8fd38
        call public_6d467b0
        push eax
        push ebp
        lea edx, ss:[esp+0x138]
/*FIXUP push offset public_6d6aec0 @0x6d53def*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aec0
        push edx
        call dword ptr ds : [public_6d64c74]
        push esi
        call dword ptr ds : [public_6d64c94]
        lea eax, ss:[esp+0x248]
        push eax
        call dword ptr ds : [public_6d64874]
        add esp, 0x18
        call dword ptr ds : [public_6d647e8]
        test al, al
        mov esi, dword ptr ds : [public_6d64bc0]
        pop ebp
        je public_6d53e41
        xor edi, edi
        push edi
/*FIXUP push offset public_6d8d308 @0x6d53e27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea ecx, ss:[esp+0x238]
        push ecx
        push edi
/*FIXUP push offset public_6d90158 @0x6d53e35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call esi
        add esp, 0x14
        jmp public_6d53e5e
        public_6d53e41 : nop
        push 0
/*FIXUP push offset public_6d8d200 @0x6d53e43*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea edx, ss:[esp+0x238]
        push edx
        push 0
/*FIXUP push offset public_6d90158 @0x6d53e52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call esi
        add esp, 0x14
        xor edi, edi
        public_6d53e5e : nop
        push edi
        lea eax, ss:[esp+0x130]
        push eax
/*FIXUP push offset public_6d90158 @0x6d53e67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        lea ecx, ss:[esp+0x34]
        push edi
        push ecx
        call esi
        mov esi, dword ptr ss : [esp+0x20]
        add esp, 0x14
        jmp public_6d53ebd
        public_6d53e7d : nop
        mov edx, dword ptr ss : [esp+0x344]
        push 0x104
        push edx
        lea eax, ss:[esp+0x134]
        push eax
        call dword ptr ds : [public_6d64be0]
        add esp, 0xC
        lea ecx, ss:[esp+0x12C]
        push 0
        push ecx
        call public_6d460f0
        push eax
        lea edx, ss:[esp+0x34]
        push 0
        push edx
        call dword ptr ds : [public_6d64bc0]
        add esp, 0x14
        xor edi, edi
        public_6d53ebd : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6d53f04
        lea eax, ss:[esp+0x28]
        push 6
        push eax
        call dword ptr ds : [public_6d64c00]
        add esp, 8
        test eax, eax
        je public_6d53ee9
        lea ecx, ss:[esp+0x28]
        push ecx
        call dword ptr ds : [public_6d6497c]
        add esp, 4
        public_6d53ee9 : nop
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, ebx
        call public_6d536d0
        test al, al
        je public_6d53fb4
        xor eax, eax
        jmp public_6d53fb6
        public_6d53f04 : nop
        mov al, byte ptr ds : [ebx+0xC]
        test al, al
        je public_6d53fb4
        mov ecx, dword ptr ss : [esp+0x344]
        mov al, byte ptr ss : [esp+0x13]
        push ecx
        mov byte ptr ss : [esp+0x18], al
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        call dword ptr ds : [public_6d64c80]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x1C]
        call public_6ce4520
        test al, al
        je public_6d53f68
        mov edx, dword ptr ss : [esp+0x344]
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push edx
        push eax
        call public_6ce1960
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], esi
        add esp, 0xC
        mov word ptr ds : [ecx+esi*2], di
        public_6d53f68 : nop
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x340], edi
        call public_6d523e0
        test al, al
        je public_6d53f83
        mov dword ptr ss : [esp+0xC], edi
        public_6d53f83 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, edi
        je public_6d53fae
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d53fa2
        cmp cl, 0xFF
        je public_6d53fa2
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov eax, dword ptr ss : [esp+0xC]
        jmp public_6d53fb6
        public_6d53fa2 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d53fae : nop
        mov eax, dword ptr ss : [esp+0xC]
        jmp public_6d53fb6
        public_6d53fb4 : nop
        mov eax, esi
        public_6d53fb6 : nop
        mov ecx, dword ptr ss : [esp+0x334]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x334
        ret 4
        UNREACHABLE_TRAP(0x6d53d50)
    }
}

#undef public_6d53dc5
#undef public_6d53ddc
#undef public_6d53e41
#undef public_6d53e5e
#undef public_6d53e7d
#undef public_6d53ebd
#undef public_6d53ee9
#undef public_6d53f04
#undef public_6d53f68
#undef public_6d53f83
#undef public_6d53fa2
#undef public_6d53fae
#undef public_6d53fb4
#undef public_6d53fb6
