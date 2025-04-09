#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435cf0);
CLANG_FORWARD_PROC_SYMBOL(public_43a3d0);
CLANG_FORWARD_PROC_SYMBOL(public_43a460);
CLANG_FORWARD_PROC_SYMBOL(public_449cd0);

#define public_435d23 _public_435d23
#define public_435d2e _public_435d2e
#define public_435d36 _public_435d36
#define public_435d55 _public_435d55
#define public_435dbf _public_435dbf

PROC_DECLARE(0x435cf0, internal_435cf0, public_435cf0);
extern "C" NAKED register_t __cdecl internal_435cf0()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        push edi
        mov ecx, offset public_668708
        call public_43a460
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_668740]
        push eax
        mov ecx, offset public_668708
        call public_43a3d0
        mov ebp, dword ptr ss : [esp+0x48]
        mov edi, eax
        add edi, 0x164
        xor ebx, ebx
        public_435d23 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_435d2e
        xor eax, eax
        jmp public_435d36
        public_435d2e : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_435d36 : nop
        cmp ebx, eax
        jge public_435dbf
        mov esi, dword ptr ds : [ecx+ebx*4]
        mov eax, dword ptr ds : [esi]
        push ebp
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_435d55
        inc ebx
        jmp public_435d23
        public_435d55 : nop
        lea ecx, ds:[esi+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x1C], ecx
        add esi, 0x10
        mov ecx, 9
        lea edi, ss:[esp+0x20]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        call public_449cd0
        mov esi, eax
        test esi, esi
        je public_435dbf
        mov edx, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [edx]
        mov edi, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push edi
        push eax
        call dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        push edi
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        public_435dbf : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x435cf0)
    }
}

#undef public_435d23
#undef public_435d2e
#undef public_435d36
#undef public_435d55
#undef public_435dbf
