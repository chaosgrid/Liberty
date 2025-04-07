#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2db0);

#define public_6ef2dc8 _public_6ef2dc8
#define public_6ef2dd2 _public_6ef2dd2
#define public_6ef2df2 _public_6ef2df2
#define public_6ef2df6 _public_6ef2df6
#define public_6ef2dfb _public_6ef2dfb
#define public_6ef2e04 _public_6ef2e04
#define public_6ef2e08 _public_6ef2e08
#define public_6ef2e10 _public_6ef2e10
#define public_6ef2e22 _public_6ef2e22
#define public_6ef2e42 _public_6ef2e42
#define public_6ef2e46 _public_6ef2e46
#define public_6ef2e4b _public_6ef2e4b
#define public_6ef2e63 _public_6ef2e63

PROC_DECLARE(0x6ef2db0, internal_6ef2db0, public_6ef2db0);
extern "C" NAKED register_t __cdecl internal_6ef2db0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [ecx+4]
        push ebp
        mov ebp, dword ptr ds : [ecx+8]
        push esi
        push edi
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], ebx
        mov edx, ebx
        je public_6ef2e10
        public_6ef2dc8 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea esi, ds:[eax+4]
        lea eax, ds:[edi+0x10]
        public_6ef2dd2 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6ef2df6
        test cl, cl
        je public_6ef2df2
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6ef2df6
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ef2dd2
        public_6ef2df2 : nop
        xor eax, eax
        jmp public_6ef2dfb
        public_6ef2df6 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ef2dfb : nop
        test eax, eax
        jge public_6ef2e04
        mov edi, dword ptr ds : [edi+8]
        jmp public_6ef2e08
        public_6ef2e04 : nop
        mov edx, edi
        mov edi, dword ptr ds : [edi]
        public_6ef2e08 : nop
        cmp edi, ebp
        jne public_6ef2dc8
        mov ebx, dword ptr ss : [esp+0x10]
        public_6ef2e10 : nop
        cmp edx, ebx
        mov dword ptr ss : [esp+0x10], edx
        je public_6ef2e63
        mov ecx, dword ptr ss : [esp+0x1C]
        lea esi, ds:[edx+0x10]
        lea eax, ds:[ecx+4]
        public_6ef2e22 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6ef2e46
        test cl, cl
        je public_6ef2e42
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6ef2e46
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ef2e22
        public_6ef2e42 : nop
        xor eax, eax
        jmp public_6ef2e4b
        public_6ef2e46 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ef2e4b : nop
        test eax, eax
        jl public_6ef2e63
        pop edi
        lea eax, ss:[esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6ef2e63 : nop
        pop edi
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], ebx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ef2db0)
    }
}

#undef public_6ef2dc8
#undef public_6ef2dd2
#undef public_6ef2df2
#undef public_6ef2df6
#undef public_6ef2dfb
#undef public_6ef2e04
#undef public_6ef2e08
#undef public_6ef2e10
#undef public_6ef2e22
#undef public_6ef2e42
#undef public_6ef2e46
#undef public_6ef2e4b
#undef public_6ef2e63
