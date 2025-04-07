#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280560);
CLANG_FORWARD_PROC_SYMBOL(public_6280770);
CLANG_FORWARD_PROC_SYMBOL(public_62809c0);
CLANG_FORWARD_PROC_SYMBOL(public_63195e0);
CLANG_FORWARD_PROC_SYMBOL(public_6319b20);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_6280580 _public_6280580
#define public_6280593 _public_6280593
#define public_6280596 _public_6280596
#define public_628059a _public_628059a
#define public_62805f9 _public_62805f9
#define public_6280611 _public_6280611
#define public_628061b _public_628061b
#define public_628061f _public_628061f
#define public_6280630 _public_6280630
#define public_628066b _public_628066b
#define public_628067a _public_628067a
#define public_628069b _public_628069b
#define public_62806bc _public_62806bc
#define public_62806ca _public_62806ca
#define public_62806e9 _public_62806e9
#define public_62806f5 _public_62806f5
#define public_6280711 _public_6280711
#define public_628072c _public_628072c
#define public_6280733 _public_6280733
#define public_6280756 _public_6280756

PROC_DECLARE(0x6280560, internal_6280560, public_6280560);
extern "C" NAKED register_t __cdecl internal_6280560()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_628059a
        lea esp, ss:[esp]
        public_6280580 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6280593
        mov ebp, dword ptr ss : [ebp]
        jmp public_6280596
        public_6280593 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6280596 : nop
        cmp ebp, edx
        jne public_6280580
        public_628059a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6280711
        push 0
        push esi
        mov ecx, edi
        call public_63195e0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_62809c0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_62805f9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_62805f9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_62805f9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_628061f
        mov dword ptr ds : [eax+8], ebx
        jmp public_628061f
        public_62805f9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6280611
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_628061b
        public_6280611 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_628061b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_628061b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_628061f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_62806f5
        lea ecx, ds:[ecx]
        public_6280630 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x40]
        test cl, cl
        jne public_62806f5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_628069b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_628066b
        mov byte ptr ds : [eax+0x40], 1
        mov byte ptr ds : [ecx+0x40], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_62806e9
        public_628066b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_628067a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_628067a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x40], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x40], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_62806e9
        public_628069b : nop
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_62806bc
        mov byte ptr ds : [eax+0x40], 1
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x40], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_62806e9
        public_62806bc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_62806ca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_62806ca : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x40], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_62806e9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6280630
        public_62806f5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x40], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6280711 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_628072c
        cmp esi, dword ptr ds : [ecx]
        je public_6280733
        lea ecx, ss:[esp+0x10]
        call public_6319b20
        mov edx, dword ptr ss : [esp+0x10]
        public_628072c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6280756
        public_6280733 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6280770
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6280756 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6280560)
    }
}

#undef public_6280580
#undef public_6280593
#undef public_6280596
#undef public_628059a
#undef public_62805f9
#undef public_6280611
#undef public_628061b
#undef public_628061f
#undef public_6280630
#undef public_628066b
#undef public_628067a
#undef public_628069b
#undef public_62806bc
#undef public_62806ca
#undef public_62806e9
#undef public_62806f5
#undef public_6280711
#undef public_628072c
#undef public_6280733
#undef public_6280756
