#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecdc70);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ecdc8c _public_6ecdc8c
#define public_6ecdc94 _public_6ecdc94
#define public_6ecdc9f _public_6ecdc9f
#define public_6ecdca7 _public_6ecdca7
#define public_6ecdcb2 _public_6ecdcb2
#define public_6ecdcc0 _public_6ecdcc0
#define public_6ecdcda _public_6ecdcda
#define public_6ecdcf3 _public_6ecdcf3
#define public_6ecdcfb _public_6ecdcfb
#define public_6ecdd03 _public_6ecdd03
#define public_6ecdd0b _public_6ecdd0b
#define public_6ecdd13 _public_6ecdd13
#define public_6ecdd23 _public_6ecdd23
#define public_6ecdd2b _public_6ecdd2b
#define public_6ecdd32 _public_6ecdd32
#define public_6ecdd40 _public_6ecdd40
#define public_6ecdd50 _public_6ecdd50
#define public_6ecdd58 _public_6ecdd58
#define public_6ecdd62 _public_6ecdd62
#define public_6ecdd7c _public_6ecdd7c
#define public_6ecdd95 _public_6ecdd95
#define public_6ecdda9 _public_6ecdda9
#define public_6ecddb1 _public_6ecddb1
#define public_6ecddb7 _public_6ecddb7
#define public_6ecddd6 _public_6ecddd6
#define public_6ecddde _public_6ecddde
#define public_6ecdde8 _public_6ecdde8
#define public_6ecddee _public_6ecddee

PROC_DECLARE(0x6ecdc70, internal_6ecdc70, public_6ecdc70);
extern "C" NAKED register_t __cdecl internal_6ecdc70()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        cmp ebx, esi
        push edi
        je public_6ecddee
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6ecdc8c
        xor edi, edi
        jmp public_6ecdc94
        public_6ecdc8c : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 2
        public_6ecdc94 : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_6ecdc9f
        xor ecx, ecx
        jmp public_6ecdca7
        public_6ecdc9f : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 2
        public_6ecdca7 : nop
        cmp edi, ecx
        ja public_6ecdcf3
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6ecdcc0
        public_6ecdcb2 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6ecdcb2
        public_6ecdcc0 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6ecdcda
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        lea ecx, ds:[eax+esi*4]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_6ecdcda : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, dword ptr ds : [ebx+4]
        sar esi, 2
        lea ecx, ds:[eax+esi*4]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_6ecdcf3 : nop
        test eax, eax
        jne public_6ecdcfb
        xor edi, edi
        jmp public_6ecdd03
        public_6ecdcfb : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 2
        public_6ecdd03 : nop
        test edx, edx
        jne public_6ecdd0b
        xor ecx, ecx
        jmp public_6ecdd13
        public_6ecdd0b : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 2
        public_6ecdd13 : nop
        cmp edi, ecx
        ja public_6ecdd95
        test edx, edx
        jne public_6ecdd23
        xor ecx, ecx
        jmp public_6ecdd2b
        public_6ecdd23 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 2
        public_6ecdd2b : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6ecdd40
        public_6ecdd32 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6ecdd32
        public_6ecdd40 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp ecx, edi
        mov edx, dword ptr ds : [ebx+8]
        mov eax, ecx
        je public_6ecdd62
        lea esp, ss:[esp]
        public_6ecdd50 : nop
        test edx, edx
        je public_6ecdd58
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6ecdd58 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_6ecdd50
        public_6ecdd62 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6ecdd7c
        mov edx, dword ptr ds : [ebx+4]
        xor esi, esi
        lea eax, ds:[edx+esi*4]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_6ecdd7c : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ebx+4]
        sub esi, eax
        sar esi, 2
        lea eax, ds:[edx+esi*4]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_6ecdd95 : nop
        push edx
        call public_6ed0c50
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6ecdda9
        xor eax, eax
        jmp public_6ecddb1
        public_6ecdda9 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6ecddb1 : nop
        test eax, eax
        jge public_6ecddb7
        xor eax, eax
        public_6ecddb7 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6ed0c5c
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6ecdde8
        public_6ecddd6 : nop
        test ecx, ecx
        je public_6ecddde
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6ecddde : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6ecddd6
        public_6ecdde8 : nop
        mov dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ds : [ebx+8], ecx
        public_6ecddee : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ecdc70)
    }
}

#undef public_6ecdc8c
#undef public_6ecdc94
#undef public_6ecdc9f
#undef public_6ecdca7
#undef public_6ecdcb2
#undef public_6ecdcc0
#undef public_6ecdcda
#undef public_6ecdcf3
#undef public_6ecdcfb
#undef public_6ecdd03
#undef public_6ecdd0b
#undef public_6ecdd13
#undef public_6ecdd23
#undef public_6ecdd2b
#undef public_6ecdd32
#undef public_6ecdd40
#undef public_6ecdd50
#undef public_6ecdd58
#undef public_6ecdd62
#undef public_6ecdd7c
#undef public_6ecdd95
#undef public_6ecdda9
#undef public_6ecddb1
#undef public_6ecddb7
#undef public_6ecddd6
#undef public_6ecddde
#undef public_6ecdde8
#undef public_6ecddee
