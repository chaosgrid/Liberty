#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410850);
CLANG_FORWARD_PROC_SYMBOL(public_42d660);

#define public_410907 _public_410907
#define public_41094a _public_41094a

PROC_DECLARE(0x410850, internal_410850, public_410850);
extern "C" NAKED register_t __cdecl internal_410850()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov edi, ecx
        lea ecx, ds:[edi+0xA4]
        mov ebx, dword ptr ds : [ecx]
        mov edx, esi
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [edi+0xC0]
        xor al, al
        test ecx, ecx
        je public_410907
        fld dword ptr ds : [edi+0xC4]
        mov byte ptr ss : [esp+0xC], al
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], 0
        call public_42d660
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edi+0xC0]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, eax
        shr ecx, 0x10
        movzx ecx, cl
        mov dword ptr ss : [esp+0x20], ecx
        mov edx, eax
        shr edx, 8
        fild dword ptr ss : [esp+0x20]
        movzx edx, dl
        fmul qword ptr ds : [public_5c89c8]
        mov dword ptr ss : [esp+0x20], edx
        movzx eax, al
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fild dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x20], eax
        mov al, 1
        fmul qword ptr ds : [public_5c89c8]
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fild dword ptr ss : [esp+0x20]
        fmul qword ptr ds : [public_5c89c8]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        public_410907 : nop
        mov ecx, dword ptr ds : [edi+0xBC]
        test ecx, ecx
        je public_41094a
        fld dword ptr ds : [edi+0x58]
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x18]
        mov byte ptr ss : [esp+0x10], 1
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x18]
        fld st(0)
        fmul dword ptr ds : [esi]
        mov al, 1
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        public_41094a : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x410850)
    }
}

#undef public_410907
#undef public_41094a
