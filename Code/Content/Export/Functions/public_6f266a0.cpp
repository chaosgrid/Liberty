#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f33e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f33ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f68630);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);

#define public_6f266df _public_6f266df
#define public_6f266fd _public_6f266fd
#define public_6f26720 _public_6f26720
#define public_6f26752 _public_6f26752

PROC_DECLARE(0x6f266a0, internal_6f266a0, public_6f266a0);
extern "C" NAKED register_t __cdecl internal_6f266a0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi+0x1CC]
        test eax, eax
        lea ebx, ds:[edi+0x1CC]
        je public_6f266fd
        push ebp
        mov ecx, esi
        xor ebp, ebp
        call public_6eea860
        test eax, eax
        je public_6f266df
        mov ecx, dword ptr ds : [esi+0x170]
        push ecx
        push ebx
        mov ecx, eax
        call public_6f73ac0
        mov ebp, eax
        public_6f266df : nop
        mov dword ptr ds : [edi+0x174], ebp
        test ebp, 0x3FFFFFFF
        pop ebp
        jne public_6f266fd
        mov ecx, esi
        call public_6f57b00
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6f266fd : nop
        mov eax, dword ptr ds : [edi+0x114]
        test eax, eax
        mov ecx, dword ptr ds : [edi+0x174]
        mov dword ptr ds : [edi+0x194], ecx
        jne public_6f26720
        mov ecx, esi
        call public_6f57c80
        mov dword ptr ds : [edi+0x114], eax
        public_6f26720 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        je public_6f26752
        mov ecx, esi
        call public_6f33e80
        test al, al
        jne public_6f26752
        mov ecx, esi
        call public_6f33ff0
        test al, al
        jne public_6f26752
        mov eax, dword ptr ds : [public_6fb8e24]
        push eax
        push esi
        mov ecx, offset public_6fd1bd8
        call public_6f68630
        public_6f26752 : nop
        add edi, 0x10C
        push edi
        mov ecx, esi
        call public_6f57c60
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f266a0)
    }
}

#undef public_6f266df
#undef public_6f266fd
#undef public_6f26720
#undef public_6f26752
