#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);

#define public_488834 _public_488834
#define public_488866 _public_488866
#define public_488887 _public_488887
#define public_488898 _public_488898
#define public_4888aa _public_4888aa
#define public_4888c0 _public_4888c0
#define public_4888dd _public_4888dd
#define public_4888f0 _public_4888f0
#define public_488902 _public_488902
#define public_488918 _public_488918
#define public_48893d _public_48893d

PROC_DECLARE(0x488800, internal_488800, public_488800);
extern "C" NAKED register_t __cdecl internal_488800()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x26
        push esi
        push edi
        mov esi, ecx
        je public_488866
        cmp eax, 0x42
        je public_488834
        cmp eax, 0xF003
        jne public_48893d
        mov eax, dword ptr ds : [esi+0x32C]
        lea ecx, ds:[esi+0x32C]
        push 0xF
        call dword ptr ds : [eax]
        xor eax, eax
        pop edi
        pop esi
        ret 0xC
        public_488834 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx+8], eax
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        xor eax, eax
        pop edi
        pop esi
        ret 0xC
        public_488866 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0x338]
        jne public_4888c0
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_488887
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 0x3006
        call dword ptr ds : [edx+0x5C]
        public_488887 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4888aa
        public_488898 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_488898
        public_4888aa : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        xor eax, eax
        pop edi
        pop esi
        ret 0xC
        public_4888c0 : nop
        cmp eax, dword ptr ds : [esi+0x33C]
        jne public_488918
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_4888dd
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x3006
        call dword ptr ds : [edx+0x5C]
        public_4888dd : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_488902
        mov edi, edi
        public_4888f0 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4888f0
        public_488902 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        xor eax, eax
        pop edi
        pop esi
        ret 0xC
        public_488918 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5d2414 @0x48891e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2414
        push 0x5AF
/*FIXUP push offset public_5d1e40 @0x488928*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e40
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x488932*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_48893d : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x488800)
    }
}

#undef public_488834
#undef public_488866
#undef public_488887
#undef public_488898
#undef public_4888aa
#undef public_4888c0
#undef public_4888dd
#undef public_4888f0
#undef public_488902
#undef public_488918
#undef public_48893d
