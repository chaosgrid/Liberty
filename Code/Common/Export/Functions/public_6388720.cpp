#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_636eed0);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6386380);
CLANG_FORWARD_PROC_SYMBOL(public_6388720);

#define public_638877c _public_638877c
#define public_6388798 _public_6388798
#define public_63887a1 _public_63887a1
#define public_63887e3 _public_63887e3
#define public_63887fb _public_63887fb
#define public_638880b _public_638880b

PROC_DECLARE(0x6388720, internal_6388720, public_6388720);
extern "C" NAKED register_t __cdecl internal_6388720()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [public_658b8fc]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        xor ebx, ebx
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b254]
        mov esi, eax
        add esi, ecx
        push esi
        call public_636ec70
        push esi
        push ebx
        push eax
        mov dword ptr ss : [esp+0x24], eax
        call public_636eed0
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x34]
        push ecx
        push edx
        push eax
        call public_6386380
        add esp, 0x20
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_63887a1
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_63887a1
        public_638877c : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call public_6370570
        add esp, 4
        test eax, eax
        jl public_6388798
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+eax*4+4], edx
        inc ebx
        public_6388798 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638877c
        public_63887a1 : nop
        lea edx, ss:[esp+0x14]
        push edx
        call public_636ecc0
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        push ebx
/*FIXUP push offset public_63f7cb4 @0x63887b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7cb4
        push eax
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        test eax, eax
        je public_638880b
        mov edi, dword ptr ds : [eax+4]
        push eax
        xor esi, esi
        call public_636ec10
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        jle public_638880b
        mov ebx, 4
        public_63887e3 : nop
        test edi, edi
        je public_63887fb
        mov ecx, dword ptr ss : [esp+0x1C]
        push esi
/*FIXUP push offset public_63f7cb4 @0x63887ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7cb4
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_63887fb : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ebx+edx+4]
        inc esi
        add ebx, 4
        cmp esi, ebp
        jl public_63887e3
        public_638880b : nop
        lea eax, ss:[esp+0x10]
        push eax
        call public_636ecc0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6388720)
    }
}

#undef public_638877c
#undef public_6388798
#undef public_63887a1
#undef public_63887e3
#undef public_63887fb
#undef public_638880b
