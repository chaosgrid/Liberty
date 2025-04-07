#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0bb80);
CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f159f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f16fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6f17057 _public_6f17057
#define public_6f17063 _public_6f17063
#define public_6f170c3 _public_6f170c3
#define public_6f170d1 _public_6f170d1
#define public_6f170f2 _public_6f170f2
#define public_6f1711f _public_6f1711f
#define public_6f17130 _public_6f17130
#define public_6f1713b _public_6f1713b
#define public_6f17140 _public_6f17140
#define public_6f17160 _public_6f17160
#define public_6f17164 _public_6f17164
#define public_6f17169 _public_6f17169
#define public_6f1718b _public_6f1718b
#define public_6f17196 _public_6f17196

PROC_DECLARE(0x6f16fa0, internal_6f16fa0, public_6f16fa0);
extern "C" NAKED register_t __cdecl internal_6f16fa0()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        lea ebp, ds:[ebx+0xC]
        push ebp
        mov dword ptr ss : [esp+0x14], ebx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f17196
        mov ecx, dword ptr ds : [ebx+8]
        call public_6f478c0
        test eax, eax
        je public_6f17196
        mov ecx, dword ptr ds : [ebx+8]
        call public_6f478c0
        mov edi, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [eax+0x48]
        mov dl, byte ptr ds : [edi+0xFA]
        lea ecx, ds:[edi+0x3C]
        mov dword ptr ds : [ecx], eax
        mov al, byte ptr ds : [edi+0xE4]
        test al, al
        mov byte ptr ds : [edi+0x9C], 0
        mov byte ptr ds : [edi+0x9D], dl
        je public_6f170c3
        push ebp
        lea ebx, ds:[edi+0xA4]
        xor esi, esi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f17057
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6f17057
        push ebx
        mov ecx, ebp
        call public_6f15940
        mov esi, eax
        test esi, 0x3FFFFFFF
        jne public_6f17063
        push ebx
        mov ecx, ebp
        call public_6f15b10
        mov esi, eax
        test esi, 0x3FFFFFFF
        jne public_6f17063
        push ebx
        mov ecx, ebp
        call public_6f159f0
        mov esi, eax
        public_6f17057 : nop
        test esi, 0x3FFFFFFF
        je public_6f17196
        public_6f17063 : nop
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push esi
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        test eax, eax
        jne public_6f17196
        lea eax, ds:[edi+0xD8]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call public_6f0bb80
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        lea eax, ds:[edi+0x58]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        lea eax, ds:[edi+0x3C]
        lea ecx, ds:[edi+0x34]
        push eax
        push ecx
        call dword ptr ds : [public_6fb34dc]
        mov ebx, dword ptr ss : [esp+0x24]
        add esp, 0x14
        jmp public_6f170d1
        public_6f170c3 : nop
        lea eax, ds:[edi+0x34]
        push ecx
        push eax
        call dword ptr ds : [public_6fb34dc]
        add esp, 8
        public_6f170d1 : nop
        test eax, eax
        jne public_6f17196
        mov eax, dword ptr ds : [edi+0xF0]
        mov dword ptr ds : [edi+0x38], 1
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f1711f
        add ebx, 0xEC
        public_6f170f2 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+0x34]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], eax
        call public_6f003e0
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xF0]
        jne public_6f170f2
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f1711f : nop
        mov eax, dword ptr ds : [ebx+0x150]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_6f17196
        nop 
        lea esp, ss:[esp]
        public_6f17130 : nop
        lea esi, ss:[ebp+0xC]
        test esi, esi
        jne public_6f1713b
        mov eax, dword ptr ds : [edi]
        jmp public_6f17169
        public_6f1713b : nop
        lea eax, ds:[edi+4]
        mov edi, edi
        public_6f17140 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6f17164
        test cl, cl
        je public_6f17160
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6f17164
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f17140
        public_6f17160 : nop
        xor eax, eax
        jmp public_6f17169
        public_6f17164 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f17169 : nop
        test eax, eax
        sete al
        test al, al
        je public_6f1718b
        mov eax, dword ptr ss : [ebp+0x3C]
        mov edx, dword ptr ds : [edi+0x34]
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x40]
        push eax
        push ecx
        push 1
        push edx
        call dword ptr ds : [public_6fb3650]
        add esp, 0x10
        public_6f1718b : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [ebx+0x150]
        jne public_6f17130
        public_6f17196 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x6f16fa0)
    }
}

#undef public_6f17057
#undef public_6f17063
#undef public_6f170c3
#undef public_6f170d1
#undef public_6f170f2
#undef public_6f1711f
#undef public_6f17130
#undef public_6f1713b
#undef public_6f17140
#undef public_6f17160
#undef public_6f17164
#undef public_6f17169
#undef public_6f1718b
#undef public_6f17196
