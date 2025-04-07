#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f308e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31040);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f3090e _public_6f3090e
#define public_6f30914 _public_6f30914
#define public_6f30932 _public_6f30932
#define public_6f30946 _public_6f30946

PROC_DECLARE(0x6f308e0, internal_6f308e0, public_6f308e0);
extern "C" NAKED register_t __cdecl internal_6f308e0()
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
        push edi
        je public_6f3090e
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f3090e : nop
        test eax, eax
        jge public_6f30914
        xor eax, eax
        public_6f30914 : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 3
        push edx
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_6f30946
        public_6f30932 : nop
        push esi
        push edi
        call public_6f31040
        add esi, 0x18
        add esp, 8
        add edi, 0x18
        cmp esi, ebx
        jne public_6f30932
        public_6f30946 : nop
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f308e0)
    }
}

#undef public_6f3090e
#undef public_6f30914
#undef public_6f30932
#undef public_6f30946
