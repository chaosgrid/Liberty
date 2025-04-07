#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555db0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_555e01 _public_555e01
#define public_555e15 _public_555e15

PROC_DECLARE(0x555db0, internal_555db0, public_555db0);
extern "C" NAKED register_t __cdecl internal_555db0()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi], offset public_5e1218
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        mov byte ptr ds : [esi+0xC], bl
        mov byte ptr ds : [esi+0xD], bl
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        push edi
        mov edi, dword ptr ds : [public_67999c]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], edi
        jne public_555e01
        mov ebp, eax
        public_555e01 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        cmp eax, ebx
        je public_555e15
        mov dword ptr ds : [eax], esi
        public_555e15 : nop
        mov eax, dword ptr ds : [public_6799a0]
        inc eax
        pop edi
        mov dword ptr ds : [public_6799a0], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x555db0)
    }
}

#undef public_555e01
#undef public_555e15
