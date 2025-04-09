#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_441ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_441ec0 _public_441ec0
#define public_441ed3 _public_441ed3
#define public_441eec _public_441eec
#define public_441ffa _public_441ffa

PROC_DECLARE(0x441ea0, internal_441ea0, public_441ea0);
extern "C" NAKED register_t __cdecl internal_441ea0()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+0x3E8]
        test ebx, ebx
        je public_441eec
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_441ed3
        push edi
        lea esp, ss:[esp]
        public_441ec0 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_441ec0
        pop edi
        public_441ed3 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0x3E8], 0
        public_441eec : nop
        mov edx, dword ptr ss : [esp+0x5C]
        lea eax, ss:[esp+8]
        push eax
        push 0
        push 0
        mov eax, dword ptr ss : [esp+0x64]
        push 0
        push 1
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
        push edx
        push eax
/*FIXUP push offset public_5cb8a8 @0x441f16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb8a8
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        call public_5a0db0
        mov dword ptr ds : [esi+0x3E8], eax
        mov ecx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov eax, dword ptr ds : [eax+0x84]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA0]
        add eax, 0x24
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x44], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x48], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [public_668828]
        test eax, eax
        jne public_441ffa
        call public_5b73e0
        mov dword ptr ds : [public_668828], eax
        public_441ffa : nop
        mov edx, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ds : [esi+0x3E8]
        mov edx, dword ptr ds : [edx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov edx, dword ptr ds : [esi+0x3E8]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        pop esi
        pop ebx
        add esp, 0x48
        ret 0xC
        UNREACHABLE_TRAP(0x441ea0)
    }
}

#undef public_441ec0
#undef public_441ed3
#undef public_441eec
#undef public_441ffa
