#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a0f16 _public_62a0f16
#define public_62a0f18 _public_62a0f18
#define public_62a0f20 _public_62a0f20
#define public_62a0f25 _public_62a0f25
#define public_62a0f31 _public_62a0f31
#define public_62a0f50 _public_62a0f50
#define public_62a0f6e _public_62a0f6e
#define public_62a0f7c _public_62a0f7c
#define public_62a0f86 _public_62a0f86
#define public_62a0fa6 _public_62a0fa6
#define public_62a0fb8 _public_62a0fb8
#define public_62a0fd0 _public_62a0fd0
#define public_62a0fee _public_62a0fee
#define public_62a0ff8 _public_62a0ff8
#define public_62a1038 _public_62a1038
#define public_62a1057 _public_62a1057
#define public_62a1080 _public_62a1080
#define public_62a10a6 _public_62a10a6
#define public_62a10b4 _public_62a10b4
#define public_62a10c6 _public_62a10c6
#define public_62a10e6 _public_62a10e6
#define public_62a10f0 _public_62a10f0
#define public_62a1100 _public_62a1100
#define public_62a1121 _public_62a1121
#define public_62a1137 _public_62a1137
#define public_62a1150 _public_62a1150
#define public_62a1172 _public_62a1172
#define public_62a1180 _public_62a1180
#define public_62a1190 _public_62a1190
#define public_62a11b4 _public_62a11b4
#define public_62a11c1 _public_62a11c1
#define public_62a11e2 _public_62a11e2
#define public_62a11e9 _public_62a11e9

PROC_DECLARE(0x62a0ee0, internal_62a0ee0, public_62a0ee0);
extern "C" NAKED register_t __cdecl internal_62a0ee0()
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
        jae public_62a1057
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        je public_62a0f16
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp edi, ecx
        jb public_62a0f18
        public_62a0f16 : nop
        mov ecx, edi
        public_62a0f18 : nop
        test edx, edx
        jne public_62a0f20
        xor eax, eax
        jmp public_62a0f25
        public_62a0f20 : nop
        sub eax, edx
        sar eax, 4
        public_62a0f25 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_62a0f31
        xor eax, eax
        public_62a0f31 : nop
        shl eax, 4
        push eax
        call public_6391d9c
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        cmp eax, ebp
        je public_62a0f7c
        mov edi, edi
        public_62a0f50 : nop
        test edx, edx
        je public_62a0f6e
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
        public_62a0f6e : nop
        add eax, 0x10
        add edx, 0x10
        cmp eax, ebp
        jne public_62a0f50
        mov ebx, dword ptr ss : [esp+0x10]
        public_62a0f7c : nop
        test edi, edi
        mov eax, edx
        jbe public_62a0fb8
        mov dword ptr ss : [esp+0x1C], edi
        public_62a0f86 : nop
        test eax, eax
        je public_62a0fa6
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
        public_62a0fa6 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x10
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_62a0f86
        mov ebx, dword ptr ss : [esp+0x10]
        public_62a0fb8 : nop
        mov ebx, dword ptr ds : [ebx+8]
        mov ecx, edi
        shl ecx, 4
        cmp ebp, ebx
        lea esi, ds:[ecx+edx]
        je public_62a0ff8
        mov eax, esi
        sub eax, ecx
        sub eax, edx
        add eax, ebp
        nop 
        public_62a0fd0 : nop
        test esi, esi
        je public_62a0fee
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
        public_62a0fee : nop
        add eax, 0x10
        add esi, 0x10
        cmp eax, ebx
        jne public_62a0fd0
        public_62a0ff8 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        shl eax, 4
        add eax, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [esi+0xC], eax
        jne public_62a1038
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
        public_62a1038 : nop
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
        public_62a1057 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp ecx, edi
        jae public_62a1137
        mov ebp, edi
        shl ebp, 4
        cmp edx, eax
        mov dword ptr ss : [esp+0x1C], ebp
        lea esi, ds:[edx+ebp]
        je public_62a10b4
        mov ecx, esi
        sub ecx, ebp
        mov edi, edi
        public_62a1080 : nop
        test esi, esi
        je public_62a10a6
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
        public_62a10a6 : nop
        add ecx, 0x10
        add esi, 0x10
        cmp ecx, eax
        jne public_62a1080
        mov ebx, dword ptr ss : [esp+0x10]
        public_62a10b4 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        sub edi, ecx
        je public_62a10f0
        public_62a10c6 : nop
        test eax, eax
        je public_62a10e6
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
        public_62a10e6 : nop
        add eax, 0x10
        dec edi
        jne public_62a10c6
        mov ebx, dword ptr ss : [esp+0x10]
        public_62a10f0 : nop
        mov ecx, dword ptr ds : [ebx+8]
        cmp edx, ecx
        mov eax, edx
        je public_62a1121
        lea esp, ss:[esp]
        public_62a1100 : nop
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
        jne public_62a1100
        public_62a1121 : nop
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
        public_62a1137 : nop
        test edi, edi
        jbe public_62a11e9
        shl edi, 4
        mov ecx, eax
        sub ecx, edi
        cmp ecx, eax
        mov esi, eax
        mov dword ptr ss : [esp+0x1C], edi
        je public_62a1180
        public_62a1150 : nop
        test esi, esi
        je public_62a1172
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
        public_62a1172 : nop
        add ecx, 0x10
        add esi, 0x10
        cmp ecx, eax
        jne public_62a1150
        mov ebx, dword ptr ss : [esp+0x10]
        public_62a1180 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, ecx
        sub eax, edi
        cmp edx, eax
        je public_62a11b4
        nop 
        lea esp, ss:[esp]
        public_62a1190 : nop
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
        jne public_62a1190
        public_62a11b4 : nop
        lea ecx, ds:[edi+edx]
        cmp edx, ecx
        mov eax, edx
        je public_62a11e2
        mov edx, dword ptr ss : [esp+0x24]
        public_62a11c1 : nop
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
        jne public_62a11c1
        public_62a11e2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+8], edi
        public_62a11e9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x62a0ee0)
    }
}

#undef public_62a0f16
#undef public_62a0f18
#undef public_62a0f20
#undef public_62a0f25
#undef public_62a0f31
#undef public_62a0f50
#undef public_62a0f6e
#undef public_62a0f7c
#undef public_62a0f86
#undef public_62a0fa6
#undef public_62a0fb8
#undef public_62a0fd0
#undef public_62a0fee
#undef public_62a0ff8
#undef public_62a1038
#undef public_62a1057
#undef public_62a1080
#undef public_62a10a6
#undef public_62a10b4
#undef public_62a10c6
#undef public_62a10e6
#undef public_62a10f0
#undef public_62a1100
#undef public_62a1121
#undef public_62a1137
#undef public_62a1150
#undef public_62a1172
#undef public_62a1180
#undef public_62a1190
#undef public_62a11b4
#undef public_62a11c1
#undef public_62a11e2
#undef public_62a11e9
