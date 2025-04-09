#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c7b0);
CLANG_FORWARD_PROC_SYMBOL(public_5afe80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9478);

#define public_43c7d8 _public_43c7d8
#define public_43c7e1 _public_43c7e1
#define public_43c7e3 _public_43c7e3
#define public_43c7ff _public_43c7ff
#define public_43c804 _public_43c804
#define public_43c810 _public_43c810
#define public_43c823 _public_43c823
#define public_43c82a _public_43c82a
#define public_43c82e _public_43c82e
#define public_43c844 _public_43c844
#define public_43c855 _public_43c855

PROC_DECLARE(0x43c7b0, internal_43c7b0, public_43c7b0);
extern "C" NAKED register_t __cdecl internal_43c7b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9478 @0x43c7b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9478
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        xor esi, esi
        push ebp
        public_43c7d8 : nop
        cmp esi, ebx
        jne public_43c7e1
        mov esi, dword ptr ds : [edi+4]
        jmp public_43c7e3
        public_43c7e1 : nop
        mov esi, dword ptr ds : [esi]
        public_43c7e3 : nop
        cmp esi, ebx
        je public_43c804
        mov ebp, dword ptr ds : [esi+8]
        cmp ebp, ebx
        je public_43c7ff
        mov ecx, ebp
        call dword ptr ds : [public_5c6118]
        push ebp
        call public_5b7e1d
        add esp, 4
        public_43c7ff : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_43c7d8
        public_43c804 : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        pop ebp
        je public_43c82e
        lea esp, ss:[esp]
        public_43c810 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov ecx, esi
        mov esi, dword ptr ds : [esi]
        je public_43c823
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [edi+0x10], ecx
        jmp public_43c82a
        public_43c823 : nop
        push 1
        call public_5afe80
        public_43c82a : nop
        cmp esi, ebx
        jne public_43c810
        public_43c82e : nop
        mov esi, dword ptr ds : [edi+0x10]
        cmp esi, ebx
        mov byte ptr ds : [edi+0x14], bl
        mov dword ptr ds : [edi], offset public_5cb03c
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        je public_43c855
        public_43c844 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp esi, ebx
        jne public_43c844
        public_43c855 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x10], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x43c7b0)
    }
}

#undef public_43c7d8
#undef public_43c7e1
#undef public_43c7e3
#undef public_43c7ff
#undef public_43c804
#undef public_43c810
#undef public_43c823
#undef public_43c82a
#undef public_43c82e
#undef public_43c844
#undef public_43c855
