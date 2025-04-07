#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6616c10);
CLANG_FORWARD_PROC_SYMBOL(public_6616d90);
CLANG_FORWARD_PROC_SYMBOL(public_661d700);

#define public_661a770 _public_661a770
#define public_661a794 _public_661a794
#define public_661a798 _public_661a798
#define public_661a79d _public_661a79d
#define public_661a7ff _public_661a7ff
#define public_661a81a _public_661a81a
#define public_661a83b _public_661a83b
#define public_661a842 _public_661a842
#define public_661a855 _public_661a855
#define public_661a866 _public_661a866

PROC_DECLARE(0x661a750, internal_661a750, public_661a750);
extern "C" NAKED register_t __cdecl internal_661a750()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov eax, dword ptr ss : [ebp]
        xor edi, edi
        cmp eax, 0x18
        jne public_661a855
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_661a770 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_661a798
        test cl, cl
        je public_661a794
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_661a798
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_661a770
        public_661a794 : nop
        xor eax, eax
        jmp public_661a79d
        public_661a798 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_661a79d : nop
        test eax, eax
        pop ebx
        jne public_661a855
        push 1
        push 0x60
        call dword ptr ds : [public_6629068]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_661a842
        mov ecx, esi
        call public_6616c10
        lea eax, ds:[esi+0x54]
        mov dword ptr ds : [eax], offset public_662946c
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_66293d0
        mov dword ptr ds : [esi+4], offset public_66293bc
        mov dword ptr ds : [esi+8], offset public_6629370
        mov dword ptr ds : [esi+0xC], offset public_662935c
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov dword ptr ds : [esi+0x50], ecx
        jne public_661a83b
        mov dword ptr ds : [esi+0x50], eax
        public_661a7ff : nop
        push ebp
        mov ecx, esi
        call public_661d700
        mov edi, eax
        test edi, edi
        je public_661a866
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_661a81a
        mov dword ptr ds : [eax], 0
        public_661a81a : nop
        mov ecx, esi
        call public_6616d90
        push esi
        call dword ptr ds : [public_662902c]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_661a83b : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_661a7ff
        public_661a842 : nop
        mov edx, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        pop edi
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_661a855 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_661a866 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x661a750)
    }
}

#undef public_661a770
#undef public_661a794
#undef public_661a798
#undef public_661a79d
#undef public_661a7ff
#undef public_661a81a
#undef public_661a83b
#undef public_661a842
#undef public_661a855
#undef public_661a866
