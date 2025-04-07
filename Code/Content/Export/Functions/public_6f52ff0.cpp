#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f3e0);

#define public_6f53005 _public_6f53005
#define public_6f53011 _public_6f53011
#define public_6f53018 _public_6f53018
#define public_6f5301a _public_6f5301a
#define public_6f53035 _public_6f53035
#define public_6f53041 _public_6f53041
#define public_6f53058 _public_6f53058
#define public_6f5305a _public_6f5305a
#define public_6f5306a _public_6f5306a

PROC_DECLARE(0x6f52ff0, internal_6f52ff0, public_6f52ff0);
extern "C" NAKED register_t __cdecl internal_6f52ff0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        je public_6f53018
        mov edx, dword ptr ds : [edi]
        public_6f53005 : nop
        cmp dword ptr ds : [eax], edx
        jne public_6f53011
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [edi+4]
        je public_6f5301a
        public_6f53011 : nop
        add eax, 0xC
        cmp eax, ecx
        jne public_6f53005
        public_6f53018 : nop
        mov eax, ecx
        public_6f5301a : nop
        cmp eax, ecx
        jne public_6f5306a
        push edi
        push 1
        push ecx
        mov ecx, esi
        call public_6f6f3e0
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6f5305a
        mov ecx, dword ptr ds : [edi]
        public_6f53035 : nop
        cmp dword ptr ds : [eax], ecx
        jne public_6f53041
        mov edx, dword ptr ds : [eax+4]
        cmp edx, dword ptr ds : [edi+4]
        je public_6f53058
        public_6f53041 : nop
        add eax, 0xC
        cmp eax, esi
        jne public_6f53035
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        mov byte ptr ds : [eax+4], 1
        pop ebx
        ret 8
        public_6f53058 : nop
        mov esi, eax
        public_6f5305a : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        mov byte ptr ds : [eax+4], 1
        pop ebx
        ret 8
        public_6f5306a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov byte ptr ds : [ecx+4], 0
        mov eax, ecx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f52ff0)
    }
}

#undef public_6f53005
#undef public_6f53011
#undef public_6f53018
#undef public_6f5301a
#undef public_6f53035
#undef public_6f53041
#undef public_6f53058
#undef public_6f5305a
#undef public_6f5306a
