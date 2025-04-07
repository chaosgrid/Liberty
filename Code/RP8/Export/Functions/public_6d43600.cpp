#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43600);

#define public_6d43626 _public_6d43626
#define public_6d4367f _public_6d4367f
#define public_6d4369e _public_6d4369e
#define public_6d436ae _public_6d436ae
#define public_6d436de _public_6d436de
#define public_6d43709 _public_6d43709
#define public_6d4370b _public_6d4370b
#define public_6d43718 _public_6d43718
#define public_6d43745 _public_6d43745
#define public_6d43768 _public_6d43768
#define public_6d43769 _public_6d43769
#define public_6d43774 _public_6d43774
#define public_6d43782 _public_6d43782
#define public_6d437a2 _public_6d437a2
#define public_6d437b1 _public_6d437b1
#define public_6d437b4 _public_6d437b4
#define public_6d437c0 _public_6d437c0
#define public_6d437dd _public_6d437dd
#define public_6d437f7 _public_6d437f7
#define public_6d437fe _public_6d437fe
#define public_6d43812 _public_6d43812
#define public_6d43824 _public_6d43824
#define public_6d43859 _public_6d43859
#define public_6d4387e _public_6d4387e
#define public_6d43881 _public_6d43881
#define public_6d4389e _public_6d4389e
#define public_6d438be _public_6d438be
#define public_6d438c1 _public_6d438c1
#define public_6d438ff _public_6d438ff
#define public_6d43906 _public_6d43906
#define public_6d43930 _public_6d43930
#define public_6d4393e _public_6d4393e
#define public_6d4394d _public_6d4394d

PROC_DECLARE(0x6d43600, internal_6d43600, public_6d43600);
extern "C" NAKED register_t __cdecl internal_6d43600()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [esi+8]
        test cl, cl
        mov eax, dword ptr ds : [esi]
        push edi
        jne public_6d43824
        mov ecx, dword ptr ss : [ebp+0x10]
        xor ebx, ebx
        test ecx, ecx
        je public_6d43626
        mov bx, word ptr ds : [ecx+8]
        public_6d43626 : nop
        mov cl, byte ptr ds : [esi+9]
        cmp cl, 8
        mov edi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], ebx
        jae public_6d43782
        movzx ecx, cl
        dec ecx
        je public_6d43718
        dec ecx
        je public_6d436ae
        dec ecx
        dec ecx
        jne public_6d43774
        imul ebx, 0x11
        lea ecx, ds:[eax+edi-1]
        mov dword ptr ss : [ebp-4], ecx
        lea ecx, ds:[eax-1]
        and ecx, 1
        shl ecx, 2
        mov dword ptr ss : [ebp-8], ebx
        lea edx, ds:[eax-1]
        mov ebx, ecx
        push 4
        shr edx, 1
        pop ecx
        sub ecx, ebx
        add edx, edi
        test eax, eax
        mov dword ptr ss : [ebp+8], ecx
        jbe public_6d43774
        mov dword ptr ss : [ebp-0xC], eax
        public_6d4367f : nop
        movzx ebx, byte ptr ds : [edx]
        shr ebx, cl
        push 4
        and ebx, 0xF
        mov cl, bl
        shl cl, 4
        or cl, bl
        mov ebx, dword ptr ss : [ebp-4]
        mov byte ptr ds : [ebx], cl
        pop ecx
        cmp dword ptr ss : [ebp+8], ecx
        jne public_6d4369e
        xor ecx, ecx
        dec edx
        public_6d4369e : nop
        dec dword ptr ss : [ebp-4]
        dec dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp+8], ecx
        jne public_6d4367f
        jmp public_6d43774
        public_6d436ae : nop
        imul ebx, 0x55
        mov dword ptr ss : [ebp-8], ebx
        lea ecx, ds:[eax+edi-1]
        mov dword ptr ss : [ebp-4], ecx
        lea ebx, ds:[eax-1]
        push 3
        and ebx, 3
        lea edx, ds:[eax-1]
        pop ecx
        shr edx, 2
        sub ecx, ebx
        shl ecx, 1
        add edx, edi
        test eax, eax
        mov dword ptr ss : [ebp+8], ecx
        jbe public_6d43774
        mov dword ptr ss : [ebp-0xC], eax
        public_6d436de : nop
        movzx ebx, byte ptr ds : [edx]
        shr ebx, cl
        and ebx, 3
        mov cl, bl
        shl cl, 2
        or cl, bl
        shl cl, 2
        or cl, bl
        shl cl, 2
        or cl, bl
        mov ebx, dword ptr ss : [ebp-4]
        mov byte ptr ds : [ebx], cl
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, 6
        jne public_6d43709
        xor ecx, ecx
        dec edx
        jmp public_6d4370b
        public_6d43709 : nop
        inc ecx
        inc ecx
        public_6d4370b : nop
        dec dword ptr ss : [ebp-4]
        dec dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp+8], ecx
        jne public_6d436de
        jmp public_6d43774
        public_6d43718 : nop
        imul ebx, 0xFF
        mov dword ptr ss : [ebp-8], ebx
        lea ecx, ds:[eax+edi-1]
        lea edx, ds:[eax-1]
        mov dword ptr ss : [ebp-4], ecx
        lea ebx, ds:[eax-1]
        push 7
        shr edx, 3
        and ebx, 7
        pop ecx
        sub ecx, ebx
        add edx, edi
        test eax, eax
        mov dword ptr ss : [ebp+8], ecx
        jbe public_6d43774
        mov dword ptr ss : [ebp-0xC], eax
        public_6d43745 : nop
        mov bl, byte ptr ds : [edx]
        shr bl, cl
        mov ecx, dword ptr ss : [ebp-4]
        and bl, 1
        neg bl
        sbb bl, bl
        and ebx, 0xFF
        mov byte ptr ds : [ecx], bl
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, 7
        jne public_6d43768
        xor ecx, ecx
        dec edx
        jmp public_6d43769
        public_6d43768 : nop
        inc ecx
        public_6d43769 : nop
        dec dword ptr ss : [ebp-4]
        dec dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp+8], ecx
        jne public_6d43745
        public_6d43774 : nop
        mov ebx, dword ptr ss : [ebp-8]
        mov byte ptr ds : [esi+9], 8
        mov byte ptr ds : [esi+0xB], 8
        mov dword ptr ds : [esi+4], eax
        public_6d43782 : nop
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d4394d
        mov cl, byte ptr ds : [esi+9]
        cmp cl, 8
        jne public_6d437c0
        test eax, eax
        lea ecx, ds:[eax+edi-1]
        lea edi, ds:[edi+eax*2-1]
        jbe public_6d43812
        mov edx, eax
        public_6d437a2 : nop
        movzx bx, byte ptr ds : [ecx]
        cmp bx, word ptr ss : [ebp-8]
        jne public_6d437b1
        and byte ptr ds : [edi], 0
        jmp public_6d437b4
        public_6d437b1 : nop
        or byte ptr ds : [edi], 0xFF
        public_6d437b4 : nop
        mov bl, byte ptr ds : [ecx]
        dec edi
        mov byte ptr ds : [edi], bl
        dec edi
        dec ecx
        dec edx
        jne public_6d437a2
        jmp public_6d43812
        public_6d437c0 : nop
        cmp cl, 0x10
        jne public_6d43812
        test eax, eax
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ds:[edx+edi-1]
        lea edi, ds:[edi+edx*2-1]
        jbe public_6d43812
        movzx edx, bx
        mov dword ptr ss : [ebp-0xC], edx
        mov dword ptr ss : [ebp+8], eax
        public_6d437dd : nop
        xor ebx, ebx
        lea edx, ds:[ecx-1]
        mov bh, byte ptr ds : [edx]
        mov dword ptr ss : [ebp-8], edx
        mov bl, byte ptr ds : [ecx]
        cmp ebx, dword ptr ss : [ebp-0xC]
        jne public_6d437f7
        and byte ptr ds : [edi], 0
        dec edi
        and byte ptr ds : [edi], 0
        jmp public_6d437fe
        public_6d437f7 : nop
        or byte ptr ds : [edi], 0xFF
        dec edi
        or byte ptr ds : [edi], 0xFF
        public_6d437fe : nop
        mov cl, byte ptr ds : [ecx]
        dec edi
        mov byte ptr ds : [edi], cl
        mov ecx, dword ptr ss : [ebp-8]
        mov dl, byte ptr ds : [ecx]
        dec edi
        mov byte ptr ds : [edi], dl
        dec edi
        dec ecx
        dec dword ptr ss : [ebp+8]
        jne public_6d437dd
        public_6d43812 : nop
        mov cl, byte ptr ds : [esi+9]
        mov byte ptr ds : [esi+8], 4
        mov byte ptr ds : [esi+0xA], 2
        shl cl, 1
        jmp public_6d4393e
        public_6d43824 : nop
        cmp cl, 2
        jne public_6d4394d
        mov edx, dword ptr ss : [ebp+0x10]
        test edx, edx
        je public_6d4394d
        mov cl, byte ptr ds : [esi+9]
        cmp cl, 8
        jne public_6d4389e
        test eax, eax
        mov edi, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [esi+4]
        lea ecx, ds:[ecx+edi-1]
        lea edi, ds:[edi+eax*4-1]
        jbe public_6d43930
        mov dword ptr ss : [ebp+8], eax
        public_6d43859 : nop
        movzx bx, byte ptr ds : [ecx-2]
        cmp bx, word ptr ds : [edx+2]
        jne public_6d4387e
        movzx bx, byte ptr ds : [ecx-1]
        cmp bx, word ptr ds : [edx+4]
        jne public_6d4387e
        movzx bx, byte ptr ds : [ecx]
        cmp bx, word ptr ds : [edx+6]
        jne public_6d4387e
        and byte ptr ds : [edi], 0
        jmp public_6d43881
        public_6d4387e : nop
        or byte ptr ds : [edi], 0xFF
        public_6d43881 : nop
        mov bl, byte ptr ds : [ecx]
        dec edi
        mov byte ptr ds : [edi], bl
        dec edi
        dec ecx
        mov bl, byte ptr ds : [ecx]
        mov byte ptr ds : [edi], bl
        dec edi
        dec ecx
        mov bl, byte ptr ds : [ecx]
        mov byte ptr ds : [edi], bl
        dec edi
        dec ecx
        dec dword ptr ss : [ebp+8]
        jne public_6d43859
        jmp public_6d43930
        public_6d4389e : nop
        cmp cl, 0x10
        jne public_6d43930
        test eax, eax
        mov edi, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [esi+4]
        lea ecx, ds:[ecx+edi-1]
        lea edi, ds:[edi+eax*8-1]
        jbe public_6d43930
        mov dword ptr ss : [ebp+8], eax
        jmp public_6d438c1
        public_6d438be : nop
        mov edx, dword ptr ss : [ebp+0x10]
        public_6d438c1 : nop
        movzx edx, word ptr ds : [edx+2]
        xor ebx, ebx
        mov bh, byte ptr ds : [ecx-5]
        mov bl, byte ptr ds : [ecx-4]
        cmp ebx, edx
        jne public_6d438ff
        mov ebx, dword ptr ss : [ebp+0x10]
        movzx ebx, word ptr ds : [ebx+4]
        xor edx, edx
        mov dh, byte ptr ds : [ecx-3]
        mov dl, byte ptr ds : [ecx-2]
        cmp edx, ebx
        jne public_6d438ff
        mov ebx, dword ptr ss : [ebp+0x10]
        movzx ebx, word ptr ds : [ebx+6]
        xor edx, edx
        mov dh, byte ptr ds : [ecx-1]
        mov dl, byte ptr ds : [ecx]
        cmp edx, ebx
        jne public_6d438ff
        and byte ptr ds : [edi], 0
        dec edi
        and byte ptr ds : [edi], 0
        jmp public_6d43906
        public_6d438ff : nop
        or byte ptr ds : [edi], 0xFF
        dec edi
        or byte ptr ds : [edi], 0xFF
        public_6d43906 : nop
        mov dl, byte ptr ds : [ecx]
        dec edi
        mov byte ptr ds : [edi], dl
        dec edi
        dec ecx
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [edi], dl
        dec edi
        dec ecx
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [edi], dl
        dec edi
        dec ecx
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [edi], dl
        dec edi
        dec ecx
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [edi], dl
        dec edi
        dec ecx
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [edi], dl
        dec edi
        dec ecx
        dec dword ptr ss : [ebp+8]
        jne public_6d438be
        public_6d43930 : nop
        mov cl, byte ptr ds : [esi+9]
        mov byte ptr ds : [esi+8], 6
        mov byte ptr ds : [esi+0xA], 4
        shl cl, 2
        public_6d4393e : nop
        mov byte ptr ds : [esi+0xB], cl
        movzx ecx, cl
        imul ecx, eax
        shr ecx, 3
        mov dword ptr ds : [esi+4], ecx
        public_6d4394d : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d43600)
    }
}

#undef public_6d43626
#undef public_6d4367f
#undef public_6d4369e
#undef public_6d436ae
#undef public_6d436de
#undef public_6d43709
#undef public_6d4370b
#undef public_6d43718
#undef public_6d43745
#undef public_6d43768
#undef public_6d43769
#undef public_6d43774
#undef public_6d43782
#undef public_6d437a2
#undef public_6d437b1
#undef public_6d437b4
#undef public_6d437c0
#undef public_6d437dd
#undef public_6d437f7
#undef public_6d437fe
#undef public_6d43812
#undef public_6d43824
#undef public_6d43859
#undef public_6d4387e
#undef public_6d43881
#undef public_6d4389e
#undef public_6d438be
#undef public_6d438c1
#undef public_6d438ff
#undef public_6d43906
#undef public_6d43930
#undef public_6d4393e
#undef public_6d4394d
