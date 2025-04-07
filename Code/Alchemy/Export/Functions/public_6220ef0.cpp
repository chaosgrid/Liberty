#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621f5f0);
CLANG_FORWARD_PROC_SYMBOL(public_6220ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6222af0);
CLANG_FORWARD_PROC_SYMBOL(public_6222d70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6220f24 _public_6220f24
#define public_6220f26 _public_6220f26
#define public_6220f2e _public_6220f2e
#define public_6220f33 _public_6220f33
#define public_6220f3f _public_6220f3f
#define public_6220f60 _public_6220f60
#define public_6220f78 _public_6220f78
#define public_6220f82 _public_6220f82
#define public_6220fa2 _public_6220fa2
#define public_6220fbb _public_6220fbb
#define public_6220fbf _public_6220fbf
#define public_6220fd2 _public_6220fd2
#define public_6220fdc _public_6220fdc
#define public_6220fea _public_6220fea
#define public_6221026 _public_6221026
#define public_6221045 _public_6221045
#define public_6221074 _public_6221074
#define public_6221078 _public_6221078
#define public_6221093 _public_6221093
#define public_62210a5 _public_62210a5
#define public_62210bd _public_62210bd
#define public_62210cb _public_62210cb
#define public_62210f4 _public_62210f4
#define public_622110f _public_622110f
#define public_6221133 _public_6221133
#define public_622113e _public_622113e
#define public_6221166 _public_6221166
#define public_6221173 _public_6221173
#define public_6221197 _public_6221197
#define public_622119b _public_622119b
#define public_622119f _public_622119f
#define public_62211a2 _public_62211a2

PROC_DECLARE(0x6220ef0, internal_6220ef0, public_6220ef0);
extern "C" NAKED register_t __cdecl internal_6220ef0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        push edi
        sar eax, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6221045
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6220f24
        mov eax, esi
        sub eax, ecx
        sar eax, 4
        cmp ebp, eax
        jb public_6220f26
        public_6220f24 : nop
        mov eax, ebp
        public_6220f26 : nop
        test ecx, ecx
        jne public_6220f2e
        xor esi, esi
        jmp public_6220f33
        public_6220f2e : nop
        sub esi, ecx
        sar esi, 4
        public_6220f33 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6220f3f
        xor eax, eax
        public_6220f3f : nop
        shl eax, 4
        push eax
        call public_624612c
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, eax
        je public_6220f78
        public_6220f60 : nop
        push esi
        push edi
        call public_6222af0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, eax
        jne public_6220f60
        public_6220f78 : nop
        test ebp, ebp
        mov esi, edi
        jbe public_6220fa2
        mov dword ptr ss : [esp+0x24], ebp
        public_6220f82 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_6222af0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x10
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6220f82
        mov eax, dword ptr ss : [esp+0x20]
        public_6220fa2 : nop
        mov edx, ebp
        mov esi, eax
        shl edx, 4
        lea ecx, ds:[edx+edi]
        mov edi, dword ptr ds : [ebx+8]
        cmp eax, edi
        je public_6220fd2
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6220fbf
        public_6220fbb : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_6220fbf : nop
        add ecx, esi
        push esi
        push ecx
        call public_6222af0
        add esi, 0x10
        add esp, 8
        cmp esi, edi
        jne public_6220fbb
        public_6220fd2 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, edi
        je public_6220fea
        public_6220fdc : nop
        mov ecx, esi
        call public_621f5f0
        add esi, 0x10
        cmp esi, edi
        jne public_6220fdc
        public_6220fea : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx+4]
        add esp, 4
        shl eax, 4
        add eax, edx
        test ecx, ecx
        mov dword ptr ds : [ebx+0xC], eax
        jne public_6221026
        xor eax, eax
        pop edi
        mov eax, ebp
        pop esi
        shl eax, 4
        add eax, edx
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [ebx+8], eax
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6221026 : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        sub eax, ecx
        pop esi
        sar eax, 4
        add eax, ebp
        mov dword ptr ds : [ebx+4], edx
        shl eax, 4
        add eax, edx
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6221045 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        sar edx, 4
        cmp edx, ebp
        jae public_62210f4
        mov eax, ebp
        mov edi, ebx
        shl eax, 4
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], eax
        lea edx, ds:[eax+ebx]
        je public_6221093
        mov eax, edx
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6221078
        public_6221074 : nop
        mov eax, dword ptr ss : [esp+0x24]
        public_6221078 : nop
        add eax, edi
        push edi
        push eax
        call public_6222af0
        add edi, 0x10
        add esp, 8
        cmp edi, esi
        jne public_6221074
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6221093 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [esp+0x28]
        mov edx, esi
        sub edx, ebx
        sar edx, 4
        sub ebp, edx
        je public_62210bd
        public_62210a5 : nop
        push edi
        push esi
        call public_6222af0
        add esp, 8
        add esi, 0x10
        dec ebp
        jne public_62210a5
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_62210bd : nop
        mov ebp, dword ptr ds : [ecx+8]
        cmp ebx, ebp
        je public_622119f
        lea esi, ds:[ebx+8]
        public_62210cb : nop
        push edi
        lea ecx, ds:[esi-8]
        call public_6222d70
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi-4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+4], edx
        add esi, 0x10
        lea eax, ds:[esi-8]
        cmp eax, ebp
        jne public_62210cb
        jmp public_6221197
        public_62210f4 : nop
        test ebp, ebp
        jbe public_62211a2
        shl ebp, 4
        mov edi, esi
        mov dword ptr ss : [esp+0x24], esi
        sub edi, ebp
        mov dword ptr ss : [esp+0x20], ebp
        cmp edi, esi
        je public_6221133
        public_622110f : nop
        mov ecx, dword ptr ss : [esp+0x24]
        push edi
        push ecx
        call public_6222af0
        mov edx, dword ptr ss : [esp+0x2C]
        add edi, 0x10
        add esp, 8
        add edx, 0x10
        cmp edi, esi
        mov dword ptr ss : [esp+0x24], edx
        jne public_622110f
        mov ecx, dword ptr ss : [esp+0x10]
        public_6221133 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_6221166
        public_622113e : nop
        sub esi, 0x10
        sub edi, 0x10
        push esi
        mov ecx, edi
        call public_6222d70
        mov edx, dword ptr ds : [esi+4]
        cmp esi, ebx
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], ecx
        jne public_622113e
        mov ecx, dword ptr ss : [esp+0x10]
        public_6221166 : nop
        add ebp, ebx
        cmp ebx, ebp
        je public_622119b
        mov edi, dword ptr ss : [esp+0x28]
        lea esi, ds:[ebx+8]
        public_6221173 : nop
        push edi
        lea ecx, ds:[esi-8]
        call public_6222d70
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi-4], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+4], ecx
        add esi, 0x10
        lea edx, ds:[esi-8]
        cmp edx, ebp
        jne public_6221173
        public_6221197 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_622119b : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_622119f : nop
        add dword ptr ds : [ecx+8], eax
        public_62211a2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6220ef0)
    }
}

#undef public_6220f24
#undef public_6220f26
#undef public_6220f2e
#undef public_6220f33
#undef public_6220f3f
#undef public_6220f60
#undef public_6220f78
#undef public_6220f82
#undef public_6220fa2
#undef public_6220fbb
#undef public_6220fbf
#undef public_6220fd2
#undef public_6220fdc
#undef public_6220fea
#undef public_6221026
#undef public_6221045
#undef public_6221074
#undef public_6221078
#undef public_6221093
#undef public_62210a5
#undef public_62210bd
#undef public_62210cb
#undef public_62210f4
#undef public_622110f
#undef public_6221133
#undef public_622113e
#undef public_6221166
#undef public_6221173
#undef public_6221197
#undef public_622119b
#undef public_622119f
#undef public_62211a2
