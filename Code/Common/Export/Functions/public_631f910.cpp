#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628e250);
CLANG_FORWARD_PROC_SYMBOL(public_630e510);

#define public_631f921 _public_631f921
#define public_631f930 _public_631f930
#define public_631f940 _public_631f940
#define public_631f979 _public_631f979
#define public_631f983 _public_631f983
#define public_631f98d _public_631f98d
#define public_631f993 _public_631f993

PROC_DECLARE(0x631f910, internal_631f910, public_631f910);
extern "C" NAKED register_t __cdecl internal_631f910()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ds : [public_64018e0]
        test ecx, ecx
        push esi
        push edi
        jne public_631f921
        xor esi, esi
        jmp public_631f930
        public_631f921 : nop
        mov esi, dword ptr ds : [public_64018e4]
        sub esi, ecx
        sar esi, 2
        test esi, esi
        jne public_631f979
        public_631f930 : nop
        mov eax, dword ptr ds : [public_63ed5d8]
        test eax, eax
        je public_631f979
        mov edi, offset public_63ed5d8
        mov edi, edi
        public_631f940 : nop
        push eax
        call public_630e510
        mov edx, dword ptr ds : [public_64018e4]
        add esp, 4
        lea ecx, ss:[esp+8]
        push ecx
        movzx eax, ax
        push 1
        push edx
        mov ecx, offset public_64018dc
        mov dword ptr ss : [esp+0x14], eax
        call public_628e250
        mov eax, dword ptr ds : [edi+4]
        add edi, 4
        inc esi
        test eax, eax
        jne public_631f940
        mov ecx, dword ptr ds : [public_64018e0]
        public_631f979 : nop
        xor eax, eax
        test esi, esi
        jle public_631f98d
        mov edx, dword ptr ss : [esp+0x10]
        public_631f983 : nop
        cmp edx, dword ptr ds : [ecx+eax*4]
        je public_631f993
        inc eax
        cmp eax, esi
        jl public_631f983
        public_631f98d : nop
        pop edi
        xor al, al
        pop esi
        pop ecx
        ret 
        public_631f993 : nop
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x631f910)
    }
}

#undef public_631f921
#undef public_631f930
#undef public_631f940
#undef public_631f979
#undef public_631f983
#undef public_631f98d
#undef public_631f993
