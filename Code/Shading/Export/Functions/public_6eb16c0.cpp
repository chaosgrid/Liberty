#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb16c0);

#define public_6eb16e5 _public_6eb16e5
#define public_6eb1710 _public_6eb1710
#define public_6eb171a _public_6eb171a

PROC_DECLARE(0x6eb16c0, internal_6eb16c0, public_6eb16c0);
extern "C" NAKED register_t __cdecl internal_6eb16c0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6ed1020]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6eb16e5
        push eax
        push 0
        call ebp
        push eax
        call dword ptr ds : [public_6ed101c]
        mov dword ptr ds : [esi+4], 0
        public_6eb16e5 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        test ebx, ebx
        je public_6eb171a
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        push ecx
        push eax
        call ebp
        push eax
        call dword ptr ds : [public_6ed1018]
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebx
        mov edx, eax
        pop edi
        lea esp, ss:[esp]
        public_6eb1710 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6eb1710
        public_6eb171a : nop
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eb16c0)
    }
}

#undef public_6eb16e5
#undef public_6eb1710
#undef public_6eb171a
