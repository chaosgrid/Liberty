#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0360);
CLANG_FORWARD_PROC_SYMBOL(public_62a07a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62a03a4 _public_62a03a4
#define public_62a03cb _public_62a03cb
#define public_62a03f2 _public_62a03f2

PROC_DECLARE(0x62a0360, internal_62a0360, public_62a0360);
extern "C" NAKED register_t __cdecl internal_62a0360()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        push esi
        mov esi, ecx
        xor ecx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ds : [esi+0x14]
        xor al, al
        cmp ecx, 3
        je public_62a03f2
        mov ebp, dword ptr ds : [esi+8]
        cmp ebp, 0xFFFFFFFF
        je public_62a03f2
        mov al, byte ptr ds : [esi+0x20]
        test al, al
        push ebx
        mov bl, 1
        jne public_62a03a4
        lea eax, ds:[esi+0x28]
        push eax
        lea ecx, ds:[esi+0x24]
        push ecx
        mov ecx, esi
        mov byte ptr ds : [esi+0x20], bl
        call public_62a07a0
        public_62a03a4 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov ebp, eax
        mov eax, dword ptr ds : [public_63fc26c]
        test eax, eax
        jne public_62a03cb
        call public_6391cf0
        mov dword ptr ds : [public_63fc26c], eax
        public_62a03cb : nop
        mov edx, dword ptr ds : [eax]
        add esi, 0x28
        push esi
        push ebp
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edi+4], eax
        mov al, bl
        mov dword ptr ds : [edi+8], ecx
        pop ebx
        public_62a03f2 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62a0360)
    }
}

#undef public_62a03a4
#undef public_62a03cb
#undef public_62a03f2
