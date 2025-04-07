#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446020);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_555a60);
CLANG_FORWARD_PROC_SYMBOL(public_555a90);
CLANG_FORWARD_PROC_SYMBOL(public_5581b0);
CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9925);

#define public_446064 _public_446064
#define public_44607c _public_44607c
#define public_44608d _public_44608d
#define public_4460a2 _public_4460a2
#define public_4460d0 _public_4460d0
#define public_4460e5 _public_4460e5
#define public_446122 _public_446122
#define public_44612b _public_44612b

PROC_DECLARE(0x446020, internal_446020, public_446020);
extern "C" NAKED register_t __cdecl internal_446020()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9925 @0x446022*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9925
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_5cbc0c
        mov al, byte ptr ds : [esi+0x48]
        test al, al
        mov dword ptr ss : [esp+0x18], 4
        jne public_44608d
        cmp dword ptr ds : [esi+0x30], 0xFFFFFFFF
        je public_44608d
        mov eax, dword ptr ds : [esi+0x6C]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_44607c
        public_446064 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x60]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x6C]
        jne public_446064
        public_44607c : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x60]
        public_44608d : nop
        lea ecx, ds:[esi+0x4C]
        call public_555a90
        mov ecx, dword ptr ds : [esi+0x64]
        test ecx, ecx
        je public_4460a2
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_4460a2 : nop
        push ebx
        push ebp
        lea ecx, ds:[esi+0x74]
        mov dword ptr ds : [esi+0x64], 0
        mov byte ptr ss : [esp+0x20], 3
        call public_5581b0
        mov ebx, dword ptr ds : [esi+0x6C]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        lea ebp, ds:[esi+0x68]
        mov byte ptr ss : [esp+0x20], 2
        je public_4460e5
        lea esp, ss:[esp]
        public_4460d0 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebp
        call public_516f70
        cmp edi, ebx
        jne public_4460d0
        public_4460e5 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        xor edi, edi
        add esp, 4
        lea ecx, ds:[esi+0x4C]
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov byte ptr ss : [esp+0x20], 1
        call public_555a60
        mov eax, dword ptr ds : [esi+0x3C]
        cmp eax, edi
        pop ebp
        pop ebx
        je public_44612b
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_446122
        cmp cl, 0xFF
        je public_446122
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_44612b
        public_446122 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_44612b : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0x40], edi
        mov dword ptr ds : [esi+0x44], edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_5594b0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x446020)
    }
}

#undef public_446064
#undef public_44607c
#undef public_44608d
#undef public_4460a2
#undef public_4460d0
#undef public_4460e5
#undef public_446122
#undef public_44612b
