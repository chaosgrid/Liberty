#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3450);
CLANG_FORWARD_PROC_SYMBOL(public_6ac36d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3790);
CLANG_FORWARD_PROC_SYMBOL(public_6ac38d0);

#define public_6ac37e3 _public_6ac37e3
#define public_6ac37e8 _public_6ac37e8
#define public_6ac3839 _public_6ac3839
#define public_6ac383b _public_6ac383b
#define public_6ac3886 _public_6ac3886
#define public_6ac388f _public_6ac388f
#define public_6ac38b8 _public_6ac38b8

PROC_DECLARE(0x6ac3790, internal_6ac3790, public_6ac3790);
extern "C" NAKED register_t __cdecl internal_6ac3790()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x200
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ds : [edi+4]
        dec esi
        mov eax, esi
        or al, 1
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ss : [ebp+0x10]
        bsr eax, eax
        add eax, 1
        mov ecx, dword ptr ss : [ebp+8]
        push edi
        push ecx
        lea ebx, ds:[eax-1]
        call public_6ac3450
        test eax, eax
        jne public_6ac38b8
        mov eax, dword ptr ss : [ebp+8]
        push edi
        lea edx, ss:[ebp-0x100]
        push 1
        push edx
        push eax
        call public_6ac3140
        test eax, eax
        je public_6ac38b8
        public_6ac37e3 : nop
        mov eax, 1
        public_6ac37e8 : nop
        test ebx, ebx
        je public_6ac388f
        test eax, eax
        je public_6ac3839
        lea ecx, ss:[ebp-0x200]
        push edi
        push ecx
        mov edx, esi
        mov ecx, ebx
        lea eax, ss:[ebp-0x100]
        shr edx, cl
        push edx
        push eax
        call public_6ac36d0
        test eax, eax
        je public_6ac3839
        lea ecx, ss:[ebp-0x100]
        push edi
        lea edx, ss:[ebp-0x200]
        push ecx
        lea eax, ss:[ebp-0x100]
        push edx
        push eax
        call public_6ac38d0
        test eax, eax
        je public_6ac3839
        mov eax, 1
        jmp public_6ac383b
        public_6ac3839 : nop
        xor eax, eax
        public_6ac383b : nop
        dec ebx
        mov edx, esi
        mov ecx, ebx
        shr edx, cl
        test dl, 1
        je public_6ac3886
        test eax, eax
        je public_6ac38b8
        lea eax, ss:[ebp-0x100]
        push edi
        push eax
        lea ecx, ss:[ebp-0x100]
        push 1
        push ecx
        call public_6ac36d0
        test eax, eax
        je public_6ac38b8
        mov eax, dword ptr ss : [ebp+8]
        lea edx, ss:[ebp-0x100]
        push edi
        push edx
        lea ecx, ss:[ebp-0x100]
        push eax
        push ecx
        call public_6ac38d0
        test eax, eax
        je public_6ac38b8
        jmp public_6ac37e3
        public_6ac3886 : nop
        test eax, eax
        je public_6ac38b8
        jmp public_6ac37e8
        public_6ac388f : nop
        test eax, eax
        je public_6ac38b8
        mov edx, dword ptr ss : [ebp+0xC]
        push edi
        push edx
        lea eax, ss:[ebp-0x100]
        push 1
        push eax
        call public_6ac36d0
        test eax, eax
        je public_6ac38b8
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_6ac38b8 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ac3790)
    }
}

#undef public_6ac37e3
#undef public_6ac37e8
#undef public_6ac3839
#undef public_6ac383b
#undef public_6ac3886
#undef public_6ac388f
#undef public_6ac38b8
