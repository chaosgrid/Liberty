#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411690);
CLANG_FORWARD_PROC_SYMBOL(public_411bc0);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_4116f9 _public_4116f9
#define public_41170d _public_41170d
#define public_411713 _public_411713
#define public_411721 _public_411721
#define public_411762 _public_411762
#define public_41177b _public_41177b
#define public_41178e _public_41178e
#define public_411799 _public_411799
#define public_41179c _public_41179c
#define public_4117a1 _public_4117a1
#define public_4117ca _public_4117ca
#define public_4117e3 _public_4117e3
#define public_4117f6 _public_4117f6
#define public_411800 _public_411800
#define public_411823 _public_411823
#define public_41183b _public_41183b
#define public_41184e _public_41184e
#define public_41185b _public_41185b
#define public_41185d _public_41185d
#define public_411863 _public_411863
#define public_41188c _public_41188c
#define public_41189f _public_41189f
#define public_4118aa _public_4118aa
#define public_4118ad _public_4118ad
#define public_4118af _public_4118af
#define public_4118b2 _public_4118b2
#define public_4118be _public_4118be

PROC_DECLARE(0x411690, internal_411690, public_411690);
extern "C" NAKED register_t __cdecl internal_411690()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_418a9e
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_411bc0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_4116f9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_4116f9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_4116f9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_411713
        mov dword ptr ds : [eax+8], ebx
        jmp public_411713
        public_4116f9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_41170d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_411713
        public_41170d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_411713
        mov dword ptr ds : [eax], ebx
        public_411713 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_4118be
        public_411721 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_4118be
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_411800
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_411762
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_4118b2
        public_411762 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_4117a1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_41177b
        mov dword ptr ds : [edx+4], eax
        public_41177b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_41178e
        mov dword ptr ds : [edx+4], ecx
        jmp public_41179c
        public_41178e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_411799
        mov dword ptr ds : [edx], ecx
        jmp public_41179c
        public_411799 : nop
        mov dword ptr ds : [edx+8], ecx
        public_41179c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_4117a1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_4117ca
        mov dword ptr ds : [edi+4], ecx
        public_4117ca : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4117e3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4118af
        public_4117e3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4117f6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4118af
        public_4117f6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4118af
        public_411800 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_411823
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_4118b2
        public_411823 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_411863
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_41183b
        mov dword ptr ds : [edx+4], eax
        public_41183b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_41184e
        mov dword ptr ds : [edx+4], ecx
        jmp public_41185d
        public_41184e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_41185b
        mov dword ptr ds : [edx+8], ecx
        jmp public_41185d
        public_41185b : nop
        mov dword ptr ds : [edx], ecx
        public_41185d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_411863 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_41188c
        mov dword ptr ds : [edi+4], ecx
        public_41188c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_41189f
        mov dword ptr ds : [edi+4], edx
        jmp public_4118ad
        public_41189f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_4118aa
        mov dword ptr ds : [edi], edx
        jmp public_4118ad
        public_4118aa : nop
        mov dword ptr ds : [edi+8], edx
        public_4118ad : nop
        mov dword ptr ds : [edx], ecx
        public_4118af : nop
        mov dword ptr ds : [ecx+4], edx
        public_4118b2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_411721
        public_4118be : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x411690)
    }
}

#undef public_4116f9
#undef public_41170d
#undef public_411713
#undef public_411721
#undef public_411762
#undef public_41177b
#undef public_41178e
#undef public_411799
#undef public_41179c
#undef public_4117a1
#undef public_4117ca
#undef public_4117e3
#undef public_4117f6
#undef public_411800
#undef public_411823
#undef public_41183b
#undef public_41184e
#undef public_41185b
#undef public_41185d
#undef public_411863
#undef public_41188c
#undef public_41189f
#undef public_4118aa
#undef public_4118ad
#undef public_4118af
#undef public_4118b2
#undef public_4118be
