#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7e0f2 _public_6f7e0f2
#define public_6f7e0fa _public_6f7e0fa
#define public_6f7e105 _public_6f7e105
#define public_6f7e10d _public_6f7e10d
#define public_6f7e118 _public_6f7e118
#define public_6f7e126 _public_6f7e126
#define public_6f7e13d _public_6f7e13d
#define public_6f7e153 _public_6f7e153
#define public_6f7e15b _public_6f7e15b
#define public_6f7e163 _public_6f7e163
#define public_6f7e16b _public_6f7e16b
#define public_6f7e173 _public_6f7e173
#define public_6f7e17f _public_6f7e17f
#define public_6f7e187 _public_6f7e187
#define public_6f7e190 _public_6f7e190
#define public_6f7e19e _public_6f7e19e
#define public_6f7e1b0 _public_6f7e1b0
#define public_6f7e1c4 _public_6f7e1c4
#define public_6f7e1cf _public_6f7e1cf
#define public_6f7e1d7 _public_6f7e1d7
#define public_6f7e1ed _public_6f7e1ed
#define public_6f7e201 _public_6f7e201
#define public_6f7e209 _public_6f7e209
#define public_6f7e20f _public_6f7e20f
#define public_6f7e234 _public_6f7e234
#define public_6f7e238 _public_6f7e238

PROC_DECLARE(0x6f7e0c0, internal_6f7e0c0, public_6f7e0c0);
extern "C" NAKED register_t __cdecl internal_6f7e0c0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        push edi
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        lea esi, ds:[ebx+8]
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx+4], edx
        je public_6f7e238
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f7e0f2
        xor ebp, ebp
        jmp public_6f7e0fa
        public_6f7e0f2 : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, eax
        sar ebp, 2
        public_6f7e0fa : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_6f7e105
        xor ecx, ecx
        jmp public_6f7e10d
        public_6f7e105 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_6f7e10d : nop
        cmp ebp, ecx
        ja public_6f7e153
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f7e126
        public_6f7e118 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f7e118
        public_6f7e126 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f7e13d
        mov eax, dword ptr ds : [ebx+0xC]
        xor edi, edi
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ds : [ebx+0x10], ecx
        jmp public_6f7e234
        public_6f7e13d : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ds : [ebx+0xC]
        sar edi, 2
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ds : [ebx+0x10], ecx
        jmp public_6f7e234
        public_6f7e153 : nop
        test eax, eax
        jne public_6f7e15b
        xor ebp, ebp
        jmp public_6f7e163
        public_6f7e15b : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, eax
        sar ebp, 2
        public_6f7e163 : nop
        test edx, edx
        jne public_6f7e16b
        xor ecx, ecx
        jmp public_6f7e173
        public_6f7e16b : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, edx
        sar ecx, 2
        public_6f7e173 : nop
        cmp ebp, ecx
        ja public_6f7e1ed
        test edx, edx
        jne public_6f7e17f
        xor ecx, ecx
        jmp public_6f7e187
        public_6f7e17f : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_6f7e187 : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6f7e19e
        mov edi, edi
        public_6f7e190 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f7e190
        public_6f7e19e : nop
        mov ebp, dword ptr ds : [edi+8]
        cmp ecx, ebp
        lea eax, ds:[ebx+8]
        mov ebx, dword ptr ds : [eax+8]
        mov esi, ecx
        je public_6f7e1c4
        lea ecx, ds:[ecx]
        public_6f7e1b0 : nop
        push esi
        push ebx
        call public_6eb6740
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, ebp
        jne public_6f7e1b0
        public_6f7e1c4 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f7e1cf
        xor edi, edi
        jmp public_6f7e1d7
        public_6f7e1cf : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        sar edi, 2
        public_6f7e1d7 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+0xC]
        mov ebx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+8]
        lea edx, ds:[ecx+edi*4]
        mov dword ptr ds : [eax+8], edx
        jmp public_6f7e234
        public_6f7e1ed : nop
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_6f7e201
        xor eax, eax
        jmp public_6f7e209
        public_6f7e201 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_6f7e209 : nop
        test eax, eax
        jge public_6f7e20f
        xor eax, eax
        public_6f7e20f : nop
        shl eax, 2
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6f7e234 : nop
        mov eax, dword ptr ss : [esp+0x18]
        public_6f7e238 : nop
        lea esi, ds:[eax+0x18]
        lea edi, ds:[ebx+0x18]
        mov ecx, 6
        rep movsd
        mov ecx, dword ptr ds : [eax+0x30]
        pop edi
        mov dword ptr ds : [ebx+0x30], ecx
        mov dl, byte ptr ds : [eax+0x34]
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+0x34], dl
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f7e0c0)
    }
}

#undef public_6f7e0f2
#undef public_6f7e0fa
#undef public_6f7e105
#undef public_6f7e10d
#undef public_6f7e118
#undef public_6f7e126
#undef public_6f7e13d
#undef public_6f7e153
#undef public_6f7e15b
#undef public_6f7e163
#undef public_6f7e16b
#undef public_6f7e173
#undef public_6f7e17f
#undef public_6f7e187
#undef public_6f7e190
#undef public_6f7e19e
#undef public_6f7e1b0
#undef public_6f7e1c4
#undef public_6f7e1cf
#undef public_6f7e1d7
#undef public_6f7e1ed
#undef public_6f7e201
#undef public_6f7e209
#undef public_6f7e20f
#undef public_6f7e234
#undef public_6f7e238
