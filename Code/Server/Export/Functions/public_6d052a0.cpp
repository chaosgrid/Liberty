#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d052a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d052d6 _public_6d052d6
#define public_6d052eb _public_6d052eb
#define public_6d05302 _public_6d05302
#define public_6d05314 _public_6d05314

PROC_DECLARE(0x6d052a0, internal_6d052a0, public_6d052a0);
extern "C" NAKED register_t __cdecl internal_6d052a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [edi]
        mov esi, ecx
        push 0xC
        mov byte ptr ds : [esi], al
        call public_6d60012
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
        je public_6d05314
        push ebp
        public_6d052d6 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6d60012
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6d052eb
        mov ebp, eax
        public_6d052eb : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d05302
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6d05302 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6d052d6
        pop ebp
        public_6d05314 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d052a0)
    }
}

#undef public_6d052d6
#undef public_6d052eb
#undef public_6d05302
#undef public_6d05314
