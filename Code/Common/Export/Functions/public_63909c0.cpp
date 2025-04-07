#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e3c0);
CLANG_FORWARD_PROC_SYMBOL(public_636e5a0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_636edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6374560);
CLANG_FORWARD_PROC_SYMBOL(public_6374590);
CLANG_FORWARD_PROC_SYMBOL(public_63909c0);

#define public_63909e2 _public_63909e2
#define public_63909f4 _public_63909f4
#define public_6390a11 _public_6390a11
#define public_6390a21 _public_6390a21
#define public_6390a2e _public_6390a2e
#define public_6390a69 _public_6390a69
#define public_6390a90 _public_6390a90
#define public_6390aa5 _public_6390aa5
#define public_6390ada _public_6390ada
#define public_6390ae4 _public_6390ae4
#define public_6390afe _public_6390afe

PROC_DECLARE(0x63909c0, internal_63909c0, public_63909c0);
extern "C" NAKED register_t __cdecl internal_63909c0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi+0xC]
        test edx, edx
        push edi
        je public_63909f4
        mov eax, dword ptr ds : [edx+4]
        lea ecx, ds:[edx+4]
        add ecx, 4
        test eax, eax
        je public_63909f4
        mov edi, 0x1000
        public_63909e2 : nop
        test dword ptr ds : [eax+0x50], edi
        jne public_6390afe
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_63909e2
        public_63909f4 : nop
        mov eax, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [public_658bca8]
        mov edx, dword ptr ds : [edx+8]
        inc edi
        test eax, eax
        mov dword ptr ds : [public_658bca8], edi
        jne public_6390a11
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6390a11 : nop
        test edx, edx
        jne public_6390a21
        mov eax, dword ptr ds : [eax+0x34]
        push edx
        push eax
        call public_636e3c0
        jmp public_6390a2e
        public_6390a21 : nop
        mov ecx, dword ptr ds : [edx+0x34]
        mov edx, dword ptr ds : [eax+0x34]
        push ecx
        push edx
        call public_6374590
        public_6390a2e : nop
        add esp, 8
        push eax
        mov dword ptr ss : [esp+0x14], eax
        call public_636edf0
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        push eax
        call public_636e5a0
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 0xC
        test eax, eax
        je public_6390aa5
        mov ebx, dword ptr ds : [eax+4]
        push eax
        xor edi, edi
        call public_636ec10
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        jle public_6390aa5
        mov esi, 4
        public_6390a69 : nop
        cmp esi, 0xC
        jl public_6390a90
        inc dword ptr ds : [public_658bca8]
        mov ecx, dword ptr ds : [ebx+0x34]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call public_6374560
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        add esp, 8
        test ecx, ecx
        je public_6390ae4
        public_6390a90 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+0xC]
        mov ebx, dword ptr ds : [esi+edx+4]
        inc edi
        add esi, 4
        cmp edi, ebp
        jl public_6390a69
        mov esi, ecx
        public_6390aa5 : nop
        cmp dword ptr ds : [public_658b078], 3
        jl public_6390ada
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        and ecx, 0xFFFFFF
        push ecx
        push edx
        call public_636ec10
        add esp, 4
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fb4f8 @0x6390acb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb4f8
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_6390ada : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6390ae4 : nop
        mov edx, dword ptr ds : [public_658bc98]
        lea eax, ss:[esp+0x10]
        inc edx
        push eax
        mov dword ptr ds : [public_658bc98], edx
        call public_636ecc0
        add esp, 4
        public_6390afe : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x63909c0)
    }
}

#undef public_63909e2
#undef public_63909f4
#undef public_6390a11
#undef public_6390a21
#undef public_6390a2e
#undef public_6390a69
#undef public_6390a90
#undef public_6390aa5
#undef public_6390ada
#undef public_6390ae4
#undef public_6390afe
