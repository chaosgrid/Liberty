#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6343fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6343ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_627faab _public_627faab
#define public_627faf9 _public_627faf9
#define public_627fb01 _public_627fb01
#define public_627fb0c _public_627fb0c
#define public_627fb14 _public_627fb14
#define public_627fb20 _public_627fb20
#define public_627fb2e _public_627fb2e
#define public_627fb45 _public_627fb45
#define public_627fb5b _public_627fb5b
#define public_627fb63 _public_627fb63
#define public_627fb6b _public_627fb6b
#define public_627fb73 _public_627fb73
#define public_627fb7b _public_627fb7b
#define public_627fb87 _public_627fb87
#define public_627fb8f _public_627fb8f
#define public_627fb96 _public_627fb96
#define public_627fba4 _public_627fba4
#define public_627fbb3 _public_627fbb3
#define public_627fbc7 _public_627fbc7
#define public_627fbd2 _public_627fbd2
#define public_627fbda _public_627fbda
#define public_627fbf0 _public_627fbf0
#define public_627fc04 _public_627fc04
#define public_627fc0c _public_627fc0c
#define public_627fc12 _public_627fc12
#define public_627fc37 _public_627fc37
#define public_627fc3b _public_627fc3b
#define public_627fc6f _public_627fc6f

PROC_DECLARE(0x627fa90, internal_627fa90, public_627fa90);
extern "C" NAKED register_t __cdecl internal_627fa90()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_627faab
        push eax
        call public_6343ff0
        add esp, 4
        public_627faab : nop
        mov ebp, dword ptr ss : [esp+0x18]
        mov al, byte ptr ss : [ebp]
        mov byte ptr ds : [ebx], al
        lea ecx, ss:[ebp+8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea edx, ss:[ebp+0x14]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[ebx+0x14]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        lea edi, ss:[ebp+0x20]
        lea esi, ds:[ebx+0x20]
        cmp esi, edi
        mov dword ptr ds : [eax+8], edx
        je public_627fc3b
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_627faf9
        xor ebp, ebp
        jmp public_627fb01
        public_627faf9 : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, eax
        sar ebp, 2
        public_627fb01 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_627fb0c
        xor ecx, ecx
        jmp public_627fb14
        public_627fb0c : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_627fb14 : nop
        cmp ebp, ecx
        ja public_627fb5b
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_627fb2e
        nop 
        public_627fb20 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_627fb20
        public_627fb2e : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_627fb45
        mov eax, dword ptr ds : [ebx+0x24]
        xor edi, edi
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ds : [ebx+0x28], ecx
        jmp public_627fc37
        public_627fb45 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ds : [ebx+0x24]
        sar edi, 2
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ds : [ebx+0x28], ecx
        jmp public_627fc37
        public_627fb5b : nop
        test eax, eax
        jne public_627fb63
        xor ebp, ebp
        jmp public_627fb6b
        public_627fb63 : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, eax
        sar ebp, 2
        public_627fb6b : nop
        test edx, edx
        jne public_627fb73
        xor ecx, ecx
        jmp public_627fb7b
        public_627fb73 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, edx
        sar ecx, 2
        public_627fb7b : nop
        cmp ebp, ecx
        ja public_627fbf0
        test edx, edx
        jne public_627fb87
        xor ecx, ecx
        jmp public_627fb8f
        public_627fb87 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_627fb8f : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_627fba4
        public_627fb96 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_627fb96
        public_627fba4 : nop
        mov ebp, dword ptr ds : [edi+8]
        cmp ecx, ebp
        lea eax, ds:[ebx+0x20]
        mov ebx, dword ptr ds : [eax+8]
        mov esi, ecx
        je public_627fbc7
        public_627fbb3 : nop
        push esi
        push ebx
        call public_630cd00
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, ebp
        jne public_627fbb3
        public_627fbc7 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_627fbd2
        xor edi, edi
        jmp public_627fbda
        public_627fbd2 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        sar edi, 2
        public_627fbda : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+0x24]
        mov ebx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+0x20]
        lea edx, ds:[ecx+edi*4]
        mov dword ptr ds : [eax+8], edx
        jmp public_627fc37
        public_627fbf0 : nop
        push edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_627fc04
        xor eax, eax
        jmp public_627fc0c
        public_627fc04 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_627fc0c : nop
        test eax, eax
        jge public_627fc12
        xor eax, eax
        public_627fc12 : nop
        shl eax, 2
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
        call public_627f7b0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_627fc37 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        public_627fc3b : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_627fc6f
        mov ecx, dword ptr ds : [eax+0x1C]
        sar ecx, 8
        push 0x10
        push ecx
        call public_6343fc0
        mov dword ptr ds : [ebx+4], eax
        mov esi, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [esi+0x1C]
        sar ecx, 8
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        add esp, 8
        and ecx, 3
        rep movsb
        public_627fc6f : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x627fa90)
    }
}

#undef public_627faab
#undef public_627faf9
#undef public_627fb01
#undef public_627fb0c
#undef public_627fb14
#undef public_627fb20
#undef public_627fb2e
#undef public_627fb45
#undef public_627fb5b
#undef public_627fb63
#undef public_627fb6b
#undef public_627fb73
#undef public_627fb7b
#undef public_627fb87
#undef public_627fb8f
#undef public_627fb96
#undef public_627fba4
#undef public_627fbb3
#undef public_627fbc7
#undef public_627fbd2
#undef public_627fbda
#undef public_627fbf0
#undef public_627fc04
#undef public_627fc0c
#undef public_627fc12
#undef public_627fc37
#undef public_627fc3b
#undef public_627fc6f
