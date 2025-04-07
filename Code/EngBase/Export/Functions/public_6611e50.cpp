#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611d80);
CLANG_FORWARD_PROC_SYMBOL(public_6611e50);
CLANG_FORWARD_PROC_SYMBOL(public_6613420);
CLANG_FORWARD_PROC_SYMBOL(public_6619790);
CLANG_FORWARD_PROC_SYMBOL(public_661a640);
CLANG_FORWARD_PROC_SYMBOL(public_661a690);
CLANG_FORWARD_PROC_SYMBOL(public_6628230);

#define public_6611e77 _public_6611e77
#define public_6611ecf _public_6611ecf
#define public_6611ee7 _public_6611ee7
#define public_6611f2e _public_6611f2e
#define public_6611f4a _public_6611f4a

PROC_DECLARE(0x6611e50, internal_6611e50, public_6611e50);
extern "C" NAKED register_t __cdecl internal_6611e50()
{
    __asm
    {
        mov eax, 0x201C
        call public_6628230
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x2024]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp+4], eax
        jle public_6611f4a
        push ebx
        push ebp
        push esi
        push edi
        public_6611e77 : nop
        mov ecx, dword ptr ss : [esp+0x2030]
        mov ebp, dword ptr ds : [ecx+eax*4]
        test ebp, ebp
        je public_6611f2e
        push ebp
        call dword ptr ds : [public_662900c]
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        lea esi, ds:[edx+4]
        push eax
        mov ecx, esi
        call public_661a690
        lea ecx, ss:[esp+0x1C]
        lea edx, ss:[esp+0x28]
        push ecx
        push edx
        mov ecx, esi
        mov ebx, eax
        call public_6619790
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], 0
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], edi
        je public_6611ee7
        public_6611ecf : nop
        mov ecx, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x18]
        call public_661a640
        cmp dword ptr ss : [esp+0x18], ebx
        jne public_6611ecf
        public_6611ee7 : nop
        push ebx
        lea eax, ss:[esp+0x28]
        push edi
        push eax
        mov ecx, esi
        call public_6613420
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6611f2e
        push ebp
        lea ecx, ss:[esp+0x30]
/*FIXUP push offset public_662a160 @0x6611f02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a160
        push ecx
        call public_6611d80
        mov edx, dword ptr ds : [public_6629004]
        push eax
        push 0x1D8
        mov ecx, 0x100002
/*FIXUP push offset public_662a0f0 @0x6611f1e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0f0
/*FIXUP push offset public_662a0d4 @0x6611f23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        public_6611f2e : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x2034]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jl public_6611e77
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6611f4a : nop
        xor eax, eax
        add esp, 0x201C
        ret 8
        UNREACHABLE_TRAP(0x6611e50)
    }
}

#undef public_6611e77
#undef public_6611ecf
#undef public_6611ee7
#undef public_6611f2e
#undef public_6611f4a
