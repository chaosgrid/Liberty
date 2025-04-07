#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f96b0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f96e4 _public_65f96e4
#define public_65f96e6 _public_65f96e6
#define public_65f96ee _public_65f96ee
#define public_65f96f2 _public_65f96f2
#define public_65f96fe _public_65f96fe
#define public_65f9720 _public_65f9720
#define public_65f972a _public_65f972a
#define public_65f9734 _public_65f9734
#define public_65f9740 _public_65f9740
#define public_65f974e _public_65f974e
#define public_65f9754 _public_65f9754
#define public_65f9770 _public_65f9770
#define public_65f977a _public_65f977a
#define public_65f9784 _public_65f9784
#define public_65f97c0 _public_65f97c0
#define public_65f97dc _public_65f97dc
#define public_65f9800 _public_65f9800
#define public_65f980e _public_65f980e
#define public_65f9818 _public_65f9818
#define public_65f9830 _public_65f9830
#define public_65f983a _public_65f983a
#define public_65f9840 _public_65f9840
#define public_65f9850 _public_65f9850
#define public_65f985d _public_65f985d
#define public_65f986a _public_65f986a
#define public_65f9880 _public_65f9880
#define public_65f988a _public_65f988a
#define public_65f9894 _public_65f9894
#define public_65f98a0 _public_65f98a0
#define public_65f98b1 _public_65f98b1
#define public_65f98c0 _public_65f98c0
#define public_65f98cd _public_65f98cd
#define public_65f98d0 _public_65f98d0

PROC_DECLARE(0x65f96b0, internal_65f96b0, public_65f96b0);
extern "C" NAKED register_t __cdecl internal_65f96b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 1
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_65f97dc
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_65f96e4
        mov ecx, eax
        sub ecx, edx
        sar ecx, 1
        cmp ebp, ecx
        jb public_65f96e6
        public_65f96e4 : nop
        mov ecx, ebp
        public_65f96e6 : nop
        test edx, edx
        jne public_65f96ee
        xor eax, eax
        jmp public_65f96f2
        public_65f96ee : nop
        sub eax, edx
        sar eax, 1
        public_65f96f2 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_65f96fe
        xor eax, eax
        public_65f96fe : nop
        lea edx, ds:[eax+eax]
        push edx
        call public_6600bb6
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_65f9734
        nop 
        lea esp, ss:[esp]
        public_65f9720 : nop
        test ecx, ecx
        je public_65f972a
        mov dx, word ptr ds : [eax]
        mov word ptr ds : [ecx], dx
        public_65f972a : nop
        add eax, 2
        add ecx, 2
        cmp eax, ebx
        jne public_65f9720
        public_65f9734 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_65f9754
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_65f9740 : nop
        test eax, eax
        je public_65f974e
        mov di, word ptr ds : [esi]
        mov word ptr ds : [eax], di
        mov edi, dword ptr ss : [esp+0x10]
        public_65f974e : nop
        add eax, 2
        dec edx
        jne public_65f9740
        public_65f9754 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ss:[ebp+ebp]
        lea edx, ds:[esi+ecx]
        je public_65f9784
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        lea ebx, ds:[ebx]
        public_65f9770 : nop
        test edx, edx
        je public_65f977a
        mov cx, word ptr ds : [eax]
        mov word ptr ds : [edx], cx
        public_65f977a : nop
        add eax, 2
        add edx, 2
        cmp eax, edi
        jne public_65f9770
        public_65f9784 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6600bb0
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*2]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_65f97c0
        xor eax, eax
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*2]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_65f97c0 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 1
        add eax, ebp
        pop edi
        lea eax, ds:[edx+eax*2]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_65f97dc : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 1
        cmp ecx, ebp
        jae public_65f986a
        cmp edx, eax
        lea ebx, ss:[ebp+ebp]
        lea esi, ds:[ebx+edx]
        je public_65f9818
        mov ecx, esi
        sub ecx, ebx
        lea ecx, ds:[ecx]
        public_65f9800 : nop
        test esi, esi
        je public_65f980e
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [esi], di
        mov edi, dword ptr ss : [esp+0x10]
        public_65f980e : nop
        add ecx, 2
        add esi, 2
        cmp ecx, eax
        jne public_65f9800
        public_65f9818 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 1
        sub ebp, ecx
        je public_65f9840
        lea esp, ss:[esp]
        public_65f9830 : nop
        test eax, eax
        je public_65f983a
        mov cx, word ptr ds : [esi]
        mov word ptr ds : [eax], cx
        public_65f983a : nop
        add eax, 2
        dec ebp
        jne public_65f9830
        public_65f9840 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_65f985d
        lea esp, ss:[esp]
        public_65f9850 : nop
        mov dx, word ptr ds : [esi]
        mov word ptr ds : [eax], dx
        add eax, 2
        cmp eax, ecx
        jne public_65f9850
        public_65f985d : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_65f986a : nop
        test ebp, ebp
        jbe public_65f98d0
        add ebp, ebp
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_65f9894
        lea ebx, ds:[ebx]
        public_65f9880 : nop
        test esi, esi
        je public_65f988a
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [esi], bx
        public_65f988a : nop
        add ecx, 2
        add esi, 2
        cmp ecx, eax
        jne public_65f9880
        public_65f9894 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_65f98b1
        nop 
        public_65f98a0 : nop
        mov si, word ptr ds : [eax-2]
        sub eax, 2
        sub ecx, 2
        cmp eax, edx
        mov word ptr ds : [ecx], si
        jne public_65f98a0
        public_65f98b1 : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_65f98cd
        mov edx, dword ptr ss : [esp+0x24]
        mov edi, edi
        public_65f98c0 : nop
        mov si, word ptr ds : [edx]
        mov word ptr ds : [eax], si
        add eax, 2
        cmp eax, ecx
        jne public_65f98c0
        public_65f98cd : nop
        add dword ptr ds : [edi+8], ebp
        public_65f98d0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x65f96b0)
    }
}

#undef public_65f96e4
#undef public_65f96e6
#undef public_65f96ee
#undef public_65f96f2
#undef public_65f96fe
#undef public_65f9720
#undef public_65f972a
#undef public_65f9734
#undef public_65f9740
#undef public_65f974e
#undef public_65f9754
#undef public_65f9770
#undef public_65f977a
#undef public_65f9784
#undef public_65f97c0
#undef public_65f97dc
#undef public_65f9800
#undef public_65f980e
#undef public_65f9818
#undef public_65f9830
#undef public_65f983a
#undef public_65f9840
#undef public_65f9850
#undef public_65f985d
#undef public_65f986a
#undef public_65f9880
#undef public_65f988a
#undef public_65f9894
#undef public_65f98a0
#undef public_65f98b1
#undef public_65f98c0
#undef public_65f98cd
#undef public_65f98d0
