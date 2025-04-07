#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433da0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9021);

#define public_433e01 _public_433e01
#define public_433e11 _public_433e11
#define public_433e24 _public_433e24
#define public_433e5a _public_433e5a
#define public_433e75 _public_433e75
#define public_433e89 _public_433e89
#define public_433ea5 _public_433ea5
#define public_433ecf _public_433ecf
#define public_433eeb _public_433eeb
#define public_433f08 _public_433f08

PROC_DECLARE(0x433da0, internal_433da0, public_433da0);
extern "C" NAKED register_t __cdecl internal_433da0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9021 @0x433da2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9021
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
        je public_433f08
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
        jae public_433e01
        mov ebx, eax
        public_433e01 : nop
        cmp ebp, esi
        jne public_433e75
        cmp ebx, edi
        mov esi, eax
        jbe public_433e11
        call dword ptr ds : [public_5c7064]
        public_433e11 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_433e24
        mov esi, eax
        public_433e24 : nop
        cmp esi, edi
        jbe public_433e5a
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
        je public_433e5a
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_433e5a : nop
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
        public_433e75 : nop
        cmp ebx, edi
        jbe public_433ecf
        cmp ebx, ecx
        jne public_433ecf
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_433e89
        mov eax, dword ptr ds : [public_5c7078]
        public_433e89 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_433ecf
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_433ea5
        mov eax, dword ptr ds : [public_5c7078]
        public_433ea5 : nop
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
        public_433ecf : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_433f08
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_433eeb
        mov esi, dword ptr ds : [public_5c7078]
        public_433eeb : nop
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
        public_433f08 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x433da0)
    }
}

#undef public_433e01
#undef public_433e11
#undef public_433e24
#undef public_433e5a
#undef public_433e75
#undef public_433e89
#undef public_433ea5
#undef public_433ecf
#undef public_433eeb
#undef public_433f08
