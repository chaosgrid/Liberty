#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40230);

#define public_6f40240 _public_6f40240
#define public_6f40260 _public_6f40260
#define public_6f4027c _public_6f4027c
#define public_6f4028b _public_6f4028b

PROC_DECLARE(0x6f40230, internal_6f40230, public_6f40230);
extern "C" NAKED register_t __cdecl internal_6f40230()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        public_6f40240 : nop
        mov edi, dword ptr ds : [eax]
        test edi, edi
        je public_6f40260
        test esi, esi
        je public_6f40260
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, dword ptr ds : [esi+8]
        setb cl
        test cl, cl
        je public_6f40260
        add eax, 4
        jmp public_6f40240
        lea esp, ss:[esp]
        public_6f40260 : nop
        sub edx, 4
        test esi, esi
        je public_6f4027c
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_6f4027c
        mov ebp, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ds : [esi+8]
        cmp ebx, ebp
        setb cl
        test cl, cl
        jne public_6f40260
        public_6f4027c : nop
        cmp edx, eax
        jbe public_6f4028b
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edx], edi
        add eax, 4
        jmp public_6f40240
        public_6f4028b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f40230)
    }
}

#undef public_6f40240
#undef public_6f40260
#undef public_6f4027c
#undef public_6f4028b
