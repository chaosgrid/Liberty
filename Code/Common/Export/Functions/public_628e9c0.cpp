#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628e9d7 _public_628e9d7
#define public_628e9df _public_628e9df
#define public_628e9e5 _public_628e9e5
#define public_628ea02 _public_628ea02
#define public_628ea20 _public_628ea20
#define public_628ea2c _public_628ea2c

PROC_DECLARE(0x628e9c0, internal_628e9c0, public_628e9c0);
extern "C" NAKED register_t __cdecl internal_628e9c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, ecx
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_628e9d7
        xor eax, eax
        jmp public_628e9df
        public_628e9d7 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 4
        public_628e9df : nop
        test eax, eax
        jge public_628e9e5
        xor eax, eax
        public_628e9e5 : nop
        shl eax, 4
        push eax
        call public_6391d9c
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_628ea2c
        push ebx
        push ebp
        public_628ea02 : nop
        test ecx, ecx
        je public_628ea20
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], esi
        public_628ea20 : nop
        add eax, 0x10
        add ecx, 0x10
        cmp eax, edx
        jne public_628ea02
        pop ebp
        pop ebx
        public_628ea2c : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x628e9c0)
    }
}

#undef public_628e9d7
#undef public_628e9df
#undef public_628e9e5
#undef public_628ea02
#undef public_628ea20
#undef public_628ea2c
