#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d740);
CLANG_FORWARD_PROC_SYMBOL(public_40ddd0);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_40ddf0 _public_40ddf0
#define public_40de0f _public_40de0f
#define public_40de17 _public_40de17
#define public_40de21 _public_40de21
#define public_40de29 _public_40de29
#define public_40de36 _public_40de36
#define public_40de44 _public_40de44
#define public_40de56 _public_40de56
#define public_40de68 _public_40de68
#define public_40de70 _public_40de70
#define public_40de78 _public_40de78
#define public_40debe _public_40debe
#define public_40ded7 _public_40ded7
#define public_40def8 _public_40def8
#define public_40defb _public_40defb
#define public_40df33 _public_40df33

PROC_DECLARE(0x40ddd0, internal_40ddd0, public_40ddd0);
extern "C" NAKED register_t __cdecl internal_40ddd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        cmp ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        je public_40df33
        push ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+8]
        lea esi, ds:[eax+8]
        mov edi, edi
        public_40ddf0 : nop
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ecx
        lea eax, ds:[esi-4]
        lea ecx, ds:[edi-4]
        cmp eax, ecx
        lea edx, ds:[esi-4]
        je public_40defb
        mov ebx, dword ptr ds : [edi]
        test ebx, ebx
        jne public_40de0f
        xor ebp, ebp
        jmp public_40de17
        public_40de0f : nop
        mov ebp, dword ptr ds : [edi+4]
        sub ebp, ebx
        sar ebp, 2
        public_40de17 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        jne public_40de21
        xor eax, eax
        jmp public_40de29
        public_40de21 : nop
        mov eax, dword ptr ds : [esi+4]
        sub eax, ecx
        sar eax, 2
        public_40de29 : nop
        cmp ebp, eax
        ja public_40de68
        mov edx, dword ptr ds : [edi+4]
        mov eax, ebx
        cmp eax, edx
        je public_40de44
        public_40de36 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_40de36
        public_40de44 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        jne public_40de56
        mov edx, dword ptr ds : [esi]
        xor eax, eax
        lea eax, ds:[edx+eax*4]
        jmp public_40def8
        public_40de56 : nop
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi]
        sub eax, ecx
        sar eax, 2
        lea eax, ds:[edx+eax*4]
        jmp public_40def8
        public_40de68 : nop
        test ebx, ebx
        jne public_40de70
        xor ebp, ebp
        jmp public_40de78
        public_40de70 : nop
        mov ebp, dword ptr ds : [edi+4]
        sub ebp, ebx
        sar ebp, 2
        public_40de78 : nop
        mov ecx, edx
        call public_40d740
        cmp ebp, eax
        ja public_40debe
        lea ecx, ds:[esi-4]
        call public_5ad970
        lea ebp, ds:[ebx+eax*4]
        mov eax, dword ptr ds : [esi]
        push eax
        push ebp
        push ebx
        call public_527820
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi+4]
        add esp, 0xC
        push ecx
        push edx
        push ebp
        lea ecx, ds:[esi-4]
        call public_597c70
        lea ecx, ds:[edi-4]
        call public_5ad970
        mov ecx, dword ptr ds : [esi]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+4], edx
        jmp public_40defb
        public_40debe : nop
        mov eax, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ds:[edi-4]
        call public_5ad970
        test eax, eax
        jge public_40ded7
        xor eax, eax
        public_40ded7 : nop
        shl eax, 2
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        push eax
        push ecx
        push edx
        lea ecx, ds:[esi-4]
        call public_597c70
        mov dword ptr ds : [esi+8], eax
        public_40def8 : nop
        mov dword ptr ds : [esi+4], eax
        public_40defb : nop
        lea ecx, ds:[edi+0xC]
        push ecx
        lea ecx, ds:[esi+0xC]
        call public_5595c0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        add ecx, 0x24
        add eax, 0x24
        add esi, 0x24
        add edi, 0x24
        cmp ecx, edx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x14], ecx
        jne public_40ddf0
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_40df33 : nop
        ret 
        UNREACHABLE_TRAP(0x40ddd0)
    }
}

#undef public_40ddf0
#undef public_40de0f
#undef public_40de17
#undef public_40de21
#undef public_40de29
#undef public_40de36
#undef public_40de44
#undef public_40de56
#undef public_40de68
#undef public_40de70
#undef public_40de78
#undef public_40debe
#undef public_40ded7
#undef public_40def8
#undef public_40defb
#undef public_40df33
