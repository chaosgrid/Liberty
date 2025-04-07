#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec4010);
CLANG_FORWARD_PROC_SYMBOL(public_6ecaa00);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ece250);

#define public_6eccd04 _public_6eccd04
#define public_6eccd50 _public_6eccd50
#define public_6eccd83 _public_6eccd83
#define public_6eccdbb _public_6eccdbb
#define public_6eccdca _public_6eccdca
#define public_6eccde5 _public_6eccde5
#define public_6eccdfa _public_6eccdfa
#define public_6ecce03 _public_6ecce03
#define public_6ecce2f _public_6ecce2f
#define public_6ecce44 _public_6ecce44
#define public_6ecce51 _public_6ecce51
#define public_6ecce60 _public_6ecce60
#define public_6ecce6a _public_6ecce6a
#define public_6ecce71 _public_6ecce71
#define public_6ecce76 _public_6ecce76

PROC_DECLARE(0x6ecccf0, internal_6ecccf0, public_6ecccf0);
extern "C" NAKED register_t __cdecl internal_6ecccf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x14
        cmp eax, 0xFFFFFFFF
        jne public_6eccd04
        or eax, eax
        add esp, 0x14
        ret 8
        public_6eccd04 : nop
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x10], ebx
        je public_6eccdfa
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x10]
        lea esi, ds:[edi+0x28]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], esi
        call public_6ecaa00
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [edi+0x2C]
        je public_6eccde5
        mov ebx, dword ptr ds : [eax+0x1C]
        push ebp
        mov ebp, dword ptr ds : [eax+0x18]
        cmp ebp, ebx
        je public_6eccdca
        lea ecx, ds:[ecx]
        public_6eccd50 : nop
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], edx
        call public_6ecc4e0
        mov esi, eax
        test esi, esi
        je public_6eccdbb
        mov eax, dword ptr ds : [esi]
        cmp eax, 1
        jle public_6eccd83
        dec eax
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [esi]
        cmp eax, 1
        jg public_6eccdbb
        public_6eccd83 : nop
        dec eax
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        lea eax, ss:[esp+0x28]
        mov dword ptr ds : [esi+4], 0
        push eax
        lea ecx, ss:[esp+0x1C]
        lea esi, ds:[edi+0x14]
        push ecx
        mov ecx, esi
        call public_6ecaa00
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call public_6ece250
        public_6eccdbb : nop
        add ebp, 4
        cmp ebp, ebx
        jne public_6eccd50
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        public_6eccdca : nop
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, esi
        call public_6ec4010
        mov eax, dword ptr ss : [esp+0x14]
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 8
        public_6eccde5 : nop
        pop edi
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        add esp, 0x14
        ret 8
        public_6eccdfa : nop
        mov eax, dword ptr ds : [edi+0x18]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ecce76
        public_6ecce03 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, 1
        jg public_6ecce2f
        dec eax
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        push esi
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ds:[edi+0x14]
        mov dword ptr ds : [esi+0x14], ebx
        call public_6ece250
        mov esi, dword ptr ss : [esp+0x24]
        jmp public_6ecce71
        public_6ecce2f : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x19]
        test cl, cl
        jne public_6ecce51
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x19]
        test cl, cl
        jne public_6ecce71
        public_6ecce44 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x19]
        test cl, cl
        je public_6ecce44
        jmp public_6ecce71
        public_6ecce51 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ecce6a
        lea esp, ss:[esp]
        public_6ecce60 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6ecce60
        public_6ecce6a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6ecce71
        mov esi, eax
        public_6ecce71 : nop
        cmp esi, dword ptr ds : [edi+0x18]
        jne public_6ecce03
        public_6ecce76 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6ecccf0)
    }
}

#undef public_6eccd04
#undef public_6eccd50
#undef public_6eccd83
#undef public_6eccdbb
#undef public_6eccdca
#undef public_6eccde5
#undef public_6eccdfa
#undef public_6ecce03
#undef public_6ecce2f
#undef public_6ecce44
#undef public_6ecce51
#undef public_6ecce60
#undef public_6ecce6a
#undef public_6ecce71
#undef public_6ecce76
