#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb8ef0);

#define public_6eb8f30 _public_6eb8f30
#define public_6eb8f45 _public_6eb8f45
#define public_6eb8f47 _public_6eb8f47

PROC_DECLARE(0x6eb8ef0, internal_6eb8ef0, public_6eb8ef0);
extern "C" NAKED register_t __cdecl internal_6eb8ef0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edi]
        xor al, al
        cmp edx, esi
        jne public_6eb8f47
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [edi+4]
        jne public_6eb8f47
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [edi+8]
        jne public_6eb8f47
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ds : [edi+0xC]
        jne public_6eb8f47
        mov ebx, dword ptr ds : [ecx+0x30]
        cmp ebx, dword ptr ds : [edi+0x30]
        jne public_6eb8f47
        xor esi, esi
        test ebx, ebx
        mov al, 1
        jle public_6eb8f47
        lea edx, ds:[ecx+0x10]
        sub edi, ecx
        mov edi, edi
        public_6eb8f30 : nop
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [edi+edx]
        jne public_6eb8f45
        inc esi
        add edx, 4
        cmp esi, ebx
        jl public_6eb8f30
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6eb8f45 : nop
        xor al, al
        public_6eb8f47 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eb8ef0)
    }
}

#undef public_6eb8f30
#undef public_6eb8f45
#undef public_6eb8f47
