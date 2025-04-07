#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41c00);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d41c39 _public_6d41c39
#define public_6d41c3b _public_6d41c3b
#define public_6d41c43 _public_6d41c43
#define public_6d41c48 _public_6d41c48
#define public_6d41c54 _public_6d41c54
#define public_6d41c71 _public_6d41c71
#define public_6d41c79 _public_6d41c79
#define public_6d41c83 _public_6d41c83
#define public_6d41c90 _public_6d41c90
#define public_6d41c99 _public_6d41c99
#define public_6d41ca5 _public_6d41ca5
#define public_6d41cb0 _public_6d41cb0
#define public_6d41cb9 _public_6d41cb9
#define public_6d41cc3 _public_6d41cc3
#define public_6d41cf5 _public_6d41cf5
#define public_6d41d10 _public_6d41d10
#define public_6d41d31 _public_6d41d31
#define public_6d41d3d _public_6d41d3d
#define public_6d41d47 _public_6d41d47
#define public_6d41d60 _public_6d41d60
#define public_6d41d68 _public_6d41d68
#define public_6d41d76 _public_6d41d76
#define public_6d41d90 _public_6d41d90
#define public_6d41dac _public_6d41dac
#define public_6d41dc0 _public_6d41dc0
#define public_6d41dcc _public_6d41dcc
#define public_6d41dd6 _public_6d41dd6
#define public_6d41de1 _public_6d41de1
#define public_6d41df0 _public_6d41df0
#define public_6d41e00 _public_6d41e00
#define public_6d41e0c _public_6d41e0c
#define public_6d41e0f _public_6d41e0f

PROC_DECLARE(0x6d41c00, internal_6d41c00, public_6d41c00);
extern "C" NAKED register_t __cdecl internal_6d41c00()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        sub edi, ebx
        sub ecx, eax
        sar edi, 2
        sar ecx, 2
        cmp ecx, edi
        jae public_6d41d10
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        je public_6d41c39
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp edi, ecx
        jb public_6d41c3b
        public_6d41c39 : nop
        mov ecx, edi
        public_6d41c3b : nop
        test edx, edx
        jne public_6d41c43
        xor eax, eax
        jmp public_6d41c48
        public_6d41c43 : nop
        sub eax, edx
        sar eax, 2
        public_6d41c48 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6d41c54
        xor eax, eax
        public_6d41c54 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6d60012
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x1C]
        add esp, 4
        cmp ecx, esi
        mov ebx, eax
        je public_6d41c83
        public_6d41c71 : nop
        test eax, eax
        je public_6d41c79
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6d41c79 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, esi
        jne public_6d41c71
        public_6d41c83 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, dword ptr ss : [esp+0x20]
        je public_6d41ca5
        sub ecx, eax
        nop 
        public_6d41c90 : nop
        test eax, eax
        je public_6d41c99
        mov edx, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], edx
        public_6d41c99 : nop
        add eax, 4
        lea edx, ds:[ecx+eax]
        cmp edx, dword ptr ss : [esp+0x20]
        jne public_6d41c90
        public_6d41ca5 : nop
        mov edx, dword ptr ss : [ebp+8]
        cmp esi, edx
        je public_6d41cc3
        mov ecx, esi
        sub ecx, eax
        public_6d41cb0 : nop
        test eax, eax
        je public_6d41cb9
        mov esi, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], esi
        public_6d41cb9 : nop
        add eax, 4
        lea esi, ds:[ecx+eax]
        cmp esi, edx
        jne public_6d41cb0
        public_6d41cc3 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ds:[ebx+ecx*4]
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        mov dword ptr ss : [ebp+0xC], edx
        jne public_6d41cf5
        xor eax, eax
        mov eax, edi
        pop edi
        lea eax, ds:[ebx+eax*4]
        pop esi
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6d41cf5 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 2
        add eax, edi
        pop edi
        lea eax, ds:[ebx+eax*4]
        pop esi
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6d41d10 : nop
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        cmp ecx, edi
        jae public_6d41dac
        shl edi, 2
        cmp esi, eax
        lea edx, ds:[edi+esi]
        je public_6d41d47
        mov ecx, edx
        sub ecx, edi
        public_6d41d31 : nop
        test edx, edx
        je public_6d41d3d
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d41d3d : nop
        add ecx, 4
        add edx, 4
        cmp ecx, eax
        jne public_6d41d31
        public_6d41d47 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, ecx
        sub edx, esi
        sar edx, 2
        lea eax, ds:[ebx+edx*4]
        cmp eax, dword ptr ss : [esp+0x20]
        je public_6d41d76
        lea ebx, ds:[ebx]
        public_6d41d60 : nop
        test ecx, ecx
        je public_6d41d68
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_6d41d68 : nop
        mov edx, dword ptr ss : [esp+0x20]
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6d41d60
        public_6d41d76 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, esi
        sar eax, 2
        lea ecx, ds:[ebx+eax*4]
        cmp ebx, ecx
        mov eax, ebx
        je public_6d41e0c
        sub esi, ebx
        lea ecx, ds:[ecx]
        public_6d41d90 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6d41d90
        mov eax, dword ptr ss : [ebp+8]
        add eax, edi
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6d41dac : nop
        test edi, edi
        jbe public_6d41e0f
        shl edi, 2
        mov ecx, eax
        sub ecx, edi
        cmp ecx, eax
        mov edx, eax
        je public_6d41dd6
        lea ecx, ds:[ecx]
        public_6d41dc0 : nop
        test edx, edx
        je public_6d41dcc
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d41dcc : nop
        add ecx, 4
        add edx, 4
        cmp ecx, eax
        jne public_6d41dc0
        public_6d41dd6 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, ecx
        sub eax, edi
        cmp esi, eax
        je public_6d41df0
        public_6d41de1 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, esi
        mov dword ptr ds : [ecx], edx
        jne public_6d41de1
        public_6d41df0 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ebx, ecx
        mov eax, ebx
        je public_6d41e0c
        sub esi, ebx
        lea esp, ss:[esp]
        public_6d41e00 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6d41e00
        public_6d41e0c : nop
        add dword ptr ss : [ebp+8], edi
        public_6d41e0f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d41c00)
    }
}

#undef public_6d41c39
#undef public_6d41c3b
#undef public_6d41c43
#undef public_6d41c48
#undef public_6d41c54
#undef public_6d41c71
#undef public_6d41c79
#undef public_6d41c83
#undef public_6d41c90
#undef public_6d41c99
#undef public_6d41ca5
#undef public_6d41cb0
#undef public_6d41cb9
#undef public_6d41cc3
#undef public_6d41cf5
#undef public_6d41d10
#undef public_6d41d31
#undef public_6d41d3d
#undef public_6d41d47
#undef public_6d41d60
#undef public_6d41d68
#undef public_6d41d76
#undef public_6d41d90
#undef public_6d41dac
#undef public_6d41dc0
#undef public_6d41dcc
#undef public_6d41dd6
#undef public_6d41de1
#undef public_6d41df0
#undef public_6d41e00
#undef public_6d41e0c
#undef public_6d41e0f
