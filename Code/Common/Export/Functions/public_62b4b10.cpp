#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b4b10);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62b4b30 _public_62b4b30
#define public_62b4b57 _public_62b4b57
#define public_62b4b64 _public_62b4b64
#define public_62b4b72 _public_62b4b72
#define public_62b4b97 _public_62b4b97
#define public_62b4b99 _public_62b4b99
#define public_62b4ba6 _public_62b4ba6
#define public_62b4bb4 _public_62b4bb4
#define public_62b4bd9 _public_62b4bd9
#define public_62b4be6 _public_62b4be6

PROC_DECLARE(0x62b4b10, internal_62b4b10, public_62b4b10);
extern "C" NAKED register_t __cdecl internal_62b4b10()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x1D4]
        mov eax, dword ptr ds : [edi+0x1D8]
        xor bl, bl
        cmp esi, eax
        je public_62b4b64
        lea esp, ss:[esp]
        public_62b4b30 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62b4b57
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62b4b57
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ss : [ebp]
        jne public_62b4b57
        cmp dword ptr ds : [esi], 0
        mov bl, 1
        je public_62b4b57
        push 0
        mov ecx, esi
        call public_6341610
        public_62b4b57 : nop
        mov eax, dword ptr ds : [edi+0x1D8]
        add esi, 8
        cmp esi, eax
        jne public_62b4b30
        public_62b4b64 : nop
        mov esi, dword ptr ds : [edi+0x1F8]
        cmp esi, dword ptr ds : [edi+0x1FC]
        je public_62b4ba6
        public_62b4b72 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62b4b99
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62b4b99
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ss : [ebp]
        jne public_62b4b99
        cmp dword ptr ds : [esi], 0
        je public_62b4b97
        push 0
        mov ecx, esi
        call public_6341610
        public_62b4b97 : nop
        mov bl, 1
        public_62b4b99 : nop
        mov eax, dword ptr ds : [edi+0x1FC]
        add esi, 8
        cmp esi, eax
        jne public_62b4b72
        public_62b4ba6 : nop
        mov esi, dword ptr ds : [edi+0x208]
        cmp esi, dword ptr ds : [edi+0x20C]
        je public_62b4be6
        public_62b4bb4 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62b4bd9
        add eax, 0xFFFFFF64
        test eax, eax
        je public_62b4bd9
        mov eax, dword ptr ds : [eax+0xB0]
        cmp eax, dword ptr ss : [ebp]
        jne public_62b4bd9
        push 0
        mov ecx, esi
        call public_6341610
        mov bl, 1
        public_62b4bd9 : nop
        mov eax, dword ptr ds : [edi+0x20C]
        add esi, 8
        cmp esi, eax
        jne public_62b4bb4
        public_62b4be6 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62b4b10)
    }
}

#undef public_62b4b30
#undef public_62b4b57
#undef public_62b4b64
#undef public_62b4b72
#undef public_62b4b97
#undef public_62b4b99
#undef public_62b4ba6
#undef public_62b4bb4
#undef public_62b4bd9
#undef public_62b4be6
