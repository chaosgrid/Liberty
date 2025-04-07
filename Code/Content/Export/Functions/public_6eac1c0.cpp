#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eac1d0 _public_6eac1d0
#define public_6eac1e2 _public_6eac1e2
#define public_6eac1e8 _public_6eac1e8
#define public_6eac204 _public_6eac204
#define public_6eac226 _public_6eac226
#define public_6eac234 _public_6eac234

PROC_DECLARE(0x6eac1c0, internal_6eac1c0, public_6eac1c0);
extern "C" NAKED register_t __cdecl internal_6eac1c0()
{
    __asm
    {
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        je public_6eac1e8
        lea ecx, ds:[ecx]
        public_6eac1d0 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [eax+8], ecx
        jne public_6eac1e2
        mov edx, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [eax+0xC], edx
        je public_6eac234
        public_6eac1e2 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        jne public_6eac1d0
        public_6eac1e8 : nop
        push ebx
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        mov ebx, 1
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6eac204
        mov edi, eax
        public_6eac204 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6eac226
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ebx
        public_6eac226 : nop
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        pop ebx
        inc eax
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        ret 8
        public_6eac234 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        inc ecx
        pop esi
        mov dword ptr ds : [eax+0x10], ecx
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6eac1c0)
    }
}

#undef public_6eac1d0
#undef public_6eac1e2
#undef public_6eac1e8
#undef public_6eac204
#undef public_6eac226
#undef public_6eac234
