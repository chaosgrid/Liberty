#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3e690);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3e6b6 _public_6b3e6b6
#define public_6b3e6da _public_6b3e6da
#define public_6b3e6e0 _public_6b3e6e0
#define public_6b3e707 _public_6b3e707
#define public_6b3e710 _public_6b3e710
#define public_6b3e725 _public_6b3e725
#define public_6b3e748 _public_6b3e748
#define public_6b3e759 _public_6b3e759

PROC_DECLARE(0x6b3e690, internal_6b3e690, public_6b3e690);
extern "C" NAKED register_t __cdecl internal_6b3e690()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        lea ebp, ds:[ecx+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ebp, ecx
        push esi
        push edi
        je public_6b3e759
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b3e6da
        public_6b3e6b6 : nop
        cmp ebx, dword ptr ss : [esp+0x10]
        je public_6b3e6da
        lea ecx, ds:[ebx+8]
        mov edi, dword ptr ds : [ecx]
        lea edx, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov ebx, dword ptr ds : [ebx]
        jne public_6b3e6b6
        public_6b3e6da : nop
        cmp eax, esi
        mov edi, eax
        je public_6b3e707
        public_6b3e6e0 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6b6a092
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6b3e6e0
        public_6b3e707 : nop
        cmp ebx, dword ptr ss : [esp+0x10]
        je public_6b3e759
        lea ecx, ds:[ecx]
        public_6b3e710 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        call public_6b6a134
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6b3e725
        mov edi, eax
        public_6b3e725 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6b3e748
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax+8], ecx
        public_6b3e748 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6b3e710
        public_6b3e759 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ds : [eax+0xC]
        mov byte ptr ss : [ebp+0xC], dl
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [ebp+0x10], ecx
        mov edx, dword ptr ds : [eax+0x14]
        pop edi
        mov dword ptr ss : [ebp+0x14], edx
        mov eax, dword ptr ds : [eax+0x18]
        pop esi
        mov dword ptr ss : [ebp+0x18], eax
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6b3e690)
    }
}

#undef public_6b3e6b6
#undef public_6b3e6da
#undef public_6b3e6e0
#undef public_6b3e707
#undef public_6b3e710
#undef public_6b3e725
#undef public_6b3e748
#undef public_6b3e759
