#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac110);
CLANG_FORWARD_PROC_SYMBOL(public_6eac240);
CLANG_FORWARD_PROC_SYMBOL(public_6eb9af0);
CLANG_FORWARD_PROC_SYMBOL(public_6eba350);
CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6eba366 _public_6eba366
#define public_6eba3f4 _public_6eba3f4
#define public_6eba403 _public_6eba403

PROC_DECLARE(0x6eba350, internal_6eba350, public_6eba350);
extern "C" NAKED register_t __cdecl internal_6eba350()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x2F4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eba403
        push ebp
        public_6eba366 : nop
        mov al, byte ptr ds : [esi+0x94]
        test al, al
        jne public_6eba3f4
        mov al, byte ptr ds : [esi+0x95]
        test al, al
        jne public_6eba3f4
        lea ebp, ds:[edi+0xC]
        push ebp
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6eba3f4
        mov eax, dword ptr ds : [esi+0x90]
        test eax, eax
        je public_6eba3f4
        mov ecx, dword ptr ds : [edi+8]
        call public_6f47980
        test eax, eax
        je public_6eba3f4
        lea ecx, ds:[edi+0x308]
        push ecx
        mov ecx, eax
        call public_6eac110
        test eax, eax
        je public_6eba3f4
        mov edx, dword ptr ds : [esi+0x90]
        mov ecx, dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ss : [ebp]
        push edx
        push ecx
        mov ecx, eax
        call public_6eac240
        test al, al
        je public_6eba3f4
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x14]
        cmp ecx, dword ptr ds : [edx]
        jne public_6eba3f4
        push 0xFFFFFFFF
        lea ecx, ds:[eax+8]
        call public_6ea7ce0
        mov byte ptr ds : [esi+0x94], 1
        public_6eba3f4 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x2F4]
        jne public_6eba366
        pop ebp
        public_6eba403 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], 0x1B
        call public_6eb9af0
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6eba350)
    }
}

#undef public_6eba366
#undef public_6eba3f4
#undef public_6eba403
