#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d460f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46370);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c800);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ccd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d633bc);

#define public_6d4c878 _public_6d4c878
#define public_6d4c8cc _public_6d4c8cc
#define public_6d4c8e9 _public_6d4c8e9
#define public_6d4c8f9 _public_6d4c8f9
#define public_6d4c930 _public_6d4c930
#define public_6d4c980 _public_6d4c980
#define public_6d4c98b _public_6d4c98b
#define public_6d4c9a9 _public_6d4c9a9
#define public_6d4c9ad _public_6d4c9ad
#define public_6d4c9ba _public_6d4c9ba
#define public_6d4c9e3 _public_6d4c9e3
#define public_6d4ca08 _public_6d4ca08
#define public_6d4ca11 _public_6d4ca11
#define public_6d4ca15 _public_6d4ca15
#define public_6d4ca39 _public_6d4ca39
#define public_6d4ca42 _public_6d4ca42
#define public_6d4ca44 _public_6d4ca44

PROC_DECLARE(0x6d4c800, internal_6d4c800, public_6d4c800);
extern "C" NAKED register_t __cdecl internal_6d4c800()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d633bc @0x6d4c802*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d633bc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x524
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        push 0
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ss : [esp+0x1C], al
        call dword ptr ds : [public_6d64b74]
        mov esi, dword ptr ss : [esp+0x544]
        cmp byte ptr ds : [esi], 0
        mov dword ptr ss : [esp+0x53C], 0
        je public_6d4c8cc
        mov ecx, 0x80
        lea edi, ss:[esp+0x334]
        rep movsd
        lea ecx, ss:[esp+0x334]
        push 0x2E
        push ecx
        call dword ptr ds : [public_6d64c1c]
        add esp, 8
        test eax, eax
        je public_6d4c878
        mov byte ptr ds : [eax], 0
        public_6d4c878 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x334]
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d4c9ad
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        lea esi, ss:[esp+0x334]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], ebp
        mov byte ptr ds : [eax+ebp], 0
        jmp public_6d4c9ad
        public_6d4c8cc : nop
        call dword ptr ds : [public_6d647e8]
        test al, al
        lea ecx, ss:[esp+0x12C]
        je public_6d4c8e9
        push ebx
        push ecx
        call public_6d46370
        add esp, 8
        jmp public_6d4c8f9
        public_6d4c8e9 : nop
        push 0x104
        push ebx
        push ecx
        call dword ptr ds : [public_6d64be0]
        add esp, 0xC
        public_6d4c8f9 : nop
        lea edx, ss:[esp+0x12C]
        push 0
        push edx
        call public_6d460f0
        mov ebx, dword ptr ds : [public_6d64bc0]
        push eax
        lea eax, ss:[esp+0x23C]
        push 0
        push eax
        call ebx
        add esp, 0x14
        call dword ptr ds : [public_6d64c7c]
        mov ebp, dword ptr ds : [public_6d64c74]
        mov esi, eax
        xor edi, edi
        mov edi, edi
        public_6d4c930 : nop
        movsx ecx, si
        push ecx
        lea edx, ss:[esp+0x2C]
/*FIXUP push offset public_6d6b60c @0x6d4c938*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b60c
        push edx
        inc edi
        call ebp
/*FIXUP push offset public_6d6aea4 @0x6d4c941*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea4
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x244]
        push ecx
        lea edx, ss:[esp+0x34C]
        push 0
        push edx
        call ebx
        add esp, 0x20
        lea eax, ss:[esp+0x334]
        push eax
        call dword ptr ds : [public_6d64aac]
        cmp eax, 0xFFFFFFFF
        jne public_6d4c980
        call dword ptr ds : [public_6d64aa8]
        cmp eax, 2
        je public_6d4c98b
        public_6d4c980 : nop
        inc esi
        cmp edi, 0xC8
        jl public_6d4c930
        jmp public_6d4c9a9
        public_6d4c98b : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x28]
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6d64b08]
        public_6d4c9a9 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_6d4c9ad : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        jne public_6d4c9ba
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d4c9ba : nop
        mov edx, dword ptr ss : [esp+0x54C]
        mov ecx, dword ptr ss : [esp+0x548]
        push edx
        push ecx
        push eax
        mov ecx, ebx
        call public_6d4ccd0
        test al, al
        mov eax, dword ptr ss : [esp+0x1C]
        je public_6d4ca15
        test eax, eax
        jne public_6d4c9e3
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d4c9e3 : nop
        push eax
        mov ecx, ebx
        call public_6d4b5a0
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_6d4ca11
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d4ca08
        cmp cl, 0xFF
        je public_6d4ca08
        dec cl
        mov byte ptr ds : [eax], cl
        mov al, 1
        jmp public_6d4ca44
        public_6d4ca08 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d4ca11 : nop
        mov al, 1
        jmp public_6d4ca44
        public_6d4ca15 : nop
        mov edx, dword ptr ds : [ebx+0x344]
        inc edx
        test eax, eax
        mov dword ptr ds : [ebx+0x344], edx
        je public_6d4ca42
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d4ca39
        cmp cl, 0xFF
        je public_6d4ca39
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d4ca42
        public_6d4ca39 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d4ca42 : nop
        xor al, al
        public_6d4ca44 : nop
        mov ecx, dword ptr ss : [esp+0x534]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x530
        ret 0xC
        UNREACHABLE_TRAP(0x6d4c800)
    }
}

#undef public_6d4c878
#undef public_6d4c8cc
#undef public_6d4c8e9
#undef public_6d4c8f9
#undef public_6d4c930
#undef public_6d4c980
#undef public_6d4c98b
#undef public_6d4c9a9
#undef public_6d4c9ad
#undef public_6d4c9ba
#undef public_6d4c9e3
#undef public_6d4ca08
#undef public_6d4ca11
#undef public_6d4ca15
#undef public_6d4ca39
#undef public_6d4ca42
#undef public_6d4ca44
