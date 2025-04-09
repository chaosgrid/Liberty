#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410ef0);
CLANG_FORWARD_PROC_SYMBOL(public_410fe0);
CLANG_FORWARD_PROC_SYMBOL(public_537860);
CLANG_FORWARD_PROC_SYMBOL(public_5386d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_5378a6 _public_5378a6
#define public_5378d8 _public_5378d8
#define public_537933 _public_537933
#define public_537951 _public_537951

PROC_DECLARE(0x537860, internal_537860, public_537860);
extern "C" NAKED register_t __cdecl internal_537860()
{
    __asm
    {
        sub esp, 0x78
        push ebx
        mov ebx, ecx
        test byte ptr ds : [ebx+0xB4], 8
        je public_537951
        mov ecx, dword ptr ds : [ebx+0xEC]
        cmp ecx, 0xFFFFFFFF
        je public_5378d8
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_6789c0]
        test eax, eax
        jne public_5378a6
        call public_5b73e0
        mov dword ptr ds : [public_6789c0], eax
        public_5378a6 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0xF0]
        push edx
        push esi
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov ecx, 0xC
        lea esi, ss:[esp+0x24]
        lea edi, ss:[esp+0x54]
        lea eax, ss:[esp+0x54]
        rep movsd
        push eax
        mov ecx, ebx
        call public_410fe0
        pop edi
        pop esi
        jmp public_537933
        public_5378d8 : nop
        fld dword ptr ss : [esp+0x80]
        lea ecx, ss:[esp+4]
        fmul dword ptr ds : [ebx+0x120]
        push ecx
        fld dword ptr ss : [esp+0x84]
        mov ecx, ebx
        fmul dword ptr ds : [ebx+0x124]
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ds : [ebx+0x128]
        fstp dword ptr ss : [esp+0x1C]
        fxch 
        fadd dword ptr ds : [ebx+0x98]
        fstp dword ptr ss : [esp+8]
        fadd dword ptr ds : [ebx+0x9C]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [ebx+0xA0]
        fstp dword ptr ss : [esp+0x10]
        call public_410ef0
        public_537933 : nop
        mov eax, dword ptr ds : [ebx+0xD4]
        test eax, eax
        lea ecx, ds:[ebx+0xD4]
        je public_537951
        mov edx, dword ptr ss : [esp+0x80]
        push ebx
        push edx
        call public_5386d0
        public_537951 : nop
        pop ebx
        add esp, 0x78
        ret 4
        UNREACHABLE_TRAP(0x537860)
    }
}

#undef public_5378a6
#undef public_5378d8
#undef public_537933
#undef public_537951
