#include "FreeLancer-PCH.h"


#define public_4db140 _public_4db140
#define public_4db18a _public_4db18a

PROC_DECLARE(0x4db120, internal_4db120, public_4db120);
extern "C" NAKED register_t __cdecl internal_4db120()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x5A0]
        test eax, eax
        push esi
        je public_4db18a
        push ebp
        push edi
        movzx edi, byte ptr ss : [esp+0x14]
        lea esi, ds:[ebx+0x530]
        mov ebp, 0xA
        public_4db140 : nop
        mov ecx, dword ptr ds : [esi-0x28]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        add esi, 4
        dec ebp
        jne public_4db140
        mov ecx, dword ptr ds : [ebx+0x5C4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop ebp
        public_4db18a : nop
        movzx esi, byte ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [ebx+0x4CC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push esi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ebx, dword ptr ds : [ebx+0x580]
        mov edx, dword ptr ds : [ebx]
        push 0
        push esi
        push 1
        mov ecx, ebx
        call dword ptr ds : [edx+0xA8]
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4db120)
    }
}

#undef public_4db140
#undef public_4db18a
