#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4efc0);

#define public_6d4efeb _public_6d4efeb
#define public_6d4f02b _public_6d4f02b
#define public_6d4f030 _public_6d4f030
#define public_6d4f03e _public_6d4f03e
#define public_6d4f0d4 _public_6d4f0d4

PROC_DECLARE(0x6d4efc0, internal_6d4efc0, public_6d4efc0);
extern "C" NAKED register_t __cdecl internal_6d4efc0()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d4efeb
        mov dl, byte ptr ds : [esi+0x64]
        test dl, dl
        setne al
        test al, al
        jne public_6d4efeb
        mov eax, dword ptr ds : [public_6d6402c]
        mov ax, word ptr ds : [eax]
        pop esi
        add esp, 0x20
        ret 0x1C
        public_6d4efeb : nop
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        push edi
        push ebp
        call dword ptr ds : [public_6d64418]
        mov bl, byte ptr ss : [esp+0x4C]
        add esp, 4
        test al, al
        je public_6d4f02b
        test bl, bl
        jne public_6d4f02b
        push 0x3F800000
        push 0
        push ebp
        lea ecx, ds:[esi+0x278]
        mov byte ptr ss : [esp+0x54], 1
        call dword ptr ds : [public_6d64404]
        test eax, eax
        je public_6d4f030
        mov di, word ptr ds : [eax+2]
        jmp public_6d4f03e
        public_6d4f02b : nop
        mov byte ptr ss : [esp+0x48], 0
        public_6d4f030 : nop
        lea ecx, ds:[esi+0x3C8]
        call dword ptr ds : [public_6d645bc]
        mov edi, eax
        public_6d4f03e : nop
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_6d64248]
        push ebp
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d6470c]
        push edi
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64710]
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64258]
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d645ac]
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64708]
        mov ecx, dword ptr ss : [esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64704]
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[esi+0x278]
        mov byte ptr ss : [esp+0x30], bl
        call dword ptr ds : [public_6d64414]
        mov cl, byte ptr ss : [esp+0x4C]
        test cl, cl
        je public_6d4f0d4
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea ebx, ss:[esp+0x10]
        push ebx
        push eax
        mov eax, dword ptr ds : [esi+0x348]
        push eax
        call dword ptr ds : [edx+0x68]
        public_6d4f0d4 : nop
        add esi, 0x348
        push esi
        push 0
        call public_6d43650
        add esp, 8
        mov ax, di
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 0x20
        ret 0x1C
        UNREACHABLE_TRAP(0x6d4efc0)
    }
}

#undef public_6d4efeb
#undef public_6d4f02b
#undef public_6d4f030
#undef public_6d4f03e
#undef public_6d4f0d4
