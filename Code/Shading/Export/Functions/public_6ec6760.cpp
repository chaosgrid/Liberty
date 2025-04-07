#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec03c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0540);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec6780 _public_6ec6780
#define public_6ec67a4 _public_6ec67a4
#define public_6ec67a8 _public_6ec67a8
#define public_6ec67ad _public_6ec67ad
#define public_6ec680a _public_6ec680a
#define public_6ec6825 _public_6ec6825
#define public_6ec6845 _public_6ec6845
#define public_6ec684c _public_6ec684c
#define public_6ec685f _public_6ec685f
#define public_6ec6870 _public_6ec6870

PROC_DECLARE(0x6ec6760, internal_6ec6760, public_6ec6760);
extern "C" NAKED register_t __cdecl internal_6ec6760()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        xor edi, edi
        cmp eax, 0x14
        jne public_6ec685f
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        push ebx
        public_6ec6780 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ec67a8
        test cl, cl
        je public_6ec67a4
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ec67a8
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ec6780
        public_6ec67a4 : nop
        xor eax, eax
        jmp public_6ec67ad
        public_6ec67a8 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec67ad : nop
        test eax, eax
        pop ebx
        jne public_6ec685f
        push 0xA4
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ec684c
        mov ecx, esi
        call public_6ec03c0
        lea eax, ds:[esi+0x98]
        mov dword ptr ds : [eax], offset public_6ed2ac8
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6ed2a10
        mov dword ptr ds : [esi+4], offset public_6ed29fc
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov dword ptr ds : [esi+0x94], ecx
        jne public_6ec6845
        mov dword ptr ds : [esi+0x94], eax
        public_6ec680a : nop
        push ebp
        mov ecx, esi
        call public_6ec0bc0
        mov edi, eax
        test edi, edi
        je public_6ec6870
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6ec6825
        mov dword ptr ds : [eax], 0
        public_6ec6825 : nop
        mov ecx, esi
        call public_6ec0540
        push esi
        call public_6ed0c50
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6ec6845 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6ec680a
        public_6ec684c : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        xor ecx, ecx
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_6ec685f : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        public_6ec6870 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ec6760)
    }
}

#undef public_6ec6780
#undef public_6ec67a4
#undef public_6ec67a8
#undef public_6ec67ad
#undef public_6ec680a
#undef public_6ec6825
#undef public_6ec6845
#undef public_6ec684c
#undef public_6ec685f
#undef public_6ec6870
