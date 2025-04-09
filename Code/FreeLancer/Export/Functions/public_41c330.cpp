#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d630);
CLANG_FORWARD_PROC_SYMBOL(public_41d690);
CLANG_FORWARD_PROC_SYMBOL(public_41d700);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);

#define public_41c370 _public_41c370
#define public_41c382 _public_41c382
#define public_41c3a0 _public_41c3a0
#define public_41c3d0 _public_41c3d0
#define public_41c3e2 _public_41c3e2
#define public_41c400 _public_41c400
#define public_41c45f _public_41c45f
#define public_41c463 _public_41c463
#define public_41c4a1 _public_41c4a1
#define public_41c4c7 _public_41c4c7

PROC_DECLARE(0x41c330, internal_41c330, public_41c330);
extern "C" NAKED register_t __cdecl internal_41c330()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [ebp+4], eax
        mov cl, byte ptr ds : [ebx+8]
        mov byte ptr ss : [ebp+8], cl
        mov edx, dword ptr ds : [ebx+0xC]
        lea ecx, ds:[ebx+0x14]
        lea eax, ss:[ebp+0x14]
        cmp eax, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp+0xC], edx
        je public_41c3a0
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_41c382
        nop 
        public_41c370 : nop
        cmp esi, ecx
        je public_41c382
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_41c370
        public_41c382 : nop
        push edi
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[ebp+0x14]
        call public_4a2f80
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        push edi
        lea ecx, ss:[ebp+0x14]
        call public_41d630
        public_41c3a0 : nop
        lea esi, ds:[ebx+0x20]
        lea edi, ss:[ebp+0x20]
        mov ecx, 6
        rep movsd
        mov edx, dword ptr ds : [ebx+0x38]
        lea ecx, ds:[ebx+0x40]
        lea eax, ss:[ebp+0x40]
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x38], edx
        je public_41c400
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_41c3e2
        nop 
        public_41c3d0 : nop
        cmp esi, ecx
        je public_41c3e2
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_41c3d0
        public_41c3e2 : nop
        push edi
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[ebp+0x40]
        call public_4a2f80
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        push edi
        lea ecx, ss:[ebp+0x40]
        call public_41d630
        public_41c400 : nop
        lea esi, ds:[ebx+0x4C]
        lea edi, ss:[ebp+0x4C]
        mov ecx, 6
        rep movsd
        mov edx, dword ptr ds : [ebx+0x64]
        mov dword ptr ss : [ebp+0x64], edx
        lea eax, ds:[ebx+0x68]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x68]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ds : [ebx+0x78]
        mov dword ptr ss : [ebp+0x78], ecx
        mov edx, dword ptr ds : [ebx+0x7C]
        lea eax, ds:[ebx+0x80]
        lea ecx, ss:[ebp+0x80]
        cmp ecx, eax
        mov dword ptr ss : [ebp+0x7C], edx
        je public_41c4c7
        mov ebx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov eax, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], eax
        je public_41c4a1
        jmp public_41c463
        public_41c45f : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_41c463 : nop
        cmp edi, eax
        je public_41c4a1
        mov eax, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [eax]
        push edx
        push 0
        lea ebp, ds:[edi+8]
        lea ecx, ds:[esi+8]
        push ebp
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [public_5c705c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        add ebp, 0x10
        push ebp
        lea ecx, ds:[esi+0x18]
        call dword ptr ds : [public_5c7060]
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        mov edi, dword ptr ds : [edi]
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_41c45f
        public_41c4a1 : nop
        push ebx
        push esi
        lea edx, ss:[esp+0x20]
        lea esi, ss:[ebp+0x80]
        push edx
        mov ecx, esi
        call public_41d700
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push edi
        push ebx
        mov ecx, esi
        call public_41d690
        mov ebx, dword ptr ss : [esp+0x20]
        public_41c4c7 : nop
        mov cl, byte ptr ds : [ebx+0x8C]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x8C], cl
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x41c330)
    }
}

#undef public_41c370
#undef public_41c382
#undef public_41c3a0
#undef public_41c3d0
#undef public_41c3e2
#undef public_41c400
#undef public_41c45f
#undef public_41c463
#undef public_41c4a1
#undef public_41c4c7
