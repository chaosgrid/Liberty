#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4f20);

#define public_65c4f74 _public_65c4f74
#define public_65c4f84 _public_65c4f84
#define public_65c4fc6 _public_65c4fc6

PROC_DECLARE(0x65c4f20, internal_65c4f20, public_65c4f20);
extern "C" NAKED register_t __cdecl internal_65c4f20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        sub esp, 0x404
        test eax, eax
        push ebx
        push ebp
        push edi
        je public_65c4fc6
        mov edx, dword ptr ds : [ecx+0x560]
        test edx, edx
        lea ebp, ds:[ecx+0x560]
        jne public_65c4fc6
        push 0
        lea ebx, ds:[ecx+0x460]
        push ebp
        push ebx
        mov dword ptr ss : [ebp], 0x40
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x2C]
        test eax, eax
        je public_65c4f74
        pop edi
        mov dword ptr ss : [ebp], 0
        pop ebp
        pop ebx
        add esp, 0x404
        ret 
        public_65c4f74 : nop
        mov eax, dword ptr ss : [ebp]
        xor edi, edi
        test eax, eax
        jbe public_65c4fc6
        push esi
        mov esi, dword ptr ds : [public_65c7010]
        public_65c4f84 : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x18], 0x400
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x28]
/*FIXUP push offset public_65c7540 @0x65c4f9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7540
        call esi
/*FIXUP push offset public_65c7530 @0x65c4fa5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7530
        call esi
        lea edx, ss:[esp+0x14]
        push edx
        call esi
/*FIXUP push offset public_65c752c @0x65c4fb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c752c
        call esi
        mov eax, dword ptr ss : [ebp]
        inc edi
        add ebx, 4
        cmp edi, eax
        jb public_65c4f84
        pop esi
        public_65c4fc6 : nop
        pop edi
        pop ebp
        pop ebx
        add esp, 0x404
        ret 
        UNREACHABLE_TRAP(0x65c4f20)
    }
}

#undef public_65c4f74
#undef public_65c4f84
#undef public_65c4fc6
