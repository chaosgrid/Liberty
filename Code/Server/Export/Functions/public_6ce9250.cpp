#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce9250);
CLANG_FORWARD_PROC_SYMBOL(public_6ceeb00);

#define public_6ce929f _public_6ce929f
#define public_6ce92a1 _public_6ce92a1
#define public_6ce92d2 _public_6ce92d2
#define public_6ce92fe _public_6ce92fe
#define public_6ce9300 _public_6ce9300
#define public_6ce9338 _public_6ce9338
#define public_6ce933e _public_6ce933e

PROC_DECLARE(0x6ce9250, internal_6ce9250, public_6ce9250);
extern "C" NAKED register_t __cdecl internal_6ce9250()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push ebx
        push edi
        mov esi, ecx
        call public_6ceeb00
        mov ecx, dword ptr ds : [public_6d6401c]
        xor eax, eax
        mov ax, word ptr ds : [edi+4]
        cmp ax, word ptr ds : [ecx]
        je public_6ce933e
        push eax
        call dword ptr ds : [public_6d64268]
        add esp, 4
        test al, al
        je public_6ce92d2
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ce929f
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_6ce92a1
        public_6ce929f : nop
        xor eax, eax
        public_6ce92a1 : nop
        xor ecx, ecx
        mov cx, word ptr ds : [edi+4]
        push ecx
        lea ecx, ds:[eax+0x144]
        call dword ptr ds : [public_6d64264]
        test eax, eax
        je public_6ce933e
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi]
        push ebx
        push ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x218]
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6ce92d2 : nop
        xor edx, edx
        mov dx, word ptr ds : [edi+4]
        push edx
        call dword ptr ds : [public_6d64260]
        add esp, 4
        test al, al
        je public_6ce933e
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ce92fe
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce9300
        public_6ce92fe : nop
        xor eax, eax
        public_6ce9300 : nop
        xor edx, edx
        mov dx, word ptr ds : [edi+4]
        lea ecx, ds:[eax+0xE4]
        push edx
        call dword ptr ds : [public_6d641c4]
        test eax, eax
        je public_6ce933e
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [esi]
        cmp ecx, 0x100
        mov ecx, dword ptr ds : [edi+8]
        push ebx
        push ecx
        mov ecx, esi
        push eax
        je public_6ce9338
        call dword ptr ds : [edx+0x210]
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6ce9338 : nop
        call dword ptr ds : [edx+0x214]
        public_6ce933e : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ce9250)
    }
}

#undef public_6ce929f
#undef public_6ce92a1
#undef public_6ce92d2
#undef public_6ce92fe
#undef public_6ce9300
#undef public_6ce9338
#undef public_6ce933e
