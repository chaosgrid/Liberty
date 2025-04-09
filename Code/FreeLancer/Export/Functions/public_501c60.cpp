#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_501c60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_501c96 _public_501c96
#define public_501c98 _public_501c98
#define public_501ca0 _public_501ca0
#define public_501ca5 _public_501ca5
#define public_501cb1 _public_501cb1
#define public_501cd0 _public_501cd0
#define public_501cee _public_501cee
#define public_501cfc _public_501cfc
#define public_501d06 _public_501d06
#define public_501d26 _public_501d26
#define public_501d38 _public_501d38
#define public_501d50 _public_501d50
#define public_501d6e _public_501d6e
#define public_501d78 _public_501d78
#define public_501db8 _public_501db8
#define public_501dd7 _public_501dd7
#define public_501e00 _public_501e00
#define public_501e26 _public_501e26
#define public_501e34 _public_501e34
#define public_501e46 _public_501e46
#define public_501e66 _public_501e66
#define public_501e70 _public_501e70
#define public_501e80 _public_501e80
#define public_501ea1 _public_501ea1
#define public_501eb7 _public_501eb7
#define public_501ed0 _public_501ed0
#define public_501ef2 _public_501ef2
#define public_501f00 _public_501f00
#define public_501f10 _public_501f10
#define public_501f34 _public_501f34
#define public_501f41 _public_501f41
#define public_501f62 _public_501f62
#define public_501f69 _public_501f69

PROC_DECLARE(0x501c60, internal_501c60, public_501c60);
extern "C" NAKED register_t __cdecl internal_501c60()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+0xC]
        push ebp
        push esi
        sub ecx, eax
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        sar ecx, 4
        cmp ecx, edi
        mov dword ptr ss : [esp+0x10], ebx
        jae public_501dd7
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        je public_501c96
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp edi, ecx
        jb public_501c98
        public_501c96 : nop
        mov ecx, edi
        public_501c98 : nop
        test edx, edx
        jne public_501ca0
        xor eax, eax
        jmp public_501ca5
        public_501ca0 : nop
        sub eax, edx
        sar eax, 4
        public_501ca5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_501cb1
        xor eax, eax
        public_501cb1 : nop
        shl eax, 4
        push eax
        call public_5b7e84
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        cmp eax, ebp
        je public_501cfc
        mov edi, edi
        public_501cd0 : nop
        test edx, edx
        je public_501cee
        mov ecx, eax
        mov ebx, dword ptr ds : [ecx]
        mov esi, edx
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ebx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        public_501cee : nop
        add eax, 0x10
        add edx, 0x10
        cmp eax, ebp
        jne public_501cd0
        mov ebx, dword ptr ss : [esp+0x10]
        public_501cfc : nop
        test edi, edi
        mov eax, edx
        jbe public_501d38
        mov dword ptr ss : [esp+0x1C], edi
        public_501d06 : nop
        test eax, eax
        je public_501d26
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [ecx]
        mov esi, eax
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ebx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        public_501d26 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x10
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_501d06
        mov ebx, dword ptr ss : [esp+0x10]
        public_501d38 : nop
        mov ebx, dword ptr ds : [ebx+8]
        mov ecx, edi
        shl ecx, 4
        cmp ebp, ebx
        lea esi, ds:[ecx+edx]
        je public_501d78
        mov eax, esi
        sub eax, ecx
        sub eax, edx
        add eax, ebp
        nop 
        public_501d50 : nop
        test esi, esi
        je public_501d6e
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov ecx, esi
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], ebp
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        public_501d6e : nop
        add eax, 0x10
        add esi, 0x10
        cmp eax, ebx
        jne public_501d50
        public_501d78 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        shl eax, 4
        add eax, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [esi+0xC], eax
        jne public_501db8
        xor eax, eax
        mov eax, edi
        shl eax, 4
        pop edi
        add eax, edx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_501db8 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 4
        add eax, edi
        shl eax, 4
        pop edi
        add eax, edx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_501dd7 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp ecx, edi
        jae public_501eb7
        mov ebp, edi
        shl ebp, 4
        cmp edx, eax
        mov dword ptr ss : [esp+0x1C], ebp
        lea esi, ds:[edx+ebp]
        je public_501e34
        mov ecx, esi
        sub ecx, ebp
        mov edi, edi
        public_501e00 : nop
        test esi, esi
        je public_501e26
        mov edi, ecx
        mov ebp, dword ptr ds : [edi]
        mov ebx, esi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov edi, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx+0xC], edi
        mov edi, dword ptr ss : [esp+0x20]
        public_501e26 : nop
        add ecx, 0x10
        add esi, 0x10
        cmp ecx, eax
        jne public_501e00
        mov ebx, dword ptr ss : [esp+0x10]
        public_501e34 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        sub edi, ecx
        je public_501e70
        public_501e46 : nop
        test eax, eax
        je public_501e66
        mov ebx, dword ptr ds : [esi]
        mov ecx, eax
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], ebx
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+0xC], esi
        mov esi, dword ptr ss : [esp+0x24]
        public_501e66 : nop
        add eax, 0x10
        dec edi
        jne public_501e46
        mov ebx, dword ptr ss : [esp+0x10]
        public_501e70 : nop
        mov ecx, dword ptr ds : [ebx+8]
        cmp edx, ecx
        mov eax, edx
        je public_501ea1
        lea esp, ss:[esp]
        public_501e80 : nop
        mov edx, esi
        mov ebx, dword ptr ds : [edx]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+8], ebx
        mov edx, dword ptr ds : [edx+0xC]
        add eax, 0x10
        cmp eax, ecx
        mov dword ptr ds : [edi+0xC], edx
        jne public_501e80
        public_501ea1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        pop edi
        pop esi
        add ecx, ebp
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_501eb7 : nop
        test edi, edi
        jbe public_501f69
        shl edi, 4
        mov ecx, eax
        sub ecx, edi
        cmp ecx, eax
        mov esi, eax
        mov dword ptr ss : [esp+0x1C], edi
        je public_501f00
        public_501ed0 : nop
        test esi, esi
        je public_501ef2
        mov edi, ecx
        mov ebp, dword ptr ds : [edi]
        mov ebx, esi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov edi, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], edi
        mov edi, dword ptr ss : [esp+0x1C]
        public_501ef2 : nop
        add ecx, 0x10
        add esi, 0x10
        cmp ecx, eax
        jne public_501ed0
        mov ebx, dword ptr ss : [esp+0x10]
        public_501f00 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, ecx
        sub eax, edi
        cmp edx, eax
        je public_501f34
        nop 
        lea esp, ss:[esp]
        public_501f10 : nop
        sub eax, 0x10
        sub ecx, 0x10
        cmp eax, edx
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], esi
        jne public_501f10
        public_501f34 : nop
        lea ecx, ds:[edi+edx]
        cmp edx, ecx
        mov eax, edx
        je public_501f62
        mov edx, dword ptr ss : [esp+0x24]
        public_501f41 : nop
        mov esi, edx
        mov ebp, dword ptr ds : [esi]
        mov ebx, eax
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        add eax, 0x10
        cmp eax, ecx
        mov dword ptr ds : [ebx+0xC], esi
        jne public_501f41
        public_501f62 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+8], edi
        public_501f69 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x501c60)
    }
}

#undef public_501c96
#undef public_501c98
#undef public_501ca0
#undef public_501ca5
#undef public_501cb1
#undef public_501cd0
#undef public_501cee
#undef public_501cfc
#undef public_501d06
#undef public_501d26
#undef public_501d38
#undef public_501d50
#undef public_501d6e
#undef public_501d78
#undef public_501db8
#undef public_501dd7
#undef public_501e00
#undef public_501e26
#undef public_501e34
#undef public_501e46
#undef public_501e66
#undef public_501e70
#undef public_501e80
#undef public_501ea1
#undef public_501eb7
#undef public_501ed0
#undef public_501ef2
#undef public_501f00
#undef public_501f10
#undef public_501f34
#undef public_501f41
#undef public_501f62
#undef public_501f69
