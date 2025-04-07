#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c3510);
CLANG_FORWARD_PROC_SYMBOL(public_65c3660);
CLANG_FORWARD_JUMP_SYMBOL(public_65c6e5a);

#define public_65c3590 _public_65c3590
#define public_65c35bb _public_65c35bb
#define public_65c35cf _public_65c35cf
#define public_65c35ea _public_65c35ea
#define public_65c3614 _public_65c3614
#define public_65c3630 _public_65c3630
#define public_65c3647 _public_65c3647

PROC_DECLARE(0x65c3510, internal_65c3510, public_65c3510);
extern "C" NAKED register_t __cdecl internal_65c3510()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65c6e5a @0x65c3512*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65c6e5a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_65c3647
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov ecx, dword ptr ds : [public_65c7060]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_65c7054]
        mov al, byte ptr ds : [edi+0x10]
        add edi, 0x10
        add esi, 0x10
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov ecx, dword ptr ds : [public_65c7060]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edi+8]
        mov ebx, ecx
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1C], 1
        jae public_65c3590
        mov ebx, eax
        public_65c3590 : nop
        cmp esi, edi
        jne public_65c35bb
        push eax
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_65c7058]
        push ebp
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_65c7058]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_65c35bb : nop
        cmp ebx, ebp
        jbe public_65c3614
        cmp ebx, ecx
        jne public_65c3614
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebp
        jne public_65c35cf
        mov eax, dword ptr ds : [public_65c7070]
        public_65c35cf : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_65c3614
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebp
        jne public_65c35ea
        mov eax, dword ptr ds : [public_65c7070]
        public_65c35ea : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_65c3614 : nop
        push 1
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_65c7068]
        test al, al
        je public_65c3647
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        jne public_65c3630
        mov edi, dword ptr ds : [public_65c7070]
        public_65c3630 : nop
        mov edx, dword ptr ds : [esi+4]
        push ebx
        push edi
        push edx
        call public_65c3660
        add esp, 0xC
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_65c705c]
        public_65c3647 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x65c3510)
    }
}

#undef public_65c3590
#undef public_65c35bb
#undef public_65c35cf
#undef public_65c35ea
#undef public_65c3614
#undef public_65c3630
#undef public_65c3647
