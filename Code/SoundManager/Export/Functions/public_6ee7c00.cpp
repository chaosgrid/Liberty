#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1080);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7c00);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8de2);

#define public_6ee7c26 _public_6ee7c26
#define public_6ee7c32 _public_6ee7c32
#define public_6ee7c3c _public_6ee7c3c
#define public_6ee7c58 _public_6ee7c58

PROC_DECLARE(0x6ee7c00, internal_6ee7c00, public_6ee7c00);
extern "C" NAKED register_t __cdecl internal_6ee7c00()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [public_6eeaf3c]
        test esi, esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [edi+4]
        mov ebp, ecx
        je public_6ee7c26
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [public_6eeaf3c], eax
        dec dword ptr ds : [public_6eeaf48]
        jmp public_6ee7c32
        public_6ee7c26 : nop
        push 0x60
        call public_6ee8de2
        add esp, 4
        mov esi, eax
        public_6ee7c32 : nop
        test ebx, ebx
        mov dword ptr ds : [esi], edi
        mov eax, ebx
        jne public_6ee7c3c
        mov eax, esi
        public_6ee7c3c : nop
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [edi+4], esi
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx], esi
        lea ecx, ds:[esi+8]
        test ecx, ecx
        je public_6ee7c58
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call public_6ee1080
        public_6ee7c58 : nop
        inc dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ee7c00)
    }
}

#undef public_6ee7c26
#undef public_6ee7c32
#undef public_6ee7c3c
#undef public_6ee7c58
