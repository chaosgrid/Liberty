#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2cb00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f2cb40 _public_6f2cb40
#define public_6f2cb55 _public_6f2cb55
#define public_6f2cb6c _public_6f2cb6c
#define public_6f2cb7e _public_6f2cb7e

PROC_DECLARE(0x6f2cb00, internal_6f2cb00, public_6f2cb00);
extern "C" NAKED register_t __cdecl internal_6f2cb00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], ecx
        mov dl, byte ptr ds : [edi]
        push 0xC
        mov byte ptr ds : [esi+4], dl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], 0
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f2cb7e
        push ebp
        nop 
        public_6f2cb40 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6f2cb55
        mov ebp, eax
        public_6f2cb55 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f2cb6c
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6f2cb6c : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6f2cb40
        pop ebp
        public_6f2cb7e : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f2cb00)
    }
}

#undef public_6f2cb40
#undef public_6f2cb55
#undef public_6f2cb6c
#undef public_6f2cb7e
