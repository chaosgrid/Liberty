#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52fe60);
CLANG_FORWARD_PROC_SYMBOL(public_5419a0);

#define public_52fed1 _public_52fed1
#define public_52fee0 _public_52fee0
#define public_52feed _public_52feed
#define public_52fef0 _public_52fef0
#define public_52fef5 _public_52fef5
#define public_52fef8 _public_52fef8
#define public_52ff4b _public_52ff4b
#define public_52ff57 _public_52ff57

PROC_DECLARE(0x52fe60, internal_52fe60, public_52fe60);
extern "C" NAKED register_t __cdecl internal_52fe60()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], 0
        mov eax, dword ptr ds : [public_5c6368]
        mov cx, word ptr ds : [eax]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov word ptr ds : [ebx], cx
        call dword ptr ds : [public_5c664c]
        push eax
        call public_5419a0
        add esp, 8
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_52ff57
        add eax, 0xC
        test eax, eax
        je public_52ff4b
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_52ff4b
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_52ff4b
        mov eax, dword ptr ds : [edi+0x5C]
        test eax, eax
        jne public_52fed1
        mov eax, dword ptr ds : [edi+4]
        jmp public_52fef0
        public_52fed1 : nop
        mov eax, dword ptr ds : [edi+0x68]
        mov ecx, dword ptr ds : [edi+0x6C]
        cmp eax, ecx
        je public_52fef5
        mov edx, dword ptr ss : [esp+0x14]
        nop 
        public_52fee0 : nop
        cmp dword ptr ds : [eax], edx
        je public_52feed
        add eax, 0xC
        cmp eax, ecx
        jne public_52fee0
        jmp public_52fef5
        public_52feed : nop
        mov eax, dword ptr ds : [eax+4]
        public_52fef0 : nop
        cmp eax, 0xFFFFFFFF
        jne public_52fef8
        public_52fef5 : nop
        mov eax, dword ptr ds : [edi+4]
        public_52fef8 : nop
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xF4]
        mov word ptr ds : [ebx], ax
        push eax
        call dword ptr ds : [public_5c6910]
        add esp, 4
        test al, al
        jne public_52ff57
        push 0x100
        lea ecx, ds:[esi+0xE4]
        call dword ptr ds : [public_5c649c]
        push eax
        call dword ptr ds : [public_5c68d0]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_52ff57
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_52ff57
        mov cx, word ptr ds : [esi+8]
        pop edi
        pop esi
        mov word ptr ds : [ebx], cx
        pop ebx
        ret 
        public_52ff4b : nop
        mov edx, dword ptr ds : [public_5c65ac]
        mov ax, word ptr ds : [edx]
        mov word ptr ds : [ebx], ax
        public_52ff57 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x52fe60)
    }
}

#undef public_52fed1
#undef public_52fee0
#undef public_52feed
#undef public_52fef0
#undef public_52fef5
#undef public_52fef8
#undef public_52ff4b
#undef public_52ff57
