#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418610);
CLANG_FORWARD_PROC_SYMBOL(public_418f10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_418648 _public_418648
#define public_41864c _public_41864c
#define public_418650 _public_418650
#define public_418655 _public_418655
#define public_418661 _public_418661
#define public_418686 _public_418686
#define public_41869a _public_41869a
#define public_4186a8 _public_4186a8
#define public_4186c8 _public_4186c8
#define public_4186dc _public_4186dc
#define public_4186e0 _public_4186e0
#define public_4186f3 _public_4186f3
#define public_418700 _public_418700
#define public_41870b _public_41870b
#define public_418712 _public_418712
#define public_41874e _public_41874e
#define public_41876f _public_41876f
#define public_418798 _public_418798
#define public_4187b4 _public_4187b4
#define public_4187c8 _public_4187c8
#define public_4187dc _public_4187dc
#define public_4187e5 _public_4187e5
#define public_4187f6 _public_4187f6
#define public_41880c _public_41880c
#define public_418821 _public_418821
#define public_418839 _public_418839
#define public_418848 _public_418848
#define public_41885d _public_41885d
#define public_418870 _public_418870
#define public_418881 _public_418881
#define public_418884 _public_418884

PROC_DECLARE(0x418610, internal_418610, public_418610);
extern "C" NAKED register_t __cdecl internal_418610()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+0xC]
        push ebp
        push esi
        mov esi, dword ptr ds : [edx+8]
        sub ecx, esi
        sar ecx, 3
        cmp ecx, eax
        push edi
        mov dword ptr ss : [esp+0x10], edx
        jae public_41876f
        mov edx, dword ptr ds : [edx+4]
        test edx, edx
        je public_41864c
        mov ecx, esi
        sub ecx, edx
        sar ecx, 3
        cmp eax, ecx
        jae public_418648
        mov eax, ecx
        public_418648 : nop
        test edx, edx
        jne public_418650
        public_41864c : nop
        xor esi, esi
        jmp public_418655
        public_418650 : nop
        sub esi, edx
        sar esi, 3
        public_418655 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_418661
        xor eax, eax
        public_418661 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_5b7e84
        mov ebp, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        je public_41869a
        public_418686 : nop
        push esi
        push edi
        call public_418f10
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebx
        jne public_418686
        public_41869a : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        mov esi, edi
        jbe public_4186c8
        mov dword ptr ss : [esp+0x20], eax
        public_4186a8 : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push esi
        call public_418f10
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 8
        add esi, 8
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        jne public_4186a8
        mov eax, dword ptr ss : [esp+0x24]
        public_4186c8 : nop
        lea eax, ds:[edi+eax*8]
        mov edi, dword ptr ss : [ebp+8]
        cmp ebx, edi
        mov esi, ebx
        je public_4186f3
        sub eax, ebx
        mov dword ptr ss : [esp+0x28], eax
        jmp public_4186e0
        public_4186dc : nop
        mov eax, dword ptr ss : [esp+0x28]
        public_4186e0 : nop
        add eax, esi
        push esi
        push eax
        call public_418f10
        add esi, 8
        add esp, 8
        cmp esi, edi
        jne public_4186dc
        public_4186f3 : nop
        mov edi, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, edi
        je public_418712
        lea ecx, ds:[ecx]
        public_418700 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_41870b
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_41870b : nop
        add esi, 8
        cmp esi, edi
        jne public_418700
        public_418712 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[edx+ecx*8]
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        mov dword ptr ss : [ebp+0xC], eax
        jne public_41874e
        mov ecx, dword ptr ss : [esp+0x24]
        xor eax, eax
        pop edi
        mov eax, ecx
        lea eax, ds:[edx+eax*8]
        pop esi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], edx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_41874e : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        sar eax, 3
        pop edi
        add eax, ecx
        lea eax, ds:[edx+eax*8]
        pop esi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], edx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_41876f : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, esi
        sub ecx, edi
        sar ecx, 3
        cmp ecx, eax
        jae public_41880c
        cmp edi, esi
        lea ecx, ds:[eax*8]
        mov dword ptr ss : [esp+0x20], ecx
        lea ebp, ds:[ecx+edi]
        mov ebx, edi
        je public_4187b4
        sub ebp, edi
        public_418798 : nop
        lea edx, ds:[ebx+ebp]
        push ebx
        push edx
        call public_418f10
        add ebx, 8
        add esp, 8
        cmp ebx, esi
        jne public_418798
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x10]
        public_4187b4 : nop
        mov esi, dword ptr ds : [edx+8]
        mov ebx, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, edi
        sar ecx, 3
        sub eax, ecx
        je public_4187dc
        mov ebp, eax
        public_4187c8 : nop
        push ebx
        push esi
        call public_418f10
        add esp, 8
        add esi, 8
        dec ebp
        jne public_4187c8
        mov edx, dword ptr ss : [esp+0x10]
        public_4187dc : nop
        mov ecx, dword ptr ds : [edx+8]
        cmp edi, ecx
        mov eax, edi
        je public_4187f6
        public_4187e5 : nop
        mov esi, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax+4], esi
        add eax, 8
        cmp eax, ecx
        jne public_4187e5
        public_4187f6 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add ecx, eax
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_41880c : nop
        test eax, eax
        jbe public_418884
        shl eax, 3
        mov ebx, esi
        sub ebx, eax
        cmp ebx, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_418839
        public_418821 : nop
        push ebx
        push ebp
        call public_418f10
        add ebx, 8
        add esp, 8
        add ebp, 8
        cmp ebx, esi
        jne public_418821
        mov edx, dword ptr ss : [esp+0x10]
        public_418839 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, ecx
        sub eax, ebx
        cmp edi, eax
        je public_41885d
        public_418848 : nop
        mov esi, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        jne public_418848
        public_41885d : nop
        lea esi, ds:[ebx+edi]
        cmp edi, esi
        mov eax, edi
        je public_418881
        mov ecx, dword ptr ss : [esp+0x28]
        lea ebx, ds:[ebx]
        public_418870 : nop
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edi
        add eax, 8
        cmp eax, esi
        jne public_418870
        public_418881 : nop
        add dword ptr ds : [edx+8], ebx
        public_418884 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x418610)
    }
}

#undef public_418648
#undef public_41864c
#undef public_418650
#undef public_418655
#undef public_418661
#undef public_418686
#undef public_41869a
#undef public_4186a8
#undef public_4186c8
#undef public_4186dc
#undef public_4186e0
#undef public_4186f3
#undef public_418700
#undef public_41870b
#undef public_418712
#undef public_41874e
#undef public_41876f
#undef public_418798
#undef public_4187b4
#undef public_4187c8
#undef public_4187dc
#undef public_4187e5
#undef public_4187f6
#undef public_41880c
#undef public_418821
#undef public_418839
#undef public_418848
#undef public_41885d
#undef public_418870
#undef public_418881
#undef public_418884
