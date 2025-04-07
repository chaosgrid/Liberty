#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628fa40);
CLANG_FORWARD_PROC_SYMBOL(public_62ad540);
CLANG_FORWARD_PROC_SYMBOL(public_6344fb0);

#define public_628c555 _public_628c555
#define public_628c57a _public_628c57a
#define public_628c59c _public_628c59c

PROC_DECLARE(0x628c410, internal_628c410, public_628c410);
extern "C" NAKED register_t __cdecl internal_628c410()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        fld dword ptr ds : [edx]
        sub esp, 0x40
        fcomp qword ptr ds : [public_63eb338]
        push esi
        fnstsw ax
        test ah, 0x41
        jne public_628c59c
        mov eax, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [eax+0x30]
        mov edx, dword ptr ds : [edx+0xA4]
        test edx, edx
        mov dword ptr ss : [esp+0x10], edx
        mov esi, dword ptr ds : [eax+0x34]
        mov esi, dword ptr ds : [esi+0xA4]
        mov dword ptr ss : [esp+0x14], esi
        je public_628c57a
        test esi, esi
        je public_628c555
        mov esi, dword ptr ds : [eax+0x38]
        push edi
        mov edx, esi
        mov esi, dword ptr ds : [esi]
        and edx, 0xFFFFFFF0
        mov edi, dword ptr ds : [edx]
        and edi, 0xFFF
        inc edi
        shl edi, 4
        sub edx, edi
        mov edi, dword ptr ds : [edx]
        and esi, 0xFFFF
        shl esi, 4
        add esi, edi
        mov edx, dword ptr ds : [esi+edx+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        mov esi, dword ptr ds : [eax+0x3C]
        mov edx, esi
        mov esi, dword ptr ds : [esi]
        and edx, 0xFFFFFFF0
        mov edi, dword ptr ds : [edx]
        and edi, 0xFFF
        inc edi
        shl edi, 4
        sub edx, edi
        mov edi, dword ptr ds : [edx]
        and esi, 0xFFFF
        shl esi, 4
        add esi, edi
        mov edx, dword ptr ds : [esi+edx+0xC]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ds : [eax+0x24]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [eax+0x28]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x40], eax
        lea eax, ss:[esp+0x14]
        push eax
        add ecx, 0x18
        mov dword ptr ss : [esp+0x48], edx
        mov edx, dword ptr ds : [ecx+8]
        push 1
        push edx
        call public_628fa40
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        pop edi
        public_628c555 : nop
        test edx, edx
        je public_628c57a
        mov eax, dword ptr ds : [edx+0x4C]
        and eax, 7
        cmp al, 7
        jne public_628c57a
        mov ecx, dword ptr ds : [edx+0x54]
        call public_6344fb0
        mov ecx, dword ptr ss : [esp+0x10]
        push 0
        call public_62ad540
        mov esi, dword ptr ss : [esp+0x14]
        public_628c57a : nop
        test esi, esi
        je public_628c59c
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 7
        cmp cl, 7
        jne public_628c59c
        mov ecx, dword ptr ds : [esi+0x54]
        call public_6344fb0
        mov ecx, dword ptr ss : [esp+0x14]
        push 0
        call public_62ad540
        public_628c59c : nop
        pop esi
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x628c410)
    }
}

#undef public_628c555
#undef public_628c57a
#undef public_628c59c
