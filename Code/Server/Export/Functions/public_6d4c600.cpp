#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d466f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c600);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c800);

#define public_6d4c680 _public_6d4c680
#define public_6d4c699 _public_6d4c699
#define public_6d4c6ce _public_6d4c6ce
#define public_6d4c6f7 _public_6d4c6f7
#define public_6d4c715 _public_6d4c715
#define public_6d4c749 _public_6d4c749
#define public_6d4c76d _public_6d4c76d
#define public_6d4c785 _public_6d4c785
#define public_6d4c78f _public_6d4c78f
#define public_6d4c7f0 _public_6d4c7f0

PROC_DECLARE(0x6d4c600, internal_6d4c600, public_6d4c600);
extern "C" NAKED register_t __cdecl internal_6d4c600()
{
    __asm
    {
        sub esp, 0x614
        mov eax, dword ptr ss : [esp+0x618]
        push esi
        push eax
        mov esi, ecx
        push 0
        lea ecx, ss:[esp+0x420]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x424], 0
        call public_6d4c800
        test al, al
        je public_6d4c7f0
        push edi
        mov edi, dword ptr ds : [public_6d647e8]
        call edi
        test al, al
        je public_6d4c749
        push ebx
        push ebp
        push esi
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
        jle public_6d4c699
        mov edi, eax
        lea ecx, ds:[ecx]
        public_6d4c680 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        mov ecx, offset public_6d8fd38
        inc esi
        push eax
        call public_6d466f0
        dec edi
        jne public_6d4c680
        mov edi, dword ptr ds : [public_6d90150]
        public_6d4c699 : nop
        mov al, byte ptr ds : [public_6d9014c]
        test al, al
        mov eax, dword ptr ds : [public_6d9013c]
        lea ecx, ds:[eax-1]
        jne public_6d4c6ce
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
        jmp public_6d4c715
        public_6d4c6ce : nop
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
        jb public_6d4c715
        public_6d4c6f7 : nop
        mov ebp, eax
        mov ecx, edi
        sub ecx, esi
        and ebp, 0xFF
        shl ebp, cl
        add esi, 8
        shr eax, 8
        or edx, ebp
        cmp esi, edi
        jbe public_6d4c6f7
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d4c715 : nop
        push edx
        push ebp
        lea edx, ss:[esp+0x120]
/*FIXUP push offset public_6d6aec0 @0x6d4c71e*/
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
        pop ebp
        pop ebx
        jmp public_6d4c76d
        public_6d4c749 : nop
        push 0x104
        lea edx, ss:[esp+0x114]
        push esi
        push edx
        call dword ptr ds : [public_6d64be0]
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6d64874]
        add esp, 0x10
        call edi
        public_6d4c76d : nop
        test al, al
        mov esi, dword ptr ds : [public_6d64bc0]
        push 0
        je public_6d4c785
/*FIXUP push offset public_6d8d308 @0x6d4c779*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea ecx, ss:[esp+0x14]
        push ecx
        jmp public_6d4c78f
        public_6d4c785 : nop
        lea edx, ss:[esp+0x10]
/*FIXUP push offset public_6d8d200 @0x6d4c789*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        push edx
        public_6d4c78f : nop
        push 0
/*FIXUP push offset public_6d90158 @0x6d4c791*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call esi
        add esp, 0x14
        push 0
        lea eax, ss:[esp+0x114]
        push eax
/*FIXUP push offset public_6d90158 @0x6d4c7a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        lea ecx, ss:[esp+0x220]
        push 0
        push ecx
        call esi
        add esp, 0x14
/*FIXUP push offset public_6d6aea4 @0x6d4c7b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea4
/*FIXUP push offset public_6d6ae38 @0x6d4c7be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae38
        lea edx, ss:[esp+0x21C]
        push edx
        lea eax, ss:[esp+0x324]
        push 0
        push eax
        call esi
        add esp, 0x14
        push 0
        lea ecx, ss:[esp+0x31C]
        push ecx
/*FIXUP push offset public_6d902f8 @0x6d4c7e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d902f8
        call dword ptr ds : [public_6d64aa4]
        pop edi
        public_6d4c7f0 : nop
        pop esi
        add esp, 0x614
        ret 4
        UNREACHABLE_TRAP(0x6d4c600)
    }
}

#undef public_6d4c680
#undef public_6d4c699
#undef public_6d4c6ce
#undef public_6d4c6f7
#undef public_6d4c715
#undef public_6d4c749
#undef public_6d4c76d
#undef public_6d4c785
#undef public_6d4c78f
#undef public_6d4c7f0
