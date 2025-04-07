#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad9257);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9477);

#define public_6ad949f _public_6ad949f
#define public_6ad94aa _public_6ad94aa
#define public_6ad94b1 _public_6ad94b1
#define public_6ad94dc _public_6ad94dc
#define public_6ad94e9 _public_6ad94e9
#define public_6ad94f0 _public_6ad94f0

PROC_DECLARE(0x6ad9477, internal_6ad9477, public_6ad9477);
extern "C" NAKED register_t __cdecl internal_6ad9477()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push ebx
        mov ebx, offset public_6ae04b8
        xor ecx, ecx
        sub ebx, 0x60
        cmp dword ptr ss : [ebp+0xC], ecx
        je public_6ad94f0
        jge public_6ad949f
        mov eax, dword ptr ss : [ebp+0xC]
        mov ebx, offset public_6ae0618
        neg eax
        mov dword ptr ss : [ebp+0xC], eax
        sub ebx, 0x60
        public_6ad949f : nop
        cmp dword ptr ss : [ebp+0x10], ecx
        jne public_6ad94aa
        mov eax, dword ptr ss : [ebp+8]
        mov word ptr ds : [eax], cx
        public_6ad94aa : nop
        cmp dword ptr ss : [ebp+0xC], ecx
        je public_6ad94f0
        push esi
        push edi
        public_6ad94b1 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        add ebx, 0x54
        sar dword ptr ss : [ebp+0xC], 3
        and eax, 7
        cmp eax, ecx
        je public_6ad94e9
        lea eax, ds:[eax+eax*2]
        cmp word ptr ds : [ebx+eax*4], 0x8000
        lea esi, ds:[ebx+eax*4]
        jb public_6ad94dc
        lea edi, ss:[ebp-0xC]
        movsd 
        movsd 
        movsd 
        dec dword ptr ss : [ebp-0xA]
        lea esi, ss:[ebp-0xC]
        public_6ad94dc : nop
        push esi
        push dword ptr ss : [ebp+8]
        call public_6ad9257
        pop ecx
        pop ecx
        xor ecx, ecx
        public_6ad94e9 : nop
        cmp dword ptr ss : [ebp+0xC], ecx
        jne public_6ad94b1
        pop edi
        pop esi
        public_6ad94f0 : nop
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad9477)
    }
}

#undef public_6ad949f
#undef public_6ad94aa
#undef public_6ad94b1
#undef public_6ad94dc
#undef public_6ad94e9
#undef public_6ad94f0
