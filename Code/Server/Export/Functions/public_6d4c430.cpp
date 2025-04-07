#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c430);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c800);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ccd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a180);

#define public_6d4c45d _public_6d4c45d
#define public_6d4c46b _public_6d4c46b
#define public_6d4c4a5 _public_6d4c4a5
#define public_6d4c4b0 _public_6d4c4b0
#define public_6d4c557 _public_6d4c557
#define public_6d4c57d _public_6d4c57d
#define public_6d4c5ce _public_6d4c5ce
#define public_6d4c5d5 _public_6d4c5d5

PROC_DECLARE(0x6d4c430, internal_6d4c430, public_6d4c430);
extern "C" NAKED register_t __cdecl internal_6d4c430()
{
    __asm
    {
        sub esp, 0xA88
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [public_6d647e8]
        mov esi, ecx
        call edi
        test al, al
        je public_6d4c46b
        call edi
        test al, al
        je public_6d4c45d
        mov dl, byte ptr ds : [esi+0x64]
        test dl, dl
        setne al
        test al, al
        je public_6d4c5d5
        public_6d4c45d : nop
        mov eax, dword ptr ds : [esi+0x3E0]
        test eax, eax
        je public_6d4c5d5
        public_6d4c46b : nop
        call edi
        test al, al
        je public_6d4c557
        push ebp
        lea ebp, ds:[esi+0x64]
        lea edi, ds:[esi+0x50]
        push ebp
        mov ecx, edi
        call public_6d5a180
        cmp eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x10], eax
        je public_6d4c4a5
        add eax, 0xC
        push eax
        push ebp
        call dword ptr ds : [public_6d648d8]
        add esp, 8
        test al, al
        jne public_6d4c4a5
        lea eax, ss:[esp+0x10]
        jmp public_6d4c4b0
        public_6d4c4a5 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        public_6d4c4b0 : nop
        mov ebp, dword ptr ds : [eax]
        xor eax, eax
        mov word ptr ss : [esp+0x298], 0
        mov ecx, 0x1FF
        lea edi, ss:[esp+0x29A]
        rep stosd
        stosw 
        xor eax, eax
        mov byte ptr ss : [esp+0x58], 0
        mov ecx, 0xF
        lea edi, ss:[esp+0x59]
        rep stosd
        stosw 
        stosb 
        mov byte ptr ss : [esp+0x18], 0
        xor eax, eax
        mov ecx, 0xF
        lea edi, ss:[esp+0x19]
        rep stosd
        stosw 
        stosb 
        call dword ptr ds : [public_6d64b9c]
        lea ecx, ss:[esp+0x18]
        push ecx
        call dword ptr ds : [public_6d64c14]
        lea edx, ss:[esp+0x5C]
        push edx
        call dword ptr ds : [public_6d64c10]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        lea edx, ss:[esp+0x2A8]
/*FIXUP push offset public_6d6b600 @0x6d4c525*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b600
        push edx
        call dword ptr ds : [public_6d64c0c]
        add esp, 0x18
        push 0
        lea eax, ss:[esp+0x29C]
        push eax
        add ebp, 0x20C
        push ebp
        mov ecx, esi
        call public_6d4ccd0
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0xA88
        ret 
        public_6d4c557 : nop
        mov eax, dword ptr ds : [esi+0x3EC]
        test eax, 0x3FFFFFFF
        mov bl, 1
        je public_6d4c57d
        push eax
        call dword ptr ds : [public_6d643dc]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0x54]
        test al, al
        je public_6d4c57d
        xor bl, bl
        public_6d4c57d : nop
        mov al, byte ptr ds : [esi+0x340]
        test al, al
        jne public_6d4c5ce
        test bl, bl
        je public_6d4c5ce
/*FIXUP push offset public_6d6ae38 @0x6d4c58b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae38
        lea eax, ss:[esp+0x98]
        push 0x200
        push eax
        mov byte ptr ss : [esp+0xA0], 0
        call dword ptr ds : [public_6d644d0]
        add esp, 0xC
        push 0x65C
        push 0
        lea ecx, ss:[esp+0x9C]
        push ecx
        mov ecx, esi
        call public_6d4c800
        pop edi
        pop esi
        pop ebx
        add esp, 0xA88
        ret 
        public_6d4c5ce : nop
        mov byte ptr ds : [esi+0x340], 0
        public_6d4c5d5 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0xA88
        ret 
        UNREACHABLE_TRAP(0x6d4c430)
    }
}

#undef public_6d4c45d
#undef public_6d4c46b
#undef public_6d4c4a5
#undef public_6d4c4b0
#undef public_6d4c557
#undef public_6d4c57d
#undef public_6d4c5ce
#undef public_6d4c5d5
