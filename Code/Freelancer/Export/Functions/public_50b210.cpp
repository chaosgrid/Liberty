#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_550d40);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_50b255 _public_50b255
#define public_50b28b _public_50b28b
#define public_50b2a2 _public_50b2a2
#define public_50b2bc _public_50b2bc

PROC_DECLARE(0x50b210, internal_50b210, public_50b210);
extern "C" NAKED register_t __cdecl internal_50b210()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        push ebp
        mov edi, ecx
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        mov eax, dword ptr ds : [public_675074]
        test eax, eax
        jne public_50b255
        call public_5b73e0
        mov dword ptr ds : [public_675074], eax
        public_50b255 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov ecx, dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0x34]
        test al, al
        jne public_50b28b
        mov ecx, dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        call dword ptr ds : [eax+0x44]
        public_50b28b : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax]
        fstp dword ptr ds : [edi+0x70]
        mov ebx, dword ptr ds : [edi+0x68]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_50b2bc
        public_50b2a2 : nop
        mov edx, dword ptr ds : [edi+0x70]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push edx
        push eax
        push ebp
        call public_550d40
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_50b2a2
        public_50b2bc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x50b210)
    }
}

#undef public_50b255
#undef public_50b28b
#undef public_50b2a2
#undef public_50b2bc
