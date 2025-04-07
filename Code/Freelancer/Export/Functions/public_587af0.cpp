#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_587af0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4441);

#define public_587b4f _public_587b4f
#define public_587b5f _public_587b5f
#define public_587b72 _public_587b72
#define public_587ba8 _public_587ba8
#define public_587bb2 _public_587bb2
#define public_587bc6 _public_587bc6
#define public_587be2 _public_587be2
#define public_587bf6 _public_587bf6
#define public_587c12 _public_587c12
#define public_587c2e _public_587c2e
#define public_587c4a _public_587c4a

PROC_DECLARE(0x587af0, internal_587af0, public_587af0);
extern "C" NAKED register_t __cdecl internal_587af0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4441 @0x587af2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4441
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push edi
        mov dword ptr ss : [esp+8], ebx
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_587c4a
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [ebx], eax
        mov cl, byte ptr ds : [esi+4]
        add esi, 4
        add ebx, 4
        mov byte ptr ds : [ebx], cl
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], edi
        mov dword ptr ds : [ebx+0xC], edi
        mov edx, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx]
        mov ebp, ecx
        cmp eax, ebp
        jae public_587b4f
        mov ebp, eax
        public_587b4f : nop
        cmp ebx, esi
        jne public_587bb2
        cmp ebp, edi
        mov esi, eax
        jbe public_587b5f
        call dword ptr ds : [public_5c7064]
        public_587b5f : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, esi
        jae public_587b72
        mov esi, eax
        public_587b72 : nop
        cmp esi, edi
        jbe public_587ba8
        mov ecx, dword ptr ds : [ebx+4]
        add ebp, ecx
        sub eax, esi
        push eax
        lea edx, ds:[esi+ebp]
        push edx
        push ebp
        call dword ptr ds : [public_5c709c]
        mov ebp, dword ptr ds : [ebx+8]
        add esp, 0xC
        push edi
        sub ebp, esi
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_587ba8
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c706c]
        public_587ba8 : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c7068]
        jmp public_587c2e
        public_587bb2 : nop
        cmp ebp, edi
        jbe public_587bf6
        cmp ebp, ecx
        jne public_587bf6
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_587bc6
        mov eax, dword ptr ds : [public_5c7078]
        public_587bc6 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_587bf6
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_587be2
        mov eax, dword ptr ds : [public_5c7078]
        public_587be2 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_587c2e
        public_587bf6 : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_587c2e
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_587c12
        mov esi, dword ptr ds : [public_5c7078]
        public_587c12 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c706c]
        public_587c2e : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+0x14], edx
        mov edx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [ecx+0x18], edx
        mov eax, dword ptr ds : [eax+0x1C]
        pop esi
        mov dword ptr ds : [ecx+0x1C], eax
        pop ebp
        public_587c4a : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x587af0)
    }
}

#undef public_587b4f
#undef public_587b5f
#undef public_587b72
#undef public_587ba8
#undef public_587bb2
#undef public_587bc6
#undef public_587be2
#undef public_587bf6
#undef public_587c12
#undef public_587c2e
#undef public_587c4a
