#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecbd70);
CLANG_FORWARD_PROC_SYMBOL(public_6ecbe70);
CLANG_FORWARD_PROC_SYMBOL(public_6ecbfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ecf010 _public_6ecf010
#define public_6ecf034 _public_6ecf034
#define public_6ecf038 _public_6ecf038
#define public_6ecf03d _public_6ecf03d
#define public_6ecf08a _public_6ecf08a
#define public_6ecf0a5 _public_6ecf0a5
#define public_6ecf0c5 _public_6ecf0c5
#define public_6ecf0cc _public_6ecf0cc
#define public_6ecf0df _public_6ecf0df
#define public_6ecf0f0 _public_6ecf0f0

PROC_DECLARE(0x6eceff0, internal_6eceff0, public_6eceff0);
extern "C" NAKED register_t __cdecl internal_6eceff0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        xor edi, edi
        cmp eax, 0x14
        jne public_6ecf0df
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        push ebx
        public_6ecf010 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ecf038
        test cl, cl
        je public_6ecf034
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ecf038
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ecf010
        public_6ecf034 : nop
        xor eax, eax
        jmp public_6ecf03d
        public_6ecf038 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ecf03d : nop
        test eax, eax
        pop ebx
        jne public_6ecf0df
        push 0x54
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ecf0cc
        mov ecx, esi
        call public_6ecbd70
        lea eax, ds:[esi+0x48]
        mov dword ptr ds : [eax], offset public_6ed2fd4
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6ed2f68
        mov dword ptr ds : [esi+4], offset public_6ed2f58
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov dword ptr ds : [esi+0x44], ecx
        jne public_6ecf0c5
        mov dword ptr ds : [esi+0x44], eax
        public_6ecf08a : nop
        push ebp
        mov ecx, esi
        call public_6ecbfb0
        mov edi, eax
        test edi, edi
        je public_6ecf0f0
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6ecf0a5
        mov dword ptr ds : [eax], 0
        public_6ecf0a5 : nop
        mov ecx, esi
        call public_6ecbe70
        push esi
        call public_6ed0c50
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6ecf0c5 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6ecf08a
        public_6ecf0cc : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        xor ecx, ecx
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_6ecf0df : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        public_6ecf0f0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6eceff0)
    }
}

#undef public_6ecf010
#undef public_6ecf034
#undef public_6ecf038
#undef public_6ecf03d
#undef public_6ecf08a
#undef public_6ecf0a5
#undef public_6ecf0c5
#undef public_6ecf0cc
#undef public_6ecf0df
#undef public_6ecf0f0
