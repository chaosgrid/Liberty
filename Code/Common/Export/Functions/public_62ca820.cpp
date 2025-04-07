#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e1aa0);
CLANG_FORWARD_PROC_SYMBOL(public_62e61a0);
CLANG_FORWARD_PROC_SYMBOL(public_62ecb20);
CLANG_FORWARD_PROC_SYMBOL(public_62ed5a0);

#define public_62ca8c4 _public_62ca8c4
#define public_62ca8d3 _public_62ca8d3
#define public_62ca8fe _public_62ca8fe
#define public_62ca908 _public_62ca908
#define public_62ca917 _public_62ca917
#define public_62ca92d _public_62ca92d

PROC_DECLARE(0x62ca820, internal_62ca820, public_62ca820);
extern "C" NAKED register_t __cdecl internal_62ca820()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x1364
        mov ebp, 2
        call public_62ecb20
        test al, al
        jne public_62ca917
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x142C
        call public_62ed5a0
        mov ebx, eax
        test ebx, ebx
        je public_62ca908
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x142C
        call public_62ed5a0
        push eax
        call public_62e61a0
        fcomp dword ptr ds : [public_639b21c]
        add esp, 4
        fnstsw ax
        test ah, 1
        jne public_62ca908
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x88]
        test dword ptr ss : [esp+0xC], 0x380000
        jne public_62ca917
        push edi
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x1579]
        add edi, 0x14FC
        test al, al
        jne public_62ca8c4
        mov ecx, dword ptr ds : [edi+0x84]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[edi+8]
        push eax
        call dword ptr ds : [edx+0x88]
        mov byte ptr ds : [edi+0x7D], 1
        public_62ca8c4 : nop
        test dword ptr ds : [edi+8], 0x7F0000
        pop edi
        je public_62ca8d3
        mov ebp, 1
        public_62ca8d3 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        push ebx
        call public_62e1aa0
        fcomp dword ptr ds : [public_639f5d4]
        add esp, 8
        fnstsw ax
        test ah, 5
        jp public_62ca908
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        mov eax, 3
        jne public_62ca8fe
        mov eax, 2
        public_62ca8fe : nop
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_62ca908 : nop
        mov al, byte ptr ds : [esi+0x1E0]
        test al, al
        je public_62ca917
        mov ebp, 1
        public_62ca917 : nop
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        je public_62ca92d
        mov eax, 3
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_62ca92d : nop
        mov dword ptr ds : [esi+0xC], ebp
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62ca820)
    }
}

#undef public_62ca8c4
#undef public_62ca8d3
#undef public_62ca8fe
#undef public_62ca908
#undef public_62ca917
#undef public_62ca92d
