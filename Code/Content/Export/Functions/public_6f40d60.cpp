#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40d60);
CLANG_FORWARD_PROC_SYMBOL(public_6f46550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f40d84 _public_6f40d84
#define public_6f40da2 _public_6f40da2
#define public_6f40dad _public_6f40dad
#define public_6f40db6 _public_6f40db6
#define public_6f40dc1 _public_6f40dc1
#define public_6f40ddd _public_6f40ddd
#define public_6f40df4 _public_6f40df4
#define public_6f40e01 _public_6f40e01
#define public_6f40e0c _public_6f40e0c
#define public_6f40e0f _public_6f40e0f
#define public_6f40e27 _public_6f40e27
#define public_6f40e32 _public_6f40e32
#define public_6f40e35 _public_6f40e35
#define public_6f40e4a _public_6f40e4a
#define public_6f40e55 _public_6f40e55
#define public_6f40e60 _public_6f40e60
#define public_6f40e63 _public_6f40e63
#define public_6f40e77 _public_6f40e77
#define public_6f40e83 _public_6f40e83
#define public_6f40e8f _public_6f40e8f
#define public_6f40e92 _public_6f40e92
#define public_6f40eb0 _public_6f40eb0
#define public_6f40eef _public_6f40eef
#define public_6f40f02 _public_6f40f02
#define public_6f40f0d _public_6f40f0d
#define public_6f40f10 _public_6f40f10
#define public_6f40f1b _public_6f40f1b
#define public_6f40f2e _public_6f40f2e
#define public_6f40f55 _public_6f40f55
#define public_6f40f6f _public_6f40f6f
#define public_6f40f95 _public_6f40f95
#define public_6f40fa8 _public_6f40fa8
#define public_6f40fb5 _public_6f40fb5
#define public_6f40fb7 _public_6f40fb7
#define public_6f40fc2 _public_6f40fc2
#define public_6f40fd9 _public_6f40fd9
#define public_6f40ff1 _public_6f40ff1
#define public_6f40ffe _public_6f40ffe
#define public_6f41000 _public_6f41000
#define public_6f4100c _public_6f4100c
#define public_6f41036 _public_6f41036
#define public_6f4104e _public_6f4104e
#define public_6f4105e _public_6f4105e
#define public_6f41068 _public_6f41068
#define public_6f4108b _public_6f4108b
#define public_6f4109e _public_6f4109e
#define public_6f410a9 _public_6f410a9
#define public_6f410ac _public_6f410ac
#define public_6f410b6 _public_6f410b6
#define public_6f410df _public_6f410df
#define public_6f410f2 _public_6f410f2
#define public_6f410ff _public_6f410ff
#define public_6f41101 _public_6f41101
#define public_6f41104 _public_6f41104
#define public_6f41107 _public_6f41107
#define public_6f4110a _public_6f4110a

PROC_DECLARE(0x6f40d60, internal_6f40d60, public_6f40d60);
extern "C" NAKED register_t __cdecl internal_6f40d60()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f46550
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f40da2
        mov eax, dword ptr ds : [esi+8]
        public_6f40d84 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f40e27
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f40e35
        public_6f40da2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f40dad
        mov eax, edx
        jmp public_6f40d84
        public_6f40dad : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        jne public_6f40dc1
        public_6f40db6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        je public_6f40db6
        public_6f40dc1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f40d84
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f40ddd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f40df4
        public_6f40ddd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f40df4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f40e01
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f40e0f
        public_6f40e01 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f40e0c
        mov dword ptr ds : [edx], ecx
        jmp public_6f40e0f
        public_6f40e0c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f40e0f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x4C]
        mov dl, byte ptr ds : [ecx+0x4C]
        mov byte ptr ds : [ecx+0x4C], bl
        mov byte ptr ds : [esi+0x4C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f40e92
        public_6f40e27 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f40e32
        mov dword ptr ds : [ecx], eax
        jmp public_6f40e35
        public_6f40e32 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f40e35 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f40e63
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f40e4a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f40e60
        public_6f40e4a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x4D]
        test bl, bl
        mov edx, eax
        jne public_6f40e60
        public_6f40e55 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x4D]
        test bl, bl
        je public_6f40e55
        public_6f40e60 : nop
        mov dword ptr ss : [ebp], edx
        public_6f40e63 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f40e92
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f40e77
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f40e8f
        public_6f40e77 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x4D]
        test bl, bl
        mov edx, eax
        jne public_6f40e8f
        public_6f40e83 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x4D]
        test bl, bl
        je public_6f40e83
        public_6f40e8f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f40e92 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x4C]
        mov bl, 1
        cmp dl, bl
        jne public_6f4110a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f41107
        nop 
        public_6f40eb0 : nop
        cmp byte ptr ds : [eax+0x4C], bl
        jne public_6f41107
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f40f6f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x4C]
        test dl, dl
        jne public_6f40f1b
        mov byte ptr ds : [ecx+0x4C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x4C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f40eef
        mov dword ptr ds : [esi+4], ecx
        public_6f40eef : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f40f02
        mov dword ptr ds : [esi+4], edx
        jmp public_6f40f10
        public_6f40f02 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f40f0d
        mov dword ptr ds : [esi], edx
        jmp public_6f40f10
        public_6f40f0d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f40f10 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f40f1b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x4C], bl
        jne public_6f40f2e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x4C], bl
        je public_6f40fd9
        public_6f40f2e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x4C], bl
        jne public_6f4100c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x4C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x4C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f40f55
        mov dword ptr ds : [esi+4], ecx
        public_6f40f55 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f40ff1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f41000
        public_6f40f6f : nop
        mov dl, byte ptr ds : [ecx+0x4C]
        test dl, dl
        jne public_6f40fc2
        mov byte ptr ds : [ecx+0x4C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x4C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f40f95
        mov dword ptr ds : [esi+4], ecx
        public_6f40f95 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f40fa8
        mov dword ptr ds : [esi+4], edx
        jmp public_6f40fb7
        public_6f40fa8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f40fb5
        mov dword ptr ds : [esi+8], edx
        jmp public_6f40fb7
        public_6f40fb5 : nop
        mov dword ptr ds : [esi], edx
        public_6f40fb7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f40fc2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x4C], bl
        jne public_6f41068
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x4C], bl
        jne public_6f41068
        public_6f40fd9 : nop
        mov byte ptr ds : [ecx+0x4C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f40eb0
        jmp public_6f41107
        public_6f40ff1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f40ffe
        mov dword ptr ds : [esi+8], edx
        jmp public_6f41000
        public_6f40ffe : nop
        mov dword ptr ds : [esi], edx
        public_6f41000 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f4100c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x4C]
        mov byte ptr ds : [ecx+0x4C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x4C], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x4C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f41036
        mov dword ptr ds : [esi+4], ecx
        public_6f41036 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4104e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f41104
        public_6f4104e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4105e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f41104
        public_6f4105e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f41104
        public_6f41068 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x4C], bl
        jne public_6f410b6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x4C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x4C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4108b
        mov dword ptr ds : [esi+4], ecx
        public_6f4108b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4109e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f410ac
        public_6f4109e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f410a9
        mov dword ptr ds : [esi], edx
        jmp public_6f410ac
        public_6f410a9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f410ac : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f410b6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x4C]
        mov byte ptr ds : [ecx+0x4C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x4C], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x4C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f410df
        mov dword ptr ds : [esi+4], ecx
        public_6f410df : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f410f2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f41101
        public_6f410f2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f410ff
        mov dword ptr ds : [esi+8], edx
        jmp public_6f41101
        public_6f410ff : nop
        mov dword ptr ds : [esi], edx
        public_6f41101 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f41104 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f41107 : nop
        mov byte ptr ds : [eax+0x4C], bl
        public_6f4110a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f40d60)
    }
}

#undef public_6f40d84
#undef public_6f40da2
#undef public_6f40dad
#undef public_6f40db6
#undef public_6f40dc1
#undef public_6f40ddd
#undef public_6f40df4
#undef public_6f40e01
#undef public_6f40e0c
#undef public_6f40e0f
#undef public_6f40e27
#undef public_6f40e32
#undef public_6f40e35
#undef public_6f40e4a
#undef public_6f40e55
#undef public_6f40e60
#undef public_6f40e63
#undef public_6f40e77
#undef public_6f40e83
#undef public_6f40e8f
#undef public_6f40e92
#undef public_6f40eb0
#undef public_6f40eef
#undef public_6f40f02
#undef public_6f40f0d
#undef public_6f40f10
#undef public_6f40f1b
#undef public_6f40f2e
#undef public_6f40f55
#undef public_6f40f6f
#undef public_6f40f95
#undef public_6f40fa8
#undef public_6f40fb5
#undef public_6f40fb7
#undef public_6f40fc2
#undef public_6f40fd9
#undef public_6f40ff1
#undef public_6f40ffe
#undef public_6f41000
#undef public_6f4100c
#undef public_6f41036
#undef public_6f4104e
#undef public_6f4105e
#undef public_6f41068
#undef public_6f4108b
#undef public_6f4109e
#undef public_6f410a9
#undef public_6f410ac
#undef public_6f410b6
#undef public_6f410df
#undef public_6f410f2
#undef public_6f410ff
#undef public_6f41101
#undef public_6f41104
#undef public_6f41107
#undef public_6f4110a
