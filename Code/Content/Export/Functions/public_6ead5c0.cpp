#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead5c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ead5ed _public_6ead5ed
#define public_6ead5f3 _public_6ead5f3
#define public_6ead612 _public_6ead612
#define public_6ead621 _public_6ead621
#define public_6ead62c _public_6ead62c

PROC_DECLARE(0x6ead5c0, internal_6ead5c0, public_6ead5c0);
extern "C" NAKED register_t __cdecl internal_6ead5c0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [esi]
        mov ebp, ecx
        mov byte ptr ss : [ebp], al
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ead5ed
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6ead5ed : nop
        test eax, eax
        jge public_6ead5f3
        xor eax, eax
        public_6ead5f3 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 3
        push edx
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov edx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, ebx
        je public_6ead62c
        push edi
        public_6ead612 : nop
        test edx, edx
        je public_6ead621
        mov ecx, 0xA
        mov esi, eax
        mov edi, edx
        rep movsd
        public_6ead621 : nop
        add eax, 0x28
        add edx, 0x28
        cmp eax, ebx
        jne public_6ead612
        pop edi
        public_6ead62c : nop
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ead5c0)
    }
}

#undef public_6ead5ed
#undef public_6ead5f3
#undef public_6ead612
#undef public_6ead621
#undef public_6ead62c
