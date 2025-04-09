#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_439b50);
CLANG_FORWARD_PROC_SYMBOL(public_439c10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_439b80 _public_439b80
#define public_439ba6 _public_439ba6
#define public_439bc8 _public_439bc8
#define public_439bd7 _public_439bd7
#define public_439be3 _public_439be3
#define public_439bfa _public_439bfa

PROC_DECLARE(0x439b50, internal_439b50, public_439b50);
extern "C" NAKED register_t __cdecl internal_439b50()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov esi, ecx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x1C], ebp
        call public_432240
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+0x24]
        je public_439b80
        mov edi, dword ptr ds : [eax+0x10]
        jmp public_439ba6
        mov edi, edi
        public_439b80 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push 0x100
/*FIXUP push offset public_5caf30 @0x439b8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caf78 @0x439b94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor edi, edi
        public_439ba6 : nop
        mov al, byte ptr ds : [esi+0x5A]
        test al, al
        jne public_439bc8
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        je public_439bc8
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push ebp
        call dword ptr ds : [edx+0x9C]
        public_439bc8 : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_439be3
        mov ebp, dword ptr ds : [public_5c6168]
        public_439bd7 : nop
        mov ecx, dword ptr ds : [esi+8]
        call ebp
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x10]
        jne public_439bd7
        public_439be3 : nop
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        je public_439bfa
        mov ecx, esi
        call public_439c10
        push esi
        call public_5b7e1d
        add esp, 4
        public_439bfa : nop
        mov dword ptr ds : [edi+4], 0
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x439b50)
    }
}

#undef public_439b80
#undef public_439ba6
#undef public_439bc8
#undef public_439bd7
#undef public_439be3
#undef public_439bfa
