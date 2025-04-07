#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3817);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7a22);

#define public_6ad3835 _public_6ad3835
#define public_6ad385a _public_6ad385a
#define public_6ad3863 _public_6ad3863
#define public_6ad3883 _public_6ad3883
#define public_6ad3887 _public_6ad3887

PROC_DECLARE(0x6ad3817, internal_6ad3817, public_6ad3817);
extern "C" NAKED register_t __cdecl internal_6ad3817()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[eax+1]
        cmp ecx, 0x100
        ja public_6ad3835
        mov ecx, dword ptr ds : [public_6add750]
        movzx eax, word ptr ds : [ecx+eax*2]
        jmp public_6ad3887
        public_6ad3835 : nop
        mov ecx, eax
        push esi
        mov esi, dword ptr ds : [public_6add750]
        sar ecx, 8
        movzx edx, cl
        test byte ptr ds : [esi+edx*2+1], 0x80
        pop esi
        je public_6ad385a
        and byte ptr ss : [ebp-2], 0
        mov byte ptr ss : [ebp-4], cl
        mov byte ptr ss : [ebp-3], al
        push 2
        jmp public_6ad3863
        public_6ad385a : nop
        and byte ptr ss : [ebp-3], 0
        mov byte ptr ss : [ebp-4], al
        push 1
        public_6ad3863 : nop
        pop eax
        lea ecx, ss:[ebp+0xA]
        push 1
        push 0
        push 0
        push ecx
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push 1
        call public_6ad7a22
        add esp, 0x1C
        test eax, eax
        jne public_6ad3883
        leave 
        ret 
        public_6ad3883 : nop
        movzx eax, word ptr ss : [ebp+0xA]
        public_6ad3887 : nop
        and eax, dword ptr ss : [ebp+0xC]
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad3817)
    }
}

#undef public_6ad3835
#undef public_6ad385a
#undef public_6ad3863
#undef public_6ad3883
#undef public_6ad3887
