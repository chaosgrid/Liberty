#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6acf712);
CLANG_FORWARD_PROC_SYMBOL(public_6acf7a6);
CLANG_FORWARD_PROC_SYMBOL(public_6ad023c);

#define public_6ad026f _public_6ad026f
#define public_6ad02c3 _public_6ad02c3
#define public_6ad02ce _public_6ad02ce
#define public_6ad02d5 _public_6ad02d5
#define public_6ad02dc _public_6ad02dc
#define public_6ad02f1 _public_6ad02f1

PROC_DECLARE(0x6ad023c, internal_6ad023c, public_6ad023c);
extern "C" NAKED register_t __cdecl internal_6ad023c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push ebp
        cld 
        mov ebx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+8]
        test dword ptr ds : [eax+4], 6
        jne public_6ad02dc
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-4], eax
        lea eax, ss:[ebp-8]
        mov dword ptr ds : [ebx-4], eax
        mov esi, dword ptr ds : [ebx+0xC]
        mov edi, dword ptr ds : [ebx+8]
        public_6ad026f : nop
        cmp esi, 0xFFFFFFFF
        je public_6ad02d5
        lea ecx, ds:[esi+esi*2]
        cmp dword ptr ds : [edi+ecx*4+4], 0
        je public_6ad02c3
        push esi
        push ebp
        lea ebp, ds:[ebx+0x10]
        call dword ptr ds : [edi+ecx*4+4]
        pop ebp
        pop esi
        mov ebx, dword ptr ss : [ebp+0xC]
        or eax, eax
        je public_6ad02c3
        js public_6ad02ce
        mov edi, dword ptr ds : [ebx+8]
        push ebx
        call public_6acf6d0
        add esp, 4
        lea ebp, ds:[ebx+0x10]
        push esi
        push ebx
        call public_6acf712
        add esp, 8
        lea ecx, ds:[esi+esi*2]
        push 1
        mov eax, dword ptr ds : [edi+ecx*4+8]
        call public_6acf7a6
        mov eax, dword ptr ds : [edi+ecx*4]
        mov dword ptr ds : [ebx+0xC], eax
        call dword ptr ds : [edi+ecx*4+8]
        public_6ad02c3 : nop
        mov edi, dword ptr ds : [ebx+8]
        lea ecx, ds:[esi+esi*2]
        mov esi, dword ptr ds : [edi+ecx*4]
        jmp public_6ad026f
        public_6ad02ce : nop
        mov eax, 0
        jmp public_6ad02f1
        public_6ad02d5 : nop
        mov eax, 1
        jmp public_6ad02f1
        public_6ad02dc : nop
        push ebp
        lea ebp, ds:[ebx+0x10]
        push 0xFFFFFFFF
        push ebx
        call public_6acf712
        add esp, 8
        pop ebp
        mov eax, 1
        public_6ad02f1 : nop
        pop ebp
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad023c)
    }
}

#undef public_6ad026f
#undef public_6ad02c3
#undef public_6ad02ce
#undef public_6ad02d5
#undef public_6ad02dc
#undef public_6ad02f1
