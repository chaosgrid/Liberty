#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_638cd80);
CLANG_FORWARD_PROC_SYMBOL(public_638e830);

#define public_638e87b _public_638e87b
#define public_638e890 _public_638e890
#define public_638e8b1 _public_638e8b1
#define public_638e8cd _public_638e8cd
#define public_638e904 _public_638e904
#define public_638e974 _public_638e974
#define public_638e981 _public_638e981
#define public_638e9d6 _public_638e9d6

PROC_DECLARE(0x638e830, internal_638e830, public_638e830);
extern "C" NAKED register_t __cdecl internal_638e830()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_658b8e0]
        mov eax, dword ptr ds : [public_658b078]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        inc ecx
        cmp eax, 4
        push ebp
        mov ebp, dword ptr ds : [public_63991e8]
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0x40140000
        mov dword ptr ds : [public_658b8e0], ecx
        jl public_638e87b
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63fa904 @0x638e870*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa904
        push ecx
        call ebp
        add esp, 0xC
        public_638e87b : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        push esi
        push edi
        je public_638e8b1
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_638e8b1
        public_638e890 : nop
        mov edx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [edx+0x48], esi
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [eax+0x48], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638e890
        public_638e8b1 : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_638e981
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_638e981
        public_638e8cd : nop
        mov eax, dword ptr ds : [public_658b8e0]
        cmp dword ptr ds : [esi+0x48], eax
        je public_638e974
        mov eax, dword ptr ds : [public_658b078]
        test eax, eax
        je public_638e904
        mov ecx, dword ptr ds : [public_658b870]
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [ebx+0x4C]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
/*FIXUP push offset public_63fa8b8 @0x638e8f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa8b8
        push ecx
        call ebp
        add esp, 0x14
        public_638e904 : nop
        inc dword ptr ds : [public_658bbf8]
        mov edx, dword ptr ds : [ebx+0x3C]
        push esi
        push edx
        call public_636e400
        mov eax, dword ptr ds : [esi+0x3C]
        push ebx
        push eax
        sub edi, 4
        call public_636e400
        mov ecx, dword ptr ds : [esi+0x3C]
        push ecx
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b24c]
        add esp, 0x14
        cmp eax, ecx
        jge public_638e974
        mov ecx, dword ptr ds : [public_658bbf0]
        lea edx, ss:[esp+0x10]
        push edx
        push 6
        inc ecx
        push esi
        push esi
        mov dword ptr ds : [public_658bbf0], ecx
        call public_638cd80
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        cmp eax, 2
        jl public_638e974
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63fa88c @0x638e969*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa88c
        push ecx
        call ebp
        add esp, 0xC
        public_638e974 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638e8cd
        public_638e981 : nop
        mov edx, dword ptr ds : [ebx+0x3C]
        push edx
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b24c]
        add esp, 4
        cmp eax, ecx
        pop edi
        pop esi
        jge public_638e9d6
        mov edx, dword ptr ds : [public_658bbf0]
        lea eax, ss:[esp+8]
        push eax
        push 6
        inc edx
        push ebx
        push ebx
        mov dword ptr ds : [public_658bbf0], edx
        call public_638cd80
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        cmp eax, 2
        jl public_638e9d6
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov edx, dword ptr ds : [public_658b7fc]
        push ecx
/*FIXUP push offset public_63fa88c @0x638e9cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa88c
        push edx
        call ebp
        add esp, 0xC
        public_638e9d6 : nop
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x638e830)
    }
}

#undef public_638e87b
#undef public_638e890
#undef public_638e8b1
#undef public_638e8cd
#undef public_638e904
#undef public_638e974
#undef public_638e981
#undef public_638e9d6
