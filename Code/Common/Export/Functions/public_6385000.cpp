#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6384da0);
CLANG_FORWARD_PROC_SYMBOL(public_6385000);

#define public_6385024 _public_6385024
#define public_6385065 _public_6385065
#define public_6385073 _public_6385073
#define public_63850ad _public_63850ad
#define public_63850bf _public_63850bf

PROC_DECLARE(0x6385000, internal_6385000, public_6385000);
extern "C" NAKED register_t __cdecl internal_6385000()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b078]
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_63991e8]
        je public_6385024
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f77ac @0x6385019*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f77ac
        push eax
        call edi
        add esp, 8
        public_6385024 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x1C]
        lea ebx, ds:[ecx-1]
        mov edx, ebx
        imul edx, ebp
        shl edx, 3
        push edx
        call dword ptr ds : [public_6399328]
        mov esi, eax
        add esp, 4
        test esi, esi
        mov dword ptr ss : [esp+0x18], esi
        jne public_6385065
        mov eax, dword ptr ds : [public_658b7fc]
        push ebp
/*FIXUP push offset public_63f7768 @0x6385051*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7768
        push eax
        call edi
        push esi
        push esi
        push 4
        call public_6378600
        add esp, 0x18
        public_6385065 : nop
        mov eax, dword ptr ss : [esp+0x20]
        xor edi, edi
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], esi
        jle public_63850bf
        public_6385073 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        lea esi, ds:[eax+ebx*8]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        push ebx
        call public_6384da0
        add esp, 0x18
        test eax, eax
        jne public_63850ad
        push edi
/*FIXUP push offset public_63f7748 @0x6385095*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7748
        call public_6356960
        push 0
        push 0
        push 1
        call public_6378600
        add esp, 0x14
        public_63850ad : nop
        inc edi
        cmp edi, ebp
        lea eax, ds:[esi+8]
        jl public_6385073
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_63850bf : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6385000)
    }
}

#undef public_6385024
#undef public_6385065
#undef public_6385073
#undef public_63850ad
#undef public_63850bf
