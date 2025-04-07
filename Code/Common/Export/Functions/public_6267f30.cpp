#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6267f63 _public_6267f63
#define public_6267f78 _public_6267f78
#define public_6267fa0 _public_6267fa0

PROC_DECLARE(0x6267f30, internal_6267f30, public_6267f30);
extern "C" NAKED register_t __cdecl internal_6267f30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        push edi
        push 0x28
        mov byte ptr ds : [esi], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 4
        test eax, eax
        jbe public_6267fa0
        push ebx
        push ebp
        mov ebp, eax
        public_6267f63 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6267f78
        mov ebx, eax
        public_6267f78 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_626c1e0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        dec ebp
        mov dword ptr ds : [esi+8], ecx
        jne public_6267f63
        pop ebp
        pop ebx
        public_6267fa0 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6267f30)
    }
}

#undef public_6267f63
#undef public_6267f78
#undef public_6267fa0
