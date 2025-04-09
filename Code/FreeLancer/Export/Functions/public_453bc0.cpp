#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_453bc0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9ee1);

#define public_453c21 _public_453c21
#define public_453c31 _public_453c31
#define public_453c44 _public_453c44
#define public_453c7a _public_453c7a
#define public_453c95 _public_453c95
#define public_453ca9 _public_453ca9
#define public_453cc5 _public_453cc5
#define public_453cef _public_453cef
#define public_453d0b _public_453d0b
#define public_453d28 _public_453d28

PROC_DECLARE(0x453bc0, internal_453bc0, public_453bc0);
extern "C" NAKED register_t __cdecl internal_453bc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9ee1 @0x453bc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9ee1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_453d28
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp], eax
        mov cl, byte ptr ds : [esi+4]
        add esi, 4
        add ebp, 4
        mov byte ptr ss : [ebp], cl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov edx, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx]
        mov ebx, ecx
        cmp eax, ebx
        jae public_453c21
        mov ebx, eax
        public_453c21 : nop
        cmp ebp, esi
        jne public_453c95
        cmp ebx, edi
        mov esi, eax
        jbe public_453c31
        call dword ptr ds : [public_5c7064]
        public_453c31 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_453c44
        mov esi, eax
        public_453c44 : nop
        cmp esi, edi
        jbe public_453c7a
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_5c709c]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push edi
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_453c7a
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_453c7a : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_453c95 : nop
        cmp ebx, edi
        jbe public_453cef
        cmp ebx, ecx
        jne public_453cef
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_453ca9
        mov eax, dword ptr ds : [public_5c7078]
        public_453ca9 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_453cef
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_453cc5
        mov eax, dword ptr ds : [public_5c7078]
        public_453cc5 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        pop edi
        mov dword ptr ss : [ebp+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_453cef : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_453d28
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_453d0b
        mov esi, dword ptr ds : [public_5c7078]
        public_453d0b : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_453d28 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x453bc0)
    }
}

#undef public_453c21
#undef public_453c31
#undef public_453c44
#undef public_453c7a
#undef public_453c95
#undef public_453ca9
#undef public_453cc5
#undef public_453cef
#undef public_453d0b
#undef public_453d28
