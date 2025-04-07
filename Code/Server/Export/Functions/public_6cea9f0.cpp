#include "Server-PCH.h"


#define public_6ceaa24 _public_6ceaa24
#define public_6ceaa3e _public_6ceaa3e
#define public_6ceaa63 _public_6ceaa63
#define public_6ceaa79 _public_6ceaa79

PROC_DECLARE(0x6cea9f0, internal_6cea9f0, public_6cea9f0);
extern "C" NAKED register_t __cdecl internal_6cea9f0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, 2
        push edi
        mov edi, ecx
        je public_6ceaa79
        cmp eax, 3
        je public_6ceaa79
        mov ecx, esi
        call dword ptr ds : [public_6d64210]
        fcomp dword ptr ds : [public_6d65188]
        mov ebp, dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jp public_6ceaa24
        cmp dword ptr ds : [esi+0x18], ebp
        je public_6ceaa79
        public_6ceaa24 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d642a4]
        test al, al
        je public_6ceaa3e
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov byte ptr ds : [eax+0xC], 1
        pop ebp
        ret 0x10
        public_6ceaa3e : nop
        mov edx, dword ptr ds : [edi]
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebx
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0x22C]
        mov al, byte ptr ss : [esp+0x20]
        test al, al
        je public_6ceaa63
        mov eax, dword ptr ds : [edi]
        push ebx
        push esi
        mov ecx, edi
        call dword ptr ds : [eax+0x230]
        public_6ceaa63 : nop
        mov ecx, dword ptr ds : [esi+4]
        xor edx, edx
        mov dx, word ptr ds : [ecx+4]
        push ebp
        push 0
        mov ecx, ebx
        push edx
        call dword ptr ds : [public_6d641ec]
        pop ebx
        public_6ceaa79 : nop
        pop edi
        pop esi
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6cea9f0)
    }
}

#undef public_6ceaa24
#undef public_6ceaa3e
#undef public_6ceaa63
#undef public_6ceaa79
