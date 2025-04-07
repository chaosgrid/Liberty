#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1500);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5560);
CLANG_FORWARD_PROC_SYMBOL(public_6ad98e1);
CLANG_FORWARD_PROC_SYMBOL(public_6ad99d1);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9ad4);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9b3b);

#define public_6ad99e9 _public_6ad99e9
#define public_6ad99fb _public_6ad99fb
#define public_6ad9a1d _public_6ad9a1d
#define public_6ad9a31 _public_6ad9a31
#define public_6ad9a4c _public_6ad9a4c
#define public_6ad9a60 _public_6ad9a60
#define public_6ad9a7a _public_6ad9a7a
#define public_6ad9a96 _public_6ad9a96

PROC_DECLARE(0x6ad99d1, internal_6ad99d1, public_6ad99d1);
extern "C" NAKED register_t __cdecl internal_6ad99d1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [ebx+8], eax
        jae public_6ad99e9
        call public_6ad98e1
        public_6ad99e9 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, eax
        sub esi, ecx
        cmp dword ptr ss : [ebp+0x10], esi
        jae public_6ad99fb
        mov esi, dword ptr ss : [ebp+0x10]
        public_6ad99fb : nop
        cmp edi, ebx
        jne public_6ad9a1d
        push dword ptr ds : [public_6adb180]
        add esi, ecx
        mov ecx, edi
        push esi
        call public_6ad9ad4
        push dword ptr ss : [ebp+0xC]
        mov ecx, edi
        push 0
        call public_6ad9ad4
        jmp public_6ad9a96
        public_6ad9a1d : nop
        test esi, esi
        jbe public_6ad9a60
        cmp esi, eax
        jne public_6ad9a60
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6ad9a31
        mov eax, offset public_6ada238
        public_6ad9a31 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6ad9a60
        push 1
        mov ecx, edi
        call public_6ac1500
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6ad9a4c
        mov eax, offset public_6ada238
        public_6ad9a4c : nop
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [edi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_6ad9a96
        public_6ad9a60 : nop
        push 1
        push esi
        mov ecx, edi
        call public_6ad9b3b
        test al, al
        je public_6ad9a96
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6ad9a7a
        mov eax, offset public_6ada238
        public_6ad9a7a : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        push esi
        add eax, ecx
        push eax
        push dword ptr ds : [edi+4]
        call public_6ad5560
        mov eax, dword ptr ds : [edi+4]
        add esp, 0xC
        mov dword ptr ds : [edi+8], esi
        and byte ptr ds : [eax+esi], 0
        public_6ad9a96 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ad99d1)
    }
}

#undef public_6ad99e9
#undef public_6ad99fb
#undef public_6ad9a1d
#undef public_6ad9a31
#undef public_6ad9a4c
#undef public_6ad9a60
#undef public_6ad9a7a
#undef public_6ad9a96
