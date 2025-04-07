#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222f30);
CLANG_FORWARD_PROC_SYMBOL(public_6227a20);

#define public_6227a5f _public_6227a5f
#define public_6227a7e _public_6227a7e
#define public_6227a92 _public_6227a92
#define public_6227a9f _public_6227a9f
#define public_6227ac4 _public_6227ac4
#define public_6227b22 _public_6227b22
#define public_6227b58 _public_6227b58

PROC_DECLARE(0x6227a20, internal_6227a20, public_6227a20);
extern "C" NAKED register_t __cdecl internal_6227a20()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        or esi, 0xFFFFFFFF
        test edi, edi
        je public_6227b58
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0xC]
        mov ebx, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x10]
        push 4
        push ecx
        mov ecx, ebx
        call public_6222f30
        test eax, eax
        jge public_6227a5f
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        add esp, 0x18
        ret 
        public_6227a5f : nop
        lea edx, ss:[esp+0x14]
        push 2
        push edx
        mov ecx, ebx
        call public_6222f30
        test eax, eax
        jge public_6227a7e
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        add esp, 0x18
        ret 
        public_6227a7e : nop
        lea eax, ss:[esp+0x30]
        push 2
        push eax
        mov ecx, ebx
        call public_6222f30
        mov esi, eax
        test esi, esi
        jge public_6227a9f
        public_6227a92 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        add esp, 0x18
        ret 
        public_6227a9f : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi]
        push edx
        push edi
        call dword ptr ds : [ecx+0x18]
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x2C], 0
        and ebp, 0xFFFF
        cmp word ptr ss : [esp+0x30], 0
        jbe public_6227b22
        public_6227ac4 : nop
        lea eax, ss:[esp+0x18]
        push 4
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        call public_6222f30
        test eax, eax
        jl public_6227a92
        lea ecx, ss:[esp+0x1C]
        push 0xC
        push ecx
        mov ecx, ebx
        call public_6222f30
        mov esi, eax
        test esi, esi
        jl public_6227a92
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        push edi
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ss : [esp+0x2C]
        inc eax
        cmp ax, word ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x2C], eax
        jb public_6227ac4
        public_6227b22 : nop
        mov edx, dword ptr ds : [edi]
        push ebp
        push edi
        call dword ptr ds : [edx+0x3C]
        test eax, eax
        je public_6227b58
        test ebp, ebp
        je public_6227b58
/*FIXUP push offset public_6256418 @0x6227b31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256418
        push 0x150
        mov eax, 0x100002
/*FIXUP push offset public_62563d0 @0x6227b40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62563d0
/*FIXUP push offset public_625528c @0x6227b45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625528c
        push eax
        mov eax, dword ptr ds : [public_624b004]
        call dword ptr ds : [eax]
        add esp, 0x14
        or esi, 0xFFFFFFFF
        public_6227b58 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6227a20)
    }
}

#undef public_6227a5f
#undef public_6227a7e
#undef public_6227a92
#undef public_6227a9f
#undef public_6227ac4
#undef public_6227b22
#undef public_6227b58
