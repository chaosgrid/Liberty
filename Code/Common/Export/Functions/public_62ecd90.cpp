#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ecd90);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62ecdd2 _public_62ecdd2
#define public_62ecdd4 _public_62ecdd4
#define public_62ecdea _public_62ecdea
#define public_62ecdfb _public_62ecdfb
#define public_62ece06 _public_62ece06
#define public_62ece08 _public_62ece08
#define public_62ece18 _public_62ece18
#define public_62ece1a _public_62ece1a
#define public_62ece33 _public_62ece33

PROC_DECLARE(0x62ecd90, internal_62ecd90, public_62ecd90);
extern "C" NAKED register_t __cdecl internal_62ecd90()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        mov ebx, ecx
        je public_62ece33
        mov ax, word ptr ds : [ebx+0xC]
        cmp ax, word ptr ds : [public_63a4aa4]
        lea ebp, ds:[ebx+0xC]
        mov dword ptr ss : [esp+0x14], ebp
        je public_62ece33
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        lea esi, ds:[ebx+4]
        je public_62ecdea
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62ecdea
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62ecdd2
        lea ecx, ds:[eax-8]
        jmp public_62ecdd4
        public_62ecdd2 : nop
        xor ecx, ecx
        public_62ecdd4 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ebp, eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        cmp eax, ebp
        je public_62ece33
        mov ebp, dword ptr ss : [esp+0x14]
        public_62ecdea : nop
        mov ecx, dword ptr ds : [esi]
        lea eax, ds:[edi+8]
        cmp eax, ecx
        je public_62ecdfb
        push eax
        mov ecx, esi
        call public_6341610
        public_62ecdfb : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        je public_62ece06
        lea edx, ds:[esi-8]
        jmp public_62ece08
        public_62ece06 : nop
        xor edx, edx
        public_62ece08 : nop
        mov eax, dword ptr ds : [ebx]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ece18
        add eax, 0xFFFFFFF8
        jmp public_62ece1a
        public_62ece18 : nop
        xor eax, eax
        public_62ece1a : nop
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push ebp
        call dword ptr ds : [eax+0x40]
        test eax, eax
        jne public_62ece33
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_62ece33 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62ecd90)
    }
}

#undef public_62ecdd2
#undef public_62ecdd4
#undef public_62ecdea
#undef public_62ecdfb
#undef public_62ece06
#undef public_62ece08
#undef public_62ece18
#undef public_62ece1a
#undef public_62ece33
