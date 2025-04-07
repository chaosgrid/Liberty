#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c9e0);

#define public_6ec7957 _public_6ec7957
#define public_6ec7967 _public_6ec7967
#define public_6ec796a _public_6ec796a
#define public_6ec796e _public_6ec796e
#define public_6ec7992 _public_6ec7992
#define public_6ec79ab _public_6ec79ab
#define public_6ec79b4 _public_6ec79b4
#define public_6ec79c7 _public_6ec79c7

PROC_DECLARE(0x6ec7920, internal_6ec7920, public_6ec7920);
extern "C" NAKED register_t __cdecl internal_6ec7920()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        sub esp, 0x10
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        je public_6ec79c7
        mov ebp, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+8]
        lea ebx, ds:[eax+0x1D0]
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ebx+8]
        cmp esi, edx
        mov edi, ecx
        mov al, 1
        je public_6ec796e
        public_6ec7957 : nop
        cmp ebp, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_6ec7967
        mov esi, dword ptr ds : [esi]
        jmp public_6ec796a
        public_6ec7967 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6ec796a : nop
        cmp esi, edx
        jne public_6ec7957
        public_6ec796e : nop
        mov dl, byte ptr ds : [ebx+0xC]
        test dl, dl
        je public_6ec7992
        lea edx, ss:[esp+0x18]
        push edx
        push edi
        push esi
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        call public_6f7c9e0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 
        public_6ec7992 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], edi
        je public_6ec79ab
        cmp edi, dword ptr ds : [ecx]
        je public_6ec79b4
        lea ecx, ss:[esp+0x10]
        call public_6f00610
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ec79ab : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [eax+0xC], ebp
        jae public_6ec79c7
        public_6ec79b4 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        lea edx, ss:[esp+0x1C]
        push esi
        push edx
        mov ecx, ebx
        call public_6f7c9e0
        public_6ec79c7 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ec7920)
    }
}

#undef public_6ec7957
#undef public_6ec7967
#undef public_6ec796a
#undef public_6ec796e
#undef public_6ec7992
#undef public_6ec79ab
#undef public_6ec79b4
#undef public_6ec79c7
