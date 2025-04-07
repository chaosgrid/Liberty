#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626f956 _public_626f956
#define public_626f96b _public_626f96b
#define public_626f988 _public_626f988
#define public_626f99a _public_626f99a

PROC_DECLARE(0x626f920, internal_626f920, public_626f920);
extern "C" NAKED register_t __cdecl internal_626f920()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [edi]
        mov esi, ecx
        push 0x10
        mov byte ptr ds : [esi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_626f99a
        push ebp
        public_626f956 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_626f96b
        mov ebp, eax
        public_626f96b : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_626f988
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_626f988 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_626f956
        pop ebp
        public_626f99a : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626f920)
    }
}

#undef public_626f956
#undef public_626f96b
#undef public_626f988
#undef public_626f99a
