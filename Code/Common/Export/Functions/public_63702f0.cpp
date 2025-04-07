#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63702f0);

#define public_6370316 _public_6370316
#define public_6370325 _public_6370325
#define public_6370334 _public_6370334
#define public_6370338 _public_6370338
#define public_6370344 _public_6370344
#define public_637034b _public_637034b
#define public_6370352 _public_6370352
#define public_63703ac _public_63703ac

PROC_DECLARE(0x63702f0, internal_63702f0, public_63702f0);
extern "C" NAKED register_t __cdecl internal_63702f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        lea ebp, ds:[edx+edi*4+4]
        lea esi, ds:[edx+eax*4+4]
        xor ecx, ecx
        lea eax, ds:[ebx+eax*4+4]
        mov dword ptr ss : [esp+0x14], ebp
        public_6370316 : nop
        cmp esi, ebp
        je public_6370338
        mov ebp, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        add eax, 4
        cmp edx, ebp
        je public_6370334
        public_6370325 : nop
        test ecx, ecx
        jne public_6370344
        mov ebp, dword ptr ds : [eax]
        mov ecx, eax
        add eax, 4
        cmp edx, ebp
        jne public_6370325
        public_6370334 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6370338 : nop
        mov edx, dword ptr ds : [esi+4]
        add esi, 4
        test edx, edx
        je public_637034b
        jmp public_6370316
        public_6370344 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_637034b : nop
        test ecx, ecx
        jne public_6370352
        lea ecx, ds:[eax+4]
        public_6370352 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, ecx
        sub eax, ebx
        sub eax, 8
        sar eax, 2
        mov dword ptr ds : [edx], eax
        not eax
        xor eax, edi
        and eax, 1
        mov dword ptr ds : [esi], eax
        cmp dword ptr ds : [public_658b078], 4
        jl public_63703ac
        mov edx, dword ptr ds : [edx]
        push eax
        mov eax, dword ptr ds : [ecx-4]
        mov ecx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [ebp]
        and ecx, 0xFFFFFF
        push ecx
        mov ecx, dword ptr ds : [eax+0x14]
        push edx
        mov edx, dword ptr ds : [public_658b7fc]
        and ecx, 0xFFFFFF
        push ecx
        push edi
/*FIXUP push offset public_63ef3b8 @0x637039d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef3b8
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x1C
        public_63703ac : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63702f0)
    }
}

#undef public_6370316
#undef public_6370325
#undef public_6370334
#undef public_6370338
#undef public_6370344
#undef public_637034b
#undef public_6370352
#undef public_63703ac
