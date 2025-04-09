#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_447210);
CLANG_FORWARD_PROC_SYMBOL(public_448540);
CLANG_FORWARD_PROC_SYMBOL(public_448680);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c3e46 _public_4c3e46
#define public_4c3e73 _public_4c3e73
#define public_4c3ea0 _public_4c3ea0
#define public_4c3ec0 _public_4c3ec0
#define public_4c3eee _public_4c3eee

PROC_DECLARE(0x4c3e20, internal_4c3e20, public_4c3e20);
extern "C" NAKED register_t __cdecl internal_4c3e20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67337c]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp eax, ebx
        push esi
        je public_4c3eee
        push edi
        mov edi, dword ptr ds : [public_672970]
        mov dword ptr ds : [public_67337c], ebx
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_4c3e73
        public_4c3e46 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_672974]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_672974], ecx
        jne public_4c3e46
        public_4c3e73 : nop
        test ebx, 0x3FFFFFFF
        pop edi
        je public_4c3ec0
        push ebx
        call dword ptr ds : [public_5c61fc]
        add esp, 4
        test eax, eax
        je public_4c3ea0
/*FIXUP push offset public_67296c @0x4c3e8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67296c
        mov ecx, eax
        call dword ptr ds : [public_5c6458]
        jmp public_4c3ec0
        lea esp, ss:[esp]
        public_4c3ea0 : nop
        push ebx
        push 0xAE
/*FIXUP push offset public_5d6d00 @0x4c3ea6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6d00
        mov eax, 0x100001
/*FIXUP push offset public_5d6ccc @0x4c3eb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6ccc
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_4c3ec0 : nop
        call public_446be0
        mov esi, eax
        test esi, esi
        je public_4c3eee
/*FIXUP push offset public_672960 @0x4c3ecb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_672960
        mov ecx, esi
        call public_448540
        mov ecx, dword ptr ds : [public_67337c]
        push ecx
        mov ecx, esi
        call public_448680
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_447210
        public_4c3eee : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4c3e20)
    }
}

#undef public_4c3e46
#undef public_4c3e73
#undef public_4c3ea0
#undef public_4c3ec0
#undef public_4c3eee
