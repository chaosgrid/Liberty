#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb4b0);

#define public_6ecb4d0 _public_6ecb4d0
#define public_6ecb4f5 _public_6ecb4f5
#define public_6ecb50e _public_6ecb50e
#define public_6ecb521 _public_6ecb521

PROC_DECLARE(0x6ecb4b0, internal_6ecb4b0, public_6ecb4b0);
extern "C" NAKED register_t __cdecl internal_6ecb4b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6ecb521
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        lea esp, ss:[esp]
        public_6ecb4d0 : nop
        mov edi, dword ptr ds : [public_6ed57fc]
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_6ed57f8]
        mov edx, dword ptr ds : [ebx+4]
        add eax, ecx
        add ecx, 0xF8
        test edx, edx
        mov dword ptr ds : [edi], ecx
        lea esi, ss:[ebp+8]
        mov dword ptr ds : [eax], ebx
        jne public_6ecb4f5
        mov edx, eax
        public_6ecb4f5 : nop
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6ecb50e
        mov ecx, 0x3C
        rep movsd
        public_6ecb50e : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+8]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x20]
        jne public_6ecb4d0
        pop edi
        pop esi
        pop ebx
        public_6ecb521 : nop
        pop ebp
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ecb4b0)
    }
}

#undef public_6ecb4d0
#undef public_6ecb4f5
#undef public_6ecb50e
#undef public_6ecb521
