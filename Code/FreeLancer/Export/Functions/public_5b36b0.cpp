#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3640);
CLANG_FORWARD_PROC_SYMBOL(public_5b36b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_5b36f9 _public_5b36f9
#define public_5b3710 _public_5b3710
#define public_5b3718 _public_5b3718
#define public_5b3738 _public_5b3738
#define public_5b373c _public_5b373c
#define public_5b3741 _public_5b3741
#define public_5b3752 _public_5b3752
#define public_5b375a _public_5b375a

PROC_DECLARE(0x5b36b0, internal_5b36b0, public_5b36b0);
extern "C" NAKED register_t __cdecl internal_5b36b0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_67ed0c]
        push ebx
        push ebp
        push esi
        mov al, 1
        xor esi, esi
        test al, cl
        push edi
        jne public_5b36f9
        mov bl, cl
        or bl, al
        mov al, byte ptr ss : [esp+0x14]
        push esi
        push esi
        mov ecx, offset public_67ed00
        mov byte ptr ds : [public_67ed0c], bl
        mov byte ptr ds : [public_67ed00], al
        call public_42a7e0
/*FIXUP push offset _public_5b3640 @0x5b36e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b3640
        mov dword ptr ds : [public_67ed04], eax
        mov dword ptr ds : [public_67ed08], esi
        call public_5b7e6c
        add esp, 4
        public_5b36f9 : nop
        mov edx, dword ptr ds : [public_67ed04]
        mov edi, dword ptr ds : [edx]
        cmp edi, edx
        je public_5b375a
        mov ebp, dword ptr ss : [esp+0x14]
        lea esp, ss:[esp]
        public_5b3710 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ecx+4]
        mov eax, ebp
        public_5b3718 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_5b373c
        test cl, cl
        je public_5b3738
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_5b373c
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_5b3718
        public_5b3738 : nop
        xor eax, eax
        jmp public_5b3741
        public_5b373c : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_5b3741 : nop
        test eax, eax
        je public_5b3752
        mov edi, dword ptr ds : [edi]
        cmp edi, edx
        jne public_5b3710
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_5b3752 : nop
        mov eax, dword ptr ds : [edi+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_5b375a : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5b36b0)
    }
}

#undef public_5b36f9
#undef public_5b3710
#undef public_5b3718
#undef public_5b3738
#undef public_5b373c
#undef public_5b3741
#undef public_5b3752
#undef public_5b375a
