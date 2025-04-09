#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f5c20);

#define public_4f5c4b _public_4f5c4b
#define public_4f5c81 _public_4f5c81
#define public_4f5c90 _public_4f5c90
#define public_4f5c9c _public_4f5c9c
#define public_4f5cb0 _public_4f5cb0
#define public_4f5ce1 _public_4f5ce1
#define public_4f5cf4 _public_4f5cf4
#define public_4f5d31 _public_4f5d31
#define public_4f5d6f _public_4f5d6f
#define public_4f5d73 _public_4f5d73
#define public_4f5d95 _public_4f5d95
#define public_4f5da6 _public_4f5da6
#define public_4f5dce _public_4f5dce
#define public_4f5e0d _public_4f5e0d
#define public_4f5e1c _public_4f5e1c

PROC_DECLARE(0x4f5c20, internal_4f5c20, public_4f5c20);
extern "C" NAKED register_t __cdecl internal_4f5c20()
{
    __asm
    {
        sub esp, 0x218
        mov eax, dword ptr ds : [public_5c7080]
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        lea ebx, ss:[ebp+0x18]
        push edi
        mov edi, dword ptr ds : [eax]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ds : [ebx+8]
        cmp eax, edi
        jae public_4f5c4b
        mov edi, eax
        public_4f5c4b : nop
        test edi, edi
        jbe public_4f5c81
        mov ecx, dword ptr ds : [ebx+4]
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call dword ptr ds : [public_5c709c]
        mov esi, dword ptr ds : [ebx+8]
        add esp, 0xC
        push 0
        sub esi, edi
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4f5c81
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], esi
        mov byte ptr ds : [esi+eax], 0
        public_4f5c81 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        xor edx, edx
        cmp ecx, edx
        jne public_4f5c90
        mov dword ptr ss : [esp+0x14], edx
        jmp public_4f5c9c
        public_4f5c90 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x14], eax
        public_4f5c9c : nop
        cmp dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x1C], edx
        jle public_4f5da6
        lea ebx, ds:[ebx]
        public_4f5cb0 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [ecx+edx*4]
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], esi
        je public_4f5d95
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 4
        test eax, eax
        jle public_4f5d95
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x18], eax
        public_4f5ce1 : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_4f5cf4
        mov eax, dword ptr ds : [public_5c7078]
        public_4f5cf4 : nop
        mov edx, dword ptr ds : [esi+0x10]
        push eax
        push edx
        lea eax, ss:[esp+0x30]
/*FIXUP push offset public_5d98a0 @0x4f5cfd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d98a0
        push eax
        call dword ptr ds : [public_5c71ec]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 0x10
        lea edi, ss:[esp+0x28]
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        sub edx, dword ptr ds : [ebx+8]
        cmp edx, edi
        ja public_4f5d31
        call dword ptr ds : [public_5c7070]
        public_4f5d31 : nop
        test edi, edi
        jbe public_4f5d73
        mov ebp, dword ptr ds : [ebx+8]
        push 0
        add ebp, edi
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4f5d6f
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, edi
        mov edi, dword ptr ds : [ebx+4]
        add edi, eax
        mov eax, ecx
        shr ecx, 2
        lea esi, ss:[esp+0x28]
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], ebp
        mov byte ptr ds : [ecx+ebp], 0
        public_4f5d6f : nop
        mov esi, dword ptr ss : [esp+0x20]
        public_4f5d73 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        add ecx, 0x10
        dec eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_4f5ce1
        mov edx, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x24]
        public_4f5d95 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc edx
        cmp edx, eax
        mov dword ptr ss : [esp+0x1C], edx
        jl public_4f5cb0
        public_4f5da6 : nop
        mov edx, dword ptr ds : [public_5c7080]
        xor eax, eax
        or ecx, 0xFFFFFFFF
        mov edi, offset public_5cb7d0
        repne scasb
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+8]
        not ecx
        dec ecx
        mov esi, ecx
        sub eax, edx
        cmp eax, esi
        ja public_4f5dce
        call dword ptr ds : [public_5c7070]
        public_4f5dce : nop
        test esi, esi
        jbe public_4f5e0d
        mov ebp, dword ptr ds : [ebx+8]
        push 0
        add ebp, esi
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4f5e0d
        mov edi, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, esi
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5cb7d0
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_4f5e0d : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov edx, dword ptr ds : [public_5c7078]
        je public_4f5e1c
        mov edx, ebx
        public_4f5e1c : nop
        mov esi, dword ptr ds : [public_67ecd0]
        mov ebx, dword ptr ds : [esi]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        mov ecx, dword ptr ds : [public_673344]
        push edx
        push ecx
        mov ecx, esi
        call dword ptr ds : [ebx+0x118]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x218
        ret 
        UNREACHABLE_TRAP(0x4f5c20)
    }
}

#undef public_4f5c4b
#undef public_4f5c81
#undef public_4f5c90
#undef public_4f5c9c
#undef public_4f5cb0
#undef public_4f5ce1
#undef public_4f5cf4
#undef public_4f5d31
#undef public_4f5d6f
#undef public_4f5d73
#undef public_4f5d95
#undef public_4f5da6
#undef public_4f5dce
#undef public_4f5e0d
#undef public_4f5e1c
