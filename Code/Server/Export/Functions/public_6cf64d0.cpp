#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf64d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60acb);

#define public_6cf6513 _public_6cf6513
#define public_6cf6529 _public_6cf6529
#define public_6cf6554 _public_6cf6554
#define public_6cf656a _public_6cf656a

PROC_DECLARE(0x6cf64d0, internal_6cf64d0, public_6cf64d0);
extern "C" NAKED register_t __cdecl internal_6cf64d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60acb @0x6cf64d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60acb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx], offset public_6d65f68
        mov ebp, dword ptr ds : [ebx+0x90]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+0x8C]
        mov dword ptr ss : [esp+0x20], 1
        je public_6cf6529
        public_6cf6513 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d641e8]
        cmp esi, ebp
        jne public_6cf6513
        public_6cf6529 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov ebp, dword ptr ds : [ebx+0x84]
        mov esi, dword ptr ss : [ebp]
        lea edi, ds:[ebx+0x80]
        add esp, 4
        cmp esi, ebp
        mov byte ptr ss : [esp+0x20], al
        je public_6cf656a
        public_6cf6554 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d643d0]
        cmp esi, ebp
        jne public_6cf6554
        public_6cf656a : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6d5ffb0
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov eax, dword ptr ds : [ebx+0x74]
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        pop edi
        mov dword ptr ds : [ebx+0x74], esi
        mov dword ptr ds : [ebx+0x78], esi
        mov dword ptr ds : [ebx+0x7C], esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6cf64d0)
    }
}

#undef public_6cf6513
#undef public_6cf6529
#undef public_6cf6554
#undef public_6cf656a
