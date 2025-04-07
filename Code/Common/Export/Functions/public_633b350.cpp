#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);

#define public_633b388 _public_633b388
#define public_633b3da _public_633b3da
#define public_633b44a _public_633b44a
#define public_633b44e _public_633b44e
#define public_633b450 _public_633b450
#define public_633b481 _public_633b481
#define public_633b483 _public_633b483
#define public_633b49f _public_633b49f

PROC_DECLARE(0x633b350, internal_633b350, public_633b350);
extern "C" NAKED register_t __cdecl internal_633b350()
{
    __asm
    {
        mov eax, 0x2024
        call public_6391dc0
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x8C]
        test eax, eax
        push esi
        push edi
        jne public_633b3da
/*FIXUP push offset public_63a4948 @0x633b369*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4948
        call public_632e9f0
        mov dword ptr ds : [ebx+0x8C], eax
        mov eax, dword ptr ds : [ebx+0x84]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, eax
        je public_633b3da
        public_633b388 : nop
        mov esi, dword ptr ds : [edi+0xC10]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x8C]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x24], edx
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        mov dword ptr ss : [esp+0x18], esi
        call dword ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0x84]
        jne public_633b388
        public_633b3da : nop
        mov ecx, dword ptr ds : [ebx+0x8C]
        xor esi, esi
        test ecx, ecx
        mov dword ptr ss : [esp+0xC], esi
        je public_633b49f
        mov eax, dword ptr ss : [esp+0x2034]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x28]
        push eax
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x2C], 0x800
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        mov dword ptr ss : [esp+0x28], 0x3DCCCCCD
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jbe public_633b49f
        mov eax, dword ptr ss : [esp+0x2C]
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0x60AD78EC
        jbe public_633b49f
        cmp edi, eax
        lea ebx, ss:[esp+0x30]
        jae public_633b44e
        public_633b44a : nop
        mov esi, dword ptr ds : [ebx]
        jmp public_633b450
        public_633b44e : nop
        xor esi, esi
        public_633b450 : nop
        mov eax, dword ptr ss : [esp+0x2034]
        mov edx, dword ptr ds : [esi]
        push 0
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        test al, al
        je public_633b483
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x30]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_633b481
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xC], esi
        jmp public_633b483
        public_633b481 : nop
        fstp st(0)
        public_633b483 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        inc edi
        add ebx, 4
        cmp edi, eax
        jb public_633b44a
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        pop ebx
        add esp, 0x2024
        ret 4
        public_633b49f : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x2024
        ret 4
        UNREACHABLE_TRAP(0x633b350)
    }
}

#undef public_633b388
#undef public_633b3da
#undef public_633b44a
#undef public_633b44e
#undef public_633b450
#undef public_633b481
#undef public_633b483
#undef public_633b49f
