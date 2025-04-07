#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f700);
CLANG_FORWARD_PROC_SYMBOL(public_6f50b60);

#define public_6f50a9e _public_6f50a9e
#define public_6f50b1f _public_6f50b1f
#define public_6f50b31 _public_6f50b31
#define public_6f50b54 _public_6f50b54

PROC_DECLARE(0x6f50a60, internal_6f50a60, public_6f50a60);
extern "C" NAKED register_t __cdecl internal_6f50a60()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        push 1
        call public_6f4f700
        push eax
        call public_6f4af60
        mov edi, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        push 4
        mov dword ptr ss : [esp+0x28], eax
        call public_6f4c260
        mov ecx, dword ptr ds : [public_6f61e28]
        mov esi, dword ptr ds : [ecx+0x58]
        add esp, 0xC
        test esi, esi
        je public_6f50b54
        public_6f50a9e : nop
        cmp dword ptr ds : [esi+0x10], 0xFFFFFFFA
        je public_6f50b1f
        push esi
        call public_6f50b60
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        add ecx, 0x10
        push esi
        mov dword ptr ds : [eax], ecx
        call public_6f50b60
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        add ecx, 0x10
        push 1
        push 2
        mov dword ptr ds : [eax], ecx
        call public_6f4c540
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax-0x10]
        add esp, 0x10
        cmp edx, 0xFFFFFFFA
        jne public_6f50b31
        add eax, 0xFFFFFFE0
        mov dword ptr ds : [ecx], eax
        public_6f50b1f : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_6f50a9e
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        public_6f50b31 : nop
        add dword ptr ds : [ecx], 0xFFFFFFF0
        mov eax, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[eax-0x10]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        public_6f50b54 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f50a60)
    }
}

#undef public_6f50a9e
#undef public_6f50b1f
#undef public_6f50b31
#undef public_6f50b54
