#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_542f10);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0dbb);

#define public_543034 _public_543034
#define public_54304a _public_54304a
#define public_54306c _public_54306c
#define public_54308b _public_54308b
#define public_5430e0 _public_5430e0

PROC_DECLARE(0x542f10, internal_542f10, public_542f10);
extern "C" NAKED register_t __cdecl internal_542f10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0dbb @0x542f12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0dbb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x80
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        xor edi, edi
        mov dword ptr ss : [ebp+4], edi
        mov eax, dword ptr ds : [public_5c69b4]
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp], eax
        lea esi, ss:[ebp+8]
        mov ecx, esi
        mov dword ptr ss : [esp+0x98], edi
        call dword ptr ds : [public_5c6ab4]
        mov eax, dword ptr ss : [esp+0xA0]
        cmp eax, edi
        mov ecx, dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ss : [esp+0xA8]
        mov byte ptr ss : [esp+0x98], 1
        mov dword ptr ss : [ebp+0x24], eax
        mov byte ptr ss : [ebp+0x60], 0
        mov dword ptr ss : [ebp], offset public_5dfcc8
        mov dword ptr ds : [esi], offset public_5dfca8
        mov dword ptr ss : [ebp+0x1C], edi
        mov dword ptr ss : [ebp+0x20], ecx
        mov dword ptr ss : [ebp+0x18], edx
        je public_5430e0
        add eax, 0xC
        cmp eax, edi
        je public_5430e0
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, edi
        je public_5430e0
        mov eax, dword ptr ds : [ebx+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_5430e0
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_5c65c4]
        mov eax, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push 0x3F800000
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [ebp+0x24]
        lea ecx, ds:[eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x30]
        rep movsd
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x60]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ds : [ecx+0x188]
        test eax, eax
        je public_543034
        lea esi, ds:[eax+0xA8]
        mov ecx, 0xC
        lea edi, ss:[esp+0x60]
        rep movsd
        public_543034 : nop
        mov eax, dword ptr ds : [public_678b68]
        test eax, eax
        lea esi, ss:[ebp+0x28]
        jne public_54304a
        call public_5b73e0
        mov dword ptr ds : [public_678b68], eax
        public_54304a : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ds : [public_678b68]
        test eax, eax
        lea esi, ss:[ebp+0x44]
        jne public_54306c
        call public_5b73e0
        mov dword ptr ds : [public_678b68], eax
        public_54306c : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x60]
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ds : [public_678b68]
        test eax, eax
        jne public_54308b
        call public_5b73e0
        mov dword ptr ds : [public_678b68], eax
        public_54308b : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x58]
        lea edx, ss:[ebp+0x38]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ss : [esp+0x88]
        lea ecx, ss:[ebp+0x54]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x8C]
        mov dword ptr ds : [ecx+4], eax
        lea eax, ss:[ebp+8]
        push ebx
        push eax
        mov dword ptr ds : [ecx+8], edx
        call dword ptr ds : [public_5c6ab0]
        add esp, 8
        public_5430e0 : nop
        mov ecx, dword ptr ss : [esp+0x90]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x8C
        ret 0xC
        UNREACHABLE_TRAP(0x542f10)
    }
}

#undef public_543034
#undef public_54304a
#undef public_54306c
#undef public_54308b
#undef public_5430e0
