#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628fd80);
CLANG_FORWARD_PROC_SYMBOL(public_6319090);

#define public_628c5e4 _public_628c5e4
#define public_628c5f4 _public_628c5f4
#define public_628c5f7 _public_628c5f7
#define public_628c5fb _public_628c5fb
#define public_628c61f _public_628c61f
#define public_628c638 _public_628c638
#define public_628c641 _public_628c641
#define public_628c654 _public_628c654

PROC_DECLARE(0x628c5b0, internal_628c5b0, public_628c5b0);
extern "C" NAKED register_t __cdecl internal_628c5b0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+4]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [edx+0xA4]
        test ebp, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x1C], ebp
        je public_628c654
        mov edx, dword ptr ds : [ecx+0x34]
        lea ebx, ds:[ecx+0x2C]
        mov ecx, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, edx
        mov edi, ecx
        mov al, 1
        je public_628c5fb
        public_628c5e4 : nop
        cmp ebp, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_628c5f4
        mov esi, dword ptr ds : [esi]
        jmp public_628c5f7
        public_628c5f4 : nop
        mov esi, dword ptr ds : [esi+8]
        public_628c5f7 : nop
        cmp esi, edx
        jne public_628c5e4
        public_628c5fb : nop
        mov dl, byte ptr ds : [ebx+0xC]
        test dl, dl
        je public_628c61f
        lea eax, ss:[esp+0x1C]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebx
        call public_628fd80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_628c61f : nop
        test al, al
        mov dword ptr ss : [esp+0x10], edi
        je public_628c638
        cmp edi, dword ptr ds : [ecx]
        je public_628c641
        lea ecx, ss:[esp+0x10]
        call public_6319090
        mov ebp, dword ptr ss : [esp+0x1C]
        public_628c638 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [ecx+0xC], ebp
        jae public_628c654
        public_628c641 : nop
        lea edx, ss:[esp+0x1C]
        push edx
        push edi
        lea eax, ss:[esp+0x1C]
        push esi
        push eax
        mov ecx, ebx
        call public_628fd80
        public_628c654 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x628c5b0)
    }
}

#undef public_628c5e4
#undef public_628c5f4
#undef public_628c5f7
#undef public_628c5fb
#undef public_628c61f
#undef public_628c638
#undef public_628c641
#undef public_628c654
