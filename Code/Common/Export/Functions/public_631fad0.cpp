#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9530);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_631fad0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_631fb00 _public_631fb00
#define public_631fb16 _public_631fb16
#define public_631fb18 _public_631fb18
#define public_631fb40 _public_631fb40
#define public_631fb5f _public_631fb5f
#define public_631fb67 _public_631fb67
#define public_631fb72 _public_631fb72
#define public_631fb7a _public_631fb7a
#define public_631fb87 _public_631fb87
#define public_631fb9b _public_631fb9b
#define public_631fbb5 _public_631fbb5
#define public_631fbce _public_631fbce
#define public_631fbd6 _public_631fbd6
#define public_631fbde _public_631fbde
#define public_631fbe6 _public_631fbe6
#define public_631fbee _public_631fbee
#define public_631fbfa _public_631fbfa
#define public_631fc02 _public_631fc02
#define public_631fc10 _public_631fc10
#define public_631fc24 _public_631fc24
#define public_631fc33 _public_631fc33
#define public_631fc47 _public_631fc47
#define public_631fc52 _public_631fc52
#define public_631fc5a _public_631fc5a
#define public_631fc70 _public_631fc70
#define public_631fc84 _public_631fc84
#define public_631fc8c _public_631fc8c
#define public_631fc92 _public_631fc92
#define public_631fcb7 _public_631fcb7
#define public_631fcbb _public_631fcbb

PROC_DECLARE(0x631fad0, internal_631fad0, public_631fad0);
extern "C" NAKED register_t __cdecl internal_631fad0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        mov ebx, ecx
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx+0xC], ecx
        mov edx, dword ptr ss : [ebp+8]
        push esi
        mov dword ptr ds : [ebx+8], edx
        mov esi, dword ptr ss : [ebp+0x88]
        test esi, esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_631fb40
        lea ebx, ds:[ebx]
        public_631fb00 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_631fb16
        mov dword ptr ds : [eax], 0
        jmp public_631fb18
        public_631fb16 : nop
        xor eax, eax
        public_631fb18 : nop
        mov ecx, esi
        mov edi, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ds : [ebx+0x88]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ebx+0x88], eax
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_631fb00
        public_631fb40 : nop
        mov eax, dword ptr ss : [ebp+0x74]
        lea edi, ss:[ebp+0x78]
        lea esi, ds:[ebx+0x78]
        cmp esi, edi
        mov dword ptr ds : [ebx+0x74], eax
        je public_631fcbb
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_631fb5f
        xor ebp, ebp
        jmp public_631fb67
        public_631fb5f : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, eax
        sar ebp, 3
        public_631fb67 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_631fb72
        xor ecx, ecx
        jmp public_631fb7a
        public_631fb72 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 3
        public_631fb7a : nop
        cmp ebp, ecx
        ja public_631fbce
        mov esi, dword ptr ds : [edi+8]
        cmp eax, esi
        mov ecx, edx
        je public_631fb9b
        public_631fb87 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        add eax, 8
        add ecx, 8
        cmp eax, esi
        jne public_631fb87
        public_631fb9b : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_631fbb5
        mov eax, dword ptr ds : [ebx+0x7C]
        xor edi, edi
        lea ecx, ds:[eax+edi*8]
        mov dword ptr ds : [ebx+0x80], ecx
        jmp public_631fcb7
        public_631fbb5 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ds : [ebx+0x7C]
        sar edi, 3
        lea ecx, ds:[eax+edi*8]
        mov dword ptr ds : [ebx+0x80], ecx
        jmp public_631fcb7
        public_631fbce : nop
        test eax, eax
        jne public_631fbd6
        xor ebp, ebp
        jmp public_631fbde
        public_631fbd6 : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, eax
        sar ebp, 3
        public_631fbde : nop
        test edx, edx
        jne public_631fbe6
        xor ecx, ecx
        jmp public_631fbee
        public_631fbe6 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, edx
        sar ecx, 3
        public_631fbee : nop
        cmp ebp, ecx
        ja public_631fc70
        test edx, edx
        jne public_631fbfa
        xor ecx, ecx
        jmp public_631fc02
        public_631fbfa : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 3
        public_631fc02 : nop
        lea ecx, ds:[eax+ecx*8]
        cmp eax, ecx
        je public_631fc24
        lea esp, ss:[esp]
        public_631fc10 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        add eax, 8
        add edx, 8
        cmp eax, ecx
        jne public_631fc10
        public_631fc24 : nop
        mov ebp, dword ptr ds : [edi+8]
        cmp ecx, ebp
        lea eax, ds:[ebx+0x78]
        mov ebx, dword ptr ds : [eax+8]
        mov esi, ecx
        je public_631fc47
        public_631fc33 : nop
        push esi
        push ebx
        call public_62bee40
        add esi, 8
        add esp, 8
        add ebx, 8
        cmp esi, ebp
        jne public_631fc33
        public_631fc47 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_631fc52
        xor edi, edi
        jmp public_631fc5a
        public_631fc52 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        sar edi, 3
        public_631fc5a : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+0x7C]
        mov ebx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+0x78]
        lea edx, ds:[ecx+edi*8]
        mov dword ptr ds : [eax+8], edx
        jmp public_631fcb7
        public_631fc70 : nop
        push edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_631fc84
        xor eax, eax
        jmp public_631fc8c
        public_631fc84 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 3
        public_631fc8c : nop
        test eax, eax
        jge public_631fc92
        xor eax, eax
        public_631fc92 : nop
        shl eax, 3
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_62b9530
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_631fcb7 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        public_631fcbb : nop
        lea ecx, ss:[ebp+0x10]
        push ecx
        lea ecx, ds:[ebx+0x10]
        call public_630dda0
        lea edx, ss:[ebp+0x28]
        push edx
        lea ecx, ds:[ebx+0x28]
        call public_630dda0
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+0x40]
        push 0x17
        add ebp, 0x44
        lea edx, ds:[ebx+0x44]
        push ebp
        push edx
        mov dword ptr ds : [ebx+0x40], ecx
        call dword ptr ds : [public_6399234]
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        mov word ptr ds : [ebx+0x72], 0
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x631fad0)
    }
}

#undef public_631fb00
#undef public_631fb16
#undef public_631fb18
#undef public_631fb40
#undef public_631fb5f
#undef public_631fb67
#undef public_631fb72
#undef public_631fb7a
#undef public_631fb87
#undef public_631fb9b
#undef public_631fbb5
#undef public_631fbce
#undef public_631fbd6
#undef public_631fbde
#undef public_631fbe6
#undef public_631fbee
#undef public_631fbfa
#undef public_631fc02
#undef public_631fc10
#undef public_631fc24
#undef public_631fc33
#undef public_631fc47
#undef public_631fc52
#undef public_631fc5a
#undef public_631fc70
#undef public_631fc84
#undef public_631fc8c
#undef public_631fc92
#undef public_631fcb7
#undef public_631fcbb
