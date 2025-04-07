#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb9af0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebaae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f15df0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ebab10 _public_6ebab10
#define public_6ebab2b _public_6ebab2b
#define public_6ebab50 _public_6ebab50
#define public_6ebab7d _public_6ebab7d

PROC_DECLARE(0x6ebaae0, internal_6ebaae0, public_6ebaae0);
extern "C" NAKED register_t __cdecl internal_6ebaae0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        push ebx
        lea eax, ss:[esp+0x10]
        push eax
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], 0x39
        call public_6eb9af0
        mov eax, dword ptr ds : [edi+0x300]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ebab50
        lea esp, ss:[esp]
        public_6ebab10 : nop
        lea ecx, ds:[esi+8]
        push ecx
        mov ecx, edi
        call public_6f15b90
        cmp eax, dword ptr ds : [ebx]
        je public_6ebab2b
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x300]
        jne public_6ebab10
        jmp public_6ebab50
        public_6ebab2b : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x304]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x304], eax
        public_6ebab50 : nop
        mov eax, dword ptr ds : [edi+0xC]
        lea esi, ds:[edi+0xC]
        push eax
        mov ecx, edi
        call public_6f15df0
        test al, al
        jne public_6ebab7d
        push esi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ebab7d
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_6ebab7d
        mov byte ptr ds : [edi+0x19], 1
        public_6ebab7d : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ebaae0)
    }
}

#undef public_6ebab10
#undef public_6ebab2b
#undef public_6ebab50
#undef public_6ebab7d
