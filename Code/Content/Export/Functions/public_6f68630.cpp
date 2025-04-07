#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68630);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f68670 _public_6f68670
#define public_6f68682 _public_6f68682
#define public_6f686ad _public_6f686ad
#define public_6f686ca _public_6f686ca
#define public_6f686cd _public_6f686cd
#define public_6f68704 _public_6f68704

PROC_DECLARE(0x6f68630, internal_6f68630, public_6f68630);
extern "C" NAKED register_t __cdecl internal_6f68630()
{
    __asm
    {
        sub esp, 0x3C
        mov eax, dword ptr ds : [public_6fce76c]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x50]
        mov ebx, eax
        mov ebp, ecx
        inc eax
        push 1
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [public_6fce76c], eax
        call public_6f33fd0
        mov dword ptr ds : [edi+0x1B8], 5
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        je public_6f68682
        mov ecx, dword ptr ds : [edi+4]
        lea ecx, ds:[ecx]
        public_6f68670 : nop
        mov edx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [edx+4], ecx
        je public_6f68704
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        jne public_6f68670
        public_6f68682 : nop
        mov eax, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x1C], edi
        mov edi, dword ptr ds : [esi+4]
        push 0x38
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x28], eax
        call public_6fa912a
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [eax], esi
        jne public_6f686ad
        mov edi, eax
        public_6f686ad : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        cmp edi, ebx
        mov dword ptr ds : [ecx], eax
        je public_6f686ca
        mov ecx, 0xC
        lea esi, ss:[esp+0x1C]
        rep movsd
        public_6f686ca : nop
        inc dword ptr ss : [ebp+8]
        public_6f686cd : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
/*FIXUP push offset public_6fd1c74 @0x6f686db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [ebp+0xC], ebx
        mov dword ptr ss : [ebp+0x10], ebx
        mov dword ptr ss : [ebp+0x14], ebx
        call dword ptr ds : [public_6fb342c]
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 8
        public_6f68704 : nop
        mov dword ptr ds : [eax+0x10], ebx
        xor ebx, ebx
        mov dword ptr ds : [eax+0x34], ebx
        jmp public_6f686cd
        UNREACHABLE_TRAP(0x6f68630)
    }
}

#undef public_6f68670
#undef public_6f68682
#undef public_6f686ad
#undef public_6f686ca
#undef public_6f686cd
#undef public_6f68704
