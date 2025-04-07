#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0deb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f0dee6 _public_6f0dee6
#define public_6f0defb _public_6f0defb
#define public_6f0df12 _public_6f0df12
#define public_6f0df24 _public_6f0df24

PROC_DECLARE(0x6f0deb0, internal_6f0deb0, public_6f0deb0);
extern "C" NAKED register_t __cdecl internal_6f0deb0()
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
        call public_6fa912a
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
        je public_6f0df24
        push ebp
        public_6f0dee6 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6f0defb
        mov ebp, eax
        public_6f0defb : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f0df12
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6f0df12 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6f0dee6
        pop ebp
        public_6f0df24 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f0deb0)
    }
}

#undef public_6f0dee6
#undef public_6f0defb
#undef public_6f0df12
#undef public_6f0df24
