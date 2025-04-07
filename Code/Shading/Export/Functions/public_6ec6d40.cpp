#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8270);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec6d60 _public_6ec6d60
#define public_6ec6d84 _public_6ec6d84
#define public_6ec6d88 _public_6ec6d88
#define public_6ec6d8d _public_6ec6d8d
#define public_6ec6df5 _public_6ec6df5
#define public_6ec6e08 _public_6ec6e08
#define public_6ec6e20 _public_6ec6e20

PROC_DECLARE(0x6ec6d40, internal_6ec6d40, public_6ec6d40);
extern "C" NAKED register_t __cdecl internal_6ec6d40()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp eax, 0x14
        jne public_6ec6e20
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        push ebx
        nop 
        public_6ec6d60 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ec6d88
        test cl, cl
        je public_6ec6d84
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ec6d88
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ec6d60
        public_6ec6d84 : nop
        xor eax, eax
        jmp public_6ec6d8d
        public_6ec6d88 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec6d8d : nop
        test eax, eax
        pop ebx
        jne public_6ec6e20
        push 0x2C
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ec6e08
        lea eax, ss:[esp+0x14]
        push eax
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ds:[esi+8]
        call public_6ec8270
        lea eax, ds:[esi+0x20]
        mov dword ptr ds : [eax], offset public_6ed2b68
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6ed2b4c
        mov dword ptr ds : [esi+4], offset public_6ed2b3c
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        mov dword ptr ds : [esi+0x1C], ecx
        jne public_6ec6df5
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x1C], eax
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        xor eax, eax
        pop ebp
        ret 0xC
        public_6ec6df5 : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], eax
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        xor eax, eax
        pop ebp
        ret 0xC
        public_6ec6e08 : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        xor ecx, ecx
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        nop 
        lea esp, ss:[esp]
        public_6ec6e20 : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ds : [edx], ebp
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ec6d40)
    }
}

#undef public_6ec6d60
#undef public_6ec6d84
#undef public_6ec6d88
#undef public_6ec6d8d
#undef public_6ec6df5
#undef public_6ec6e08
#undef public_6ec6e20
