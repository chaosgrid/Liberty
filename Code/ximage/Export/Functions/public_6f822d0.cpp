#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f822d0);

#define public_6f822f8 _public_6f822f8
#define public_6f82302 _public_6f82302
#define public_6f8230c _public_6f8230c

PROC_DECLARE(0x6f822d0, internal_6f822d0, public_6f822d0);
extern "C" NAKED register_t __cdecl internal_6f822d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        sub esi, edx
        push edi
        je public_6f8230c
        mov edi, dword ptr ds : [eax+0xC]
        mov ebx, dword ptr ds : [eax+4]
        mov ebp, edi
        sub ebp, ebx
        je public_6f8230c
        test esi, esi
        jge public_6f822f8
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+8], edx
        public_6f822f8 : nop
        test ebp, ebp
        jg public_6f82302
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax+0xC], ebx
        public_6f82302 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        public_6f8230c : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f822d0)
    }
}

#undef public_6f822f8
#undef public_6f82302
#undef public_6f8230c
