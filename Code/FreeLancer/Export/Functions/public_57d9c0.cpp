#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57d9c0);

#define public_57d9fa _public_57d9fa
#define public_57da17 _public_57da17
#define public_57da29 _public_57da29

PROC_DECLARE(0x57d9c0, internal_57d9c0, public_57d9c0);
extern "C" NAKED register_t __cdecl internal_57d9c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push 0
        push ecx
        push 0x17
        mov dword ptr ss : [ebp], 0
        push ebx
        mov dword ptr ds : [eax], 0
        call dword ptr ds : [public_5c6f7c]
        mov esi, eax
        test esi, esi
        jne public_57d9fa
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 
        public_57d9fa : nop
        push esi
        push ebx
        call dword ptr ds : [public_5c6f10]
        push esi
        push ebx
        mov edi, eax
        call dword ptr ds : [public_5c6ee4]
        test eax, eax
        jne public_57da17
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 
        public_57da17 : nop
        push eax
        call dword ptr ds : [public_5c6ee0]
        test eax, eax
        jne public_57da29
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 
        public_57da29 : nop
        mov edx, dword ptr ss : [esp+0x20]
        shr edi, 1
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        mov dword ptr ss : [ebp], eax
        pop ebp
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x57d9c0)
    }
}

#undef public_57d9fa
#undef public_57da17
#undef public_57da29
