#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ba60);
CLANG_FORWARD_PROC_SYMBOL(public_44bd50);
CLANG_FORWARD_PROC_SYMBOL(public_44bfd0);

#define public_44c01f _public_44c01f
#define public_44c043 _public_44c043
#define public_44c074 _public_44c074
#define public_44c0e8 _public_44c0e8
#define public_44c11f _public_44c11f
#define public_44c14d _public_44c14d
#define public_44c170 _public_44c170
#define public_44c180 _public_44c180
#define public_44c1b2 _public_44c1b2
#define public_44c1bd _public_44c1bd
#define public_44c1c3 _public_44c1c3
#define public_44c1e6 _public_44c1e6
#define public_44c1f5 _public_44c1f5
#define public_44c254 _public_44c254

PROC_DECLARE(0x44bfd0, internal_44bfd0, public_44bfd0);
extern "C" NAKED register_t __cdecl internal_44bfd0()
{
    __asm
    {
        sub esp, 0x100
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x13A4]
        test eax, eax
        push edi
        jne public_44c074
        mov al, byte ptr ss : [esp+0x124]
        test al, al
        mov dword ptr ds : [esi+0x13A4], 1
        je public_44c043
/*FIXUP push offset public_5cb894 @0x44bfff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb894
        call public_44bd50
        test al, al
        je public_44c043
        mov eax, dword ptr ss : [esp+0x120]
        mov ecx, dword ptr ss : [esp+0x11C]
        push 0
        push eax
        push ecx
        public_44c01f : nop
        mov edx, dword ptr ss : [esp+0x124]
        mov eax, dword ptr ss : [esp+0x120]
        push edx
        push eax
        mov ecx, esi
        call public_44bfd0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x100
        ret 0x14
        public_44c043 : nop
        mov ecx, dword ptr ss : [esp+0x120]
        mov edx, dword ptr ss : [esp+0x11C]
        mov eax, dword ptr ss : [esp+0x118]
        push ecx
        push edx
        push eax
/*FIXUP push offset public_5cb894 @0x44c05b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb894
        mov ecx, esi
        call public_44ba60
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x100
        ret 0x14
        public_44c074 : nop
        mov ebx, dword ptr ss : [esp+0x114]
        test bl, bl
        je public_44c170
        inc eax
        push eax
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_5cbfc8 @0x44c089*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbfc8
        push ecx
        mov dword ptr ds : [esi+0x13A4], eax
        call dword ptr ds : [public_5c71ec]
        mov al, byte ptr ss : [esp+0x130]
        add esp, 0xC
        test al, al
        je public_44c0e8
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        call public_44bd50
        test al, al
        je public_44c0e8
        mov eax, dword ptr ss : [esp+0x120]
        mov ecx, dword ptr ss : [esp+0x11C]
        mov edx, dword ptr ss : [esp+0x118]
        push 0
        push eax
        push ecx
        push edx
        push ebx
        mov ecx, esi
        call public_44bfd0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x100
        ret 0x14
        public_44c0e8 : nop
        mov edi, dword ptr ss : [esp+0x120]
        mov ebp, dword ptr ss : [esp+0x11C]
        mov eax, dword ptr ss : [esp+0x118]
        push edi
        push ebp
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_44ba60
        test al, al
        je public_44c11f
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x100
        ret 0x14
        public_44c11f : nop
        mov al, byte ptr ss : [esp+0x124]
        test al, al
        mov dword ptr ds : [esi+0x13A4], 1
        je public_44c14d
/*FIXUP push offset public_5cb894 @0x44c134*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb894
        mov ecx, esi
        call public_44bd50
        test al, al
        je public_44c14d
        push 0
        push edi
        push ebp
        jmp public_44c01f
        public_44c14d : nop
        mov ecx, dword ptr ss : [esp+0x118]
        push edi
        push ebp
        push ecx
/*FIXUP push offset public_5cb894 @0x44c157*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb894
        mov ecx, esi
        call public_44ba60
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x100
        ret 0x14
        public_44c170 : nop
        dec eax
        test eax, eax
        mov dword ptr ds : [esi+0x13A4], eax
        jne public_44c1f5
        nop 
        lea esp, ss:[esp]
        public_44c180 : nop
        mov eax, dword ptr ds : [esi+0x13A4]
        inc eax
        push eax
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_5cbfc8 @0x44c18c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbfc8
        push edx
        mov dword ptr ds : [esi+0x13A4], eax
        call dword ptr ds : [public_5c71ec]
        mov edi, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edi+0x138]
        add esp, 0xC
        test eax, eax
        jne public_44c1b2
        xor ebp, ebp
        jmp public_44c1bd
        public_44c1b2 : nop
        mov ebp, dword ptr ds : [edi+0x13C]
        sub ebp, eax
        sar ebp, 2
        public_44c1bd : nop
        xor ebx, ebx
        test ebp, ebp
        jle public_44c1e6
        public_44c1c3 : nop
        mov eax, dword ptr ds : [edi+0x138]
        mov eax, dword ptr ds : [eax+ebx*4]
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_44c180
        inc ebx
        cmp ebx, ebp
        jl public_44c1c3
        public_44c1e6 : nop
        mov ebp, dword ptr ds : [esi+0x13A4]
        dec ebp
        mov dword ptr ds : [esi+0x13A4], ebp
        mov eax, ebp
        public_44c1f5 : nop
        push eax
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_5cbfc8 @0x44c1fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbfc8
        push eax
        call dword ptr ds : [public_5c71ec]
        mov al, byte ptr ss : [esp+0x130]
        add esp, 0xC
        test al, al
        je public_44c254
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_44bd50
        test al, al
        je public_44c254
        mov edx, dword ptr ss : [esp+0x120]
        mov eax, dword ptr ss : [esp+0x11C]
        mov ecx, dword ptr ss : [esp+0x118]
        push 0
        push edx
        push eax
        push ecx
        push 0
        mov ecx, esi
        call public_44bfd0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x100
        ret 0x14
        public_44c254 : nop
        mov edx, dword ptr ss : [esp+0x120]
        mov eax, dword ptr ss : [esp+0x11C]
        mov ecx, dword ptr ss : [esp+0x118]
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_44ba60
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x100
        ret 0x14
        UNREACHABLE_TRAP(0x44bfd0)
    }
}

#undef public_44c01f
#undef public_44c043
#undef public_44c074
#undef public_44c0e8
#undef public_44c11f
#undef public_44c14d
#undef public_44c170
#undef public_44c180
#undef public_44c1b2
#undef public_44c1bd
#undef public_44c1c3
#undef public_44c1e6
#undef public_44c1f5
#undef public_44c254
