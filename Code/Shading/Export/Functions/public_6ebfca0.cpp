#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebfca0);

#define public_6ebfcb0 _public_6ebfcb0
#define public_6ebfcd6 _public_6ebfcd6
#define public_6ebfce2 _public_6ebfce2
#define public_6ebfcf1 _public_6ebfcf1
#define public_6ebfd03 _public_6ebfd03
#define public_6ebfd15 _public_6ebfd15

PROC_DECLARE(0x6ebfca0, internal_6ebfca0, public_6ebfca0);
extern "C" NAKED register_t __cdecl internal_6ebfca0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, offset public_6ed57d0
        mov ebp, 0xA
        or ebx, 0xFFFFFFFF
        public_6ebfcb0 : nop
        mov eax, dword ptr ds : [esi-0x24]
        sub esi, 0x14
        cmp eax, ebx
        je public_6ebfcf1
        cmp dword ptr ds : [esi-8], ebx
        je public_6ebfce2
        mov ecx, dword ptr ds : [esi-4]
        test ecx, ecx
        je public_6ebfcd6
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x44]
        mov dword ptr ds : [esi-4], 0
        public_6ebfcd6 : nop
        mov edx, dword ptr ds : [esi-8]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        public_6ebfce2 : nop
        mov edx, dword ptr ds : [esi-0x10]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [esi-0x10], ebx
        public_6ebfcf1 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ebfd03
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6ebfd03 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ebfd15
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi], 0
        public_6ebfd15 : nop
        dec ebp
        jne public_6ebfcb0
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ebfca0)
    }
}

#undef public_6ebfcb0
#undef public_6ebfcd6
#undef public_6ebfce2
#undef public_6ebfcf1
#undef public_6ebfd03
#undef public_6ebfd15
