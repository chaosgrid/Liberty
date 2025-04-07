#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f17e0);
CLANG_FORWARD_PROC_SYMBOL(public_65f28f0);
CLANG_FORWARD_PROC_SYMBOL(public_65f6760);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f67b1 _public_65f67b1
#define public_65f67c6 _public_65f67c6
#define public_65f67cc _public_65f67cc
#define public_65f67d6 _public_65f67d6
#define public_65f67e7 _public_65f67e7

PROC_DECLARE(0x65f6760, internal_65f6760, public_65f6760);
extern "C" NAKED register_t __cdecl internal_65f6760()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_6603144]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x14]
        push edi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [edi+0xC], 0
        mov eax, dword ptr ds : [public_6603148]
        lea ecx, ds:[esi+0x24]
        push ecx
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [esi]
        call public_65f17e0
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_65f67d6
        mov ecx, dword ptr ds : [eax-4]
        push ebp
        lea ebp, ds:[eax-4]
        lea edi, ds:[eax+ecx*4]
        dec ecx
        js public_65f67cc
        inc ecx
        mov dword ptr ss : [esp+0xC], ecx
        public_65f67b1 : nop
        mov ecx, dword ptr ds : [edi-4]
        sub edi, 4
        test ecx, ecx
        je public_65f67c6
        call public_65f28f0
        mov dword ptr ds : [edi], 0
        public_65f67c6 : nop
        dec dword ptr ss : [esp+0xC]
        jne public_65f67b1
        public_65f67cc : nop
        push ebp
        call public_6600bb0
        add esp, 4
        pop ebp
        public_65f67d6 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_65f67e7
        call public_65f17e0
        mov dword ptr ds : [esi], 0
        public_65f67e7 : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65f6760)
    }
}

#undef public_65f67b1
#undef public_65f67c6
#undef public_65f67cc
#undef public_65f67d6
#undef public_65f67e7
