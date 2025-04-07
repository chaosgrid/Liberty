#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e65);
CLANG_FORWARD_PROC_SYMBOL(public_6d48af1);

#define public_6d48b38 _public_6d48b38
#define public_6d48b5f _public_6d48b5f
#define public_6d48b6b _public_6d48b6b
#define public_6d48b76 _public_6d48b76
#define public_6d48ba2 _public_6d48ba2
#define public_6d48ba5 _public_6d48ba5
#define public_6d48bad _public_6d48bad
#define public_6d48bb5 _public_6d48bb5
#define public_6d48bbf _public_6d48bbf
#define public_6d48bc8 _public_6d48bc8
#define public_6d48bdb _public_6d48bdb
#define public_6d48bf9 _public_6d48bf9
#define public_6d48c04 _public_6d48c04
#define public_6d48c08 _public_6d48c08
#define public_6d48c1f _public_6d48c1f
#define public_6d48c2e _public_6d48c2e
#define public_6d48c3e _public_6d48c3e
#define public_6d48c5e _public_6d48c5e
#define public_6d48c67 _public_6d48c67
#define public_6d48c68 _public_6d48c68

PROC_DECLARE(0x6d48af1, internal_6d48af1, public_6d48af1);
extern "C" NAKED register_t __cdecl internal_6d48af1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ss : [ebp+0x18]
        sub eax, 0
        push ebx
        push edi
        je public_6d48c68
        dec eax
        push esi
        je public_6d48c3e
        dec eax
        je public_6d48c1f
        dec eax
        je public_6d48bdb
        dec eax
        je public_6d48b38
/*FIXUP push offset public_6d6160c @0x6d48b1e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6160c
        push dword ptr ss : [ebp+8]
        call public_6d41e65
        mov eax, dword ptr ss : [ebp+0x10]
        and byte ptr ds : [eax], 0
        pop ecx
        pop ecx
        jmp public_6d48c67
        public_6d48b38 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        movzx eax, byte ptr ds : [ecx+0xB]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ss : [ebp+0x14]
        add eax, 7
        sar eax, 3
        sub ecx, eax
        test eax, eax
        mov dword ptr ss : [ebp-0xC], edx
        mov dword ptr ss : [ebp+0x18], edx
        mov dword ptr ss : [ebp-4], edi
        jbe public_6d48b6b
        mov esi, eax
        public_6d48b5f : nop
        mov al, byte ptr ds : [edi]
        add byte ptr ds : [edx], al
        inc edi
        inc edx
        dec esi
        jne public_6d48b5f
        mov dword ptr ss : [ebp-0xC], edx
        public_6d48b6b : nop
        test ecx, ecx
        jbe public_6d48c67
        mov dword ptr ss : [ebp-0x10], ecx
        public_6d48b76 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        movzx ecx, byte ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-4]
        movzx eax, byte ptr ds : [edi]
        movzx esi, byte ptr ds : [edx]
        inc dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [ebp-0x14], eax
        inc edi
        inc dword ptr ss : [ebp-4]
        mov edx, ecx
        sub eax, esi
        sub edx, esi
        test eax, eax
        jge public_6d48ba2
        mov ebx, eax
        neg ebx
        mov dword ptr ss : [ebp-8], ebx
        jmp public_6d48ba5
        public_6d48ba2 : nop
        mov dword ptr ss : [ebp-8], eax
        public_6d48ba5 : nop
        test edx, edx
        mov ebx, edx
        jge public_6d48bad
        neg ebx
        public_6d48bad : nop
        add eax, edx
        test eax, eax
        jge public_6d48bb5
        neg eax
        public_6d48bb5 : nop
        cmp dword ptr ss : [ebp-8], ebx
        jg public_6d48bbf
        cmp dword ptr ss : [ebp-8], eax
        jle public_6d48bc8
        public_6d48bbf : nop
        cmp ebx, eax
        mov ecx, dword ptr ss : [ebp-0x14]
        jle public_6d48bc8
        mov ecx, esi
        public_6d48bc8 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        add byte ptr ds : [eax], cl
        inc eax
        dec dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0xC], eax
        jne public_6d48b76
        jmp public_6d48c67
        public_6d48bdb : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        movzx eax, byte ptr ds : [ecx+0xB]
        mov ecx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ss : [ebp+0x14]
        add eax, 7
        sar eax, 3
        sub ecx, eax
        test eax, eax
        mov ebx, esi
        jbe public_6d48c04
        public_6d48bf9 : nop
        mov dl, byte ptr ds : [edi]
        shr dl, 1
        add byte ptr ds : [esi], dl
        inc edi
        inc esi
        dec eax
        jne public_6d48bf9
        public_6d48c04 : nop
        test ecx, ecx
        jbe public_6d48c67
        public_6d48c08 : nop
        movzx edx, byte ptr ds : [edi]
        movzx eax, byte ptr ds : [ebx]
        add eax, edx
        cdq 
        sub eax, edx
        sar eax, 1
        add byte ptr ds : [esi], al
        inc ebx
        inc edi
        inc esi
        dec ecx
        jne public_6d48c08
        jmp public_6d48c67
        public_6d48c1f : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp+0x10]
        xor ecx, ecx
        test esi, esi
        jbe public_6d48c67
        public_6d48c2e : nop
        mov edx, dword ptr ss : [ebp+0x14]
        mov dl, byte ptr ds : [ecx+edx]
        add byte ptr ds : [eax], dl
        inc eax
        inc ecx
        cmp ecx, esi
        jb public_6d48c2e
        jmp public_6d48c67
        public_6d48c3e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        movzx eax, byte ptr ds : [eax+0xB]
        mov edx, dword ptr ss : [ebp+0x10]
        add eax, 7
        sar eax, 3
        cmp eax, ecx
        lea esi, ds:[eax+edx]
        jae public_6d48c67
        mov edx, esi
        sub edx, eax
        sub ecx, eax
        public_6d48c5e : nop
        mov al, byte ptr ds : [edx]
        add byte ptr ds : [esi], al
        inc esi
        inc edx
        dec ecx
        jne public_6d48c5e
        public_6d48c67 : nop
        pop esi
        public_6d48c68 : nop
        pop edi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d48af1)
    }
}

#undef public_6d48b38
#undef public_6d48b5f
#undef public_6d48b6b
#undef public_6d48b76
#undef public_6d48ba2
#undef public_6d48ba5
#undef public_6d48bad
#undef public_6d48bb5
#undef public_6d48bbf
#undef public_6d48bc8
#undef public_6d48bdb
#undef public_6d48bf9
#undef public_6d48c04
#undef public_6d48c08
#undef public_6d48c1f
#undef public_6d48c2e
#undef public_6d48c3e
#undef public_6d48c5e
#undef public_6d48c67
#undef public_6d48c68
