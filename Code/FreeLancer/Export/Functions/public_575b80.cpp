#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_575b80);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3a9d);

#define public_575c09 _public_575c09
#define public_575c34 _public_575c34
#define public_575c48 _public_575c48
#define public_575c63 _public_575c63
#define public_575c8d _public_575c8d
#define public_575ca9 _public_575ca9
#define public_575cc0 _public_575cc0

PROC_DECLARE(0x575b80, internal_575b80, public_575b80);
extern "C" NAKED register_t __cdecl internal_575b80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3a9d @0x575b82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3a9d
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
        je public_575cc0
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov dl, byte ptr ds : [edi+4]
        lea eax, ds:[edi+4]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], ebp
        mov dword ptr ds : [ecx+8], ebp
        mov dword ptr ds : [ecx+0xC], ebp
        mov edx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [edx]
        push edx
        push ebp
        push eax
        call dword ptr ds : [public_5c7060]
        mov al, byte ptr ds : [edi+0x14]
        add edi, 0x14
        add esi, 0x14
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov ecx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edi+8]
        mov ebx, ecx
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1C], 1
        jae public_575c09
        mov ebx, eax
        public_575c09 : nop
        cmp esi, edi
        jne public_575c34
        push eax
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6f8c]
        push ebp
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_5c6f8c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_575c34 : nop
        cmp ebx, ebp
        jbe public_575c8d
        cmp ebx, ecx
        jne public_575c8d
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebp
        jne public_575c48
        mov eax, dword ptr ds : [public_5c700c]
        public_575c48 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_575c8d
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebp
        jne public_575c63
        mov eax, dword ptr ds : [public_5c700c]
        public_575c63 : nop
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
        public_575c8d : nop
        push 1
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_575cc0
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        jne public_575ca9
        mov edi, dword ptr ds : [public_5c700c]
        public_575ca9 : nop
        mov edx, dword ptr ds : [esi+4]
        push ebx
        push edi
        push edx
        call public_41d8a0
        add esp, 0xC
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c7054]
        public_575cc0 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x575b80)
    }
}

#undef public_575c09
#undef public_575c34
#undef public_575c48
#undef public_575c63
#undef public_575c8d
#undef public_575ca9
#undef public_575cc0
