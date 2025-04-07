#include "zlib-PCH.h"


#define public_10009252 _public_10009252
#define public_10009264 _public_10009264
#define public_1000927c _public_1000927c
#define public_10009286 _public_10009286
#define public_100092a2 _public_100092a2
#define public_100092b1 _public_100092b1

PROC_DECLARE(0x10009240, internal_10009240, public_10009240);
extern "C" NAKED register_t __cdecl internal_10009240()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_10009252
        mov eax, 0xFFFFFF9A
        pop esi
        ret 0xC
        public_10009252 : nop
        mov eax, dword ptr ds : [esi+0x28]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        cmp ebp, eax
        push edi
        mov edi, ebp
        jbe public_10009264
        mov edi, eax
        public_10009264 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x1C]
        push 0
        add eax, 0x16
        push eax
        push ecx
        push edx
        call dword ptr ds : [esi+0x10]
        test eax, eax
        je public_10009286
        public_1000927c : nop
        pop edi
        pop ebp
        pop ebx
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        public_10009286 : nop
        test edi, edi
        mov ebx, dword ptr ss : [esp+0x18]
        jbe public_100092a2
        push edi
        mov byte ptr ds : [ebx], 0
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x1C]
        push ebx
        push eax
        push ecx
        call dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_1000927c
        public_100092a2 : nop
        test ebx, ebx
        je public_100092b1
        mov esi, dword ptr ds : [esi+0x28]
        cmp ebp, esi
        jbe public_100092b1
        mov byte ptr ds : [esi+ebx], 0
        public_100092b1 : nop
        mov eax, edi
        pop edi
        pop ebp
        pop ebx
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x10009240)
    }
}

#undef public_10009252
#undef public_10009264
#undef public_1000927c
#undef public_10009286
#undef public_100092a2
#undef public_100092b1
