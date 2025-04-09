#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_428790);
CLANG_FORWARD_PROC_SYMBOL(public_428850);
CLANG_FORWARD_PROC_SYMBOL(public_429040);

#define public_4286c9 _public_4286c9
#define public_4286e5 _public_4286e5
#define public_4286ff _public_4286ff
#define public_428701 _public_428701
#define public_428738 _public_428738
#define public_42874a _public_42874a
#define public_42875d _public_42875d
#define public_428763 _public_428763
#define public_428779 _public_428779
#define public_428783 _public_428783

PROC_DECLARE(0x428680, internal_428680, public_428680);
extern "C" NAKED register_t __cdecl internal_428680()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        xor al, al
        test ebx, ebx
        je public_428783
        mov eax, dword ptr ds : [ebx]
        push esi
        push edi
        mov ecx, ebx
        call dword ptr ds : [eax+0x24]
        test al, al
        mov edi, dword ptr ss : [esp+0x14]
        jne public_4286e5
        test edi, edi
        je public_4286c9
        mov al, byte ptr ds : [edi+4]
        test al, 4
        jne public_4286e5
        test al, 2
        je public_4286c9
        mov ecx, offset public_667a34
        call dword ptr ds : [public_5c60c0]
        test eax, eax
        je public_4286ff
        mov ecx, eax
        call public_428790
        mov esi, eax
        jmp public_428701
        public_4286c9 : nop
        mov ecx, offset public_667a44
        call dword ptr ds : [public_5c60c0]
        test eax, eax
        je public_4286ff
        push 1
        mov ecx, eax
        call public_429040
        mov esi, eax
        jmp public_428701
        public_4286e5 : nop
        mov ecx, offset public_667a24
        call dword ptr ds : [public_5c60c0]
        test eax, eax
        je public_4286ff
        mov ecx, eax
        call public_428850
        mov esi, eax
        jmp public_428701
        public_4286ff : nop
        xor esi, esi
        public_428701 : nop
        test edi, edi
        je public_428738
        mov al, byte ptr ds : [edi+4]
        mov cl, byte ptr ds : [esi+0xC]
        shr al, 2
        xor al, cl
        and al, 2
        xor al, cl
        mov byte ptr ds : [esi+0xC], al
        mov cl, byte ptr ds : [edi+4]
        xor cl, al
        and cl, 1
        xor cl, al
        mov eax, dword ptr ds : [esi]
        mov byte ptr ds : [esi+0xC], cl
        mov edx, dword ptr ds : [edi+0x14]
        lea ecx, ds:[edi+8]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0x1C], edx
        call dword ptr ds : [eax+0x8C]
        public_428738 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x2C]
        fstp dword ptr ds : [esi+0x10]
        xor eax, eax
        test edi, edi
        je public_42874a
        mov eax, dword ptr ds : [edi]
        public_42874a : nop
        mov cl, byte ptr ss : [esp+0x1C]
        test cl, cl
        mov ecx, esi
        jne public_42875d
        mov edx, dword ptr ds : [esi]
        push eax
        push ebx
        call dword ptr ds : [edx+0x58]
        jmp public_428763
        public_42875d : nop
        mov eax, dword ptr ds : [esi]
        push ebx
        call dword ptr ds : [eax+0x5C]
        public_428763 : nop
        mov bl, al
        test bl, bl
        je public_428779
        mov edi, dword ptr ss : [esp+0x18]
        test edi, edi
        je public_428779
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi], esi
        public_428779 : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        pop edi
        mov al, bl
        pop esi
        public_428783 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x428680)
    }
}

#undef public_4286c9
#undef public_4286e5
#undef public_4286ff
#undef public_428701
#undef public_428738
#undef public_42874a
#undef public_42875d
#undef public_428763
#undef public_428779
#undef public_428783
