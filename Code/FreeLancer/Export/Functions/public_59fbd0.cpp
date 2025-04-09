#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);

#define public_59fbfd _public_59fbfd
#define public_59fc07 _public_59fc07
#define public_59fc33 _public_59fc33
#define public_59fcf8 _public_59fcf8
#define public_59fd02 _public_59fd02

PROC_DECLARE(0x59fbd0, internal_59fbd0, public_59fbd0);
extern "C" NAKED register_t __cdecl internal_59fbd0()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0x84], 0xFFFFFFFF
        push edi
        mov edi, dword ptr ss : [esp+0x48]
        je public_59fbfd
        lea eax, ds:[esi+0xD0]
        push edi
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_59fd02
        public_59fbfd : nop
        lea edx, ds:[esi+0xD0]
        mov eax, edi
        sub edx, edi
        public_59fc07 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_59fc07
        push ebx
        lea ebx, ds:[esi+0x80]
        mov ecx, ebx
        call public_59eee0
        cmp byte ptr ds : [edi], 0
        je public_59fc33
        mov ecx, dword ptr ss : [esp+0x50]
        push 0
        push ecx
        push edi
        mov ecx, ebx
        call public_59ec80
        public_59fc33 : nop
        mov ecx, dword ptr ds : [esi+0x84]
        cmp ecx, 0xFFFFFFFF
        pop ebx
        je public_59fcf8
        fld dword ptr ds : [esi+0xA8]
        lea edi, ss:[esp+0x14]
        fadd dword ptr ds : [esi+0x60]
        push edi
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0xAC]
        mov edx, dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0x64]
        mov dword ptr ss : [esp+0x3C], edx
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0xB0]
        mov eax, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+0x68]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x30], 0
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x44], edx
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_59fcf8 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x8C]
        public_59fd02 : nop
        pop edi
        pop esi
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x59fbd0)
    }
}

#undef public_59fbfd
#undef public_59fc07
#undef public_59fc33
#undef public_59fcf8
#undef public_59fd02
