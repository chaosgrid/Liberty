#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_636edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6374590);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);
CLANG_FORWARD_PROC_SYMBOL(public_638d5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6390f10);
CLANG_FORWARD_PROC_SYMBOL(public_6391200);
CLANG_FORWARD_PROC_SYMBOL(public_6391c20);

#define public_6390f46 _public_6390f46
#define public_6390f4f _public_6390f4f
#define public_6390f57 _public_6390f57
#define public_6390f7b _public_6390f7b
#define public_6390f8d _public_6390f8d
#define public_6390fa7 _public_6390fa7
#define public_6390fb2 _public_6390fb2
#define public_6390fbf _public_6390fbf
#define public_6390ff5 _public_6390ff5
#define public_639106d _public_639106d
#define public_63910bf _public_63910bf

PROC_DECLARE(0x6390f10, internal_6390f10, public_6390f10);
extern "C" NAKED register_t __cdecl internal_6390f10()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        push eax
        xor edi, edi
        call public_636ec10
        add esp, 4
        cmp eax, 2
        jne public_6390f46
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [eax+4]
        mov ebp, dword ptr ss : [esp+0x1C]
        cmp edi, ebp
        jne public_6390ff5
        mov edi, dword ptr ds : [eax+8]
        jmp public_6390ff5
        public_6390f46 : nop
        cmp dword ptr ds : [public_658b24c], 3
        jne public_6390f57
        public_6390f4f : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 
        public_6390f57 : nop
        mov edx, dword ptr ds : [public_658b8e0]
        mov ebp, dword ptr ss : [esp+0x1C]
        inc edx
        mov dword ptr ds : [public_658b8e0], edx
        mov eax, dword ptr ss : [ebp+0x3C]
        test eax, eax
        je public_6390f8d
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_6390f8d
        public_6390f7b : nop
        mov edx, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [eax+0x48], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6390f7b
        public_6390f8d : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_6390fbf
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        add ecx, 4
        test eax, eax
        je public_6390fbf
        mov edx, dword ptr ds : [public_658b8e0]
        public_6390fa7 : nop
        cmp dword ptr ds : [eax+0x48], edx
        jne public_6390fb2
        test edi, edi
        jne public_6390f4f
        mov edi, eax
        public_6390fb2 : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6390fa7
        test edi, edi
        jne public_6390ff5
        public_6390fbf : nop
        mov eax, dword ptr ss : [ebp+0x4C]
        mov ecx, dword ptr ds : [esi+0x14]
        push eax
        and ecx, 0xFFFFFF
        push ecx
/*FIXUP push offset public_63fb6d8 @0x6390fcd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb6d8
        call public_6356960
        push esi
        push 0
        push 0
        push ebp
/*FIXUP push offset public_63ee94c @0x6390fdd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee94c
        call public_6378820
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x2C
        public_6390ff5 : nop
        mov edx, dword ptr ds : [public_658b80c]
        push edx
        call public_636ec70
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_658b8e0]
        inc eax
        mov dword ptr ds : [public_658b8e0], eax
        mov dword ptr ds : [edi+0x48], eax
        lea eax, ss:[esp+0x1C]
        push eax
        push ebp
        push esi
        call public_6391c20
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        cmp eax, 2
        jl public_639106d
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        call public_636ec10
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+8]
        add esp, 4
        push eax
        mov eax, dword ptr ss : [ebp+0x4C]
        push eax
        and ecx, 0xFFFFFF
        push ecx
        push edx
        call public_6370570
        add esp, 4
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fb690 @0x639105e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb690
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x1C
        public_639106d : nop
        inc dword ptr ds : [public_658bca8]
        mov ecx, dword ptr ds : [edi+0x34]
        mov edx, dword ptr ss : [ebp+0x34]
        push ecx
        push edx
        call public_6374590
        push esi
        push eax
        mov dword ptr ss : [esp+0x20], eax
        call public_636e400
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call public_636edf0
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        push esi
        call public_638d5a0
        mov ebx, eax
        add esp, 0x20
        test ebx, ebx
        je public_63910bf
        mov eax, dword ptr ss : [esp+0x18]
        push edi
        push ebp
        push eax
        push ebx
        push esi
        call public_6391200
        add esp, 0x14
        public_63910bf : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_636ecc0
        lea edx, ss:[esp+0x1C]
        push edx
        call public_636ecc0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6390f10)
    }
}

#undef public_6390f46
#undef public_6390f4f
#undef public_6390f57
#undef public_6390f7b
#undef public_6390f8d
#undef public_6390fa7
#undef public_6390fb2
#undef public_6390fbf
#undef public_6390ff5
#undef public_639106d
#undef public_63910bf
