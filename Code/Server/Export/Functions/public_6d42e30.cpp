#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42e30);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d42e44 _public_6d42e44
#define public_6d42e5c _public_6d42e5c
#define public_6d42e75 _public_6d42e75
#define public_6d42e92 _public_6d42e92

PROC_DECLARE(0x6d42e30, internal_6d42e30, public_6d42e30);
extern "C" NAKED register_t __cdecl internal_6d42e30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        cmp ebp, eax
        je public_6d42e92
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        public_6d42e44 : nop
        mov esi, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6d60012
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d42e5c
        mov edi, eax
        public_6d42e5c : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d42e75
        mov dx, word ptr ss : [ebp+8]
        mov word ptr ds : [eax], dx
        public_6d42e75 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ds : [ebx+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_6d42e44
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        pop ebp
        ret 
        public_6d42e92 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d42e30)
    }
}

#undef public_6d42e44
#undef public_6d42e5c
#undef public_6d42e75
#undef public_6d42e92
