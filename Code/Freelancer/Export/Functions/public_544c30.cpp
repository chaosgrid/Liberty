#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_544c30);

#define public_544c57 _public_544c57
#define public_544c59 _public_544c59
#define public_544ccf _public_544ccf
#define public_544cef _public_544cef
#define public_544cf7 _public_544cf7

PROC_DECLARE(0x544c30, internal_544c30, public_544c30);
extern "C" NAKED register_t __cdecl internal_544c30()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        test ebx, ebx
        push esi
        je public_544c57
        lea eax, ds:[ebx+0xC]
        test eax, eax
        je public_544c57
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_544c57
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_544c59
        public_544c57 : nop
        xor eax, eax
        public_544c59 : nop
        push 0x100000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        mov esi, eax
        test esi, esi
        je public_544cf7
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_544ccf
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_544ccf
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_544cef
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        jne public_544cef
        mov eax, dword ptr ds : [ebx+4]
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        lea ecx, ds:[ebx+4]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [public_673344]
        push edx
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [eax+0x40]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_544ccf : nop
        mov edx, dword ptr ds : [ebx+4]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        lea ecx, ds:[ebx+4]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_673344]
        push eax
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+0x4C]
        public_544cef : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_544cf7 : nop
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x544c30)
    }
}

#undef public_544c57
#undef public_544c59
#undef public_544ccf
#undef public_544cef
#undef public_544cf7
