#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6295710);
CLANG_FORWARD_PROC_SYMBOL(public_629b8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_629b8e2 _public_629b8e2
#define public_629b915 _public_629b915
#define public_629b94d _public_629b94d
#define public_629b94f _public_629b94f
#define public_629b958 _public_629b958

PROC_DECLARE(0x629b8c0, internal_629b8c0, public_629b8c0);
extern "C" NAKED register_t __cdecl internal_629b8c0()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi]
        xor eax, eax
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x18], edi
        je public_629b958
        push ebx
        public_629b8e2 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x18]
        test al, al
        je public_629b94d
        mov edi, dword ptr ds : [esi+8]
        cmp dword ptr ds : [edi+0x14], 0x10000
        jne public_629b915
        mov ecx, edi
        call public_6295710
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_629b915
        mov eax, dword ptr ss : [esp+0x14]
        dec dword ptr ds : [eax+0x1C]
        public_629b915 : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx], ebx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [edx+4], eax
        call public_6391d5a
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        dec edx
        mov dword ptr ss : [ebp+8], edx
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        mov esi, ebx
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x1C]
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        jmp public_629b94f
        public_629b94d : nop
        mov esi, dword ptr ds : [esi]
        public_629b94f : nop
        cmp esi, edi
        jne public_629b8e2
        mov eax, dword ptr ss : [esp+0x10]
        pop ebx
        public_629b958 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x629b8c0)
    }
}

#undef public_629b8e2
#undef public_629b915
#undef public_629b94d
#undef public_629b94f
#undef public_629b958
