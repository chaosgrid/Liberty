#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac61a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7680);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7760);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7e60);

#define public_6ac772c _public_6ac772c
#define public_6ac774d _public_6ac774d
#define public_6ac7753 _public_6ac7753

PROC_DECLARE(0x6ac7680, internal_6ac7680, public_6ac7680);
extern "C" NAKED register_t __cdecl internal_6ac7680()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x24], ebx
        je public_6ac7753
        mov ebp, dword ptr ss : [esp+0x1C]
        test ebp, ebp
        jle public_6ac774d
        mov edi, dword ptr ss : [esp+0x20]
        test edi, edi
        jle public_6ac774d
        mov eax, dword ptr ds : [esi+0xC]
        cmp ebp, eax
        jg public_6ac774d
        cmp edi, eax
        jg public_6ac774d
        mov eax, ebp
        shl eax, 7
        add eax, ebp
        mov edx, dword ptr ds : [esi+eax*4+0x314]
        lea ecx, ds:[esi+eax*4+0x314]
        test edx, edx
        jle public_6ac774d
        mov eax, edi
        shl eax, 7
        add eax, edi
        mov edi, dword ptr ds : [esi+eax*4+0x314]
        test edi, edi
        lea eax, ds:[esi+eax*4+0x314]
        jle public_6ac774d
        mov edi, dword ptr ss : [esp+0x14]
        dec edx
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        dec ecx
        push ebx
        push edi
        mov dword ptr ds : [eax], ecx
        call public_6ac7e60
        test eax, eax
        mov ebx, dword ptr ss : [esp+0x18]
        jne public_6ac772c
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        push ebx
        call public_6ac7e60
        test eax, eax
        jne public_6ac772c
        cmp dword ptr ds : [esi+8], 0x12
        jbe public_6ac772c
        push esi
        call public_6ac61a0
        public_6ac772c : nop
        push 1
        push esi
        push ebp
        push ebx
        push edi
        call public_6ac7760
        push 0xFFFFFFFF
        push esi
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push ebx
        push edi
        call public_6ac7760
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x14
        public_6ac774d : nop
        mov dword ptr ds : [esi], 0
        public_6ac7753 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x14
        UNREACHABLE_TRAP(0x6ac7680)
    }
}

#undef public_6ac772c
#undef public_6ac774d
#undef public_6ac7753
