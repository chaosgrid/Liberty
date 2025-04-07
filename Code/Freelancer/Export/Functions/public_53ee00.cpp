#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_53ee2f _public_53ee2f
#define public_53ee34 _public_53ee34
#define public_53ee40 _public_53ee40
#define public_53ee56 _public_53ee56
#define public_53ee58 _public_53ee58
#define public_53ee71 _public_53ee71
#define public_53ee73 _public_53ee73
#define public_53eec6 _public_53eec6

PROC_DECLARE(0x53ee00, internal_53ee00, public_53ee00);
extern "C" NAKED register_t __cdecl internal_53ee00()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        push edi
        mov esi, ecx
        call dword ptr ds : [public_5c60d0]
        test al, al
        mov edi, dword ptr ss : [esp+0x30]
        jne public_53ee40
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_53ee2f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_53ee2f
        mov eax, dword ptr ds : [eax+0xB4]
        jmp public_53ee34
        public_53ee2f : nop
        call public_54bb00
        public_53ee34 : nop
        cmp eax, dword ptr ds : [public_673344]
        jne public_53eec6
        public_53ee40 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_53ee56
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 7
        cmp dl, 7
        jne public_53ee56
        mov ecx, eax
        jmp public_53ee58
        public_53ee56 : nop
        xor ecx, ecx
        public_53ee58 : nop
        test eax, eax
        mov ecx, dword ptr ds : [ecx+0xE4]
        mov dword ptr ss : [esp+0xC], ecx
        je public_53ee71
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 7
        cmp dl, 7
        je public_53ee73
        public_53ee71 : nop
        xor eax, eax
        public_53ee73 : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], eax
        mov ax, word ptr ss : [esp+0x34]
        mov word ptr ss : [esp+0x14], ax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        lea eax, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xD4]
        public_53eec6 : nop
        pop edi
        pop esi
        add esp, 0x1C
        ret 0x10
        UNREACHABLE_TRAP(0x53ee00)
    }
}

#undef public_53ee2f
#undef public_53ee34
#undef public_53ee40
#undef public_53ee56
#undef public_53ee58
#undef public_53ee71
#undef public_53ee73
#undef public_53eec6
