#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631be30);

#define public_631be44 _public_631be44
#define public_631be53 _public_631be53
#define public_631be63 _public_631be63
#define public_631be79 _public_631be79
#define public_631be8b _public_631be8b
#define public_631be90 _public_631be90
#define public_631bea5 _public_631bea5
#define public_631becd _public_631becd

PROC_DECLARE(0x631be30, internal_631be30, public_631be30);
extern "C" NAKED register_t __cdecl internal_631be30()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6399300]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov bl, 0x40
        public_631be44 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        and eax, 0x7F
        test byte ptr ds : [eax+public_63ed4a8], bl
        je public_631be63
        public_631be53 : nop
        inc esi
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        and ecx, 0x7F
        test byte ptr ds : [ecx+public_63ed4a8], bl
        jne public_631be53
        public_631be63 : nop
        push 0x2C
        push esi
        call ebp
        add esp, 8
        test edi, edi
        je public_631be79
        test eax, eax
        je public_631becd
        lea esi, ds:[eax+1]
        dec edi
        jmp public_631be44
        public_631be79 : nop
        test eax, eax
        jne public_631be8b
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        add eax, esi
        public_631be8b : nop
        cmp eax, esi
        jbe public_631bea5
        nop 
        public_631be90 : nop
        xor edx, edx
        mov dl, byte ptr ds : [eax-1]
        and edx, 0x7F
        test byte ptr ds : [edx+public_63ed4a8], bl
        je public_631bea5
        dec eax
        cmp eax, esi
        ja public_631be90
        public_631bea5 : nop
        sub eax, esi
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, offset public_6401350
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+public_6401350], 0
        mov eax, offset public_6401350
        pop ebx
        ret 
        public_631becd : nop
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [public_6401350], 0
        mov eax, offset public_6401350
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x631be30)
    }
}

#undef public_631be44
#undef public_631be53
#undef public_631be63
#undef public_631be79
#undef public_631be8b
#undef public_631be90
#undef public_631bea5
#undef public_631becd
