#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a2250);

#define public_62a1495 _public_62a1495
#define public_62a149d _public_62a149d
#define public_62a14c1 _public_62a14c1
#define public_62a14cc _public_62a14cc

PROC_DECLARE(0x62a1460, internal_62a1460, public_62a1460);
extern "C" NAKED register_t __cdecl internal_62a1460()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+4]
        push eax
        mov ecx, esi
        xor bl, bl
        call public_62a2250
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_62a1495
        mov cx, word ptr ss : [esp+0x18]
        cmp cx, word ptr ds : [eax+0xC]
        jb public_62a1495
        lea eax, ss:[esp+0xC]
        jmp public_62a149d
        public_62a1495 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_62a149d : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+8]
        je public_62a14cc
        mov cl, byte ptr ss : [esp+0x1C]
        test cl, cl
        je public_62a14c1
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [edx+0x14]
        pop edi
        cmp eax, 3
        pop esi
        sete al
        pop ebx
        add esp, 8
        ret 8
        public_62a14c1 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_62a14cc : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x62a1460)
    }
}

#undef public_62a1495
#undef public_62a149d
#undef public_62a14c1
#undef public_62a14cc
