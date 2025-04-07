#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316c60);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6316c93 _public_6316c93
#define public_6316ca5 _public_6316ca5
#define public_6316cc7 _public_6316cc7
#define public_6316cdb _public_6316cdb
#define public_6316cf7 _public_6316cf7
#define public_6316d0d _public_6316d0d
#define public_6316d29 _public_6316d29
#define public_6316d4f _public_6316d4f
#define public_6316d53 _public_6316d53
#define public_6316d70 _public_6316d70
#define public_6316d80 _public_6316d80
#define public_6316d9b _public_6316d9b
#define public_6316da8 _public_6316da8
#define public_6316dba _public_6316dba

PROC_DECLARE(0x6316c60, internal_6316c60, public_6316c60);
extern "C" NAKED register_t __cdecl internal_6316c60()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        cmp eax, ecx
        push edi
        mov edi, esi
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x10], edi
        je public_6316d70
        sub esi, eax
        lea ebp, ds:[eax+4]
        mov dword ptr ss : [esp+0x24], esi
        public_6316c93 : nop
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [eax]
        mov ebx, ecx
        cmp eax, ebx
        jae public_6316ca5
        mov ebx, eax
        public_6316ca5 : nop
        lea edx, ss:[ebp-4]
        cmp edi, edx
        jne public_6316cc7
        push eax
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6399198]
        push 0
        push 0
        mov ecx, edi
        call dword ptr ds : [public_6399198]
        jmp public_6316d53
        public_6316cc7 : nop
        test ebx, ebx
        jbe public_6316d0d
        cmp ebx, ecx
        jne public_6316d0d
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        jne public_6316cdb
        mov eax, dword ptr ds : [public_63991d0]
        public_6316cdb : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6316d0d
        push 1
        mov ecx, edi
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        jne public_6316cf7
        mov eax, dword ptr ds : [public_63991d0]
        public_6316cf7 : nop
        mov dword ptr ds : [esi+ebp], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi+ebp+4], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+ebp+8], edx
        inc byte ptr ds : [eax-1]
        jmp public_6316d53
        public_6316d0d : nop
        push 1
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6316d4f
        mov esi, dword ptr ss : [ebp]
        test esi, esi
        jne public_6316d29
        mov esi, dword ptr ds : [public_63991d0]
        public_6316d29 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ds : [eax+ebp]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        call dword ptr ds : [public_63991d8]
        mov edi, dword ptr ss : [esp+0x10]
        public_6316d4f : nop
        mov esi, dword ptr ss : [esp+0x24]
        public_6316d53 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        add ebp, 0x10
        add edi, 0x10
        lea eax, ss:[ebp-4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], edi
        jne public_6316c93
        mov edx, dword ptr ss : [esp+0x14]
        public_6316d70 : nop
        mov ebx, dword ptr ds : [edx+8]
        cmp edi, ebx
        je public_6316dba
        lea esi, ds:[edi+4]
        lea ebx, ds:[ebx]
        public_6316d80 : nop
        mov eax, dword ptr ds : [esi]
        xor ebp, ebp
        cmp eax, ebp
        je public_6316da8
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6316d9b
        cmp cl, 0xFF
        je public_6316d9b
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6316da8
        public_6316d9b : nop
        push eax
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        public_6316da8 : nop
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        add esi, 0x10
        lea ecx, ds:[esi-4]
        cmp ecx, ebx
        jne public_6316d80
        public_6316dba : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+8], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6316c60)
    }
}

#undef public_6316c93
#undef public_6316ca5
#undef public_6316cc7
#undef public_6316cdb
#undef public_6316cf7
#undef public_6316d0d
#undef public_6316d29
#undef public_6316d4f
#undef public_6316d53
#undef public_6316d70
#undef public_6316d80
#undef public_6316d9b
#undef public_6316da8
#undef public_6316dba
