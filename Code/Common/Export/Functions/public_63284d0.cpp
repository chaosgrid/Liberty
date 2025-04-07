#include "Common-PCH.h"


#define public_6328513 _public_6328513
#define public_6328559 _public_6328559
#define public_6328561 _public_6328561

PROC_DECLARE(0x63284d0, internal_63284d0, public_63284d0);
extern "C" NAKED register_t __cdecl internal_63284d0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        je public_6328561
        push edi
        push 0xA
        push 0xA
        push 0
        push 0
        call dword ptr ds : [public_6399074]
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x3C]
        push edi
        push eax
        call dword ptr ds : [public_6399070]
        test eax, eax
        jne public_6328513
        xor ecx, ecx
        lea edx, ds:[esi+0x40]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [edx+0xC], ecx
        jmp public_6328559
        public_6328513 : nop
        cmp eax, 0xFFFFFFFF
        je public_6328559
        lea eax, ss:[esp+8]
        push eax
        push edi
        call dword ptr ds : [public_63990c0]
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [esi+0x38]
        neg ecx
        push ecx
        neg edx
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [public_6399398]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        lea ecx, ds:[esi+0x40]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        public_6328559 : nop
        push edi
        call dword ptr ds : [public_639907c]
        pop edi
        public_6328561 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        add esi, 0x40
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x63284d0)
    }
}

#undef public_6328513
#undef public_6328559
#undef public_6328561
