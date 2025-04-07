#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b440);
CLANG_FORWARD_PROC_SYMBOL(public_62902b0);
CLANG_FORWARD_PROC_SYMBOL(public_6343ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6345450);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_628b470 _public_628b470
#define public_628b483 _public_628b483
#define public_628b493 _public_628b493
#define public_628b49e _public_628b49e
#define public_628b4c7 _public_628b4c7
#define public_628b4da _public_628b4da
#define public_628b4ea _public_628b4ea
#define public_628b4f8 _public_628b4f8
#define public_628b501 _public_628b501

PROC_DECLARE(0x628b440, internal_628b440, public_628b440);
extern "C" NAKED register_t __cdecl internal_628b440()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_628b501
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+0x28]
        add esi, 0x10
        push edi
        mov ecx, esi
        call public_62902b0
        dec word ptr ds : [esi+2]
        movzx edx, word ptr ds : [esi+2]
        cmp eax, edx
        jge public_628b483
        mov edi, edi
        public_628b470 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov dword ptr ds : [ecx+eax*4], edx
        movzx ecx, word ptr ds : [esi+2]
        inc eax
        cmp eax, ecx
        jl public_628b470
        public_628b483 : nop
        mov esi, dword ptr ds : [edi+0x14]
        test esi, esi
        je public_628b4c7
        mov ecx, dword ptr ds : [esi+0x7C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_628b4c7
        public_628b493 : nop
        cmp dword ptr ds : [eax+8], edi
        je public_628b49e
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_628b493
        public_628b49e : nop
        cmp eax, ecx
        je public_628b4c7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+0x80]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+0x80], eax
        public_628b4c7 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov dword ptr ds : [edi], offset public_639c30c
        pop esi
        je public_628b4da
        call public_6345450
        public_628b4da : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_628b4ea
        push eax
        call public_6343ff0
        add esp, 4
        public_628b4ea : nop
        mov ecx, dword ptr ds : [edi+0xC]
        test ecx, ecx
        je public_628b4f8
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x24]
        public_628b4f8 : nop
        push edi
        call public_6391d5a
        add esp, 4
        public_628b501 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x628b440)
    }
}

#undef public_628b470
#undef public_628b483
#undef public_628b493
#undef public_628b49e
#undef public_628b4c7
#undef public_628b4da
#undef public_628b4ea
#undef public_628b4f8
#undef public_628b501
