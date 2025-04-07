#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46501);
CLANG_FORWARD_PROC_SYMBOL(public_6d465fd);
CLANG_FORWARD_PROC_SYMBOL(public_6d4668b);

#define public_6d466b6 _public_6d466b6
#define public_6d466bf _public_6d466bf
#define public_6d466df _public_6d466df
#define public_6d466e9 _public_6d466e9
#define public_6d46704 _public_6d46704
#define public_6d46711 _public_6d46711
#define public_6d46715 _public_6d46715

PROC_DECLARE(0x6d4668b, internal_6d4668b, public_6d4668b);
extern "C" NAKED register_t __cdecl internal_6d4668b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        xor edx, edx
        mov eax, 0x3B9AC9F0
        div dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+4]
        mov esi, eax
        test esi, esi
        jg public_6d466b6
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x14], 0x45
        mov eax, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [eax]
        pop ecx
        public_6d466b6 : nop
        mov ebx, dword ptr ss : [ebp+0x14]
        cmp esi, ebx
        jl public_6d466bf
        mov esi, ebx
        public_6d466bf : nop
        mov eax, ebx
        shl eax, 2
        push eax
        push dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+0x4C], esi
        push dword ptr ss : [ebp+8]
        call public_6d46501
        add esp, 0xC
        xor edi, edi
        test ebx, ebx
        mov dword ptr ss : [ebp+0x14], eax
        jbe public_6d46715
        public_6d466df : nop
        mov eax, ebx
        sub eax, edi
        cmp esi, eax
        jb public_6d466e9
        mov esi, eax
        public_6d466e9 : nop
        mov eax, esi
        imul eax, dword ptr ss : [ebp+0x10]
        push eax
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d465fd
        add esp, 0xC
        test esi, esi
        jbe public_6d46711
        mov ecx, esi
        public_6d46704 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [edx+edi*4], eax
        add eax, dword ptr ss : [ebp+0x10]
        inc edi
        dec ecx
        jne public_6d46704
        public_6d46711 : nop
        cmp edi, ebx
        jb public_6d466df
        public_6d46715 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4668b)
    }
}

#undef public_6d466b6
#undef public_6d466bf
#undef public_6d466df
#undef public_6d466e9
#undef public_6d46704
#undef public_6d46711
#undef public_6d46715
